/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14018A228
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14016B654 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1401C1BD4 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x140219550 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x140225120 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x140225234 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2, int a3)
{
  void *v3; // rsi
  _UNKNOWN **v6; // rdx
  bool v7; // di
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  bool v12; // zf
  void *v13; // rbp
  int v14; // ecx
  bool v15; // di
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // dl
  unsigned int v27; // r8d
  DelayZoneTelemetry *v28; // rcx
  __int128 v29; // [rsp+50h] [rbp-28h] BYREF

  v3 = (void *)*((_QWORD *)this + 4);
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( v3 && v3 == a2 )
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        4,
        20,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v3);
      v6 = &WPP_RECORDER_INITIALIZED;
    }
    v12 = *((_DWORD *)this + 10) == 0;
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( v12 )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v13 = (void *)*((_QWORD *)this + 2);
  if ( v13 && v13 == a2 )
  {
    v14 = (int)WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69136),
        4,
        4,
        21,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v13);
    }
    v12 = *((_DWORD *)this + 1) == 1;
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    if ( v12 )
    {
      v20 = W32GetUserSessionState(v14, (_DWORD)v6, a3);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v20 + 16832), 1, 0);
      v23 = *((_QWORD *)this + 15);
      *((_BYTE *)this + 8) = 0;
      if ( v23 )
      {
        v24 = *((unsigned int *)this + 1);
        v29 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v23, v24, v22, 2LL, &v29);
      }
      v25 = W32GetUserSessionState(v23, v21, v22);
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(*(CHidInput **)(v25 + 16832), v26, v27);
      *((_BYTE *)this + 9) = 1;
    }
    if ( *((_DWORD *)this + 1) == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v28 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  if ( v28 )
    DelayZoneTelemetry::ClearSession(v28);
}
