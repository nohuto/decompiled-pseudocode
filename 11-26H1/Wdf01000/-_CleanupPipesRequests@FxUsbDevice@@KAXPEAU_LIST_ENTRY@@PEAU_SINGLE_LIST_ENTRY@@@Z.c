/*
 * XREFs of ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140083C94
 * Callers:
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x14009F97C (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400054FC (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009BEEC (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 */

void __fastcall FxUsbDevice::_CleanupPipesRequests(_LIST_ENTRY *PendHead, _SINGLE_LIST_ENTRY *SentHead)
{
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v5; // rax

  while ( 1 )
  {
    Flink = PendHead->Flink;
    if ( PendHead->Flink == PendHead )
      break;
    if ( Flink->Blink != PendHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    PendHead->Flink = v5;
    v5->Blink = PendHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxIoTarget::FailPendedRequest((FxIoTarget *)Flink[2].Blink, (FxRequestBase *)&Flink[-8].Blink, -1071644154);
  }
  FxIoTarget::_CancelSentRequests(SentHead);
}
