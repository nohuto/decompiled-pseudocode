/*
 * XREFs of HalpCollectSamplingProfileCorruptionStatusInternal @ 0x1405826F0
 * Callers:
 *     HalpCollectSamplingProfileCorruptionStatus @ 0x14058263C (HalpCollectSamplingProfileCorruptionStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCollectSamplingProfileCorruptionStatusInternal(
        __int64 a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int a5)
{
  __int64 v7; // r8
  int v8; // edx
  int v9; // edx
  __int64 result; // rax
  unsigned int i; // r9d
  int v12; // r10d
  __int64 j; // rdx
  __int64 v14; // r10
  unsigned int v15; // r11d
  __int64 v16; // rdx
  char v17; // cl

  v7 = *(_QWORD *)(KiProcessorBlock[a3] + 88);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      v9 = v8 - 99;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7 += 72LL;
        else
          v7 = 0LL;
      }
      else
      {
        v7 += 48LL;
      }
    }
    else
    {
      v7 += 24LL;
    }
  }
  result = *(unsigned int *)(v7 + 4);
  for ( i = 0; i < (unsigned int)result; ++i )
  {
    if ( *a4 >= a5 )
      break;
    if ( i < (unsigned int)result )
    {
      v12 = 0;
      for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v7 + 8); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 48 * j + 28) != 3 && ++v12 > i )
          goto LABEL_18;
      }
    }
    j = 0xFFFFFFFFLL;
LABEL_18:
    v14 = 6 * j;
    if ( !*(_DWORD *)(*(_QWORD *)(v7 + 16) + 48 * j + 24) )
    {
      v15 = *a4;
      v16 = 2LL * *a4;
      *(_BYTE *)(a1 + 8 * v16 + 13) = 1;
      *(_DWORD *)(a1 + 8 * v16 + 8) = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8 * v14 + 36);
      v17 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 8 * v14 + 40);
      *(_BYTE *)(a1 + 8 * v16 + 12) = v17;
      if ( v17 )
        *(_QWORD *)(a1 + 8 * v16) = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v14 + 8);
      else
        *(_QWORD *)(a1 + 8 * v16) = 0LL;
      *a4 = v15 + 1;
    }
    result = *(unsigned int *)(v7 + 4);
  }
  return result;
}
