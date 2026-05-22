/*
 * XREFs of ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800A91C0
 * Callers:
 *     ??1CUIHierarchy@@AEAA@XZ @ 0x180092D60 (--1CUIHierarchy@@AEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A917C (-Stop@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatche.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CUIHierarchy::StopWindowWatcher(CUIHierarchy *this)
{
  __int64 *v2; // rdi
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 *)((char *)this + 72);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
    *((_QWORD *)this + 9),
    *((_QWORD *)this + 7));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 88LL))(*v2, *((_QWORD *)this + 5));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 104LL))(*v2, *((_QWORD *)this + 6));
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stop(v2);
  v3[0] = 0LL;
  if ( v2 != v3 )
  {
    if ( *v2 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
    *v2 = 0LL;
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v3);
}
