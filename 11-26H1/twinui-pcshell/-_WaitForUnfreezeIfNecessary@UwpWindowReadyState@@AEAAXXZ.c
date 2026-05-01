/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801C7AE4
 * Callers:
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18004C2A8 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C3E4 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C874 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C990 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B1274 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 * Callees:
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18006CA90 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall UwpWindowReadyState::_WaitForUnfreezeIfNecessary(UwpWindowReadyState *this)
{
  HWND v2; // rcx
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(HWND *)this;
  if ( v2 && !*((_DWORD *)this + 2) )
  {
    pvAttribute = 0;
    DwmGetWindowAttribute(v2, 0xFu, &pvAttribute, 4u);
    if ( pvAttribute )
      UwpWindowReadyState::WaitFlags::Set((int *)this + 2, (__int64)this, 4);
  }
}
