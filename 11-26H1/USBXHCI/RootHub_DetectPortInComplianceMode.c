/*
 * XREFs of RootHub_DetectPortInComplianceMode @ 0x14002D224
 * Callers:
 *     RootHub_DetectLinkErrorState @ 0x14002CF50 (RootHub_DetectLinkErrorState.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F608 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall RootHub_DetectPortInComplianceMode(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  char v6; // si
  int v7; // edx
  __int64 v9; // rbx
  _QWORD *v11; // r14
  int v12; // eax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = a2 - 1;
  v6 = 0;
  v7 = *a3;
  v9 = 120 * v4;
  if ( (*a3 & 0x1E0) == 0x140 )
  {
    v11 = (_QWORD *)(a1 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(*v11 + 72LL),
        v7,
        11,
        266,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        *a3);
    }
    if ( (*(_QWORD *)(*v11 + 744LL) & 0x8000LL) != 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
    if ( ++*(_DWORD *)(v9 + v3 + 88) == 3 && !*(_BYTE *)(v9 + v3 + 96) )
    {
      Etw_ReportControllerHealthWithPortInfo(*v11, a2, a3, 0LL);
      *(_BYTE *)(v9 + v3 + 96) = 1;
    }
    v12 = *(_DWORD *)(v9 + v3 + 88);
    if ( v12 == 12 || v12 == 18 || v12 == 24 )
      return 1;
  }
  else if ( *(_DWORD *)(v9 + v3 + 88) )
  {
    LOBYTE(v4) = 1;
    Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(a1 + 8), a2, a3, v4);
    *(_DWORD *)(v9 + v3 + 88) = 0;
    *(_BYTE *)(v9 + v3 + 96) = 0;
    *(_BYTE *)(v9 + v3 + 104) = 0;
  }
  return v6;
}
