/*
 * XREFs of ?FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C62A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C58A4 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::FindViewItem(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct IAppLayoutItem **a3,
        unsigned int *a4)
{
  RTL_SRWLOCK *v8; // r14
  struct IUnknown *v9; // r8
  int v10; // esi
  unsigned int v11; // ebp
  struct IUnknown *v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v16, this + 2);
  v14 = 0LL;
  v15 = 0LL;
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v8 = this + 8;
  v10 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
          (__int64 *)&this[8],
          &v13,
          v9,
          &v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v10 >= 0 )
  {
    v11 = v14;
    if ( !a3
      || (v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayoutItem **))v8->Ptr + v14))(
                  *((_QWORD *)v8->Ptr + v14),
                  &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                  a3),
          v10 >= 0) )
    {
      if ( a4 )
        *a4 = v11;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
  return (unsigned int)v10;
}
