/*
 * XREFs of _lambda_6fd8c80f4e8205d0daf1b865183c59df_::operator() @ 0x18045DC98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::Run @ 0x1804644C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800F4B00 (-GetInputAppId@TouchKeyboardExperienceManager@@CA-AV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802AAD9C (--C-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C6178 (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 *     ??$GettingInputAppIdRetryCountMaxReached@AEAU?$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x1802C8708 (--$GettingInputAppIdRetryCountMaxReached@AEAU-$atomic@I@std@@@GetDefautInputAppIdAndContinue@Tou.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CE754 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045D0E8 (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180464D00 (-Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_6fd8c80f4e8205d0daf1b865183c59df_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *v2; // rdi
  _DWORD *v3; // r8
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // r14
  volatile __int32 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 **v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 (__fastcall *)(void *), __int64, __int64); // rbx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // ebx
  const unsigned __int16 *v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 **v26; // [rsp+38h] [rbp-C0h] BYREF
  char v27[8]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-B0h]
  _OWORD v29[2]; // [rsp+50h] [rbp-A8h] BYREF
  char v30[48]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int16 *v31[3]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v28 = a1;
  v2 = (TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2);
  v3 = (_DWORD *)a1[36];
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v29,
      (struct wil::details::IFailureCallback *)(a1 + 2),
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset(v29, 0, sizeof(v29));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v30,
      0LL,
      0LL,
      0);
  }
  v25 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v25);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x763,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v25 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, &LocaleName);
    *(_BYTE *)(a1[1] + 1012LL) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
    return 0LL;
  }
  try
  {
    TouchKeyboardExperienceManager::GetInputAppId(v31);
    v6 = a1[1];
    v7 = (volatile __int32 *)(v6 + 928);
    if ( v31[2] )
    {
      _InterlockedExchange(v7, 0);
      v8 = *(_QWORD *)(v6 + 824);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v6 + 824));
      }
      v9 = a1[50];
      if ( v9 )
      {
        v10 = v31;
        if ( v32 > 7 )
          v10 = (unsigned __int16 **)v31[0];
        v26 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 ***))(*(_QWORD *)v9 + 16LL))(v9, &v26);
        if ( v11 < 0 )
        {
          *(_BYTE *)(v6 + 1012) = 0;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x77B,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      goto LABEL_28;
    }
    if ( (unsigned int)_InterlockedIncrement(v7) > 5 )
    {
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::GettingInputAppIdRetryCountMaxReached<std::atomic<unsigned int> &>(
        (__int64)v2,
        (int *)v7);
      v12 = a1[1];
      _InterlockedExchange((volatile __int32 *)(v12 + 928), 0);
      v13 = *(_QWORD *)(v12 + 824);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v12 + 824));
      }
      *(_BYTE *)(v12 + 1012) = 0;
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                              v12 + 2176,
                              (__int64)v27)
               + 278LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)v27);
      tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(v12 + 2176));
      std::wstring::_Tidy_deallocate((void **)v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      return 2147549183LL;
    }
    if ( !*(_QWORD *)(v6 + 824) )
    {
      v15 = *(_QWORD *)(v6 + 800);
      v16 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v15 + 144LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v6 + 824));
      v17 = v16(v15, TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback, v6, v6 + 824);
      v18 = v17;
      if ( v17 < 0 )
      {
        *(_BYTE *)(v6 + 1012) = 0;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x79B,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        std::wstring::_Tidy_deallocate((void **)v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
        return v18;
      }
      v2 = (TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2);
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 824) + 96LL))(*(_QWORD *)(v6 + 824));
    v20 = v19;
    if ( v19 >= 0 )
    {
      std::function<long (unsigned short const *)>::operator=(v6 + 864, (__int64)(a1 + 43));
      v21 = a1[1];
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v21 + 824) + 80LL))(
              *(_QWORD *)(v21 + 824),
              20000000LL,
              0LL);
      v23 = v22;
      if ( v22 >= 0 )
      {
LABEL_28:
        v24 = (const unsigned __int16 *)v31;
        if ( v32 > 7 )
          v24 = v31[0];
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, v24);
        std::wstring::_Tidy_deallocate((void **)v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
        return 0LL;
      }
      *(_BYTE *)(v21 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
      std::wstring::_Tidy_deallocate((void **)v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      result = v23;
    }
    else
    {
      *(_BYTE *)(v6 + 1012) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
      std::wstring::_Tidy_deallocate((void **)v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      result = v20;
    }
  }
  catch ( ... )
  {
    *(_BYTE *)(v28[1] + 1012LL) = 0;
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7AA,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
    return (unsigned int)v26;
  }
  return result;
}
