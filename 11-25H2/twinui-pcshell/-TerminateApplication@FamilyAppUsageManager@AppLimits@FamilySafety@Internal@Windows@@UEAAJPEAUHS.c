/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x18054C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x180547680 (--$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054C6EC (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        RTL_SRWLOCK *a1,
        HSTRING a2,
        char a3,
        int a4)
{
  unsigned int v8; // edi
  PCWSTR StringRawBuffer; // rdx
  const WCHAR *v10; // rax
  __int64 *Ptr; // rcx
  __int64 v12; // rax
  void **v13; // rdx
  _BYTE v15[8]; // [rsp+20h] [rbp-68h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-60h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-58h] BYREF
  void *v18[3]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-38h]

  v15[0] = a3;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v17, a1 + 18);
  v8 = 0;
  if ( a1[17].Ptr )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v18, StringRawBuffer);
    v10 = (const WCHAR *)v18;
    if ( v19 > 7 )
      v10 = (const WCHAR *)v18[0];
    v16 = v10;
    AppUsageTelemetry::TerminateAppRequested<unsigned short const *,unsigned char &>(&v16, v15);
    Ptr = (__int64 *)a1[17].Ptr;
    v12 = *Ptr;
    v13 = v18;
    if ( a3 )
    {
      if ( v19 > 7 )
        v13 = (void **)v18[0];
      LOBYTE(v8) = a4 != 0;
      (*(void (__fastcall **)(__int64 *, void **, _QWORD))(v12 + 64))(Ptr, v13, v8);
    }
    else
    {
      if ( v19 > 7 )
        v13 = (void **)v18[0];
      (*(void (__fastcall **)(__int64 *, void **))(v12 + 72))(Ptr, v13);
    }
    std::wstring::_Tidy_deallocate(v18);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
  return 0LL;
}
