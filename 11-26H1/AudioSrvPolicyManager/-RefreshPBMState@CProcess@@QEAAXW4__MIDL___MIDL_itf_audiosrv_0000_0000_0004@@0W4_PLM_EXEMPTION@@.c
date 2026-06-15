/*
 * XREFs of ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180039418
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180039D58 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180012830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039FA4 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

void __fastcall CProcess::RefreshPBMState(__int64 a1, int a2, int a3, int a4)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  _BYTE *v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  if ( a3 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(a1 + 164), 3);
  CProcess::RecalculateVolume(a1, 3);
  if ( (*(_BYTE *)(a1 + 448) & 1) != 0 )
  {
    v6 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    v7 = (__int64)v6;
    if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 0x20000LL) )
    {
      v9 = *(_DWORD *)(a1 + 160);
      v10 = *(_BYTE **)(a1 + 176);
      v12 = v9;
      v11 = *(_QWORD *)(a1 + 208);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v7,
        byte_18005A111,
        v7,
        v8,
        &v10,
        (__int64)&v11,
        (__int64)&v12);
    }
    CProcess::SendPBMNotification(a1, 0LL, v7);
  }
  CProcess::NotifyPLM(a1, a4);
}
