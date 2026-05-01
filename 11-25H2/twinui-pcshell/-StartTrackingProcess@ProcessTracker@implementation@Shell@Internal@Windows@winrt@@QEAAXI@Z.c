/*
 * XREFs of ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18063AC9C
 * Callers:
 *     ?StartTrackingProcess@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHI@Z @ 0x18063AC70 (-StartTrackingProcess@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180626848 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ??$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z @ 0x180639E30 (--$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$emplace@AEAIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18063A014 (--$emplace@AEAIV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@w.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18063A240 (--$find@X@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shel.c)
 *     ??1?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18063A8C8 (--1-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U-$defa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::StartTrackingProcess(
        RTL_SRWLOCK *this,
        DWORD a2)
{
  float *v3; // r14
  char *v4; // rsi
  void **v5; // rdi
  HANDLE v6; // rax
  void *v7; // r15
  void *v8; // rbx
  const char *v9; // r9
  winrt::hstring *CorrelationId; // rax
  volatile signed __int32 *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo *v13; // [rsp+80h] [rbp+38h] BYREF
  DWORD v14; // [rsp+88h] [rbp+40h] BYREF
  RTL_SRWLOCK *v15; // [rsp+90h] [rbp+48h] BYREF
  const unsigned __int16 *v16; // [rsp+98h] [rbp+50h] BYREF

  v14 = a2;
  v3 = (float *)&this[4];
  wil::AcquireSRWLockExclusive(&v15, this + 3);
  std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find<void>(
    v3,
    &v13,
    (__int64)&v14);
  if ( v13 == *((winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo **)v3 + 1) )
  {
    v4 = (char *)operator new(0x18uLL);
    *((_DWORD *)v4 + 1) = 0;
    *(_DWORD *)v4 = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    v5 = (void **)(v4 + 16);
    *((_QWORD *)v4 + 2) = 0LL;
    v13 = (winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo *)v4;
    v6 = OpenProcess(0x100000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)v4 + 1,
      v6);
    *(_DWORD *)v4 = a2;
    v7 = (void *)*((_QWORD *)v4 + 1);
    if ( v7 )
    {
      v8 = *v5;
      if ( (char *)*v5 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v16);
        UnregisterWait(v8);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
      }
      *v5 = 0LL;
      if ( RegisterWaitForSingleObject(
             v5,
             v7,
             (WAITORTIMERCALLBACK)winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessEndedCallback,
             v4,
             0xFFFFFFFF,
             8u) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::emplace<unsigned int &,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>(
          v3,
          (__int64)v11,
          &v14,
          (__int64 *)&v13);
        CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                          (winrt::hstring *)v11,
                          &c_bootSystemId);
        v16 = winrt::hstring::c_str(CorrelationId);
        CloudPCTelemetry::ProviderProcessTrackingStarted<unsigned int &,unsigned short const *>(
          (int *)&v14,
          (__int64 *)&v16);
        winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
      }
      else
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x2D,
          (int)"pcshell\\twinui\\cloudpc\\lib\\processtracker.cpp",
          v9);
      }
    }
    std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>(&v13);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
}
