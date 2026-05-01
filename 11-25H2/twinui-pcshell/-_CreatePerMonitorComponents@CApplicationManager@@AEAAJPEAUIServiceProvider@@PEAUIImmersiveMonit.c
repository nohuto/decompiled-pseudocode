/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180090BEC
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18007C4B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r12d
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v11; // rcx
  CCriticalFailureHandler *v12; // rcx
  unsigned int i; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, GUID *); // rdi
  CCriticalFailureHandler *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 *v20; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23[2]; // [rsp+38h] [rbp-18h] BYREF
  int v24; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
  v23[1] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v24 = v7;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 72) + 32LL))(
    *((_QWORD *)this + 72),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    &v22);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v22);
  v25 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v8, &v25);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v9 = v25;
  }
  if ( v9 >= 0 )
    goto LABEL_4;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      &v25,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x142Bu,
      v20,
      v21);
    v9 = v25;
  }
  if ( v9 >= 0 )
  {
LABEL_4:
    v27 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &IID_IImmersiveShellCreationBehavior,
           &GUID_ac46f07f_3544_48d9_b2d3_f57b388ae361,
           &v27);
    v25 = v9;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, &v25);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v9 = v25;
    }
    if ( v9 >= 0 )
      goto LABEL_7;
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v25,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x142Fu,
        v20,
        v21);
      v9 = v25;
    }
    if ( v9 >= 0 )
    {
LABEL_7:
      v26 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v27 + 72LL))(v27, 0LL, &v26);
      v25 = v9;
      for ( i = 0; ; ++i )
      {
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v12, &v25);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v25;
        }
        if ( v9 < 0 )
        {
          if ( v9 != -2147024882 && v9 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v12,
              &v25,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1434u,
              v20,
              v21);
            v9 = v25;
          }
          if ( v9 < 0 )
            break;
        }
        if ( i >= v26 )
          break;
        v23[0] = 0LL;
        v14 = v27;
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *))(*(_QWORD *)v27 + 80LL);
        v20 = (unsigned __int64 *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(v23);
        v9 = v15(v14, 0LL, i, &GUID_00000000_0000_0000_c000_000000000046);
        v25 = v9;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v16, &v25);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v25;
        }
        if ( v9 >= 0 )
          goto LABEL_15;
        if ( v9 != -2147024882 && v9 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v16,
            &v25,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x143Du,
            v20,
            v21);
          v9 = v25;
        }
        if ( v9 >= 0 )
        {
LABEL_15:
          v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v23[0]);
          v25 = v9;
        }
        v12 = (CCriticalFailureHandler *)v23[0];
        if ( v23[0] )
        {
          v23[0] = 0LL;
          (*(void (__fastcall **)(CCriticalFailureHandler *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    v17 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
