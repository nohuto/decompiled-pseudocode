/*
 * XREFs of ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x14004CC14
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x14004CC44 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 */

MINIPORT_LIST_AUTO_LOCK *__fastcall MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK(MINIPORT_LIST_AUTO_LOCK *this)
{
  *(_BYTE *)this = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    *(_BYTE *)this = 1;
  }
  return this;
}
