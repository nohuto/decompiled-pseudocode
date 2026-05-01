/*
 * XREFs of ??1?$com_ptr_t@VWindowDragInputProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802CDEB0
 * Callers:
 *     ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1802737C0 (-MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z.c)
 *     _WindowDragInputProvider::MsgWindowWndProc_::_1_::dtor$0 @ 0x1806D26BE (_WindowDragInputProvider--MsgWindowWndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1801C8A94 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
      v1[1] = 1LL;
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
    }
  }
}
