/*
 * XREFs of LdrpInitializeProcessWrapperFilter @ 0x18015BF50
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeProcessWrapperFilter(const void **a1, _DWORD *a2)
{
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    3068,
    (__int64)"LdrpInitializeProcessWrapperFilter",
    0,
    "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    *(_DWORD *)*a1,
    *a1,
    a1[1]);
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  *a2 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) >= 0;
  return 1LL;
}
