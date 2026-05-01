/*
 * XREFs of ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E39C4
 * Callers:
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E5010 (-ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall GamingPosturePositioner::IsGamingAppView(GamingPosturePositioner *this, struct IApplicationView *a2)
{
  bool v3; // di
  __int64 *v4; // rcx
  __int64 v5; // rax
  int (__fastcall *v6)(struct IApplicationView *, PCWSTR, int *); // rbx
  PCWSTR StringRawBuffer; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  string = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 27);
  v5 = *v4;
  string = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v5 + 64))(v4, &string) >= 0 )
  {
    v9 = 0;
    v6 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, int *))(*(_QWORD *)a2 + 152LL);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( v6(a2, StringRawBuffer, &v9) >= 0 )
      v3 = v9 != 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  return v3;
}
