/*
 * XREFs of ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x18060F41C
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18021CB48 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x1805FED74 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 *     ?IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060D710 (-IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ @ 0x1806109B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ @ 0x1806109F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CopilotHotkeyManager::SendWindowMessageOnInvocation(CopilotHotkeyManager *this, int a2, HWND *a3)
{
  HWND *v3; // r15
  WPARAM v4; // r13
  bool MessageWindow; // si
  bool v7; // r12
  int v8; // ebx
  char v9; // bl
  __int64 v10; // r8
  BOOL v11; // r15d
  __int64 v12; // r8
  const char *v13; // r9
  void *v15; // [rsp+20h] [rbp-50h] BYREF
  HWND *v16; // [rsp+28h] [rbp-48h]
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  UINT Msg[2]; // [rsp+50h] [rbp-20h]
  HWND hWnd; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v3 = a3;
  v16 = a3;
  v4 = a2;
  std::wstring::wstring((__int64)lParam, (__int64)this + 192);
  *(_QWORD *)Msg = 0LL;
  hWnd = 0LL;
  MessageWindow = 0;
  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v15, (RTL_SRWLOCK *)this + 23);
    hWnd = (HWND)*((_QWORD *)this + 53);
    Msg[0] = *((_DWORD *)this + 104);
    v8 = *((_DWORD *)this + 94);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v15);
    MessageWindow = v8 == 2;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57343652>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57343652>::GetImpl'::`2'::impl) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl)
      || !hWnd && *((_DWORD *)this + 94) != 2
      || !IsWindow(hWnd) )
    {
      MessageWindow = CopilotHotkeyManager::FindMessageWindow(this, (struct FastpathWindowProperty *)lParam);
      if ( !MessageWindow )
        MessageWindow = !EnumWindows((WNDENUMPROC)CopilotHotkeyManager::EnumWindowsCallback, (LPARAM)lParam);
    }
    v7 = *((_DWORD *)this + 94) == 2;
    v9 = 1;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
    {
      *((_DWORD *)this + 94) = !MessageWindow + 2;
      if ( MessageWindow
        && (std::operator!=<unsigned short>(lParam, (unsigned __int16 *)this + 192)
         || hWnd != *((HWND *)this + 53)
         || Msg[0] != *((_DWORD *)this + 104)) )
      {
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v15, (RTL_SRWLOCK *)this + 23);
        std::wstring::operator=((char *)this + 384, (char *)lParam, v10);
        *((_DWORD *)this + 104) = Msg[0];
        *((_QWORD *)this + 53) = hWnd;
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v15);
      }
    }
  }
  else
  {
    v9 = 1;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
      goto LABEL_23;
    if ( !*((_DWORD *)this + 94) && CopilotHotkeyManager::IsTargetApplicationRunning(this) )
      *((_DWORD *)this + 94) = 1;
    if ( hWnd || *((_DWORD *)this + 94) != 1 )
    {
      v7 = *((_DWORD *)this + 94) == 2;
    }
    else
    {
LABEL_23:
      v11 = EnumWindows((WNDENUMPROC)CopilotHotkeyManager::EnumWindowsCallback, (LPARAM)lParam);
      MessageWindow = !v11;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
      {
        *((_DWORD *)this + 94) = v11 + 2;
        if ( !v11
          && (std::operator!=<unsigned short>(lParam, (unsigned __int16 *)this + 192)
           || hWnd != *((HWND *)this + 53)
           || Msg[0] != *((_DWORD *)this + 104)) )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v15, (RTL_SRWLOCK *)this + 23);
          std::wstring::operator=((char *)this + 384, (char *)lParam, v12);
          *((_DWORD *)this + 104) = Msg[0];
          *((_QWORD *)this + 53) = hWnd;
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v15);
          MessageWindow = !v11;
        }
      }
      v3 = v16;
    }
  }
  if ( MessageWindow && hWnd )
  {
    if ( PostMessageW(hWnd, Msg[0], v4, 0LL) )
    {
      *v3 = hWnd;
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                    (__int64)this + 432,
                    (__int64 *)&v15)
               + 312) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v15);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl)
        && v7 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                      (__int64)this + 432,
                      (__int64 *)&v15)
                 + 324) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v15);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x531,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v13);
    }
  }
  else
  {
    v9 = 0;
  }
  std::wstring::_Tidy_deallocate((void **)lParam);
  return v9;
}
