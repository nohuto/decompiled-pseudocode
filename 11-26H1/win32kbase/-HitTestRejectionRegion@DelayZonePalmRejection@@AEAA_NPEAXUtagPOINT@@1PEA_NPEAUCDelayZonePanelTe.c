/*
 * XREFs of ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1401BAF54
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     GetUserHandedness @ 0x140193BEC (GetUserHandedness.c)
 *     ?CanFilterInput@CPalmRejectZoneInfo@@QEAA_NXZ @ 0x14021A7F0 (-CanFilterInput@CPalmRejectZoneInfo@@QEAA_NXZ.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021A9B8 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14021ADC0 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r15
  bool v7; // bp
  char *v8; // rsi
  char v13; // r14
  int v14; // edx
  int v15; // r8d
  bool v16; // r15
  int v17; // edi
  const char *v18; // rbx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  if ( v8 == (char *)this + 72 )
    return 0;
  v13 = 1;
  while ( v8 != v6 )
  {
    LODWORD(this) = ((unsigned int)GetUserHandedness((__int64)this) != 0) + 1;
    if ( ((unsigned int)this & *((_DWORD *)v8 + 23)) == 0 )
      goto LABEL_12;
    if ( v8[60] )
    {
      if ( *((void **)v8 + 12) != a2 )
        goto LABEL_12;
      v7 = PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4);
    }
    else
    {
      if ( !CPalmRejectZoneInfo::CanFilterInput((CPalmRejectZoneInfo *)v8) )
        goto LABEL_12;
      v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, a6);
    }
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = *((_DWORD *)v8 + 14);
        v18 = "true";
        if ( !v8[60] )
          v18 = "false";
        UserSessionState = W32GetUserSessionState((unsigned int)"false", v14, v15);
        LOBYTE(v20) = v16;
        LOBYTE(v21) = v13;
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          4,
          30,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
          (__int64)v18,
          v17);
      }
      *a5 = v8[60];
      return v7;
    }
LABEL_12:
    v8 = *(char **)v8;
  }
  return v7;
}
