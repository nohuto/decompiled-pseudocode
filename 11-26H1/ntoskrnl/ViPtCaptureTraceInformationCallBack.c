/*
 * XREFs of ViPtCaptureTraceInformationCallBack @ 0x140C2A3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ViPtCaptureTraceInformationCallBack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, (__int64)&GUID_VERIFIER_LIVEDUMP_INTERFACE);
  *(_QWORD *)(a8 + 24) = a1;
  return result;
}
