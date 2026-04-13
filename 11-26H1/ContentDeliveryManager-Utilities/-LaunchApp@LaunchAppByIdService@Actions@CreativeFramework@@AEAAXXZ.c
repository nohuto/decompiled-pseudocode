/*
 * XREFs of ?LaunchApp@LaunchAppByIdService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009C4BC
 * Callers:
 *     ?Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009C4A0 (-Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800923E8 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800923E8.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CreativeFramework::Actions::LaunchAppByIdService::LaunchApp(
        CreativeFramework::Actions::LaunchAppByIdService *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID); // rsi
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-40h] BYREF
  const WCHAR *v12; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v11);
  *(_QWORD *)v10 = 0LL;
  v2 = *v11;
  *(_QWORD *)v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 88))(v11, v10);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      171LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v3,
      v10[0]);
  v5 = *(_QWORD *)v10;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v10 + 64LL);
  v7 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  v12 = v7;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, &v12, v4);
  v9 = v6(v5, v8[1].Reserved.Reserved1);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      172LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v9,
      v10[0]);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v10);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
}
