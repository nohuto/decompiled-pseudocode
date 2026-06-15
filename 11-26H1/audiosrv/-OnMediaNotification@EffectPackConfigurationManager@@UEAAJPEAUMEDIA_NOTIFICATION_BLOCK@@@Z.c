/*
 * XREFs of ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x180103720
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003928 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180047B14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x180103490 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x18010360C (-DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x180103A54 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ?SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z @ 0x180103EA0 (-SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPackConfigurationManager::OnMediaNotification(
        EffectPackConfigurationManager *this,
        struct MEDIA_NOTIFICATION_BLOCK *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // ebx
  EffectPackConfigurationManager *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  struct CSerialWorkQueue *v12; // rbx
  int v13; // eax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  int v15; // eax
  unsigned __int64 v16; // rdx
  const char *v17; // [rsp+28h] [rbp-41h]
  __int64 v18[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+68h] [rbp-1h]
  __int128 v22; // [rsp+70h] [rbp+7h]
  __int64 (__fastcall ***v23)(); // [rsp+98h] [rbp+2Fh]
  __int128 v24; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !a2 )
  {
    v3 = "NULL Media Notification Block";
    v4 = 21LL;
LABEL_3:
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)0x80070057LL,
      (__int64)v3,
      v17);
    return v5;
  }
  if ( *(_DWORD *)a2 < 0x18u )
  {
    v3 = "Invalid Media Notification Block size";
    v4 = 22LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 1) != 0x400000 )
  {
    v3 = "Incorrect Media Notification Block";
    v4 = 23LL;
    goto LABEL_3;
  }
  v7 = *((_DWORD *)a2 + 6);
  v24 = *(_OWORD *)((char *)a2 + 28);
  v8 = (EffectPackConfigurationManager *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 2048LL) )
  {
    LODWORD(v18[0]) = v7;
    *(_QWORD *)v19 = &v24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v8,
      (int)&unk_1801A6D4B,
      v9,
      v10,
      v19,
      (__int64)v18);
  }
  *(_OWORD *)v19 = v24;
  if ( v7 == 2 )
  {
    EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(this, (struct _GUID *)v19);
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v18,
      (__int64)this);
    SerialWorkQueue = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v19,
      v18[0]);
    v20 = off_180177578;
    v21 = *(_QWORD *)v19;
    v23 = &v20;
    *(_OWORD *)&v19[8] = v24;
    *(_QWORD *)v19 = 0LL;
    v22 = v24;
    v15 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v20);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        68LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
    *(_OWORD *)v19 = v24;
    EffectPackConfigurationManager::DeleteRegistryEntry((struct _GUID *)v19, v16);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18);
    return 0LL;
  }
  if ( !EffectPackConfigurationManager::SkipVoiceClarityEffectPack(v8, (struct _GUID *)v19) )
  {
    *(_OWORD *)v19 = v24;
    v11 = EffectPackConfigurationManager::AddEffectPackConfigurationToList(this, (struct _GUID *)v19);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v11);
      return v5;
    }
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v18,
      (__int64)this);
    v12 = GetSerialWorkQueue();
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
      v19,
      v18[0]);
    v20 = off_1801775D8;
    v21 = *(_QWORD *)v19;
    v23 = &v20;
    *(_OWORD *)&v19[8] = v24;
    *(_QWORD *)v19 = 0LL;
    v22 = v24;
    v13 = CSerialWorkQueue::QueueWorkItem((__int64)v12, (__int64 *)&v20);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        56LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
    goto LABEL_22;
  }
  return 0LL;
}
