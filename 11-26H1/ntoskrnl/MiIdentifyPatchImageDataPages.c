/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x140870540
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     RtlClearAllBitsEx @ 0x140483500 (RtlClearAllBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // r12d
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rbx
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
  v11 = *(_QWORD *)(a1 + 8);
  v12 = MmGetCurrentProcessorColor();
  v13 = ExAllocatePoolMm(256LL, v5, 1296188496, v12 | 0x80000000);
  if ( !v13 )
    return 3221225626LL;
  *(_QWORD *)(v11 + 64) = v8;
  *(_QWORD *)(v11 + 72) = v13;
  RtlClearAllBitsEx(v11 + 64);
  return 0LL;
}
