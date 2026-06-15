/*
 * XREFs of _lambda_7c0a3712486623e6fb291edc7c031103_::operator() @ 0x1800F9DBC
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_J@Z @ 0x1800FF160 (-RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStre.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180044F00 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_7c0a3712486623e6fb291edc7c031103_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct AudioSrvTelemetryProvider *v5; // rax
  _QWORD *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  _BYTE v20[296]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v21; // [rsp+1C0h] [rbp+C0h]
  _BYTE v22[296]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v23; // [rsp+2F0h] [rbp+1F0h]
  _BYTE v24[296]; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v25; // [rsp+420h] [rbp+320h]
  __int64 v26; // [rsp+428h] [rbp+328h]
  _BYTE v27[296]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v28; // [rsp+558h] [rbp+458h]
  __int64 v29; // [rsp+560h] [rbp+460h]
  LARGE_INTEGER PerformanceCount; // [rsp+570h] [rbp+470h] BYREF
  int v31[316]; // [rsp+660h] [rbp+560h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+A78h]

  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 272LL))(**a1, &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v11 )
    {
      v2 = CoSetProxyBlanket((IUnknown *)a1[1][2], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 4207LL;
        goto LABEL_6;
      }
      memset_0(v31, 0, 0x4E8uLL);
      v5 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(
        &PerformanceCount,
        *((const struct _tlgProvider_t **)v5 + 1),
        "BridgeStreamInstance_Create",
        0LL);
      AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v13, (__int64 **)a1[2]);
      v7 = AudioPumpDspResourceTokenFromTokenList[1];
      AudioPumpDspResourceTokenFromTokenList[1] = 0LL;
      v12 = v7;
      AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v13);
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      memset_0(v20, 0, sizeof(v20));
      v21 = 0LL;
      memset_0(v22, 0, sizeof(v22));
      v23 = 0LL;
      memset_0(v24, 0, sizeof(v24));
      v25 = 0LL;
      v26 = 0LL;
      memset_0(v27, 0, sizeof(v27));
      v28 = 0LL;
      v29 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int *))(*(_QWORD *)a1[1][2] + 88LL))(
             a1[1][2],
             *a1[3],
             v7,
             v11,
             v31);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 4213LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v8);
        SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v14);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        goto LABEL_14;
      }
      v8 = SystemAudioStream::move_initialize_from(
             (SystemAudioStream *)&v14,
             0xFFFFFFFF,
             (struct SYSTEM_AUDIO_STREAM *)v31);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 4215LL;
        goto LABEL_9;
      }
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    v3 = 0;
    goto LABEL_14;
  }
  v4 = 4201LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return v3;
}
