/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Do_call @ 0x18002D5C0 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Do_call.c)
 * Callees:
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x1800066E8 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x180020850 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18002099C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180020BB8 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020DBC (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180020EC8 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ClearCastingState@CProcess@@QEAAXXZ @ 0x180021128 (-ClearCastingState@CProcess@@QEAAXXZ.c)
 *     ?ClearVoipCallState@CProcess@@QEAAXXZ @ 0x180021160 (-ClearVoipCallState@CProcess@@QEAAXXZ.c)
 *     ?ClearDialogSessionState@CProcess@@QEAAXXZ @ 0x18002119C (-ClearDialogSessionState@CProcess@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180029EDC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039744 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039808 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18003CB20 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180044584 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rbp
  const struct _tlgProvider_t *v4; // rax
  int v5; // r9d
  struct CApplication *v6; // rsi
  unsigned int v7; // edx
  CApplication *v8; // rcx
  CApplicationManager *v10; // [rsp+50h] [rbp+8h] BYREF
  char *v11; // [rsp+58h] [rbp+10h]

  v10 = this;
  v3 = g_ApplicationManager;
  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u
    && (*((_DWORD *)v4 + 4) & 0x8000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x8000LL) == *((_QWORD *)v4 + 3) )
  {
    LODWORD(v10) = *((_DWORD *)a2 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (_DWORD)v4,
      (unsigned int)&unk_18005AC16,
      (_DWORD)v4,
      v5,
      (__int64)&v10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v11 = (char *)v3 + 32;
  v6 = (struct CApplication *)*((_QWORD *)a2 + 28);
  LODWORD(v10) = 0;
  CProcess::MarkAsTerminated(a2);
  if ( TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0, 1.0, (int *)&v10);
    if ( (_DWORD)v10 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 41), 3);
  }
  if ( v6 && TsSessionIsActiveMediaApplication(v6) )
    CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(v3, v6);
  if ( (*((_BYTE *)a2 + 448) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications(a2, 0LL, 0xFFFFFFFFLL);
  if ( *((_DWORD *)a2 + 124) )
  {
    CProcess::ClearSmtcSubscriptions(a2);
    if ( v6 )
      CApplication::OnSmtcSubscriptionChanged(v6, v7);
  }
  if ( (*((_DWORD *)a2 + 112) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications(a2, 0LL, 0xFFFFFFFFLL);
  if ( *((_DWORD *)a2 + 113) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 113) = 0;
  }
  if ( *((_DWORD *)a2 + 114) )
    *((_DWORD *)a2 + 114) = 0;
  *((_DWORD *)a2 + 122) = 0;
  CProcess::ClearCastingState(a2);
  CProcess::ClearVoipCallState(a2);
  CProcess::ClearDialogSessionState(a2);
  CProcess::NotifyPLM((__int64)a2, 1);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v10 = (CApplicationManager *)((char *)v3 + 32);
  if ( (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v8 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v8 )
      CApplication::DelinkProcess(v8, a2);
    CApplicationManager::RemoveProcess(v3, a2);
  }
  if ( v3 != (CApplicationManager *)-32LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  }
  return 0LL;
}
