/*
 * XREFs of ??1WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1AA8
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180037DF0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$0 @ 0x1806CE602 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180069D20 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::~WindowEventDispatcher_AppViewActivating(
        ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivating::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
