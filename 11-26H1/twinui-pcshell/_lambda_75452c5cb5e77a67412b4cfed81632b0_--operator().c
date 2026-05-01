/*
 * XREFs of _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046A0E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::Run @ 0x180470190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800CD758 (-GetInputAppId@TouchKeyboardExperienceManager@@CA-AV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802A3398 (--C-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802B72BC (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 *     ??$GettingInputAppIdRetryCountMaxReached@AEAU?$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x1802BFF90 (--$GettingInputAppIdRetryCountMaxReached@AEAU-$atomic@I@std@@@GetDefautInputAppIdAndContinue@Tou.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5D9C (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804693DC (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180470AE0 (-Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_75452c5cb5e77a67412b4cfed81632b0_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *v2; // r12
  _DWORD *v3; // r8
  int v4; // eax
  __int64 result; // rax
  volatile __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int16 **v10; // rax
  int v11; // eax
  unsigned __int32 v12; // eax
  __int64 v13; // r13
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall *)(void *), _QWORD, __int64); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ebx
  const unsigned __int16 *v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int16 **v28; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD *v29; // [rsp+40h] [rbp-A8h]
  _OWORD v30[2]; // [rsp+50h] [rbp-98h] BYREF
  char v31[48]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int16 *v32[3]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v29 = a1;
  v2 = (TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2);
  v3 = (_DWORD *)a1[36];
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v30,
      (struct wil::details::IFailureCallback *)(a1 + 2),
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset(v30, 0, sizeof(v30));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v31,
      0LL,
      0LL,
      0);
  }
  v27 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v27);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x779,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v27 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, &pvData);
    *(_BYTE *)(a1[1] + 1012LL) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
    return 0LL;
  }
  try
  {
    TouchKeyboardExperienceManager::GetInputAppId(v32);
    v6 = (volatile __int32 *)(a1[1] + 928LL);
    if ( v32[2] )
    {
      _InterlockedExchange(v6, 0);
      v7 = *(_QWORD *)(a1[1] + 824LL);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1[1] + 824LL));
      }
      v8 = a1[50];
      if ( v8 )
      {
        v9 = a1[1];
        v10 = v32;
        if ( v33 > 7 )
          v10 = (unsigned __int16 **)v32[0];
        v28 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 ***))(*(_QWORD *)v8 + 16LL))(v8, &v28);
        if ( v11 < 0 )
        {
          *(_BYTE *)(v9 + 1012) = 0;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x791,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      goto LABEL_27;
    }
    v12 = _InterlockedIncrement(v6);
    v13 = a1[1];
    if ( v12 > 5 )
    {
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::GettingInputAppIdRetryCountMaxReached<std::atomic<unsigned int> &>(
        (__int64)v2,
        (unsigned int *)(v13 + 928));
      _InterlockedExchange((volatile __int32 *)(a1[1] + 928LL), 0);
      v14 = *(_QWORD *)(a1[1] + 824LL);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1[1] + 824LL));
      }
      *(_BYTE *)(a1[1] + 1012LL) = 0;
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                              a1[1] + 2176LL,
                              (__int64)&v28)
               + 286LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)&v28);
      tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(a1[1] + 2176LL));
      std::wstring::_Tidy_deallocate(v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
      return 2147549183LL;
    }
    if ( *(_QWORD *)(v13 + 824)
      || (v16 = *(_QWORD *)(v13 + 800),
          v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _QWORD, __int64))(*(_QWORD *)v16 + 144LL),
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v13 + 824)),
          v18 = v17(v16, TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback, a1[1], v13 + 824),
          v19 = v18,
          v18 >= 0) )
    {
      v20 = a1[1];
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 824) + 96LL))(*(_QWORD *)(v20 + 824));
      v22 = v21;
      if ( v21 >= 0 )
      {
        std::function<long (unsigned short const *)>::operator=(a1[1] + 864LL, (__int64)(a1 + 43));
        v23 = a1[1];
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v23 + 824) + 80LL))(
                *(_QWORD *)(v23 + 824),
                20000000LL,
                0LL);
        v25 = v24;
        if ( v24 >= 0 )
        {
LABEL_27:
          v26 = (const unsigned __int16 *)v32;
          if ( v33 > 7 )
            v26 = v32[0];
          TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, v26);
          std::wstring::_Tidy_deallocate(v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
          return 0LL;
        }
        *(_BYTE *)(v23 + 1012) = 0;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B6,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
        std::wstring::_Tidy_deallocate(v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
        result = v25;
      }
      else
      {
        *(_BYTE *)(v20 + 1012) = 0;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B4,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v21);
        std::wstring::_Tidy_deallocate(v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
        result = v22;
      }
    }
    else
    {
      *(_BYTE *)(v13 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
      std::wstring::_Tidy_deallocate(v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
      result = v19;
    }
  }
  catch ( ... )
  {
    *(_BYTE *)(v29[1] + 1012LL) = 0;
    LODWORD(v28) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7C0,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v30);
    return (unsigned int)v28;
  }
  return result;
}
