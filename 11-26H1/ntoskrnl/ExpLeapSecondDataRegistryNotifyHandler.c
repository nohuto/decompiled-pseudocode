/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14083BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 */

__int64 __fastcall ExpLeapSecondDataRegistryNotifyHandler(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ExpReadLeapSecondData(ExpSysDbgLock.WaitBlockList, a2);
}
