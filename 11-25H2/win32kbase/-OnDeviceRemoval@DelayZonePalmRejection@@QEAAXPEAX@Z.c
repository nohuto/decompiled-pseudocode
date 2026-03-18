/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14014CE10
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x140212790 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14021280C (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x140222FB4 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1402230C8 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // rsi
  _UNKNOWN **v5; // rdx
  bool v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  void *v11; // rbp
  void *v12; // rcx
  bool v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // dl
  unsigned int v25; // r8d
  DelayZoneTelemetry *v26; // rcx
  __int128 v27; // [rsp+50h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)this + 4);
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( v2 && v2 == a2 )
  {
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        20,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v2);
      v5 = &WPP_RECORDER_INITIALIZED;
    }
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v11 = (void *)*((_QWORD *)this + 2);
  if ( v11 && v11 == a2 )
  {
    v12 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69144),
        4,
        4,
        21,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        (char)v11);
    }
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    if ( *((_DWORD *)this + 1) == 1 )
    {
      v18 = W32GetUserSessionState(v12, v5);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v18 + 16840), 1, 0);
      v21 = *((_QWORD *)this + 15);
      *((_BYTE *)this + 8) = 0;
      if ( v21 )
      {
        v22 = *((unsigned int *)this + 1);
        v27 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v21, v22, v20, 2LL, &v27);
      }
      v23 = W32GetUserSessionState(v21, v19);
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(*(CHidInput **)(v23 + 16840), v24, v25);
      *((_BYTE *)this + 9) = 1;
    }
    if ( *((_DWORD *)this + 1) == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v26 = (DelayZoneTelemetry *)*((_QWORD *)this + 15);
  if ( v26 )
    DelayZoneTelemetry::ClearSession(v26);
}
