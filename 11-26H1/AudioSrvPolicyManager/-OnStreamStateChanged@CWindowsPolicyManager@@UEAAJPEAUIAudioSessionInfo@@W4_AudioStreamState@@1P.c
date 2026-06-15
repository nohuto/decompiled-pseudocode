/*
 * XREFs of ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x1800465F0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800467D0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180008570 (_lambda_78bc9aa717e0c7ae8337a2b0ddd14613_--__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000C0C0 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  struct IAudioStreamInfo *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  volatile int *v13; // rdx
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+28h] [rbp-31h] BYREF
  __int64 v22; // [rsp+30h] [rbp-29h] BYREF
  volatile signed __int32 *v23; // [rsp+38h] [rbp-21h] BYREF
  struct IAudioStreamInfo *v24; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v26[9]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  __int64 v28; // [rsp+B8h] [rbp+5Fh] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)a1 + 3) + 16LL) )
  {
    if ( a4 == 1 )
    {
      v20 = CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
      v8 = v20;
      if ( v20 < 0 )
      {
        v18 = (unsigned int)v20;
        v19 = 32LL;
        goto LABEL_36;
      }
    }
    else if ( !a4 )
    {
      v5 = a5;
      v24 = a5;
      if ( a5 )
        (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 8LL))(a5);
      v6 = *(_QWORD *)v5;
      v21 = 0LL;
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 32))(v5, &v21);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v7,
          v21);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 16LL))(v5);
        goto LABEL_35;
      }
      v23 = 0LL;
      v9 = *(_QWORD *)v5;
      v28 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v9 + 24))(v5, &v28);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F6,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v10,
          v21);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      else
      {
        v22 = 0LL;
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v28)(
                v28,
                &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
                &v22);
        v8 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F9,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)(unsigned int)v11,
            v21);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v22 + 24LL))(v22, &v23);
          v8 = v12;
          if ( v12 >= 0 )
          {
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            v14 = v23;
            if ( v23 )
              Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v23 + 5), v13);
            v15 = v21;
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
            (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 8LL))(v5);
            v26[0] = off_180053050;
            memset(v25, 0, sizeof(v25));
            v26[1] = v14;
            v26[2] = v15;
            v26[3] = v5;
            v26[7] = v26;
            v8 = QueueGenericWorkItem(v26);
            lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_((__int64)v25);
            if ( (v8 & 0x80000000) == 0 )
            {
              if ( v23 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v23);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 16LL))(v5);
              return 0;
            }
            v17 = 90LL;
            goto LABEL_34;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FB,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)(unsigned int)v12,
            v21);
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      v17 = 85LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)v8,
        v21);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
LABEL_35:
      v18 = v8;
      v19 = 36LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)v18,
        v21);
      return v8;
    }
  }
  return 0;
}
