/*
 * XREFs of PbmGetSoundLevel @ 0x180024C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall PbmGetSoundLevel(void *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  int Process; // ebx
  CApplicationManager *v10; // rcx
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  const struct _tlgProvider_t *v14; // r10
  _BYTE *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  struct CProcess *v18; // [rsp+30h] [rbp-81h] BYREF
  int v19; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v20[3]; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v21; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  void *v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+78h] [rbp-39h]
  int v26; // [rsp+7Ch] [rbp-35h]
  _BYTE *v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+8Ch] [rbp-25h]
  __int64 *v30; // [rsp+90h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp-19h]
  _DWORD *v32; // [rsp+A0h] [rbp-11h]
  __int64 v33; // [rsp+A8h] [rbp-9h]
  int *v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]

  v18 = 0LL;
  Process = 0;
  if ( a5 )
  {
    v10 = g_ApplicationManager;
    *a5 = 0;
    if ( v10 )
    {
      Process = CApplicationManager::RpcGetProcess(v10, a1, &v18);
      if ( Process >= 0 )
        *a5 = CApplicationManager::GetSoundLevel(v12, v18, a2, a3, a4);
      if ( v18 )
      {
        v13 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        v14 = v13;
        if ( *(_DWORD *)v13 > 4u
          && (*((_DWORD *)v13 + 4) & 0x80000) != 0
          && (*((_QWORD *)v13 + 3) & 0x80000LL) == *((_QWORD *)v13 + 3) )
        {
          v19 = *a5;
          v35 = 4LL;
          v20[0] = *((_DWORD *)v18 + 40);
          v21 = *((_QWORD *)v18 + 26);
          v15 = (_BYTE *)*((_QWORD *)v18 + 22);
          v34 = &v19;
          v32 = v20;
          v30 = &v21;
          v33 = 4LL;
          v31 = 8LL;
          if ( v15 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( *(_WORD *)&v15[2 * v16] );
            v17 = 2 * v16 + 2;
          }
          else
          {
            v15 = byte_180056CEC;
            v17 = 2;
          }
          v28 = v17;
          *(_DWORD *)&EventDescriptor.Level = 4;
          UserData.Ptr = *((_QWORD *)v14 + 1);
          v27 = v15;
          EventDescriptor.Keyword = 0x80000LL;
          v29 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          UserData.Size = *(unsigned __int16 *)UserData.Ptr;
          v24 = &unk_18005B01A;
          UserData.Reserved = 2;
          v25 = 55;
          v26 = 1;
          v20[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EventWriteTransfer(*((_QWORD *)v14 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v18);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Process;
}
