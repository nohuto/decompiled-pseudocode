/*
 * XREFs of ??$CreateGitHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@@Details@Internal@Windows@@YAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@2@PEAPEAU3452@@Z @ 0x18040E840
 * Callers:
 *     ?Add@?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180413DB8 (-Add@-$GitEventSource@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applica.c)
 * Callees:
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180306CE0 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 *     ??$Make@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@@12@XZ @ 0x18040F9C4 (--$Make@U-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Ap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // edi
  char v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+70h] [rbp+18h]

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>,>(&v10);
  v5 = 0LL;
  if ( &v9 != v4 )
  {
    v5 = *(_DWORD **)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v11 = v5;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v7 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke((__int64)(v5 + 12));
  if ( v7 >= 0 && a1 )
  {
    v7 = v5[15];
    if ( v7 < 0 )
      goto LABEL_13;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_1808DDE48 + 24LL))(
           qword_1808DDE48,
           a1,
           &GUID_2768fda5_53f3_5aa9_bedd_2f3df0989fb7,
           v5 + 14);
  }
  if ( v7 >= 0 )
    v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_2768fda5_53f3_5aa9_bedd_2f3df0989fb7,
           a2);
LABEL_13:
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v7;
}
