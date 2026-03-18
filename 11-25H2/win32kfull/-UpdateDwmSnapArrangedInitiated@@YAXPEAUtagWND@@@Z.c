/*
 * XREFs of ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738
 * Callers:
 *     ?RestoreArrangedState@@YAXPEAUtagWND@@PEBUCHECKPOINT@@@Z @ 0x1402A7F54 (-RestoreArrangedState@@YAXPEAUtagWND@@PEBUCHECKPOINT@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DwmAsyncNotifyWindowMoveReason @ 0x14021E78C (DwmAsyncNotifyWindowMoveReason.c)
 */

void __fastcall UpdateDwmSnapArrangedInitiated(struct tagWND *a1, __int64 a2)
{
  void *v3; // rax

  v3 = (void *)ReferenceDwmApiPort(a1, a2);
  DwmAsyncNotifyWindowMoveReason(v3);
  SetOrClrWF(1, a1, 0xD910u, 1);
}
