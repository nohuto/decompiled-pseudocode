/*
 * XREFs of ?GetProcessStatus@VIDMM_COMMIT_TELEMETRY@@AEAAPEBDPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1400AB4A4
 * Callers:
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400C83F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 * Callees:
 *     <none>
 */

const char *__fastcall VIDMM_COMMIT_TELEMETRY::GetProcessStatus(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2)
{
  const char *result; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rax

  if ( !*((_BYTE *)this + 24) )
    return 0LL;
  if ( !a2 )
    return "Occluded";
  v3 = *((_QWORD *)a2 + 2);
  if ( !v3 )
    return "Occluded";
  v4 = *(_QWORD *)(v3 + 72);
  if ( !v4 )
    return "Occluded";
  v5 = *(_DWORD *)(v4 + 416);
  if ( (v5 & 1) != 0 )
    return "Focus";
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 72LL) + 64LL);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 140) )
      return "Focus";
  }
  result = "Occluded";
  if ( (v5 & 2) != 0 )
    return "Visible";
  return result;
}
