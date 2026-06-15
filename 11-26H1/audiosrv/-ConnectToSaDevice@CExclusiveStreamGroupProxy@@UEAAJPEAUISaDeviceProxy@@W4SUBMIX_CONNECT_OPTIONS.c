/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180044F00 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180061EB0 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x18006847C (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180078D50 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     ??0SystemAudioStream@@QEAA@$$QEAU0@@Z @ 0x1800F95C8 (--0SystemAudioStream@@QEAA@$$QEAU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(
        CBaseStreamGroupProxy *this,
        __int64 *a2,
        unsigned int a3,
        __int64 **a4,
        SystemAudioStream *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  _QWORD *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  struct AudioSrvTelemetryProvider *v18; // rax
  int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v26; // [rsp+170h] [rbp+70h]
  __int64 v27; // [rsp+178h] [rbp+78h]
  _BYTE v28[1264]; // [rsp+660h] [rbp+560h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B98h] [rbp+A98h]

  v5 = *a2;
  v21 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 56);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  v11 = v10(a2, &v21);
  v12 = v11;
  if ( v11 >= 0 )
  {
    SystemAudioStream::SystemAudioStream((__int64)v25, (__int64)a5);
    v13 = RpcImpersonateClient(0LL);
    if ( v13 )
    {
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x8D4,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)v13);
    }
    else
    {
      AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v23, a4);
      v22 = AudioPumpDspResourceTokenFromTokenList[1];
      v15 = v22;
      AudioPumpDspResourceTokenFromTokenList[1] = 0LL;
      AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v23);
      memset_0(v28, 0, 0x4E8uLL);
      v16 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, _QWORD, _BYTE *))(*(_QWORD *)v21 + 56LL))(
              v21,
              (char *)this + 376,
              0LL,
              v15,
              *((_QWORD *)this + 91),
              v28);
      v12 = v16;
      if ( v16 >= 0 )
      {
        v16 = SystemAudioStream::move_initialize_from(a5, 0xFFFFFFFF, (struct SYSTEM_AUDIO_STREAM *)v28);
        v12 = v16;
        if ( v16 >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
          RpcRevertToSelf();
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)a5 + 5, v27);
          *((_QWORD *)a5 + 4) = v26;
          v18 = AudioSrvTelemetryProvider::Instance();
          CPerfTracker::CPerfTracker(
            &PerformanceCount,
            *((const struct _tlgProvider_t **)v18 + 1),
            "ExclusiveStreamGroup_ConnectToDeviceGraph",
            0LL);
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
                  *((_QWORD *)this + 13),
                  v21,
                  a3);
          v12 = v19;
          if ( v19 >= 0 )
          {
            CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)this + 14, (__int64)a2);
            CBaseStreamGroupProxy::ConnectToSaDevice_Base(this);
            SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v25);
            v12 = 0;
            goto LABEL_14;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E7,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v19);
          CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
          goto LABEL_5;
        }
        v17 = 2269LL;
      }
      else
      {
        v17 = 2266LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
      RpcRevertToSelf();
    }
LABEL_5:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v25);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8CC,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v11);
LABEL_14:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  return v12;
}
