/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14009EAA8
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x14009EA50 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x14009EC64 (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1402148DC (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char v8; // bl
  __int64 v9; // rax
  unsigned int NewDelayZoneListIndex; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // esi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // ebp
  bool v17; // di
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v22,
    (DelayZonePalmRejection *)((char *)this + 112));
  v8 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 1) != 0
    || (v9 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u)) == 0 )
  {
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v22);
    return 0LL;
  }
  else
  {
    *(struct tagRECT *)(v9 + 24) = *a4;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_OWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 16) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 64) = 0;
    NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex(this);
    *(_DWORD *)(v12 + 56) = NewDelayZoneListIndex;
    v13 = NewDelayZoneListIndex;
    v14 = (_QWORD *)((char *)this + 72);
    *(_DWORD *)(v12 + 92) = a3;
    *(_DWORD *)(v12 + 88) = 0;
    *(_QWORD *)(v12 + 96) = a2;
    *(_BYTE *)(v12 + 60) = 1;
    v15 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v15 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)v12 = v15;
    *(_QWORD *)(v12 + 8) = v14;
    *(_QWORD *)(v15 + 8) = v12;
    *v14 = v12;
    v16 = *((_DWORD *)this + 23) + 1;
    *((_DWORD *)this + 23) = v16;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v8;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        25,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v13,
        v16);
    }
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v22);
    return v13;
  }
}
