/*
 * XREFs of ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000C0C0
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180007FB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  signed __int32 i; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  struct IAudioStreamInfo *v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  CPlaybackManager *v20; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+30h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+38h] BYREF
  volatile signed __int32 *v23; // [rsp+B8h] [rbp+40h] BYREF

  v20 = this;
  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = *(_QWORD *)a2;
  v21 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v3 + 32))(a2, &v21);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v23 = 0LL;
    v6 = *(_QWORD *)a2;
    v20 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, CPlaybackManager **))(v6 + 24))(a2, &v20);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F6,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v7,
        (int)v17);
      if ( v20 )
        (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    else
    {
      v22 = 0LL;
      v9 = (**(__int64 (__fastcall ***)(CPlaybackManager *, GUID *, __int64 *))v20)(
             v20,
             &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
             &v22);
      v8 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F9,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v9,
          (int)v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v22 + 24LL))(v22, &v23);
        v8 = v10;
        if ( v10 >= 0 )
        {
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          if ( v20 )
            (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v20 + 16LL))(v20);
          v11 = v23;
          if ( v23 )
          {
            for ( i = *((_DWORD *)v23 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v11 + 5) )
            {
              if ( i == _InterlockedCompareExchange(v11 + 5, i + 1, i) )
                break;
            }
          }
          v13 = v21;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
          v18[0] = (__int64)off_180052A80;
          v18[1] = (__int64)v11;
          v18[2] = v13;
          v18[3] = (__int64)a2;
          v18[7] = (__int64)v18;
          v14 = QueueGenericWorkItem(v18);
          v15 = v14;
          if ( v14 >= 0 )
          {
            wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v23);
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
              (const char *)(unsigned int)v14,
              (int)v17);
            if ( v23 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v23);
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
            return v15;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FB,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)v10,
          (int)v17);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v20 )
          (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)v8,
      (int)v17);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
    (const char *)(unsigned int)v4,
    (int)v17);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
  return v5;
}
