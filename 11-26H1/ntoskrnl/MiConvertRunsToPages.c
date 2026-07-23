/*
 * XREFs of MiConvertRunsToPages @ 0x1408733DC
 * Callers:
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiConvertRunsToPages(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r10d
  _QWORD *v10; // rcx
  __int64 v11; // r11
  unsigned __int64 v12; // rsi
  unsigned int v13; // r8d
  __int64 *v14; // r9
  unsigned __int64 v15; // rbp
  unsigned int v16; // edx
  unsigned int v17; // eax
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned int i; // ecx
  __int64 v23; // r8
  unsigned __int64 j; // rdx
  unsigned __int64 v25; // rax

  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(a1 + 8);
    v11 = v4;
    do
    {
      v12 = v10[1];
      v5 += v12;
      if ( v6 <= 1 )
      {
        if ( *v10 == 0x8000000000000000uLL )
        {
          v6 = -1;
        }
        else
        {
          v13 = 0;
          v14 = MiPageSizes;
          do
          {
            v15 = *v14;
            if ( !(*v10 % (unsigned __int64)*v14) && !(v12 % v15) )
              break;
            v16 = v13 + 1;
            v17 = v13 + 1;
            if ( v6 > v13 )
              v17 = v6;
            v6 = v17;
            if ( v15 == 512 )
              break;
            ++v14;
            ++v13;
          }
          while ( v16 < 3 );
        }
      }
      v10 += 2;
      --v11;
    }
    while ( v11 );
    if ( v6 > 1 )
      v6 = 3;
  }
  *a4 = v6;
  *a3 = v5;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, 8 * v5, 826698061, CurrentProcessorColor | 0x80000000);
  v20 = result;
  if ( result )
  {
    v21 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v23 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v23; --v23 )
      {
        *(_QWORD *)(v20 + 8 * v21) = j;
        v25 = j + 1;
        ++v21;
        if ( j == 0x8000000000000000uLL )
          v25 = 0x8000000000000000uLL;
        j = v25;
      }
    }
    return v20;
  }
  return result;
}
