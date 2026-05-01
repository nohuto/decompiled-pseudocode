/*
 * XREFs of ??R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ @ 0x180128270
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180128260 (-Run@-$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180128314 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x1801287B8 (--$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIAct.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall _lambda_7ef6cf09cd6767662dbbd6a639c92cb6_::operator()(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 *v6; // rbx
  int *result; // rax
  __int64 *v8; // rax
  _DWORD *v9; // rdi
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)a1;
  v10 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
         &v10,
         v4,
         v3);
  v6 = v10;
  **(_DWORD **)(a1 + 16) = v5;
  result = *(int **)(a1 + 16);
  if ( *result >= 0 )
  {
    v10 = *(__int64 **)(a1 + 8);
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
    v9 = *(_DWORD **)(a1 + 16);
    result = (int *)Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(v6, v8);
    *v9 = (_DWORD)result;
  }
  if ( v6 )
    return (int *)(*(__int64 (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  return result;
}
