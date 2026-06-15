/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x1800199E4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002A350 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003C1E4 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     PbmCastingAppStateChanged @ 0x180041AE0 (PbmCastingAppStateChanged.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x1800464B0 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180046910 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        _BYTE **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  _BYTE *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  __int64 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  __int64 v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]

  v25 = a8;
  v23 = a7;
  v21 = a6;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 8LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&v9[2 * v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = byte_180056CEC;
    v11 = 2;
  }
  v19 = v11;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v18 = v9;
  v20 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
