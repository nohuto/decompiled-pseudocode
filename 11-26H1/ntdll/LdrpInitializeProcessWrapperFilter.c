/*
 * XREFs of LdrpInitializeProcessWrapperFilter @ 0x18015C090
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeProcessWrapperFilter(const void **a1, _DWORD *a2)
{
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    3068,
    (__int64)"LdrpInitializeProcessWrapperFilter",
    0,
    "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    *(_DWORD *)*a1,
    *a1,
    a1[1]);
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  *a2 = (int)RtlReportException(*a1, a1[1], 2LL) >= 0;
  return 1LL;
}
