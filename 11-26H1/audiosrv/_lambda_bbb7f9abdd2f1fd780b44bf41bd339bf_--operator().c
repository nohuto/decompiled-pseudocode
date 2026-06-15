/*
 * XREFs of _lambda_bbb7f9abdd2f1fd780b44bf41bd339bf_::operator() @ 0x1800C4FBC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bbb7f9abdd2f1fd780b44bf41bd339bf__void_IAudioStreamInfo___::_Do_call @ 0x1800CC4F0 (std--_Func_impl_no_alloc__lambda_bbb7f9abdd2f1fd780b44bf41bd339bf__void_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18005C050 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800C75F0 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_bbb7f9abdd2f1fd780b44bf41bd339bf_::operator()(
        struct EndpointCharacteristicsDescriptor ***a1,
        struct IAudioStreamInfo *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  struct EndpointCharacteristicsDescriptor **v8; // rbx
  const unsigned __int16 *v9; // rax
  int AppropriateStreamGroupAndSaDeviceForStream; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct EndpointCharacteristicsDescriptor *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct EndpointCharacteristicsDescriptor *))(*(_QWORD *)**a1 + 472LL))(**a1) )
  {
    v4 = AudioSrvTelemetryProvider::Instance();
    v5 = (_DWORD *)*((_QWORD *)v4 + 1);
    if ( *v5 > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 512LL) )
    {
      v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
      v13 = **a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v5,
        byte_1801A2D94,
        v6,
        v7,
        (__int64)&v13,
        (__int64)&v12);
    }
    v8 = a1[1];
    v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct EndpointCharacteristicsDescriptor *))(*(_QWORD *)**a1 + 152LL))(**a1);
    AppropriateStreamGroupAndSaDeviceForStream = CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
                                                   (CAudioResourceManager *)(v8 + 1),
                                                   *a1[2],
                                                   v9,
                                                   a2);
    if ( AppropriateStreamGroupAndSaDeviceForStream < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3632LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)AppropriateStreamGroupAndSaDeviceForStream);
  }
}
