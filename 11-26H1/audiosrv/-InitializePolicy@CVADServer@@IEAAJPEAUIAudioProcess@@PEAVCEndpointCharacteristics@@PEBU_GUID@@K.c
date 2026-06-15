/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001E598 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180016D50 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180017BC0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180018350 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180029710 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18006C57C (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180086088 (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x18010B960 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        struct CEndpointCharacteristics *a3,
        const struct _GUID *a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  unsigned int v10; // ebx
  int v11; // esi
  char *v12; // r12
  int v13; // edi
  int v14; // r14d
  int v15; // ebx
  char *v17; // r13
  unsigned int AudioSession; // esi
  int v19; // eax
  unsigned int v20; // ebx
  char *v21; // rdi
  __int64 v22; // rbx
  unsigned __int16 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int16 v26; // cx
  CEndpointStoreCache *v27; // rcx
  void *v28; // rbx
  HANDLE ProcessHeap; // rax
  struct IAudioProcess *v30; // rbx
  __int64 v31; // rax
  const void *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r14
  char *v37; // rcx
  size_t v38; // r8
  int EndpointStore; // eax
  struct CEndpointStore *v40; // rbx
  void (__fastcall *v41)(struct IAudioDuckingManager *, _QWORD); // rsi
  unsigned int v42; // eax
  unsigned int v43; // esi
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // edx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v47; // r8d
  int OwningThread; // ebx
  __int64 v49; // rdx
  void *v50; // rbx
  HANDLE v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  const void *v54; // rdi
  __int64 v55; // rbx
  char *v56; // rdx
  char *v57; // rcx
  size_t v58; // r8
  char *v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // r15
  struct CEndpointStore *v63; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v64; // [rsp+48h] [rbp-31h]
  char *v65; // [rsp+50h] [rbp-29h] BYREF
  __int128 Buf1; // [rsp+58h] [rbp-21h] BYREF
  __int128 v67; // [rsp+68h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  int v71; // [rsp+E0h] [rbp+67h]
  unsigned int v73; // [rsp+F0h] [rbp+77h]

  if ( g_ADGProcess
    && (OwningThread = (int)g_ADGProcess[2].OwningThread,
        OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2)) )
  {
    v10 = a5 | 0x20000000;
  }
  else
  {
    v10 = a5;
  }
  v67 = (__int128)*a4;
  Buf1 = v67;
  if ( memcmp_0(&Buf1, &GUID_SystemSounds_AudioSessionId, 0x10uLL) )
    v10 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  v71 = v10 & 0x10000;
  v64 = v10 & 0x60000000;
  v11 = (v10 >> 28) & 1;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3)
    && (v10 & 0x20000) != 0
    && ((*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 504LL))(a2)
     || CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(a3)) )
  {
    v10 |= 0x80000000;
  }
  if ( (v10 & 0xA0000) == 0 )
    v11 |= 2u;
  v73 = v11;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    v11 |= 8u;
    v73 = v11;
    *((_BYTE *)this + 248) = 0;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) == 1 )
  {
    v11 &= ~2u;
    v73 = v11;
    if ( !*((_BYTE *)a3 + 8236) )
      *((_BYTE *)this + 248) = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (v10 & 0x2000000) != 0 )
    v73 = v11 | 0x20;
  *((_DWORD *)this + 61) = v10;
  v12 = (char *)this + 48;
  v65 = (char *)this + 48;
  v13 = v71;
  v14 = v71 != 0;
  LODWORD(v63) = v14;
  v15 = CAudioEndpointId::Initialize((CVADServer *)((char *)this + 48), *((const unsigned __int16 **)this + 24));
  if ( v15 < 0 )
    goto LABEL_13;
  v17 = (char *)this + 56;
  AudioSession = -2147024809;
  if ( !v71 )
  {
    *(_OWORD *)((char *)this + 72) = v67;
    v30 = a2;
    v31 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    v32 = (const void *)v31;
    if ( v31 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( *(_WORD *)(v31 + 2 * v33) );
      if ( (_DWORD)v33 )
      {
        v34 = *((_QWORD *)this + 8);
        v35 = *(unsigned int *)(v34 - 16);
        v36 = ((__int64)v32 - v34) >> 1;
        if ( (int)((*(_DWORD *)(v34 - 12) - v33) | (1 - *(_DWORD *)(v34 - 8))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v12 + 16, (unsigned int)v33);
        v37 = (char *)*((_QWORD *)v12 + 2);
        v38 = 2LL * (int)v33;
        if ( v36 <= v35 )
        {
          v56 = &v37[2 * v36];
          if ( v38 )
          {
            if ( !v37 || !v56 )
            {
LABEL_53:
              *(_DWORD *)_o__errno(v37) = 22;
              invalid_parameter_noinfo();
              goto LABEL_85;
            }
            memmove_0(v37, v56, v38);
          }
        }
        else
        {
          if ( !v38 )
            goto LABEL_85;
          if ( !v37 )
            goto LABEL_53;
          memcpy_0(v37, v32, v38);
        }
LABEL_85:
        if ( (int)v33 < 0 )
          goto LABEL_68;
        v52 = *((_QWORD *)v17 + 1);
        if ( (int)v33 > *(_DWORD *)(v52 - 12) )
          goto LABEL_68;
        *(_DWORD *)(v52 - 16) = v33;
        *(_WORD *)(*((_QWORD *)v17 + 1) + 2LL * (int)v33) = 0;
        v14 = (int)v63;
        v12 = v65;
        v30 = a2;
LABEL_88:
        v53 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v30 + 80LL))(v30);
        v54 = (const void *)v53;
        if ( !v53 )
          goto LABEL_92;
        v55 = -1LL;
        do
          ++v55;
        while ( *(_WORD *)(v53 + 2 * v55) );
        if ( !(_DWORD)v55 )
        {
LABEL_92:
          v17 = v12 + 8;
          ATL::CSimpleStringT<unsigned short,0>::Empty(v12 + 8);
          goto LABEL_22;
        }
        v17 = v12 + 8;
        v60 = *((_QWORD *)v12 + 1);
        v61 = *(unsigned int *)(v60 - 16);
        v62 = ((__int64)v54 - v60) >> 1;
        if ( (int)((*(_DWORD *)(v60 - 12) - v55) | (1 - *(_DWORD *)(v60 - 8))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v17, (unsigned int)v55);
        v57 = *(char **)v17;
        v58 = 2LL * (int)v55;
        if ( v62 > v61 )
        {
          if ( v58 )
          {
            if ( !v57 )
            {
LABEL_102:
              *(_DWORD *)_o__errno(v57) = 22;
              invalid_parameter_noinfo();
              goto LABEL_19;
            }
            memcpy_0(v57, v54, v58);
          }
LABEL_19:
          if ( (int)v55 >= 0 && (int)v55 <= *(_DWORD *)(*(_QWORD *)v17 - 12LL) )
          {
            *(_DWORD *)(*(_QWORD *)v17 - 16LL) = v55;
            *(_WORD *)(*(_QWORD *)v17 + 2LL * (int)v55) = 0;
            v14 = (int)v63;
            v12 = v65;
LABEL_22:
            v13 = v71;
            goto LABEL_23;
          }
LABEL_68:
          ATL::AtlThrowImpl(-2147024809);
        }
        v59 = &v57[2 * v62];
        if ( !v58 )
          goto LABEL_19;
        if ( v57 && v59 )
        {
          memmove_0(v57, v59, v58);
          goto LABEL_19;
        }
        goto LABEL_102;
      }
      v30 = a2;
    }
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 64);
    goto LABEL_88;
  }
  if ( memcmp_0(&Buf1, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
  {
    *(_OWORD *)((char *)this + 72) = v67;
LABEL_23:
    *((_DWORD *)v17 + 10) = v14;
    v15 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)v17);
    if ( v15 >= 0 )
      goto LABEL_24;
    goto LABEL_17;
  }
  v15 = -2147024809;
LABEL_17:
  AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v15);
LABEL_24:
  if ( v15 < 0
    || ((*((_DWORD *)v12 + 16) = v14, !v13)
      ? (*((_DWORD *)v12 + 14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2))
      : (*((_DWORD *)v12 + 14) = 0),
        *((_DWORD *)v12 + 15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2),
        v15 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v12),
        v15 < 0) )
  {
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v15);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  v65 = (char *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v19 = CAudioSessionInstanceId::ToString(v12, &v65);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v19);
    ATL::CStringData::Release((ATL::CStringData *)(v65 - 24));
    return v20;
  }
  v21 = v65;
  v22 = (unsigned int)(*((_DWORD *)v65 - 4) + 1);
  if ( (unsigned __int64)(2 * v22) > 0x40000 )
  {
    *a6 = 0LL;
    goto LABEL_93;
  }
  v23 = (unsigned __int16 *)operator new[](2 * v22, (const struct std::nothrow_t *)&std::nothrow);
  *a6 = v23;
  if ( !v23 )
  {
LABEL_93:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL);
    ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
    return 2147942414LL;
  }
  *(_QWORD *)&v67 = &a6;
  BYTE8(v67) = 1;
  v24 = 2147483646LL;
  if ( (unsigned __int64)(v22 - 1) > 0x7FFFFFFE )
  {
    if ( v22 )
      *v23 = 0;
    goto LABEL_40;
  }
  v25 = v21 - (char *)v23;
  do
  {
    if ( !v24 )
      break;
    v26 = *(unsigned __int16 *)((char *)v23 + v25);
    if ( !v26 )
      break;
    *v23++ = v26;
    --v24;
    --v22;
  }
  while ( v22 );
  v27 = (CEndpointStoreCache *)(v23 - 1);
  if ( v22 )
    v27 = (CEndpointStoreCache *)v23;
  *(_WORD *)v27 = 0;
  AudioSession = -2147024774;
  if ( !v22 )
  {
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)AudioSession);
    v28 = *a6;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v28);
    *a6 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v21 - 3) + 8LL))(*((_QWORD *)v21 - 3));
    return AudioSession;
  }
  v63 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v27, *((const unsigned __int16 **)this + 24), &v63);
  AudioSession = EndpointStore;
  if ( EndpointStore < 0 )
  {
    v49 = 1197LL;
    goto LABEL_74;
  }
  v40 = v63;
  *((_QWORD *)this + 16) = *((_QWORD *)v63 + 12);
  if ( g_DuckingManager )
  {
    v41 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(*(_QWORD *)g_DuckingManager + 48LL);
    v42 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    v41(g_DuckingManager, v42);
  }
  if ( v71 )
  {
    v43 = v73;
    if ( !memcmp_0(a4, &GUID_SystemSounds_AudioSessionId, 0x10uLL) )
      v43 = v73 | 4;
  }
  else
  {
    v43 = v73;
  }
  v44 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
  if ( v44 == 1 )
  {
    v45 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v45, v46, v47);
  }
  else if ( v44 == 2 )
  {
    CPolicyConfig::DisconnectAllRenderEndpoints();
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, this);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   *((CAudioSessionManager **)this + 16),
                   a2,
                   (struct CAudioSessionInstanceId *)v12,
                   v43,
                   v64,
                   *((_DWORD *)this + 10),
                   (struct CAudioSession **)this + 18);
  if ( (AudioSession & 0x80000000) != 0 )
  {
    v49 = 1240LL;
LABEL_74:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)AudioSession);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v63);
    v50 = *a6;
    v51 = GetProcessHeap();
    HeapFree(v51, 0, v50);
    *a6 = 0LL;
    ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
    return AudioSession;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v40);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v21 - 3) + 8LL))(*((_QWORD *)v21 - 3));
  return 0LL;
}
