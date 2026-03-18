/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions @ 0x140295930
 * Callers:
 *     <none>
 * Callees:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x14001A4E4 (_DrainThreadCoreMessagingCompletions2.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserDrainThreadCoreMessagingCompletions()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  v1 = (int)DrainThreadCoreMessagingCompletions2(0LL, v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
