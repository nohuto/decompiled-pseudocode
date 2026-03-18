/*
 * XREFs of EditionGetThreadDesktopEntryPoint @ 0x14019C5C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x14019C600 (_GetThreadDesktop.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall EditionGetThreadDesktopEntryPoint(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ThreadDesktop;
}
