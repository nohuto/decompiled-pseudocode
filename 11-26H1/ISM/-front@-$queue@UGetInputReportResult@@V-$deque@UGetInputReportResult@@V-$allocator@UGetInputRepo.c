/*
 * XREFs of ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC
 * Callers:
 *     ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DD330 (-OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F5BA0 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800F5C90 (-InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F6050 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::queue<GetInputReportResult>::front(_QWORD *a1)
{
  return std::deque<RayStabilizationResult>::front(a1);
}
