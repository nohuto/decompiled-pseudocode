/*
 * XREFs of ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001E5D0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x180226BB4 (wil--details--ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___--_ScopeExitFn__lambda_b287.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x18023BEB4 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023C500 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18023CB30 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18023CDB0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B6AA0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18001D930 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x18001E73C (--$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEBJAEB_NAEA_N@SearchAppExperie.c)
 *     ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001EAD0 (-UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_ @ 0x1803AD1F0 (_lambda_cf1713f6f1f0d86a70d989507d89f6a1_--_lambda_cf1713f6f1f0d86a70d989507d89f6a1_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnboostPriority(UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  __m128i v4; // xmm6
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // [rsp+20h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  int v15; // [rsp+78h] [rbp+28h] BYREF

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 99);
  if ( v2 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 99) = 0LL;
  v15 = 0;
  LOBYTE(v14) = *((_BYTE *)this + 784);
  v4 = *(__m128i *)lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_(
                     &v11,
                     &v14,
                     &v15,
                     this);
  v11 = v4;
  if ( *((_BYTE *)this + 784) )
  {
    *((_BYTE *)this + 784) = 0;
    UndockedSearchAppExperienceManager::UnboostDiskIoImportance(this);
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
    if ( v5 )
    {
      v14 = 0LL;
      v6 = **v5;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v7 = v6(v5, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v14);
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v10 = 4439LL;
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
        v8 = retaddr;
        if ( v7 >= 0 )
          goto LABEL_7;
        v10 = 4442LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v8,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v11.m128i_i32[0]);
LABEL_7:
      v9 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  v12 = 0;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed<long const &,bool const &,bool &>(
    (char *)v11.m128i_i64 + 4,
    &v11,
    _mm_srli_si128(v4, 8).m128i_u64[0] + 784);
}
