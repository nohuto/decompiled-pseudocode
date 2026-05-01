/*
 * XREFs of ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x18006A1A4
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180068F74 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800EDA70 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180241B50 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$14 @ 0x1806D05A3 (_UwpWindowEventDispatcher--UwpWindowActivationRequested_--_1_--dtor$14.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$7 @ 0x1806D3D68 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$7.c)
 *     _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$2 @ 0x1806EACB8 (_UwpWindowEventDispatcher--OnShellHookMessage_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this)
{
  std::_Ref_count_base *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)this )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 28) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16E,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 36) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16F,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 44) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 52) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x171,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  if ( *((_BYTE *)this + 60) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x172,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
