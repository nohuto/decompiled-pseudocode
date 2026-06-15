/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005C1F0 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x18006847C (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800AA94C (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        _OWORD *a3,
        __int64 a4,
        unsigned int a5,
        __int64 **a6,
        struct SystemAudioStream *a7)
{
  _QWORD *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v12; // rbx
  struct AudioSrvTelemetryProvider *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-638h] BYREF
  _QWORD v25[3]; // [rsp+38h] [rbp-630h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-618h] BYREF
  _BYTE v27[1264]; // [rsp+140h] [rbp-528h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+668h] [rbp+0h]

  AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v25, a6);
  v12 = AudioPumpDspResourceTokenFromTokenList[1];
  AudioPumpDspResourceTokenFromTokenList[1] = 0LL;
  v24 = v12;
  AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v25);
  memset_0(v27, 0, 0x4E8uLL);
  v13 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v13 + 1),
    "ExclusiveStreamGroup_CreateStream",
    0LL);
  v14 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64, _BYTE *))(**(_QWORD **)(this + 104) + 40LL))(
          *(_QWORD *)(this + 104),
          a3,
          v12,
          v27);
  v15 = v14;
  if ( v14 >= 0 )
  {
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    v16 = SystemAudioStream::move_initialize_from(a7, 0xFFFFFFFF, (struct SYSTEM_AUDIO_STREAM *)v27);
    v15 = v16;
    if ( v16 >= 0 )
    {
      v18 = (_OWORD *)(this + 376);
      v19 = 2LL;
      v20 = 128LL;
      do
      {
        *v18 = *a3;
        v18[1] = a3[1];
        v18[2] = a3[2];
        v18[3] = a3[3];
        v18[4] = a3[4];
        v18[5] = a3[5];
        v18[6] = a3[6];
        v18 += 8;
        *(v18 - 1) = a3[7];
        a3 += 8;
        --v19;
      }
      while ( v19 );
      *v18 = *a3;
      v18[1] = a3[1];
      v18[2] = a3[2];
      v18[3] = a3[3];
      v18[4] = a3[4];
      v18[5] = a3[5];
      v21 = *(_QWORD *)(this + 48);
      *(_QWORD *)(this + 504) = v21;
      *(_DWORD *)(this + 496) = *(unsigned __int16 *)(v21 + 16) + 18;
      *(_QWORD *)(this + 520) = *(_QWORD *)(this + 56);
      if ( *(_QWORD *)(this + 728) != a4 )
      {
        if ( a4 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 8LL))(a4, 128LL);
        v22 = *(_QWORD *)(this + 728);
        *(_QWORD *)(this + 728) = a4;
        if ( v22 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, v20);
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(
        (__int64 *)a7 + 5,
        this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
      CAudioStream::SetAudioHandle((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)), a7, a5, 0LL);
      v16 = CBaseStreamGroupProxy::AddStream((CBaseStreamGroupProxy *)this, a2);
      v15 = v16;
      if ( v16 >= 0 )
      {
        v15 = 0;
        goto LABEL_16;
      }
      v17 = 2218LL;
    }
    else
    {
      v17 = 2200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x894,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  }
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
  return v15;
}
