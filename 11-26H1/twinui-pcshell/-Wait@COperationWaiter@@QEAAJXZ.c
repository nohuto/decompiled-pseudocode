/*
 * XREFs of ?Wait@COperationWaiter@@QEAAJXZ @ 0x18010DB80
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x18010D4E0 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18010D834 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18010DBB0 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 */

__int64 __fastcall COperationWaiter::Wait(void **this)
{
  unsigned int v2; // [rsp+20h] [rbp-18h]
  unsigned int v3; // [rsp+28h] [rbp-10h]

  return SHProcessMessagesUntilEventsEx((HWND)this, this + 5, 1u, 0x1388u, v2, v3) != 0 ? 0x80004004 : 0;
}
