/*
 * XREFs of ??1VirtualDesktopSwitcherHookData@@QEAA@XZ @ 0x180684DCC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ @ 0x1806889F0 (-_Destroy@-$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1?UnhookWindowsHookEx@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180684D6C (--1-$unique_storage@U-$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1-UnhookWindowsHookEx@@YAH0@ZU-.c)
 */

void __fastcall VirtualDesktopSwitcherHookData::~VirtualDesktopSwitcherHookData(HHOOK *this)
{
  wil::details::unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>(this + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
