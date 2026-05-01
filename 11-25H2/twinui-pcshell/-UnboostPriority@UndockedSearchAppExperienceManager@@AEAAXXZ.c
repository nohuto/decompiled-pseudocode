/*
 * XREFs of ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800149D0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x180234DC0 (wil--details--ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___--_ScopeExitFn__lambda_b287.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180248D9C (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802493D0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802499E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803ADFE4 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x180014B18 (--$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEBJAEB_NAEA_N@SearchAppExperie.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180014EC8 (-UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnboostPriority(UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 99);
  if ( v2 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 99) = 0LL;
  LOBYTE(v10[0]) = *((_BYTE *)this + 784);
  v10[1] = 0;
  *(_QWORD *)&v10[2] = this;
  if ( LOBYTE(v10[0]) )
  {
    *((_BYTE *)this + 784) = 0;
    UndockedSearchAppExperienceManager::UnboostDiskIoImportance(this);
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
    if ( v4 )
    {
      v13 = 0LL;
      v5 = **v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      v6 = v5(v4, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v13);
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v9 = 4116LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
        v7 = retaddr;
        if ( v6 >= 0 )
          goto LABEL_7;
        v9 = 4119LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v7,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v10[0]);
LABEL_7:
      v8 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  v11 = 0;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed<long const &,bool const &,bool &>(
    &v10[1],
    v10,
    (char *)this + 784);
}
