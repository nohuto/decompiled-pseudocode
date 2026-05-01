/*
 * XREFs of ?GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@@Z @ 0x1803491B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$CreateExternalVector@HV?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@H@234@@ZPEAPEAV?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@1234@@Z @ 0x18033BA4C (--$CreateExternalVector@HV-$AgileVector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foun.c)
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803544EC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondChart(__int64 a1, int a2, __int64 a3)
{
  GamingOverlayExperienceManager *v5; // rcx
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  unsigned int *v12; // rdi
  int v13; // eax
  int v14; // esi
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v17[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (GamingOverlayExperienceManager *)(a1 - 136);
  if ( a2 != *((_DWORD *)v5 + 262) || !*(_BYTE *)(a1 + 916) )
  {
    v6 = *(_QWORD *)(a1 + 744) == 0LL;
    *(_DWORD *)(a1 + 912) = a2;
    if ( v6 )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread(v5);
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v8 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
         v7,
         &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v17[0] = 0LL;
    wil::EnterCriticalSection(v17, (struct _RTL_CRITICAL_SECTION *)(a1 + 928));
    v11 = *(unsigned int **)(a1 + 968);
    v12 = *(unsigned int **)(a1 + 976);
    while ( v11 != v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, *v11);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9AD,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v13);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v17);
        v9 = v14;
        goto LABEL_16;
      }
      ++v11;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v17);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2481LL;
      goto LABEL_13;
    }
    v9 = 0;
  }
  else
  {
    v10 = 2471LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v8);
  }
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v9;
}
