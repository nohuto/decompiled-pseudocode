/*
 * XREFs of ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x180566550
 * Callers:
 *     ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x180566794 (-IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shel.c)
 *     ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x180566B04 (-PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Sh.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F608 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        __int64 **a2)
{
  void *v3; // r14
  char *v4; // r15
  char *v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, _QWORD, __int64 *); // rdi
  LPVOID pv; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF

  if ( !*((_QWORD *)this + 5) )
    return 0;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    a2,
    (__int64)&pv);
  v3 = pv;
  v4 = (char *)pv;
  v5 = (char *)pv + 4 * v11;
  while ( v4 != v5 )
  {
    v6 = *(_DWORD *)v4;
    v13 = 0LL;
    v7 = *((_QWORD *)this + 3);
    v8 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v13);
    if ( v8(v7, v6, &v13) < 0
      || (v12 = 0,
          (*(void (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 5) + 48LL))(
            *((_QWORD *)this + 5),
            v13,
            &v12),
          !v12) )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      if ( v3 )
        CoTaskMemFree_0(v3);
      return 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    v4 += 4;
  }
  if ( v3 )
    CoTaskMemFree_0(v3);
  return 1;
}
