/*
 * XREFs of ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x180219C5C
 * Callers:
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180434DD8 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(LayoutCompletedHelper *this, HWND a2)
{
  return (unsigned int)GetPropW((HWND)this, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion") == 1;
}
