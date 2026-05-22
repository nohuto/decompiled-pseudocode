/*
 * XREFs of ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015F798
 * Callers:
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180071BA0 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015F930 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SystemButtonEventController::DeliverToNextTarget(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  SystemButtonEventController *v2; // rcx

  v2 = (SystemButtonEventController *)*((_QWORD *)this + 6);
  if ( v2 )
    SystemButtonEventController::SendSystemButtonEvent(v2, a2);
  else
    ISMStatics::GetSystemButtonEventControllerManager();
}
