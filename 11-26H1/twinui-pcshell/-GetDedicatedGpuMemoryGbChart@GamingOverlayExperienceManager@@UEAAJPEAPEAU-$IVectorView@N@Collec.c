/*
 * XREFs of ?GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x180348DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$CreateExternalVector@NV?$AgileVector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@N@234@@ZPEAPEAV?$AgileVector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@$0A@@1234@@Z @ 0x18033BB3C (--$CreateExternalVector@NV-$AgileVector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foun.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedGpuMemoryGbChart(__int64 a1, __int64 a2, double *a3)
{
  GamingOverlayExperienceManager *v5; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  int v14; // ebp
  __int64 v15; // rcx
  double v16; // xmm0_8
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v20[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (GamingOverlayExperienceManager *)(a1 - 136);
  if ( !*((_QWORD *)v5 + 110) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread(v5);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v8 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<double,Windows::Foundation::Collections::Internal::AgileVector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,0>>(
         v7,
         &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v20[0] = 0LL;
    wil::EnterCriticalSection(v20, (struct _RTL_CRITICAL_SECTION *)(a1 + 1048));
    v11 = *(_QWORD *)(a1 + 1088);
    v12 = *(_QWORD *)(a1 + 1096);
    while ( v11 != v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 104LL))(v19);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9D6,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v13);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
        v9 = v14;
        goto LABEL_17;
      }
      v11 += 8LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 64LL))(v19, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2522LL;
      goto LABEL_11;
    }
    v15 = *(_QWORD *)(a1 + 1040);
    if ( v15 < 0 )
    {
      v17 = *(_QWORD *)(a1 + 1040) & 1LL | (*(_QWORD *)(a1 + 1040) >> 1);
      v16 = (double)(int)v17 + (double)(int)v17;
    }
    else
    {
      v16 = (double)(int)v15;
    }
    v9 = 0;
    *a3 = v16 / 1048576000.0;
  }
  else
  {
    v10 = 2512LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v8);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v9;
}
