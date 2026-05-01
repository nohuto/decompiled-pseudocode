/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18007440C
 * Callers:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800733AC (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073B00 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073C20 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B7084 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18024E0B0 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1804338F0 (-get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x180434C20 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180434CD8 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180434DD8 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180434ECC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180434F64 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
