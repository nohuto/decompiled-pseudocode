/*
 * XREFs of IntersectFindDataRange @ 0x14003A9AC
 * Callers:
 *     PinDataFormatIntersection @ 0x14003A8F0 (PinDataFormatIntersection.c)
 * Callees:
 *     IntersectFindBestMatch @ 0x140030E54 (IntersectFindBestMatch.c)
 *     IntersectRangeCompare @ 0x14003E30C (IntersectRangeCompare.c)
 */

__int64 __fastcall IntersectFindDataRange(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 BestMatch; // rbx
  __int64 v7; // rdi
  __int64 *Pool2; // r14
  __int64 v9; // rbp
  unsigned int *i; // r10
  __int64 v11; // r11
  unsigned int *v12; // r8
  unsigned int v13; // edx
  char v14; // al
  unsigned int j; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // r8d

  BestMatch = 0LL;
  v7 = 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 8LL * a3, 1096972357LL);
  if ( Pool2 )
  {
    v9 = 0LL;
    for ( i = a1 + 20;
          (unsigned int)v9 < a3;
          v9 = ((*(_DWORD *)(*(_QWORD *)(a2 + 8 * v9) + 4LL) & 2) != 0) + 1 + (unsigned int)v9 )
    {
      v11 = *(_QWORD *)(a2 + 8 * v9);
      v12 = *(unsigned int **)(v11 + 120);
      v13 = *(_DWORD *)(v11 + 108);
      if ( *a1 >= 0x58u && a1[16] >= *(_DWORD *)(v11 + 64) )
      {
        if ( v13 )
        {
          v14 = 0;
          for ( j = 0; j < v13; ++j )
          {
            if ( v14 )
              break;
            v14 = a1[19] <= *v12 && *i >= *v12;
            ++v12;
          }
        }
        else
        {
          v14 = IntersectRangeCompare(
                  (unsigned int)a1[19],
                  *i,
                  *(unsigned int *)(v11 + 76),
                  *(unsigned int *)(v11 + 80));
        }
        if ( v14 == 1 )
        {
          v22 = a1[18];
          v14 = 0;
          v23 = a1[17];
          if ( v23 <= v22 )
          {
            v24 = *(_DWORD *)(v11 + 68);
            v25 = *(_DWORD *)(v11 + 72);
            if ( v24 <= v25 )
            {
              if ( v23 < v24 )
                v14 = v22 >= v24;
              else
                v14 = v23 <= v25;
            }
          }
        }
        if ( v14 )
        {
          Pool2[v7] = v11;
          v7 = (unsigned int)(v7 + 1);
        }
      }
    }
    if ( *a1 < 0x58u )
      v16 = -1;
    else
      v16 = *i;
    if ( (_DWORD)v7 == 1 )
    {
      BestMatch = *Pool2;
      v17 = *(_DWORD *)(*Pool2 + 108);
      if ( v17 )
      {
        v18 = *(unsigned int **)(BestMatch + 120);
        v19 = v17;
        *(_DWORD *)(BestMatch + 100) = 0;
        do
        {
          v20 = *v18;
          if ( *v18 <= v16 && v20 > *(_DWORD *)(BestMatch + 100) )
            *(_DWORD *)(BestMatch + 100) = v20;
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        if ( *(_DWORD *)(BestMatch + 80) < v16 )
          v16 = *(_DWORD *)(BestMatch + 80);
        *(_DWORD *)(BestMatch + 100) = v16;
      }
    }
    else if ( (unsigned int)v7 > 1 )
    {
      BestMatch = IntersectFindBestMatch(Pool2, v7, v16);
    }
    ExFreePool(Pool2);
  }
  return BestMatch;
}
