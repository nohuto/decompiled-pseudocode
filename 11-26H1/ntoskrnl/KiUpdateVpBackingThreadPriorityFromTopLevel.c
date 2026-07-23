/*
 * XREFs of KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403C9C40 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KiPrcbArrayForIsolationWidth @ 0x14041CE30 (KiPrcbArrayForIsolationWidth.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityFromTopLevel(
        struct _KTHREAD *a1,
        struct _SINGLE_LIST_ENTRY *a2,
        char a3)
{
  bool v3; // zf
  int v7; // eax
  int SchedulerAssistPriorityFloor; // edx
  int v9; // r12d
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  int Priority; // r14d
  unsigned int v13; // eax
  volatile signed __int32 **v14; // r8
  unsigned int v15; // esi
  int BamQosLevelFromAssistPage; // edi
  unsigned int *SchedulerAssist; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v33[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]
  unsigned int v35; // [rsp+A0h] [rbp+30h] BYREF
  __int64 *v36; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (*((_DWORD *)&a1->0 + 1) & 0x400000) == 0;
  v31 = 0LL;
  if ( !v3 )
    _InterlockedOr((volatile signed __int32 *)a1->SchedulerAssist, 0x100000u);
  v7 = KiReadGuestSchedulerAssistPriority(a1, &v31);
  SchedulerAssistPriorityFloor = a1->SchedulerAssistPriorityFloor;
  v9 = v7;
  if ( v7 != SchedulerAssistPriorityFloor )
  {
    v10 = a1->PriorityFloorCounts[(char)v7];
    if ( v10 == 0xFF )
      KeBugCheckEx(0x157u, (ULONG_PTR)a1, (char)v9, 1uLL, 0LL);
    a1->PriorityFloorCounts[(char)v9] = v10 + 1;
    a1->PriorityFloorSummary |= 1 << v9;
    if ( SchedulerAssistPriorityFloor != 32 )
    {
      v18 = a1->PriorityFloorCounts[(char)SchedulerAssistPriorityFloor];
      if ( !v18 )
        KeBugCheckEx(0x157u, (ULONG_PTR)a1, (char)SchedulerAssistPriorityFloor, 2uLL, 0LL);
      v11 = v18 - 1;
      a1->PriorityFloorCounts[(char)SchedulerAssistPriorityFloor] = v11;
      if ( !v11 )
        a1->PriorityFloorSummary ^= 1 << SchedulerAssistPriorityFloor;
    }
    a1->SchedulerAssistPriorityFloor = v9;
  }
  Priority = a1->Priority;
  if ( !a3 )
  {
    a1->DecayBoost = 0;
    a1->PriorityDecrement &= 0xF00Fu;
  }
  v13 = KiComputeThreadPriority(a1, 0, 0);
  v15 = v13;
  if ( v13 != Priority )
    KiSetPriorityThread((unsigned __int64)a1, a2, (unsigned __int64 *)v13);
  BamQosLevelFromAssistPage = a1->BamQosLevelFromAssistPage;
  if ( a1->BamQosLevelFromAssistPage )
  {
    SchedulerAssist = (unsigned int *)a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v14 = (volatile signed __int32 **)SchedulerAssist[8];
      if ( *(_QWORD *)(SchedulerAssist + 7) || (SchedulerAssist[5] & 0x4000) != 0 || (*SchedulerAssist & 0x200000) != 0 )
        BamQosLevelFromAssistPage = 0;
    }
  }
  if ( BamQosLevelFromAssistPage != (unsigned __int8)a1->BamQosLevel )
  {
    memset(v33, 0, sizeof(v33));
    v34 = 0LL;
    v19 = KiAcquireThreadStateLockForWrite((__int64)a1, (__int64)v33, v14);
    a1->BamQosLevel = BamQosLevelFromAssistPage;
    v22 = v19 - 2;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v23 = (*((_DWORD *)&a1->0 + 1) >> 1) & 1;
        v32 = *(_QWORD *)&v33[0];
        v36 = 0LL;
        v35 = 0;
        KiPrcbArrayForIsolationWidth(&v32, v23, &v36, &v35);
        if ( v35 )
        {
          v24 = v36;
          v25 = v35;
          do
          {
            v26 = *v24;
            *(_BYTE *)(*(_QWORD *)(*v24 + 56) + 64LL) ^= (a1->BamQosLevel ^ *(_BYTE *)(*(_QWORD *)(*v24 + 56) + 64LL)) & 7;
            KiUpdateThreadQosGroupingSummaries(v26);
            ++v24;
            --v25;
          }
          while ( v25 );
        }
      }
    }
    else if ( !*(_QWORD *)(*(_QWORD *)&v33[0] + 16LL) )
    {
      v27 = (*((_DWORD *)&a1->0 + 1) >> 1) & 1;
      v32 = *(_QWORD *)&v33[0];
      v36 = 0LL;
      v35 = 0;
      KiPrcbArrayForIsolationWidth(&v32, v27, &v36, &v35);
      if ( v35 )
      {
        v28 = v36;
        v29 = v35;
        do
        {
          v30 = *v28;
          *(_BYTE *)(*(_QWORD *)(*v28 + 56) + 64LL) ^= (a1->BamQosLevel ^ *(_BYTE *)(*(_QWORD *)(*v28 + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v30);
          ++v28;
          --v29;
        }
        while ( v29 );
      }
    }
    KiReleaseThreadStateLock(v20, (__int64)v33, v21);
  }
  if ( (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1->SchedulerAssist, 0xFFEFFFFF);
  if ( Priority != v15 && (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate((_DWORD)a1, Priority, v9, v15, (__int64)&v31);
}
