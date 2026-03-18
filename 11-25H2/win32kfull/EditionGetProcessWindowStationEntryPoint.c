/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x140111020
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  GetProcessWindowStation(a1);
  return UserSessionSwitchLeaveCrit(v2);
}
