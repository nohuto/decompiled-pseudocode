/*
 * XREFs of ZwCreateThreadEx @ 0x140724D10
 * Callers:
 *     DifZwCreateThreadExWrapper @ 0x1406A2070 (DifZwCreateThreadExWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x1408706B4 (MiInjectThreadForHotPatch.c)
 *     RtlpCreateUserThreadEx @ 0x140A9010C (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
