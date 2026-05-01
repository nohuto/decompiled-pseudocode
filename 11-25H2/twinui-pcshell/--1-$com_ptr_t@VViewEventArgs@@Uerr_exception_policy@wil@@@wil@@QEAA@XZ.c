/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800752B8
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180411548 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     _UwpWindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$2 @ 0x1806A7FE7 (_UwpWindowEventDispatcher--RaiseViewEventWithPropertySet_--_1_--dtor$2.c)
 *     _WindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$2 @ 0x1806C26F6 (_WindowEventDispatcher--RaiseViewEventWithPropertySet_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180075480.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v1);
  return result;
}
