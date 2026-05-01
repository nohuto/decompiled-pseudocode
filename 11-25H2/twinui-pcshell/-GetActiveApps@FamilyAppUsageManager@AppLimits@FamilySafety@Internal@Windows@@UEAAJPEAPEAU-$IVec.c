/*
 * XREFs of ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180549180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@1234@@Z @ 0x180243668 (--$CreateExternalVector@PEAUHSTRING__@@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A64E8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z @ 0x180546C20 (--$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps(
        RTL_SRWLOCK *a1,
        __int64 *a2)
{
  int v4; // eax
  PVOID Ptr; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID); // r15
  const WCHAR *v13; // rax
  PVOID Reserved1; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-60h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h]
  HSTRING_HEADER v26; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a2 = 0LL;
  v21 = 0LL;
  v4 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>(
         (__int64)a1,
         &v21);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x80,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v4,
      v20);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, a1 + 18);
  Ptr = a1[17].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, &v24);
    v7 = v24;
    v8 = v24;
    v9 = v25;
    v10 = v25;
    v11 = v21;
    while ( v8 != v10 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v11 + 104LL);
      v13 = (const WCHAR *)v8;
      if ( *(_QWORD *)(v8 + 24) > 7uLL )
        v13 = *(const WCHAR **)v8;
      v22 = (__int64)v13;
      Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&v22, v6)[1].Reserved.Reserved1;
      v15 = v12(v11, Reserved1);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x88,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
          (const char *)(unsigned int)v15,
          v20);
      v8 += 32LL;
      v9 = v25;
      v7 = v24;
    }
    v22 = (v9 - v7) >> 5;
    AppUsageTelemetry::ActiveAppsCount<unsigned __int64>((int *)&v22);
    std::vector<std::wstring>::_Tidy((__int64)&v24);
  }
  else
  {
    v11 = v21;
  }
  v20 = 0LL;
  v16 = *(_QWORD *)v11;
  v20 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 64))(v11, &v20);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8F,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)v17,
      v20);
  v18 = v20;
  v20 = 0LL;
  *a2 = v18;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  return 0LL;
}
