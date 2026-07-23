/*
 * XREFs of SmStoreExistsForProcess @ 0x14050D5B8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessProcessStoreInfoRequest @ 0x14081FEC4 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x140822E14 (VmpPauseResumeNotify.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
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
