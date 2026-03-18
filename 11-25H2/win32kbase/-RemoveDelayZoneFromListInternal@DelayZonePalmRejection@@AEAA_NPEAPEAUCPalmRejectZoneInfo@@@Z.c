/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140149F58
 * Callers:
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x140039B24 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140158A58 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402153A0 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1402148DC (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  void *v4; // rcx
  void *v5; // rcx
  char *v6; // rcx
  __int64 v7; // rdx
  char **v8; // rax
  __int64 v9; // rdx
  int v10; // esi
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  _BYTE v17[24]; // [rsp+50h] [rbp-18h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v17,
    (DelayZonePalmRejection *)((char *)this + 112));
  if ( a2 && *a2 )
  {
    v4 = (void *)*((_QWORD *)*a2 + 9);
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = (void *)*((_QWORD *)*a2 + 10);
    if ( v5 )
      ObfDereferenceObject(v5);
    v6 = (char *)*a2;
    v7 = *(_QWORD *)*a2;
    if ( *(struct CPalmRejectZoneInfo **)(v7 + 8) != *a2 || (v8 = (char **)*((_QWORD *)v6 + 1), *v8 != v6) )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    GreDeleteFastMutex(v6);
    v10 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v10;
    v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        26,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v10);
    }
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v17);
    return 1;
  }
  else
  {
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v17);
    return 0;
  }
}
