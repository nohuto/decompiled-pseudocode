/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x14021AD2C (AddPalmRejectionDelayZone.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x14016E6BC (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401C2310 (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x140225234 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        PERESOURCE *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  unsigned int v9; // r13d
  struct CompositionInputObject *v10; // r15
  struct CompositionInputObject *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct tagTHREADINFO *v15; // r8
  char v16; // di
  char v17; // si
  bool v18; // bp
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct tagRECT *v26; // rax
  struct tagRECT *v27; // r15
  int v28; // eax
  unsigned int NewDelayZoneListIndex; // eax
  __int64 *v30; // rdx
  PERESOURCE v31; // r8
  int v32; // esi
  bool v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  PERESOURCE v37; // rcx
  __int64 v38; // rdx
  struct CompositionInputObject *v40[2]; // [rsp+50h] [rbp-58h] BYREF
  PERESOURCE *v41[9]; // [rsp+60h] [rbp-48h] BYREF
  struct CompositionInputObject *v42; // [rsp+B0h] [rbp+8h] BYREF
  struct tagRECT *v43; // [rsp+C0h] [rbp+18h]

  v43 = a3;
  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v41, this + 14);
  v9 = 0;
  v42 = 0LL;
  v40[0] = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v15 = PtiCurrent(v13, v12);
  v16 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v15 + 130, 0, 0) & 1) != 0 )
  {
    v17 = 75;
LABEL_3:
    LOBYTE(a4) = 0;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v22 = CompositionInputObject::ResolveHandle(a2, 1u, 1, &v42);
    v17 = v22;
    if ( v22 < 0 )
      goto LABEL_3;
    v10 = v42;
  }
  if ( a4 )
  {
    v23 = CompositionInputObject::ResolveHandle(a4, 1u, 1, v40);
    a4 = 0LL;
    v17 = v23;
    if ( v23 < 0 )
      goto LABEL_4;
    v11 = v40[0];
  }
  v25 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u);
  if ( !v25 )
  {
    v17 = 23;
LABEL_4:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = (char)a4;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, (_DWORD)v15);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        24,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v17);
    }
    goto LABEL_38;
  }
  if ( v10 )
    ObReferenceObjectByPointer(v10, 3u, ExCompositionObjectType, 0);
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  v26 = a5;
  *(_QWORD *)(v25 + 72) = v10;
  v27 = v43;
  *(_QWORD *)(v25 + 80) = v11;
  *(struct tagRECT *)(v25 + 24) = *v27;
  *(struct tagRECT *)(v25 + 40) = *v26;
  *(_QWORD *)(v25 + 16) = KeGetCurrentThread();
  if ( a6 == (_DWORD)a4 )
    v28 = (int)a4;
  else
    v28 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v24, v14) + 57) + 56LL);
  *(_DWORD *)(v25 + 64) = v28;
  NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex((DelayZonePalmRejection *)this);
  *(_DWORD *)(v25 + 56) = NewDelayZoneListIndex;
  v9 = NewDelayZoneListIndex;
  *(_DWORD *)(v25 + 92) = 3;
  *(_DWORD *)(v25 + 88) = *((_DWORD *)this + 26);
  v30 = (__int64 *)(this + 9);
  *(_QWORD *)(v25 + 96) = a4;
  *(_BYTE *)(v25 + 60) = (_BYTE)a4;
  v31 = this[9];
  if ( (PERESOURCE *)v31->SystemResourcesList.Blink != this + 9 )
    __fastfail(3u);
  *(_QWORD *)v25 = v31;
  *(_QWORD *)(v25 + 8) = v30;
  v31->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v25;
  *v30 = v25;
  v32 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v32;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v16 = (char)a4;
  }
  v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v30, (_DWORD)v31);
    LOBYTE(v35) = v33;
    LOBYTE(v36) = v16;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v35,
      *(_QWORD *)(v34 + 69136),
      4,
      4,
      23,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v9,
      v32);
  }
  v37 = this[15];
  if ( v37 )
  {
    v38 = *((unsigned int *)this + 1);
    *(struct tagRECT *)v40 = *v27;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v37, v38, v31, 3LL, v40);
  }
LABEL_38:
  CInpLockGuardShared::~CInpLockGuardShared(v41);
  return v9;
}
