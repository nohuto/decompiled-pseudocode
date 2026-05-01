/*
 * XREFs of ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x18020BC5C
 * Callers:
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18004C2A8 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180441148 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(LayoutCompletedHelper *this, HWND a2)
{
  return (unsigned int)GetPropW((HWND)this, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion") == 1;
}
