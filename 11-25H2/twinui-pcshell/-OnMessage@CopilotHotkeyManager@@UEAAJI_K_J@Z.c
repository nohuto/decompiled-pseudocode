/*
 * XREFs of ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x18060E460
 * Callers:
 *     <none>
 * Callees:
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CJ@$$CBG@Z @ 0x1805F95CC (--$CopilotHotkey_Output_Debug_String@AEAY0CJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CJ@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CK@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CK@$$CBG@Z @ 0x1805F9614 (--$CopilotHotkey_Output_Debug_String@AEAY0CK@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CK@$$C.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805FD504 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvo.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDD94 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FE054 (--1-$test_watcher@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805FE1A8 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060E260 (-MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@W4IMMERSIV.c)
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x18060E6C8 (-Release@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@AEA.c)
 *     ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060FF38 (-TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NXZ @ 0x1806108F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NXZ @ 0x180610B9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NX.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061162C (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@detail.c)
 */

__int64 __fastcall CopilotHotkeyManager::OnMessage(void **this, __int64 a2, int a3)
{
  const char *v5; // r9
  volatile signed __int32 *v6; // rdx
  void *v7; // rcx
  const WCHAR *v8; // rcx
  int v9; // r8d
  volatile signed __int32 *v10; // rcx
  void *v11; // rax
  const WCHAR *v12; // rcx
  __int64 result; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  void *v15; // [rsp+28h] [rbp-50h] BYREF
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[56]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::__private_IsEnabled() )
    {
      if ( (unsigned int)(a3 - 111) <= 1 )
      {
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(this + 54);
        v15 = 0LL;
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::operator=(
          this + 54,
          &v15);
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>(&v15);
        v6 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>>((struct wil::details::IFailureCallback *)v17)
                                        + 6);
        v7 = this[54];
        this[54] = (void *)v6;
        if ( v6 )
          _InterlockedIncrement(v6 + 84);
        if ( v7 )
          tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::Release(v7);
        tip2::test_watcher<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_watcher<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((__int64)v17);
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                      (__int64)(this + 54),
                      (__int64 *)&v15)
                 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v15);
        CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[42]>(v8);
        *((_DWORD *)this + 110) = a3;
        if ( a3 == 112 )
        {
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                         (__int64)(this + 54),
                         (__int64 *)&v16)
                    + 328) = 1;
        }
        else
        {
          if ( a3 != 111 )
          {
LABEL_13:
            v9 = *((_DWORD *)this + 110);
LABEL_21:
            CopilotHotkeyManager::MonitorForCopilotExtendedSignals((__int64)this, v14, v9);
            goto LABEL_23;
          }
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                         (__int64)(this + 54),
                         (__int64 *)&v16)
                    + 328) = 2;
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v16);
        goto LABEL_13;
      }
    }
    else if ( a3 == 112 )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55120546>::GetImpl'::`2'::impl) )
      {
        CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(this, v14, 112LL);
        goto LABEL_23;
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(this + 54);
      v15 = 0LL;
      wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::operator=(
        this + 54,
        &v15);
      wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>(&v15);
      v10 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>>((struct wil::details::IFailureCallback *)v17)
                                       + 6);
      v11 = this[54];
      this[54] = (void *)v10;
      if ( v10 )
        _InterlockedIncrement(v10 + 84);
      if ( v11 )
        tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::Release(v11);
      tip2::test_watcher<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_watcher<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((__int64)v17);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                    (__int64)(this + 54),
                    (__int64 *)&v16)
               + 265) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v16);
      CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[41]>(v12);
      v9 = 112;
      goto LABEL_21;
    }
LABEL_23:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x317,
                           (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
                           v5);
  }
  return result;
}
