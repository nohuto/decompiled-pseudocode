/*
 * XREFs of sub_1405168E0 @ 0x1405168E0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1405168E0(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 296))(a1);
}
