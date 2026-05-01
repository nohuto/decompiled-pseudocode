/*
 * XREFs of ?SetMonitorManager@CVirtualDesktopSwitcherService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1804981F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopSwitcherService::SetMonitorManager(
        CVirtualDesktopSwitcherService *this,
        struct IImmersiveMonitorManager *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, SID *, GUID *); // rbp
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 4,
    (__int64)a2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v3 + 72LL);
    v5 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v4(v3, 0LL, &SID_MultitaskingViewVisibilityService, &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
        (const char *)(unsigned int)v6,
        (_DWORD)this + 40);
  }
}
