/*
 * XREFs of ZwCreateThreadEx @ 0x14069CA60
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     RtlpCreateUserThreadEx @ 0x140A08E7C (RtlpCreateUserThreadEx.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
