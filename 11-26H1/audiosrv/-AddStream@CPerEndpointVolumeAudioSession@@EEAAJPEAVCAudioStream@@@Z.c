/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180024F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180021320 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180022550 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023F90 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  *((_QWORD *)a2 + 8) = this;
  v9 = 1.0;
  v10 = 0LL;
  v4 = AudioSrvTelemetryProvider::Instance();
  GetPolicyVolumeForAudioStream(
    (__int64)g_PolicyManager,
    (__int64 *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)),
    *((unsigned int **)v4 + 1),
    &v9,
    &v10,
    0);
  v5 = CAudioStream::SetPolicyVolume(a2, v9, v10, 1);
  if ( v5 < 0 )
  {
    v6 = 2739LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5);
    *((_QWORD *)a2 + 8) = 0LL;
    return (unsigned int)v5;
  }
  v5 = CAudioSession::AddStream(this, a2);
  if ( v5 < 0 )
  {
    v6 = 2741LL;
    goto LABEL_3;
  }
  return 0LL;
}
