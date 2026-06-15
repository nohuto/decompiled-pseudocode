/*
 * XREFs of ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x180079FE0
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18008D6B4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180022550 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18007A038 (-Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CAudioStream::CapturePolicyVolumeState(CAudioStream *this)
{
  unsigned int *v2; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v2 = (unsigned int *)AudioSrvTelemetryProvider::Provider();
  GetPolicyVolumeForAudioStream(
    (__int64)g_PolicyManager,
    (__int64 *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
    v2,
    (float *)&v3,
    0LL,
    2);
}
