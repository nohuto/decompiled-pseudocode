/*
 * XREFs of SmStoreExistsForProcess @ 0x140513B48
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140819CB4 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x14081CC04 (VmpPauseResumeNotify.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1880);
  v4 = a1;
  v2 = *(_QWORD *)(v1 + 24);
  return a1 != *(_QWORD *)(v2 + 2280) && SmpKeyedStoreEntryGet((struct _KTHREAD *)(v2 + 2344), &v4, 0, 0LL) != 0LL;
}
