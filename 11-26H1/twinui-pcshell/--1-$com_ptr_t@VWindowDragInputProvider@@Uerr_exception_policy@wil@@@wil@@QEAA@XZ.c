/*
 * XREFs of ??1?$com_ptr_t@VWindowDragInputProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802C5498
 * Callers:
 *     ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18026B6F0 (-MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z.c)
 *     _WindowDragInputProvider::MsgWindowWndProc_::_1_::dtor$0 @ 0x1806FA5DF (_WindowDragInputProvider--MsgWindowWndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>::~com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( !(unsigned int)winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(*a1) )
    {
      std::_Atomic_storage<unsigned __int64,8>::store(v1 + 1);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v1 + 8LL))(v1, 1LL);
    }
  }
}
