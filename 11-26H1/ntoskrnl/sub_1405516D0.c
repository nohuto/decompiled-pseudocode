/*
 * XREFs of sub_1405516D0 @ 0x1405516D0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140C7B6F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1405516D0(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 296))(a1);
}
