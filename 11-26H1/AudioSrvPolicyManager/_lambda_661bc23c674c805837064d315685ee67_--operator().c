/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x18004B3C0
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18004B15C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004B39C (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(_QWORD **a1, __int64 *a2)
{
  __int64 v2; // rax
  char v5; // bl
  HSTRING v6; // rdi
  int (__fastcall *v7)(__int64 *, HSTRING *); // rbp
  PCWSTR StringRawBuffer; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = *a2;
  string = 0LL;
  v10 = 0;
  if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v2 + 88))(a2, &v10) < 0 )
    goto LABEL_7;
  v5 = 1;
  if ( v10 > 1 )
    goto LABEL_7;
  v6 = string;
  v7 = *(int (__fastcall **)(__int64 *, HSTRING *))(*a2 + 48);
  if ( string )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
    WindowsDeleteString(v6);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  if ( v7(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), (unsigned int)_o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v5 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  return v5;
}
