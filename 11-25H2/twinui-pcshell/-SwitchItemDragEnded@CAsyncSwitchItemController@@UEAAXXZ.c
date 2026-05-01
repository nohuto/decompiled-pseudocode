/*
 * XREFs of ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x1804BBBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAsyncSwitchItemController::SwitchItemDragEnded(
        CAsyncSwitchItemController *this,
        volatile signed __int32 *a2)
{
  AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,>(
    (int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2,
    a2);
}
