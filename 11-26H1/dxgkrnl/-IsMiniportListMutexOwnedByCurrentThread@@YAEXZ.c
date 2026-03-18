/*
 * XREFs of ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x14004CC44
 * Callers:
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x14004CC14 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024D210 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1403E7010 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

char IsMiniportListMutexOwnedByCurrentThread(void)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONG StateMutex; // eax
  char v2; // cl

  CurrentThread = KeGetCurrentThread();
  StateMutex = KeReadStateMutex(Mutex);
  v2 = 1;
  if ( StateMutex == 1
    || CurrentThread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                             &qword_140168E18,
                                             (signed __int64)CurrentThread,
                                             (signed __int64)CurrentThread) )
  {
    return 0;
  }
  return v2;
}
