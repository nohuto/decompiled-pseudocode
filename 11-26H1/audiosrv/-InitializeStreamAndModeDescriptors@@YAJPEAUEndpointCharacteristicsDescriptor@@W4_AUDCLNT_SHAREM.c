/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180008690 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000E7D8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18004FF2C (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180052FF4 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x1800696A8 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18006C738 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18007BCD8 (--$try_copy@UIApoAcousticEchoCancellation@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode.c)
 *     ??$try_copy@UIApoAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18007E6B0 (--$try_copy@UIApoAuxiliaryInputConfiguration@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returnc.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B024C (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B04DC (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation2@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation2@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1800C3DA8 (--$try_copy@UIApoAcousticEchoCancellation2@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncod.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins@@@details@wil@@QEAA_NXZ @ 0x1800CC754 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableModePipeForOfflo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=28
__int64 __fastcall InitializeStreamAndModeDescriptors(
        EffectPack **this,
        int a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        void *Buf1,
        _OWORD *a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        GUID *a18,
        __int64 a19,
        __int64 a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24,
        int a25,
        __int64 a26,
        int a27,
        _QWORD *a28,
        MODE_PARAMS **a29)
{
  char *v33; // rsi
  EffectPack *v34; // rbx
  __int64 v35; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v36; // r14d
  unsigned int v37; // edi
  __int64 v38; // rdx
  void *v39; // rax
  unsigned __int64 v40; // r9
  unsigned int v41; // edx
  int v42; // eax
  EffectPack *v43; // rcx
  int StreamEffect; // eax
  __int64 v45; // rdx
  void **v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // ebx
  void *v50; // rax
  int v51; // eax
  __int64 v52; // rdi
  void *v53; // rax
  unsigned int v54; // edx
  unsigned int v55; // ecx
  GUID v56; // xmm0
  __int64 v57; // rdi
  void *v58; // rax
  unsigned int v59; // r13d
  int v60; // ebx
  unsigned int v61; // ecx
  void **v62; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v63; // r13d
  int v64; // eax
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // edi
  __int64 v69; // rbx
  void *v70; // rax
  unsigned int v71; // edx
  unsigned int v72; // ecx
  void *v73; // rax
  _OWORD *v74; // r13
  __int64 v75; // rax
  GUID *v76; // rax
  __int128 v77; // xmm2
  __int128 v78; // xmm3
  __int64 v79; // xmm0_8
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rbx
  int ContainerProperty; // eax
  __int64 v84; // rcx
  __int64 v85; // rdx
  int v86; // eax
  int ModeEffect; // eax
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // edi
  unsigned int v92; // r14d
  char *v93; // rax
  char *v94; // rbx
  int v95; // edx
  unsigned int v96; // ecx
  BOOL v97; // eax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rax
  MODE_PARAMS *v102; // rax
  struct IAudioModeEffectsWatcher **v103; // r9
  MODE_PARAMS *v104; // rbx
  int Watcher; // eax
  void **v106; // rcx
  void **v108; // rcx
  int v109; // edi
  unsigned int v110; // r14d
  char *v111; // rax
  char *v112; // rbx
  int v113; // edx
  unsigned int v114; // ecx
  BOOL v115; // eax
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rax
  MODE_PARAMS *v120; // rax
  struct IAudioModeEffectsWatcher **v121; // r9
  MODE_PARAMS *v122; // rbx
  int v123; // eax
  struct IAudioProcessingObject *v124; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v125; // [rsp+50h] [rbp-B1h] BYREF
  _OWORD *v126; // [rsp+58h] [rbp-A9h] BYREF
  struct ICompositeSystemEffect *v127; // [rsp+60h] [rbp-A1h] BYREF
  __int64 v128; // [rsp+68h] [rbp-99h] BYREF
  void *v129; // [rsp+70h] [rbp-91h] BYREF
  unsigned int v130[4]; // [rsp+78h] [rbp-89h] BYREF
  size_t Size[2]; // [rsp+88h] [rbp-79h] BYREF
  char v132; // [rsp+98h] [rbp-69h]
  char *v133; // [rsp+A8h] [rbp-59h] BYREF
  char *v134; // [rsp+B0h] [rbp-51h] BYREF
  unsigned int v135; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v136; // [rsp+C0h] [rbp-41h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-39h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-31h] BYREF
  __int64 v139; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v140; // [rsp+E0h] [rbp-21h] BYREF
  MODE_PARAMS *v141; // [rsp+E8h] [rbp-19h] BYREF
  __int64 v142; // [rsp+F0h] [rbp-11h] BYREF
  __int64 v143[8]; // [rsp+F8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+3Fh]
  struct ICompositeSystemEffect *v145; // [rsp+148h] [rbp+47h] BYREF
  int v146; // [rsp+150h] [rbp+4Fh]
  int v147; // [rsp+160h] [rbp+5Fh]

  v147 = a4;
  v146 = a2;
  v142 = 0LL;
  v33 = 0LL;
  v129 = 0LL;
  v141 = 0LL;
  v34 = *this;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v142);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v34 + 5, &v142);
  v36 = a5;
  if ( !a28 )
  {
    v74 = a7;
    goto LABEL_108;
  }
  if ( (a3 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v37 = -2147418113;
      v38 = 268LL;
LABEL_8:
      v40 = v37;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v40);
      goto LABEL_153;
    }
    v39 = CoTaskMemAlloc(0x15CuLL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v129,
      v39);
    v33 = (char *)v129;
    if ( !v129 )
    {
      v37 = -2147024882;
      v38 = 273LL;
      goto LABEL_8;
    }
    memset_0(v129, 0, 0x15CuLL);
    *(_DWORD *)v33 = 0;
    *((_DWORD *)v33 + 34) = a3;
    *((_DWORD *)v33 + 82) = 0;
    *((_DWORD *)v33 + 38) = 0;
    *((_DWORD *)v33 + 38) = 1 << *((_DWORD *)v33 + 82);
    *(GUID *)&v33[16 * (*((_DWORD *)v33 + 82))++ + 332] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    *((_DWORD *)v33 + 1) = 1;
    goto LABEL_86;
  }
  if ( !a2 && (a5 == eHostProcessConnector || (unsigned int)(a5 - 2) <= 2) )
  {
    v128 = 0LL;
    v41 = 0;
    v130[0] = 0;
    if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
    {
      v145 = 0LL;
      v42 = EffectPack::EndpointConnectorSupportsProcessingModes(this[1], (unsigned int)a5, v35);
      v43 = this[1];
      if ( v42 )
      {
        v145 = 0LL;
        *(_OWORD *)Size = *a7;
        StreamEffect = EffectPack::GetStreamEffect(v43, (struct _GUID *)Size, 0LL, v36, &v145, 0LL, 0LL);
        v37 = StreamEffect;
        if ( StreamEffect < 0 )
        {
          v45 = 305LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v45,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)StreamEffect);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
LABEL_18:
          v46 = (void **)&v128;
LABEL_19:
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v46,
            0LL);
          goto LABEL_153;
        }
      }
      else
      {
        v145 = 0LL;
        StreamEffect = EffectPack::GetLfx(v43, v36, &v145, 0LL);
        v37 = StreamEffect;
        if ( StreamEffect < 0 )
        {
          v45 = 310LL;
          goto LABEL_17;
        }
      }
      if ( v145 )
      {
        v47 = *(_QWORD *)v145;
        Size[0] = (size_t)&v128;
        Size[1] = 0LL;
        v132 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, size_t *))(v47 + 32))(
          v145,
          v130,
          &Size[1]);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)Size);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
      v41 = v130[0];
    }
    if ( a4 )
    {
      if ( a4 != 1 )
      {
        if ( (unsigned int)(a4 - 2) >= 2 )
        {
          v37 = -2147024809;
          v48 = 430LL;
          goto LABEL_64;
        }
        v49 = 3;
        v50 = CoTaskMemAlloc(0x17CuLL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v129,
          v50);
        v33 = (char *)v129;
        if ( v129 )
        {
          memset_0(v129, 0, 0x17CuLL);
          v51 = 1;
          if ( ((v36 - 2) & 0xFFFFFFFD) != 0 )
            v51 = a4;
          *(_DWORD *)v33 = v51;
          *((_DWORD *)v33 + 34) = a3;
          *((_DWORD *)v33 + 82) = 3;
          *(GUID *)(v33 + 332) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
          *(GUID *)(v33 + 348) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          *(GUID *)(v33 + 364) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          *((_DWORD *)v33 + 38) = 0;
          goto LABEL_58;
        }
        v48 = 414LL;
        goto LABEL_63;
      }
      v49 = v41 + 2;
      v52 = 16LL * (v41 + 2);
      v53 = CoTaskMemAlloc(v52 + 332);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v129,
        v53);
      v33 = (char *)v129;
      if ( v129 )
      {
        memset_0(v129, 0, v52 + 332);
        *(_DWORD *)v33 = 1;
        *((_DWORD *)v33 + 34) = a3;
        *((_DWORD *)v33 + 38) = 0;
        *((_DWORD *)v33 + 82) = 0;
        *((_QWORD *)v33 + 32) = a23;
        *((_QWORD *)v33 + 33) = a24;
        if ( a22 )
          *((_QWORD *)v33 + 31) = a20;
        v54 = 0;
        if ( v130[0] )
        {
          while ( 1 )
          {
            v55 = *((_DWORD *)v33 + 82);
            if ( v55 > 0x1F )
              break;
            *((_DWORD *)v33 + 38) |= 1 << v55;
            *(_OWORD *)&v33[16 * (*((_DWORD *)v33 + 82))++ + 332] = *(_OWORD *)(v128 + 16LL * v54);
            if ( ++v54 >= v130[0] )
              goto LABEL_40;
          }
          v37 = -2147418113;
          v48 = 394LL;
          goto LABEL_64;
        }
LABEL_40:
        *(GUID *)&v33[16 * *((unsigned int *)v33 + 82) + 332] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        v56 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
LABEL_57:
        *(GUID *)&v33[16 * ++*((_DWORD *)v33 + 82) + 332] = v56;
        ++*((_DWORD *)v33 + 82);
LABEL_58:
        *((_DWORD *)v33 + 1) = a3 >> 31;
        if ( *((_DWORD *)v33 + 82) > v49 )
        {
          v37 = -2147418113;
          v48 = 434LL;
          goto LABEL_64;
        }
        v62 = (void **)&v128;
        goto LABEL_85;
      }
      v48 = 379LL;
    }
    else
    {
      v49 = v41 + 4;
      LODWORD(v145) = v41 + 4;
      v57 = 16LL * (v41 + 4);
      v58 = CoTaskMemAlloc(v57 + 332);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v129,
        v58);
      v33 = (char *)v129;
      if ( v129 )
      {
        memset_0(v129, 0, v57 + 332);
        *(_DWORD *)v33 = 0;
        *((_DWORD *)v33 + 34) = a3;
        *((_DWORD *)v33 + 82) = 0;
        *((_DWORD *)v33 + 38) = 0;
        if ( a21 )
        {
          *((_DWORD *)v33 + 38) = 1;
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 82))++ + 332] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
        }
        else
        {
          v59 = 0;
          if ( v130[0] )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)(v128 + 16LL * v59) != *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
                || *(_QWORD *)(v128 + 16LL * v59 + 8) != *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4
                || !IsGetDefaultSpatialRenderingModePresent()
                || RpcImpersonateClient(0LL) < 0
                || (v60 = IsVirtualSurroundAllowedForProcess(a9), RpcRevertToSelf(), v60) )
              {
                v61 = *((_DWORD *)v33 + 82);
                if ( v61 > 0x1F )
                {
                  v37 = -2147418113;
                  v48 = 358LL;
                  goto LABEL_64;
                }
                *((_DWORD *)v33 + 38) |= 1 << v61;
                *(_OWORD *)&v33[16 * (*((_DWORD *)v33 + 82))++ + 332] = *(_OWORD *)(v128 + 16LL * v59);
              }
              if ( ++v59 >= v130[0] )
              {
                v49 = (unsigned int)v145;
                break;
              }
            }
          }
        }
        *(GUID *)&v33[16 * (*((_DWORD *)v33 + 82))++ + 332] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        *(GUID *)&v33[16 * *((unsigned int *)v33 + 82) + 332] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        v56 = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        goto LABEL_57;
      }
      v48 = 324LL;
    }
LABEL_63:
    v37 = -2147024882;
LABEL_64:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v37);
    goto LABEL_18;
  }
  v136 = 0LL;
  v135 = 0;
  if ( a5 != eOffloadConnector || a2 )
  {
    v73 = CoTaskMemAlloc(0x160uLL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v129,
      v73);
    v33 = (char *)v129;
    if ( !v129 )
    {
      v37 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_70;
    }
    memset_0(v129, 0, 0x160uLL);
    *(_DWORD *)v33 = a4;
    *((_DWORD *)v33 + 34) = a3;
    *((_DWORD *)v33 + 82) = 0;
    *((_DWORD *)v33 + 1) = 0;
  }
  else
  {
    v145 = 0LL;
    *(_OWORD *)Size = *a7;
    v63 = a5;
    v64 = EffectPack::GetStreamEffect(this[1], (struct _GUID *)Size, 0LL, a5, &v145, 0LL, 0LL);
    v37 = v64;
    if ( v64 < 0 )
    {
      v65 = (unsigned int)v64;
      v66 = 443LL;
LABEL_69:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v66,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
LABEL_70:
      v46 = (void **)&v136;
      goto LABEL_19;
    }
    if ( v145 )
    {
      v67 = *(_QWORD *)v145;
      Size[0] = (size_t)&v136;
      Size[1] = 0LL;
      v132 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, size_t *))(v67 + 32))(
        v145,
        &v135,
        &Size[1]);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)Size);
    }
    v68 = v135;
    v69 = 16LL * v135;
    v70 = CoTaskMemAlloc(v69 + 332);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v129,
      v70);
    v33 = (char *)v129;
    if ( !v129 )
    {
      v37 = -2147024882;
      v65 = 2147942414LL;
      v66 = 450LL;
      goto LABEL_69;
    }
    memset_0(v129, 0, v69 + 332);
    *(_DWORD *)v33 = 0;
    *((_DWORD *)v33 + 34) = a3;
    *((_DWORD *)v33 + 82) = 0;
    *((_DWORD *)v33 + 38) = 0;
    v71 = 0;
    if ( v135 )
    {
      while ( 1 )
      {
        v72 = *((_DWORD *)v33 + 82);
        if ( v72 > 0x1F )
          break;
        *((_DWORD *)v33 + 38) |= v63 << v72;
        *(_OWORD *)&v33[16 * *((unsigned int *)v33 + 82) + 332] = *(_OWORD *)(v136 + 16LL * v71);
        *((_DWORD *)v33 + 82) += v63;
        v71 += v63;
        if ( v71 >= v135 )
          goto LABEL_77;
      }
      v37 = -2147418113;
      v65 = 2147549183LL;
      v66 = 460LL;
      goto LABEL_69;
    }
LABEL_77:
    *((_DWORD *)v33 + 1) = 0;
    if ( *((_DWORD *)v33 + 82) > v68 )
    {
      v37 = -2147418113;
      v65 = 2147549183LL;
      v66 = 468LL;
      goto LABEL_69;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
  }
  v62 = (void **)&v136;
LABEL_85:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    v62,
    0LL);
LABEL_86:
  v74 = a7;
  *(_OWORD *)(v33 + 156) = *a7;
  *(_OWORD *)(v33 + 172) = *a8;
  *((_DWORD *)v33 + 2) = v36;
  v75 = a10;
  *((_QWORD *)v33 + 16) = a10;
  *((_DWORD *)v33 + 30) = *(unsigned __int16 *)(v75 + 16) + 18;
  *((_QWORD *)v33 + 3) = a12;
  *((_QWORD *)v33 + 4) = a13;
  *((_DWORD *)v33 + 3) = a9;
  *((_QWORD *)v33 + 2) = a15;
  v76 = &GUID_00000000_0000_0000_0000_000000000000;
  if ( a18 )
    v76 = a18;
  *((GUID *)v33 + 3) = *v76;
  v77 = *(_OWORD *)(a19 + 16);
  v78 = *(_OWORD *)(a19 + 32);
  v79 = *(_QWORD *)(a19 + 48);
  *((_OWORD *)v33 + 12) = *(_OWORD *)a19;
  *((_OWORD *)v33 + 13) = v77;
  *((_OWORD *)v33 + 14) = v78;
  *((_QWORD *)v33 + 30) = v79;
  *((_QWORD *)v33 + 14) = a20;
  v80 = a25;
  *((_DWORD *)v33 + 74) = a25;
  v81 = a26;
  if ( v80 != 2 )
    v81 = 0LL;
  *((_QWORD *)v33 + 38) = v81;
  *((_DWORD *)v33 + 78) = a27;
  *((_DWORD *)v33 + 68) = v146 == 1;
  *((_QWORD *)v33 + 40) = a14;
  *((GUID *)v33 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  v82 = a16;
  if ( a16
    && (*(_QWORD *)a16 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)(a16 + 8) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    *(_OWORD *)Size = *(_OWORD *)a16;
    ContainerProperty = GetContainerProperty((IID *)Size, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v33 + 4);
    v37 = ContainerProperty;
    if ( ContainerProperty < 0 )
    {
      v40 = (unsigned int)ContainerProperty;
      v38 = 507LL;
      goto LABEL_9;
    }
  }
  *((GUID *)v33 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  v84 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( v82 )
  {
    if ( *(_QWORD *)v82 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      || (v85 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4,
          *(_QWORD *)(v82 + 8) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
    {
      *(_OWORD *)Size = *(_OWORD *)v82;
      v86 = GetContainerProperty((IID *)Size, &PKEY_Audio_CPEventManager, (struct _GUID *)v33 + 5);
      v37 = v86;
      if ( v86 < 0 )
      {
        v40 = (unsigned int)v86;
        v38 = 514LL;
        goto LABEL_9;
      }
      v85 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      v84 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    }
  }
  else
  {
    v85 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  }
  if ( a17 && (*(_QWORD *)a17 != v84 || *(_QWORD *)(a17 + 8) != v85) )
    *((_OWORD *)v33 + 6) = *(_OWORD *)a17;
LABEL_108:
  v126 = 0LL;
  LODWORD(v125) = 0;
  v124 = 0LL;
  v127 = 0LL;
  *(_OWORD *)Size = *v74;
  ModeEffect = EffectPack::GetModeEffect((unsigned __int64)this[1], (__m128i *)Size, 0LL, v36, &v127, &v124, 0LL);
  v37 = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v88 = (unsigned int)ModeEffect;
    v89 = 528LL;
LABEL_110:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v89,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v88);
LABEL_111:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v124);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v126,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v127);
    goto LABEL_153;
  }
  if ( v127 )
  {
    v90 = *(_QWORD *)v127;
    Size[0] = (size_t)&v126;
    Size[1] = 0LL;
    v132 = 1;
    (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, size_t *))(v90 + 32))(v127, &v125, &Size[1]);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)Size);
  }
  if ( (a3 & 0x800000) == 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins>::GetImpl'::`2'::impl) )
    {
      if ( v146 || v36 && v36 != eKeywordDetectorConnector )
        goto LABEL_150;
      v91 = v147;
      if ( (unsigned int)(v147 - 2) <= 1 )
        goto LABEL_150;
      *(_OWORD *)Size = *v74;
      LOBYTE(v145) = EffectPack::CanProcessingModeBeParameterized(this[1], (struct _GUID *)Size, (unsigned int)v36);
      if ( !(_BYTE)v145
        && (memcmp_0(Buf1, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, 0x10uLL)
         || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this[1], v36, 0LL)) )
      {
        goto LABEL_150;
      }
      v92 = 1;
      if ( (unsigned int)v125 > 1 )
        v92 = v125;
      Size[0] = 16LL * v92 + 68;
      v93 = (char *)operator new[](Size[0], (const struct std::nothrow_t *)&std::nothrow);
      v94 = v93;
      v134 = v93;
      if ( !v93 )
      {
        v37 = -2147024882;
        v99 = 568LL;
LABEL_156:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v99,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v37);
        goto LABEL_157;
      }
      memset_0(v93, 0, Size[0]);
      *(_DWORD *)v94 = v91;
      *((_DWORD *)v94 + 1) = 0;
      *((_DWORD *)v94 + 16) = 0;
      v95 = 0;
      if ( (_DWORD)v125 )
      {
        v96 = 0;
        while ( v96 <= 0x1F )
        {
          *((_DWORD *)v94 + 8) |= 1 << v96;
          *(_OWORD *)&v94[16 * (*((_DWORD *)v94 + 16))++ + 68] = v126[v95];
          v96 = *((_DWORD *)v94 + 16);
          if ( ++v95 >= (unsigned int)v125 )
            goto LABEL_132;
        }
        v37 = -2147418113;
        v99 = 576LL;
        goto LABEL_156;
      }
LABEL_132:
      *(_OWORD *)(v94 + 36) = *v74;
      wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
        &v138);
      *((_DWORD *)v94 + 13) = v138 != 0;
      wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
        &v137);
      v97 = v137 != 0;
      *((_DWORD *)v94 + 14) = v97;
      if ( v97 )
      {
        wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation2>(
          (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
          v143);
        if ( v143[0] )
        {
          LODWORD(v133) = 0;
          v98 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v143[0] + 24LL))(v143[0], &v133);
          v37 = v98;
          if ( v98 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x256,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v98);
            wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(v143);
LABEL_136:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v137);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v138);
LABEL_157:
            v108 = (void **)&v134;
LABEL_158:
            std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(v108);
            goto LABEL_111;
          }
          *((_DWORD *)v94 + 15) = (unsigned __int8)v133 & 1;
        }
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>(v143);
      }
      if ( *((_DWORD *)v94 + 16) > v92 )
      {
        v37 = -2147418113;
        v100 = 607LL;
LABEL_142:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v100,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v37);
        goto LABEL_136;
      }
      v101 = a11;
      *((_QWORD *)v94 + 2) = a11;
      *((_DWORD *)v94 + 2) = *(unsigned __int16 *)(v101 + 16) + 18;
      v102 = (MODE_PARAMS *)operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v104 = v102;
      if ( !v102 )
      {
        v141 = 0LL;
        v37 = -2147024882;
        v100 = 612LL;
        goto LABEL_142;
      }
      v141 = v102;
      *(_OWORD *)v102 = 0LL;
      if ( (_BYTE)v145 )
      {
        v145 = 0LL;
        *(_OWORD *)Size = *v74;
        Watcher = AudioModeEffectsWatcherFactory::GetWatcher(
                    (RTL_SRWLOCK *)this,
                    (struct EndpointCharacteristicsDescriptor *)Size,
                    (struct _GUID *)v102,
                    v103);
        v37 = Watcher;
        if ( Watcher < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x26A,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)Watcher);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
          goto LABEL_136;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
      }
      std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
        (void **)v104 + 1,
        (void **)&v134);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v137);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v138);
      v106 = (void **)&v134;
LABEL_149:
      std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(v106);
      goto LABEL_150;
    }
    if ( v146 )
      goto LABEL_150;
    if ( (v36 & 0xFFFFFFFC) != 0 )
      goto LABEL_150;
    if ( v36 == eLoopbackConnector )
      goto LABEL_150;
    v109 = v147;
    if ( (unsigned int)(v147 - 2) <= 1 )
      goto LABEL_150;
    *(_OWORD *)Size = *v74;
    LOBYTE(v145) = EffectPack::CanProcessingModeBeParameterized(this[1], (struct _GUID *)Size, (unsigned int)v36);
    if ( !(_BYTE)v145
      && (memcmp_0(Buf1, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, 0x10uLL)
       || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this[1], v36, 0LL)) )
    {
      goto LABEL_150;
    }
    v110 = 1;
    if ( (unsigned int)v125 > 1 )
      v110 = v125;
    Size[0] = 16LL * v110 + 68;
    v111 = (char *)operator new[](Size[0], (const struct std::nothrow_t *)&std::nothrow);
    v112 = v111;
    v133 = v111;
    if ( !v111 )
    {
      v37 = -2147024882;
      v117 = 650LL;
LABEL_192:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v117,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v37);
      goto LABEL_193;
    }
    memset_0(v111, 0, Size[0]);
    *(_DWORD *)v112 = v109;
    *((_DWORD *)v112 + 1) = 0;
    *((_DWORD *)v112 + 16) = 0;
    v113 = 0;
    if ( (_DWORD)v125 )
    {
      v114 = 0;
      while ( v114 <= 0x1F )
      {
        *((_DWORD *)v112 + 8) |= 1 << v114;
        *(_OWORD *)&v112[16 * (*((_DWORD *)v112 + 16))++ + 68] = v126[v113];
        v114 = *((_DWORD *)v112 + 16);
        if ( ++v113 >= (unsigned int)v125 )
          goto LABEL_173;
      }
      v37 = -2147418113;
      v117 = 658LL;
      goto LABEL_192;
    }
LABEL_173:
    *(_OWORD *)(v112 + 36) = *v74;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
      &v140);
    *((_DWORD *)v112 + 13) = v140 != 0;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
      &v139);
    v115 = v139 != 0;
    *((_DWORD *)v112 + 14) = v115;
    if ( v115 )
    {
      wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation2>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v124,
        Size);
      if ( Size[0] )
      {
        LODWORD(v134) = 0;
        v116 = (*(__int64 (__fastcall **)(size_t, char **))(*(_QWORD *)Size[0] + 24LL))(Size[0], &v134);
        v37 = v116;
        if ( v116 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A8,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v116);
          wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)Size);
          goto LABEL_177;
        }
        *((_DWORD *)v112 + 15) = (unsigned __int8)v134 & 1;
      }
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)Size);
    }
    if ( *((_DWORD *)v112 + 16) <= v110 )
    {
      v119 = a11;
      *((_QWORD *)v112 + 2) = a11;
      *((_DWORD *)v112 + 2) = *(unsigned __int16 *)(v119 + 16) + 18;
      v120 = (MODE_PARAMS *)operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v122 = v120;
      if ( v120 )
      {
        v141 = v120;
        *(_OWORD *)v120 = 0LL;
        if ( (_BYTE)v145 )
        {
          v145 = 0LL;
          *(_OWORD *)v143 = *v74;
          v123 = AudioModeEffectsWatcherFactory::GetWatcher(
                   (RTL_SRWLOCK *)this,
                   (struct EndpointCharacteristicsDescriptor *)v143,
                   (struct _GUID *)v120,
                   v121);
          v37 = v123;
          if ( v123 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2BC,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v123);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
            goto LABEL_177;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v145);
        }
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
          (void **)v122 + 1,
          (void **)&v133);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v139);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v140);
        v106 = (void **)&v133;
        goto LABEL_149;
      }
      v141 = 0LL;
      v37 = -2147024882;
      v118 = 694LL;
    }
    else
    {
      v37 = -2147418113;
      v118 = 689LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v118,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v37);
LABEL_177:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v139);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v140);
LABEL_193:
    v108 = (void **)&v133;
    goto LABEL_158;
  }
  if ( v146 )
  {
    v37 = -2147418113;
    v88 = 2147549183LL;
    v89 = 538LL;
    goto LABEL_110;
  }
LABEL_150:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v124);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v126,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v127);
  if ( a28 )
  {
    v129 = 0LL;
    *a28 = v33;
  }
  std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>(a29, &v141);
  v37 = 0;
LABEL_153:
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v141);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v129,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v142);
  return v37;
}
