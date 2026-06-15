/*
 * XREFs of ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x1800D35B4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x1800D3024 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall AudioSessionManagerProvider::Initialize(AudioSessionManagerProvider *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  __int64 (__fastcall **v5)(_QWORD, _QWORD, _QWORD); // rax
  int v6; // eax
  int v7; // eax
  struct IAudioDuckingManager *v8; // rax
  struct IAudioPolicyManager *v9; // rax
  struct ISessionInternalEvents *v10; // rax
  DynamicAudioEndpointManager *v11; // rax
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  struct IAudioPolicyManager *v15; // [rsp+50h] [rbp+18h] BYREF
  struct IAudioDuckingManager *v16; // [rsp+58h] [rbp+20h] BYREF
  struct ISessionInternalEvents *v17; // [rsp+60h] [rbp+28h] BYREF
  DynamicAudioEndpointManager *v18; // [rsp+68h] [rbp+30h] BYREF

  v13[0] = 0LL;
  v1 = (**(__int64 (__fastcall ***)(struct IAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
         g_AudioResourceManager,
         &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
         v13);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v15 = 0LL;
    v3 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v13[0], &v15);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v17 = 0LL;
      v4 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))v15)(
             v15,
             &GUID_a68ab569_b923_4330_a258_1735412d392e,
             (__int64 *)&v17);
      v2 = v4;
      if ( v4 >= 0 )
      {
        v16 = 0LL;
        v5 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
        v16 = 0LL;
        v6 = ((__int64 (__fastcall *)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))v5[3])(v15, &v16);
        v2 = v6;
        if ( v6 >= 0 )
        {
          v18 = 0LL;
          v7 = Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(&v18);
          v2 = v7;
          if ( v7 >= 0 )
          {
            v8 = v16;
            v16 = 0LL;
            g_DuckingManager = v8;
            v9 = v15;
            v15 = 0LL;
            g_PolicyManager = v9;
            v10 = v17;
            v17 = 0LL;
            g_PolicyEventsHandler = v10;
            v11 = v18;
            v18 = 0LL;
            g_DynamicAudioEndpointManager = v11;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
            v2 = 0;
            goto LABEL_15;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            (const char *)(unsigned int)v7);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            (const char *)(unsigned int)v6);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v4);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v1);
  }
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
  return v2;
}
