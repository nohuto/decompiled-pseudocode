/*
 * XREFs of ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x18022C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800AEC4C (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetSizeConstraintOverrides(
        CApplicationManager *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4,
        struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  struct tagSIZE *v10; // r13
  struct tagSIZE *v11; // r15
  RTL_SRWLOCK *v12; // rbx
  int First; // edi
  struct tagSIZE *v14; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  PSRWLOCK v20; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v10 = a5;
  *a5 = 0LL;
  v11 = a6;
  *a6 = 0LL;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  a5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  a6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (__int64)this - 216,
            &a6,
            &a5,
            0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a6);
  if ( First >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 576LL))(
            a5,
            a3,
            v10);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(struct tagSIZE *, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)a5 + 584LL))(
              a5,
              a4,
              v11);
      v17 = v16;
      if ( v16 >= 0 )
      {
        v17 = 0;
        goto LABEL_13;
      }
      v18 = 2282LL;
    }
    else
    {
      v18 = 2281LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v20);
    return v17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8E8,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)First);
  v14 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(struct tagSIZE *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v12 )
    ReleaseSRWLockShared(v12);
  return (unsigned int)First;
}
