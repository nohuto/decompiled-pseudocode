/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180007FB0
 * Callers:
 *     <none>
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
__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  struct IAudioStreamInfo *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  volatile int *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // [rsp+28h] [rbp-31h] BYREF
  __int64 v21; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-21h] BYREF
  struct IAudioStreamInfo *v23; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v25[9]; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  __int64 v27; // [rsp+B8h] [rbp+5Fh] BYREF

  if ( *((_BYTE *)a1 + 16) )
    return 0LL;
  if ( a4 != 1 )
  {
    if ( !a4 )
    {
      v5 = a5;
      v23 = a5;
      if ( a5 )
        (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 8LL))(a5);
      v6 = *(_QWORD *)v5;
      v20 = 0LL;
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 32))(v5, &v20);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v7,
          v20);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 16LL))(v5);
        goto LABEL_34;
      }
      v22 = 0LL;
      v9 = *(_QWORD *)v5;
      v27 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v9 + 24))(v5, &v27);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F6,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v10,
          v20);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      else
      {
        v21 = 0LL;
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
                v27,
                &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
                &v21);
        v8 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F9,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)(unsigned int)v11,
            v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v22);
          v8 = v12;
          if ( v12 >= 0 )
          {
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            v14 = v22;
            if ( v22 )
              Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v22 + 20), v13);
            v15 = v20;
            if ( v20 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
            (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 8LL))(v5);
            v25[0] = off_180053050;
            memset(v24, 0, sizeof(v24));
            v25[1] = v14;
            v25[2] = v15;
            v25[3] = v5;
            v25[7] = v25;
            v8 = QueueGenericWorkItem(v25);
            lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_(v24);
            if ( (v8 & 0x80000000) == 0 )
            {
              if ( v22 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release();
              if ( v20 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v5 + 16LL))(v5);
              return 0LL;
            }
            v17 = 90LL;
            goto LABEL_33;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FB,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)(unsigned int)v12,
            v20);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      v17 = 85LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)v8,
        v20);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v22);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)v8,
        v20);
      return v8;
    }
    return 0LL;
  }
  v18 = CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
    (const char *)(unsigned int)v18,
    v20);
  return v19;
}
