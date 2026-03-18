/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14016E4A8
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x14016E450 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x14016E6BC (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(PERESOURCE *this, void *a2, int a3, struct tagRECT *a4)
{
  PERESOURCE *v4; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // si
  char v12; // di
  __int64 v13; // rax
  unsigned int NewDelayZoneListIndex; // eax
  int v15; // edx
  __int64 v16; // r8
  unsigned int v17; // r14d
  _QWORD *v18; // rax
  PERESOURCE v19; // rcx
  int v20; // r15d
  bool v21; // bp
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  PERESOURCE *v26; // [rsp+50h] [rbp-38h] BYREF
  bool IsLockedShared; // [rsp+58h] [rbp-30h]

  v4 = this + 14;
  v26 = this + 14;
  IsLockedShared = tagDomLock::IsLockedShared(this + 14);
  v11 = IsLockedShared;
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v4);
  v12 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v10, v9) + 130, 0, 0) & 1) != 0 )
  {
    CInpLockGuardShared::~CInpLockGuardShared(&v26);
    return 0LL;
  }
  v13 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u);
  if ( !v13 )
  {
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v4);
    return 0LL;
  }
  *(struct tagRECT *)(v13 + 24) = *a4;
  *(_QWORD *)(v13 + 72) = 0LL;
  *(_OWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 80) = 0LL;
  *(_QWORD *)(v13 + 16) = KeGetCurrentThread();
  *(_DWORD *)(v13 + 64) = 0;
  NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex((DelayZonePalmRejection *)this);
  *(_DWORD *)(v16 + 56) = NewDelayZoneListIndex;
  v17 = NewDelayZoneListIndex;
  v18 = this + 9;
  *(_DWORD *)(v16 + 92) = a3;
  *(_DWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = a2;
  *(_BYTE *)(v16 + 60) = 1;
  v19 = this[9];
  if ( (PERESOURCE *)v19->SystemResourcesList.Blink != this + 9 )
    __fastfail(3u);
  *(_QWORD *)v16 = v19;
  *(_QWORD *)(v16 + 8) = v18;
  v19->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v16;
  *v18 = v16;
  v20 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v20;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v12 = 0;
  }
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v12;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      4,
      25,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v17,
      v20);
  }
  if ( !v11 )
    ExReleaseResourceAndLeaveCriticalRegion(*v4);
  return v17;
}
