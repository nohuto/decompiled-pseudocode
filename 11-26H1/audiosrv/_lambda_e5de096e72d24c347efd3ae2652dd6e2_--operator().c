/*
 * XREFs of _lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator() @ 0x1800FA300
 * Callers:
 *     ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JPEAUSystemAudioStream@@@Z @ 0x1800FFEC4 (-RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  _QWORD *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v5; // rbx
  struct AudioSrvTelemetryProvider *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-618h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-610h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-5F8h] BYREF
  int v13[316]; // [rsp+150h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+658h] [rbp+0h]

  v2 = CoSetProxyBlanket(*(IUnknown **)(*(_QWORD *)a1 + 16LL), 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v11, *(__int64 ***)(a1 + 8));
    v5 = AudioPumpDspResourceTokenFromTokenList[1];
    AudioPumpDspResourceTokenFromTokenList[1] = 0LL;
    v10 = v5;
    AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v11);
    memset_0(v13, 0, 0x4E8uLL);
    v6 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v6 + 1),
      "StreamInstance_CreateStream",
      0LL);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int *))(**(_QWORD **)(*(_QWORD *)a1 + 16LL) + 24LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 16LL),
           **(_QWORD **)(a1 + 16),
           v5,
           **(_QWORD **)(a1 + 24),
           v13);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = SystemAudioStream::move_initialize_from(
             **(SystemAudioStream ***)(a1 + 32),
             *(_DWORD *)(**(_QWORD **)(a1 + 16) + 312LL),
             (struct SYSTEM_AUDIO_STREAM *)v13);
      v3 = v7;
      if ( v7 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v8 = 4057LL;
    }
    else
    {
      v8 = 4055LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
