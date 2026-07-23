/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x14086C154
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiConvertInitialMemoryBlock(__int64 a1, __int64 a2)
{
  int v2; // edi
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // rdx
  bool v10; // zf
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // rdx

  v2 = 1;
  if ( *(_DWORD *)a2 > 1u )
  {
    v5 = (_QWORD *)(a2 + 32);
    v6 = (_QWORD *)(a2 + 16);
    v7 = (unsigned int)(*(_DWORD *)a2 - 1);
    do
    {
      v8 = v2 + 1;
      v9 = *v6 + v6[1];
      v6 += 2;
      v10 = *v5 == v9;
      v5 += 2;
      if ( v10 )
        v8 = v2;
      v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, 16 * ((unsigned int)(v2 - 1) + 3LL), 1817013581, CurrentProcessorColor | 0x80000000);
  if ( result )
  {
    v13 = result + 16;
    *(_QWORD *)(result + 8) = 1LL;
    *(_DWORD *)(result + 16) = v2;
    v14 = 0;
    *(_QWORD *)result = a1;
    v15 = 0;
    *(_QWORD *)(result + 24) = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)a2 )
    {
      while ( v15 )
      {
        v16 = v15;
        if ( *(_QWORD *)(a2 + 16LL * v15 + 16) != *(_QWORD *)(16LL * (v15 - 1) + a2 + 16)
                                                + *(_QWORD *)(16LL * (v15 - 1) + a2 + 24) )
          goto LABEL_12;
        *(_QWORD *)(16LL * (v14 - 1) + v13 + 24) += *(_QWORD *)(a2 + 16LL * v15 + 24);
LABEL_13:
        if ( ++v15 >= *(_DWORD *)a2 )
          goto LABEL_14;
      }
      v16 = 0LL;
LABEL_12:
      v17 = 2 * v16;
      v18 = 2LL * v14++;
      *(_QWORD *)(v13 + 8 * v18 + 16) = *(_QWORD *)(a2 + 8 * v17 + 16);
      *(_QWORD *)(v13 + 8 * v18 + 24) = *(_QWORD *)(a2 + 8 * v17 + 24);
      goto LABEL_13;
    }
LABEL_14:
    result += 16LL;
  }
  return result;
}
