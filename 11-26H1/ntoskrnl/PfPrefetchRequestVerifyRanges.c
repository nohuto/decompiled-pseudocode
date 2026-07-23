/*
 * XREFs of PfPrefetchRequestVerifyRanges @ 0x14097FC10
 * Callers:
 *     PfPrefetchRequestVerify @ 0x14097F868 (PfPrefetchRequestVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfPrefetchRequestVerifyRanges(__int64 a1, _DWORD *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  unsigned int v8; // r9d
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // r9
  unsigned int v13; // r11d
  unsigned __int64 v14; // rax
  unsigned int i; // edx
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx

  v4 = *a3;
  v6 = a3[2];
  if ( *a3 )
  {
    if ( (_DWORD)v6 )
    {
      if ( v4 > a2[8] )
      {
        return 22000LL;
      }
      else
      {
        v8 = a2[6];
        v9 = 16 * v4;
        if ( (unsigned int)v6 >= v8 )
        {
          v10 = a2[7];
          if ( (unsigned int)v6 < v10 || !v9 )
          {
            v11 = v6 + v9;
            if ( v11 >= v8 && v11 <= v10 && (v11 & 7) == 0 )
            {
              v12 = a1 + v6;
              v13 = 0;
              v14 = 0LL;
              for ( i = 0; i < v4; ++i )
              {
                v16 = *(_QWORD *)(v12 + 16LL * i);
                if ( v16 < v14 )
                  return 24000LL;
                if ( ((a4 - 1) & (unsigned int)v16) != 0 )
                  return 24500LL;
                v17 = *(_DWORD *)(v12 + 16LL * i + 8);
                v14 = v16 + v17;
                if ( v14 < v16 )
                  return 24750LL;
                if ( !v17 )
                  return 25000LL;
                if ( v13 + (v17 >> 12) + 2 < v13 )
                  return 26000LL;
                v13 += (v17 >> 12) + 2;
              }
              return 0LL;
            }
          }
        }
        return 23000LL;
      }
    }
    else
    {
      return 21000LL;
    }
  }
  else
  {
    if ( !(_DWORD)v6 )
      return 0LL;
    return 20000LL;
  }
}
