/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140214944
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x140215710 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x14009EC64 (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1402148DC (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1402230C8 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        PERESOURCE *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  unsigned int v10; // r14d
  __int64 v11; // rdx
  char v12; // di
  char v13; // bl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  bool v17; // si
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  PVOID v21; // rbp
  PVOID v22; // r14
  struct tagRECT *v23; // rax
  int v24; // eax
  unsigned int NewDelayZoneListIndex; // eax
  __int64 *v26; // rdx
  PERESOURCE v27; // r8
  int v28; // ebp
  bool v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  PERESOURCE v33; // rcx
  __int64 v34; // rdx
  PVOID v36[2]; // [rsp+50h] [rbp-48h] BYREF
  PERESOURCE *v37[2]; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v37, this + 14);
  v10 = 0;
  Object = 0LL;
  v36[0] = 0LL;
  v12 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 1) != 0 )
  {
    v13 = 75;
    goto LABEL_9;
  }
  if ( a2 )
  {
    v14 = CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)&Object);
    v13 = v14;
    if ( v14 < 0 )
      goto LABEL_9;
  }
  if ( a4 )
  {
    v15 = CompositionInputObject::ResolveHandle(a4, 1u, 1, (struct CompositionInputObject **)v36);
    v13 = v15;
    if ( v15 < 0 )
      goto LABEL_9;
  }
  v16 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u);
  if ( !v16 )
  {
    v13 = 23;
LABEL_9:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        24,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v13);
    }
    goto LABEL_34;
  }
  v21 = Object;
  if ( Object )
    ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  v22 = v36[0];
  if ( v36[0] )
    ObReferenceObjectByPointer(v36[0], 3u, ExCompositionObjectType, 0);
  v23 = a5;
  *(struct tagRECT *)(v16 + 24) = *a3;
  *(_QWORD *)(v16 + 72) = v21;
  *(struct tagRECT *)(v16 + 40) = *v23;
  *(_QWORD *)(v16 + 80) = v22;
  *(_QWORD *)(v16 + 16) = KeGetCurrentThread();
  if ( a6 )
    v24 = *(_DWORD *)(*((_QWORD *)PtiCurrent() + 58) + 56LL);
  else
    v24 = 0;
  *(_DWORD *)(v16 + 64) = v24;
  NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex((DelayZonePalmRejection *)this);
  *(_DWORD *)(v16 + 56) = NewDelayZoneListIndex;
  v10 = NewDelayZoneListIndex;
  *(_DWORD *)(v16 + 92) = 3;
  *(_DWORD *)(v16 + 88) = *((_DWORD *)this + 26);
  v26 = (__int64 *)(this + 9);
  *(_QWORD *)(v16 + 96) = 0LL;
  *(_BYTE *)(v16 + 60) = 0;
  v27 = this[9];
  if ( (PERESOURCE *)v27->SystemResourcesList.Blink != this + 9 )
    __fastfail(3u);
  *(_QWORD *)v16 = v27;
  *(_QWORD *)(v16 + 8) = v26;
  v27->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v16;
  *v26 = v16;
  v28 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v28;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v12 = 0;
  }
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v12;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 69144),
      4,
      4,
      23,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v10,
      v28);
  }
  v33 = this[15];
  if ( v33 )
  {
    v34 = *((unsigned int *)this + 1);
    *(struct tagRECT *)v36 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v33, v34, v27, 3LL, v36);
  }
LABEL_34:
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded(v37);
  return v10;
}
