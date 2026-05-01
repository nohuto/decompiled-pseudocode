/*
 * XREFs of ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1806C3300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C2FD0 (--$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::GetClosedView(
        CAppLayoutOperation *this,
        struct IApplicationView **a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  int v5; // ebx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IApplicationView **); // rbx
  struct IApplicationView *v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v12) = 2;
  v3 = (__int64 *)((char *)this + 80);
  *a2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
         (_QWORD *)this + 10,
         &v12,
         a3,
         &v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  if ( v5 >= 0
    || (v14 = 0LL,
        LODWORD(v12) = 7,
        v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
               v3,
               &v12,
               v6,
               &v13),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14),
        v7 >= 0) )
  {
    v8 = *v3;
    v12 = 0LL;
    v9 = *(_QWORD *)(v8 + 8 * v13);
    v10 = *(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    v7 = v10(v9, &v12);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v7 = 0;
      *a2 = v12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  }
  else if ( v7 == -2147319765 )
  {
    return 0;
  }
  return (unsigned int)v7;
}
