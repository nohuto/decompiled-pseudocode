/*
 * XREFs of sub_140553B50 @ 0x140553B50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140553B50(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 296))(a1);
}
