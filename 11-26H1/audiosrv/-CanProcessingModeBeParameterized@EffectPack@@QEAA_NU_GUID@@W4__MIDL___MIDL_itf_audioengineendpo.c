/*
 * XREFs of ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAU?$pair@U_GUID@@_N@std@@@?$forward_list@U?$pair@U_GUID@@_N@std@@V?$allocator@U?$pair@U_GUID@@_N@std@@@2@@std@@QEAAAEAU?$pair@U_GUID@@_N@1@AEAU21@@Z @ 0x18013473C (--$emplace_front@AEAU-$pair@U_GUID@@_N@std@@@-$forward_list@U-$pair@U_GUID@@_N@std@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
char __fastcall EffectPack::CanProcessingModeBeParameterized(EffectPack *this, struct _GUID *a2, __int64 a3)
{
  __int64 **v6; // rsi
  __int64 *i; // rax
  __int64 v8; // rcx
  int ModeEffect; // eax
  struct IAudioProcessingObject *v10; // rbx
  __int64 v11; // rax
  struct ICompositeSystemEffect *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  char v15; // si
  _QWORD *v16; // rdx
  int v17; // [rsp+20h] [rbp-D8h]
  struct ICompositeSystemEffect *v18; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v21; // [rsp+58h] [rbp-A0h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-98h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp-88h] BYREF
  char v24; // [rsp+80h] [rbp-78h]
  _QWORD v25[7]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v26; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 198) + 236LL) != 1 || !*((_BYTE *)this + 2128) || (_DWORD)a3 == 3 )
    return 0;
  if ( (unsigned __int64)(int)a3 >= *((_QWORD *)this + 194) )
  {
    _o_terminate((int)a3, a2, a3);
    __debugbreak();
    __debugbreak();
    JUMPOUT(0x18002EF45LL);
  }
  v6 = (__int64 **)(*((_QWORD *)this + 195) + 8LL * (int)a3);
  for ( i = *v6; i; i = (__int64 *)*i )
  {
    v8 = i[1] - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = i[2] - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return *((_BYTE *)i + 24);
  }
  v21 = 0LL;
  v18 = 0LL;
  v22 = *a2;
  ModeEffect = EffectPack::GetModeEffect((unsigned __int64)this, (__m128i *)&v22, 0LL, a3, &v18, &v21, 0LL);
  if ( ModeEffect < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2520,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ModeEffect,
      v17);
  v20 = 0LL;
  v10 = v21;
  if ( v21 )
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v21->lpVtbl->QueryInterface)(
      v21,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      &v20);
  v11 = 0LL;
  v19 = 0LL;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
      v10,
      &GUID_25385759_3236_4101_a943_25693dfb5d2d,
      &v19);
    v11 = v19;
  }
  v23 = *a2;
  v24 = 0;
  if ( v20 && v11 )
  {
    v24 = 1;
    v12 = v18;
  }
  else
  {
    v12 = v18;
    if ( v18 )
    {
      v13 = *(_QWORD *)v18;
      v25[0] = off_180178A88;
      v25[1] = &v23;
      v26 = v25;
      v14 = (*(__int64 (__fastcall **)(struct ICompositeSystemEffect *, _QWORD *))(v13 + 40))(v18, v25);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2539,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v14,
          v17);
      if ( v26 )
      {
        v16 = v25;
        LOBYTE(v16) = v26 != v25;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v16);
      }
    }
  }
  std::forward_list<std::pair<_GUID,bool>>::emplace_front<std::pair<_GUID,bool> &>(v6, &v23);
  v15 = v24;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->Release)(v10);
  if ( v12 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v12 + 16LL))(v12);
  return v15;
}
