/*
 * XREFs of ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x140083E2C
 * Callers:
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E83C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_DIRTY_BITPLANE::InitializeBitplane(
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  ULONG *v9; // rax

  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3213;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Page size is 0", 3213LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v6 = a3;
  v7 = a2 / a3;
  if ( a2 % a3 )
  {
    WdLogSingleEntry2(2LL, a2, a3);
    WdLogGlobalForLineNumber = 3221;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x",
      a2,
      v6,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v8 = 4 * (unsigned int)((a2 / a3 + 31) >> 5);
  BitMapHeader[1].SizeOfBitMap = v8;
  v9 = (ULONG *)operator new[](v8, 0x4B677844u, 256LL);
  if ( v9 )
  {
    RtlInitializeBitMap(BitMapHeader, v9, v7);
    result = 0LL;
    BitMapHeader[1].Buffer = (PULONG)v6;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3230;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate dirty bitplane buffer",
      3230LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
