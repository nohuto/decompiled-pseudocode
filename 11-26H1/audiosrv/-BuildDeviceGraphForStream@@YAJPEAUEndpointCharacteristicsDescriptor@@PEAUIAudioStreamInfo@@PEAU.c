/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEAUStreamGroupParams@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@KPEAUIProcessSubmixProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800C55FC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18006784C (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x18006847C (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180079E08 (--1-$out_param_t@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@w.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180079FA8 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x18007A1F0 (--1-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        int a11,
        __int64 a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // [rsp+50h] [rbp-81h] BYREF
  __int64 v34; // [rsp+58h] [rbp-79h] BYREF
  char v35; // [rsp+61h] [rbp-70h]
  __int64 *v36; // [rsp+68h] [rbp-69h] BYREF
  unsigned int *v37; // [rsp+70h] [rbp-61h] BYREF
  int v38[2]; // [rsp+78h] [rbp-59h] BYREF
  char v39; // [rsp+80h] [rbp-51h]
  __int64 v40; // [rsp+88h] [rbp-49h]
  __int64 v41; // [rsp+90h] [rbp-41h]
  char v42; // [rsp+98h] [rbp-39h]
  __int64 v43; // [rsp+A0h] [rbp-31h]
  unsigned int v44[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]

  v34 = a4;
  v41 = a1;
  v45 = a12;
  v40 = a15;
  v43 = a16;
  if ( (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x8000000) != 0 && a6 >= 0 )
  {
    v20 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v20;
  }
  v36 = 0LL;
  v17 = DeriveProcessSubmixParametersForStream(a3, a6, a5, a11, (__int64)a10, (__int64 *)&v36);
  v20 = v17;
  if ( v17 >= 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v18,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v19,
        1,
        (__int64)v44);
    v33 = 0LL;
    if ( a14 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v33, a14);
    }
    else
    {
      *(_QWORD *)v44 = 0LL;
      v21 = *(_QWORD *)g_DeviceGraphManager;
      v37 = v44;
      *(_QWORD *)v38 = 0LL;
      v39 = 1;
      v22 = v40;
      v20 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _QWORD *, unsigned int, __int64, __int64, int *))(v21 + 48))(
              g_DeviceGraphManager,
              v41,
              v34,
              a10,
              a13,
              v40,
              a9,
              v38);
      wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>((__int64 **)&v37);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4BC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v20);
LABEL_13:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v44);
LABEL_14:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
        goto LABEL_34;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v33, *(__int64 *)v44);
      if ( v36 )
      {
        v34 = 0LL;
        v23 = **(_QWORD **)v44;
        v37 = (unsigned int *)&v34;
        *(_QWORD *)v38 = 0LL;
        v39 = 1;
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64, int *))(v23 + 312))(
                *(_QWORD *)v44,
                v36,
                a13,
                v22,
                v38);
        wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>((__int64 **)&v37);
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C5,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
          goto LABEL_13;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v33, v34);
        *(_DWORD *)(a8 + 188) = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v44);
    }
    v24 = RpcImpersonateClient(0LL);
    if ( v24 )
    {
      v20 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x4D5,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v24);
    }
    else
    {
      v35 = 1;
      *(_QWORD *)(a8 + 144) = *a10;
      v41 = a8;
      v42 = 1;
      v25 = v33;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 88LL))(v33, a8 + 276);
      if ( a9 )
      {
        *(_DWORD *)(a8 + 280) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a9 + 8) + 16LL) + 16LL) + 18;
        *(_QWORD *)(a8 + 288) = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 16LL);
      }
      else
      {
        v26 = a10[2];
        if ( v26 )
        {
          *(_DWORD *)(a8 + 280) = *(unsigned __int16 *)(v26 + 16) + 18;
          *(_QWORD *)(a8 + 288) = a10[2];
        }
      }
      v27 = v43;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
              v25,
              a2,
              a8,
              v45,
              a13,
              v40,
              v43);
      v20 = v28;
      if ( v28 >= 0 )
      {
        *(_DWORD *)(v27 + 1284) = a10[10] != 0LL;
        v29 = a2 - 8;
        if ( !a2 )
          v29 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v29 + 48LL))(v29, a10, a9);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v30,
            (__int64)&AudioResourceManager_Stream_Created,
            v31,
            1,
            (__int64)&v45);
        *(_QWORD *)(a8 + 144) = 0LL;
        RpcRevertToSelf();
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
        v20 = 0;
        goto LABEL_34;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v28);
      *(_QWORD *)(a8 + 144) = 0LL;
      RpcRevertToSelf();
    }
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B3,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v17);
LABEL_34:
  std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(&v36);
  return (unsigned int)v20;
}
