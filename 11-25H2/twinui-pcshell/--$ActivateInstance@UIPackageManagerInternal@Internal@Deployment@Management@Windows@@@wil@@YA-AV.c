/*
 * XREFs of ??$ActivateInstance@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@wil@@YA?AV?$com_ptr_t@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1805D3FFC
 * Callers:
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1805D5848 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$query@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1805D4258 (--$query@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@-$com_ptr_t@UIInspect.c)
 */

__int64 __fastcall wil::ActivateInstance<Windows::Management::Deployment::Internal::IPackageManagerInternal>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Management.Deployment.Internal.PackageManagerInternal";
  v7[0] = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, &v8, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5,
      v7[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Management::Deployment::Internal::IPackageManagerInternal>(
    v7,
    a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
  return a1;
}
