/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x140835C70
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 */

__int64 __fastcall ExpLeapSecondDataRegistryNotifyHandler(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ExpReadLeapSecondData(ExpSysDbgLock.ApcState.Process, a2);
}
