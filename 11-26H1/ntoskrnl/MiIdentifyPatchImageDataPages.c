/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x1408768A0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlClearAllBitsEx @ 0x14047CE30 (RtlClearAllBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // r12d
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rbx
  _RTL_BITMAP_EX *v11; // rbx
  int v12; // eax
  __int64 v13; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  v5 = 8 * (((v4 & 0x3F) != 0) + (*(_DWORD *)(*(_QWORD *)v1 + 8LL) >> 6));
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, v5, 1296188496, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  v8 = (unsigned int)v4;
  *(_QWORD *)(v3 + 48) = v4;
  *(_QWORD *)(v3 + 56) = PoolMm;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 16) + 128LL;
  if ( *(_QWORD *)(a1 + 16) != -128LL )
  {
    do
    {
      if ( (*(_DWORD *)(v10 + 32) & 0xC) == 8 )
        RtlSetBitsEx(v3 + 48, v9, *(unsigned int *)(v10 + 44));
      v9 += *(_DWORD *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
  }
  v11 = *(_RTL_BITMAP_EX **)(a1 + 8);
  v12 = MmGetCurrentProcessorColor();
  v13 = ExAllocatePoolMm(256LL, v5, 1296188496, v12 | 0x80000000);
  if ( !v13 )
    return 3221225626LL;
  v11[4].SizeOfBitMap = v8;
  v11[4].Buffer = (unsigned __int64 *)v13;
  RtlClearAllBitsEx(v11 + 4);
  return 0LL;
}
