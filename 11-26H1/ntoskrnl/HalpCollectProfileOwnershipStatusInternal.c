/*
 * XREFs of HalpCollectProfileOwnershipStatusInternal @ 0x1405824A8
 * Callers:
 *     HalpCollectProfileOwnershipStatus @ 0x140582368 (HalpCollectProfileOwnershipStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCollectProfileOwnershipStatusInternal(int a1, __int64 a2, char a3, int a4)
{
  __int64 result; // rax
  unsigned int *v7; // r9
  unsigned int v8; // edx
  unsigned int *v9; // r8
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int i; // edi
  __int64 *v14; // r11
  __int64 v15; // rbp
  int v16; // r9d
  __int64 j; // r10
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r10d
  int v21; // r10d

  result = KiProcessorBlock[a4];
  v7 = *(unsigned int **)(result + 88);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v9 = v7 + 6;
        v8 = 0;
        break;
      case 100:
        v9 = v7 + 12;
        goto LABEL_13;
      case 101:
        v9 = v7 + 18;
LABEL_10:
        if ( v7 != (unsigned int *)-48LL )
        {
          v8 = v7[13];
          goto LABEL_14;
        }
LABEL_13:
        v8 = 0;
        goto LABEL_14;
      default:
        v8 = 0;
        v9 = 0LL;
        v10 = a1 - 1;
        if ( v10 )
        {
          v11 = v10 - 99;
          if ( !v11 )
          {
LABEL_14:
            v12 = (_DWORD)v7 + 24;
            if ( v7 != (unsigned int *)-24LL )
              v12 = v7[7];
            v8 += v12;
            break;
          }
          if ( v11 != 1 )
            goto LABEL_23;
          goto LABEL_10;
        }
        break;
    }
    if ( v7 )
      result = v7[1];
    else
      result = 0LL;
    v8 += result;
    goto LABEL_23;
  }
  v9 = *(unsigned int **)(result + 88);
  v8 = 0;
LABEL_23:
  for ( i = 0; i < v9[1]; ++i )
  {
    v14 = (__int64 *)(v9 + 4);
    v15 = *((_QWORD *)v9 + 2);
    v16 = 0;
    for ( j = 0LL; (unsigned int)j <= v9[2]; j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(v15 + 48 * j + 28) != 3 && ++v16 > i )
        goto LABEL_31;
    }
    j = 0xFFFFFFFFLL;
LABEL_31:
    v18 = 2LL * (v8 + (unsigned int)j);
    if ( a3 )
    {
      result = HalpFullPmuHandle;
      *(_QWORD *)(a2 + 16LL * (v8 + (unsigned int)j) + 16) = HalpFullPmuHandle;
      *(_DWORD *)(a2 + 16LL * (v8 + (unsigned int)j) + 8) = 2;
    }
    else
    {
      v19 = 6 * j;
      v20 = *(_DWORD *)(v15 + 48 * j + 24);
      if ( v20 && (v21 = v20 - 1) != 0 )
      {
        if ( v21 == 1 )
        {
          *(_DWORD *)(a2 + 8 * v18 + 8) = 3;
          result = *v14;
          *(_DWORD *)(a2 + 8 * v18 + 16) = *(_DWORD *)(*v14 + 8 * v19 + 32);
        }
        else
        {
          *(_DWORD *)(a2 + 8 * v18 + 8) = 0;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 8 * v18 + 8) = 1;
        *(_DWORD *)(a2 + 8 * v18 + 16) = *(_DWORD *)(*v14 + 8 * v19 + 36);
        result = *v14;
        *(_DWORD *)(a2 + 8 * v18 + 20) = *(_DWORD *)(*v14 + 8 * v19 + 32);
      }
    }
  }
  return result;
}
