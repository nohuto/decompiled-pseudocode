/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90
 * Callers:
 *     AudioServerCreateStream @ 0x1801149A0 (AudioServerCreateStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001C818 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180044F00 (--1SystemAudioStream@@QEAA@XZ.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x18004EF20 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18005EB58 (-move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x180066898 (-StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800677F8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x1800876BC (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  struct SYSTEM_AUDIO_STREAM *v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  char *v15; // rcx
  int EndpointCharacteristicsDescriptor; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 v22; // rsi
  _DWORD *v23; // rcx
  int v24; // edx
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  struct CAudioStream *v30; // rax
  unsigned __int8 started; // al
  __int64 v32; // rcx
  __int64 v33; // r8
  bool v34[8]; // [rsp+100h] [rbp-80h] BYREF
  struct CAudioStream *v35; // [rsp+108h] [rbp-78h] BYREF
  __int128 v36; // [rsp+110h] [rbp-70h] BYREF
  __int64 v37; // [rsp+120h] [rbp-60h]
  __int64 v38; // [rsp+128h] [rbp-58h] BYREF
  int v39[2]; // [rsp+130h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+138h] [rbp-48h] BYREF
  __int64 v41; // [rsp+140h] [rbp-40h]
  __int64 v42; // [rsp+148h] [rbp-38h]
  __int128 v43; // [rsp+150h] [rbp-30h] BYREF
  int v44; // [rsp+160h] [rbp-20h]
  __int64 v45; // [rsp+168h] [rbp-18h]
  __int64 v46; // [rsp+170h] [rbp-10h]
  __int64 v47; // [rsp+178h] [rbp-8h]
  __int64 v48; // [rsp+180h] [rbp+0h]
  __int64 v49; // [rsp+2B0h] [rbp+130h]
  __int64 v50; // [rsp+3E0h] [rbp+260h]
  int v51; // [rsp+510h] [rbp+390h]
  __int64 v52; // [rsp+518h] [rbp+398h]
  __int64 v53; // [rsp+648h] [rbp+4C8h]
  __int64 v54; // [rsp+650h] [rbp+4D0h]
  struct _RTL_CRITICAL_SECTION *v55[2]; // [rsp+660h] [rbp+4E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6C8h] [rbp+548h]
  unsigned int v57; // [rsp+6E0h] [rbp+560h] BYREF

  v57 = a3;
  v42 = a4;
  v55[0] = a2;
  v40 = a2;
  v41 = a6;
  v10 = a7;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      a1,
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 192),
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 324),
      *(_DWORD *)(a1 + 308));
  v36 = 0LL;
  v37 = 0LL;
  memset_0(v10, 0, 0x4E8uLL);
  if ( !*(_DWORD *)(a1 + 160) )
  {
    v11 = -2004287487;
    v12 = 1511LL;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    v11 = -2004287486;
    v12 = 1512LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v36);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      goto LABEL_42;
    return v11;
  }
  if ( a3 > 3
    || ((v14 = *(unsigned int *)(a1 + 304), a3) || !dword_180193B60[3 * v14])
    && (a3 != 1 || !dword_180193B60[3 * v14 + 1])
    && ((v15 = (char *)&dword_180193B60[3 * v14], a3 != 2) || !*((_DWORD *)v15 + 2))
    && (a3 != 3 || !*((_DWORD *)v15 + 2)) )
  {
    v11 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v36);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
LABEL_42:
      McGenEventWrite_EtwEventWriteTransfer(
        (__int64)v55,
        (__int64)&VadServer_CreateStream_Task_Stop,
        v13,
        1,
        (__int64)v55);
    return v11;
  }
  v35 = 0LL;
  v38 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)v39 = a1 + 256;
  v34[0] = *(_DWORD *)(a1 + 240) == 1;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v35);
  EndpointCharacteristicsDescriptor = Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
                                        &v35,
                                        (__int64 *)&v40,
                                        v34,
                                        (int *)(a1 + 244),
                                        (__int64 *)v39,
                                        (int *)&v57,
                                        (__int64 *)(a1 + 152),
                                        &v38);
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v17 = 1519LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v36);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v18, (__int64)&VadServer_CreateStream_Task_Stop, v19, 1, (__int64)v55);
    return (unsigned int)EndpointCharacteristicsDescriptor;
  }
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        *(const unsigned __int16 **)(a1 + 192),
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v36);
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v17 = 1522LL;
    goto LABEL_20;
  }
  v21 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *))a2->DebugInfo[2].ProcessLocksList.Blink)(a2);
  v22 = *(unsigned int *)(a1 + 304);
  v23 = &unk_18018B570;
  if ( a3 - 1 <= 2 )
    v23 = &unk_18018B5D0;
  v24 = v23[v22];
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v25 = v42;
  v11 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct _RTL_CRITICAL_SECTION *, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, __int64, _DWORD, __int64, int, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *))(*(_QWORD *)g_AudioResourceManager + 24LL))(
          g_AudioResourceManager,
          v55[0],
          ((unsigned __int64)v35 + 8) & -(__int64)(v35 != 0LL),
          (unsigned int)v22,
          *(_DWORD *)(a1 + 312),
          *(_DWORD *)(a1 + 384),
          *(_DWORD *)(a1 + 320),
          *(_DWORD *)(a1 + 324),
          *(_DWORD *)(a1 + 388),
          *(_DWORD *)(a1 + 400),
          *(_QWORD *)(a1 + 408),
          &v36,
          *(_DWORD *)(a1 + 244),
          *(_DWORD *)(a1 + 240),
          v35,
          *(_QWORD *)(a1 + 152),
          v42,
          a5,
          a1 + 272,
          a1 + 288,
          a1 + 256,
          *(_DWORD *)(a1 + 40),
          v41,
          2 * (v24 + (v21 != 0 ? 0x10 : 0)) + 1,
          a1 + 328,
          *(_DWORD *)(a1 + 416),
          *(_QWORD *)(a1 + 424),
          *(_DWORD *)(a1 + 436),
          *(_QWORD *)(a1 + 496),
          &v43);
  if ( (v11 & 0x80000000) != 0 )
  {
    if ( v46 )
      CAudioStream::CloseAudioHandle(v35);
    goto LABEL_30;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, struct CAudioStream *))(**(_QWORD **)(a1 + 144) + 216LL))(
          *(_QWORD *)(a1 + 144),
          v35);
  v11 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v28);
    if ( v46 )
      CAudioStream::CloseAudioHandle(v35);
    goto LABEL_30;
  }
  v29 = SystemAudioStream::move_to((SystemAudioStream *)&v43, v10);
  v11 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x632,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v29);
    CAudioSession::RemoveStream(*(CAudioSession **)(a1 + 144), v35, 1);
LABEL_30:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v36);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v26, (__int64)&VadServer_CreateStream_Task_Stop, v27, 1, (__int64)v55);
    return v11;
  }
  v30 = v35;
  *((_QWORD *)v10 + 5) = *((_QWORD *)v35 + 49);
  *(_QWORD *)(a1 + 544) = *((_QWORD *)v30 + 49);
  started = StreamRequiresPreStartRegistration((struct IAudioStreamInfo *)(((unsigned __int64)v30 + 8) & -(__int64)(v30 != 0LL)));
  *(_BYTE *)(a1 + 512) = started;
  *((_DWORD *)v10 + 235) = started;
  *(_QWORD *)(a1 + 528) = v25;
  *(_QWORD *)(a1 + 536) = a5;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v55[0] = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 176), (__int64 *)&v35);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v55);
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v43);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v36);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v32, (__int64)&VadServer_CreateStream_Task_Stop, v33, 1, (__int64)v55);
  return 0LL;
}
