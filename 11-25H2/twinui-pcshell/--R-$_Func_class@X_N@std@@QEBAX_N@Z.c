/*
 * XREFs of ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801CCA58
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800717B8 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800733AC (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801110DC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B7084 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D2CC8 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18024E0B0 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x180434C20 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180434CD8 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180434DD8 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180434ECC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke @ 0x180495A20 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180495A20.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,bool>::operator()(__int64 a1, char a2)
{
  __int64 v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x1801CCA8DLL);
  }
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
