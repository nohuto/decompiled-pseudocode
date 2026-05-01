/*
 * XREFs of ?SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x180157160
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeOrThrow@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@wil@@YA?AV?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x18015722C (--$MakeOrThrow@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@App.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18054D690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::SubscribeToServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v4; // rdi
  void **v5; // rax
  const char *v6; // r9
  void *v7; // rsi
  __int64 v8; // rcx
  PVOID Ptr; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h]
  struct IServiceProvider *v14; // [rsp+68h] [rbp+20h]

  v4 = this + 27;
  AcquireSRWLockExclusive(this + 27);
  v13 = (unsigned __int64)&this[10] & -(__int64)(this != (RTL_SRWLOCK *)48);
  v14 = a2;
  try
  {
    v5 = (void **)wil::MakeOrThrow<AppUsageTracker,IServiceProvider * &,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification * &,enum Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption &>(&v12);
    v7 = *v5;
    *v5 = 0LL;
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(v8);
    }
    Ptr = this[26].Ptr;
    this[26].Ptr = v7;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x41,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v6);
  }
  return result;
}
