/*
 * XREFs of PfSnEndTrace @ 0x140AA6328
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x140AA6310 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x14043FCD0 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PfSnDeactivateTrace @ 0x14045C700 (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1404A5A18 (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfSnBuildDumpFromTrace @ 0x140AA6680 (PfSnBuildDumpFromTrace.c)
 *     PfSnLogEndTrace @ 0x140AA68E8 (PfSnLogEndTrace.c)
 *     PfSnCleanupTrace @ 0x140AA69F4 (PfSnCleanupTrace.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnEndTrace(char *P)
{
  __int128 v1; // xmm0
  _QWORD *v2; // rsi
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  char PreviousMode; // r15
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r14
  _QWORD *v16; // rax
  unsigned int v17; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _KSCHEDULING_GROUP_POLICY Policy; // rax
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Pa; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v29[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v31[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  _BYTE v34[16]; // [rsp+D8h] [rbp-30h] BYREF
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  int *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]

  v1 = *(_OWORD *)(P + 24);
  v2 = 0LL;
  v4 = *(_OWORD *)(P + 40);
  Pa = 0LL;
  v29[0] = v1;
  v5 = *(_OWORD *)(P + 56);
  v27 = 0LL;
  v29[1] = v4;
  v6 = *(_OWORD *)(P + 72);
  v29[2] = v5;
  v30 = v6;
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
  {
    v28 = *((_QWORD *)P + 44);
    v33 = 8LL;
    v32 = &v28;
    tlgCreate1Sz_wchar_t((__int64)v34, (const WCHAR *)v29);
    v35 = &v24;
    LODWORD(v25) = *((_DWORD *)P + 100);
    v37 = &v25;
    LOBYTE(v23) = P[88];
    v39 = &v23;
    v24 = HIDWORD(v30);
    v36 = v21;
    v38 = v21;
    v40 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&dword_140049D04, 0LL, 0LL, 7u, v31);
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace((struct _EX_RUNDOWN_REF *)P);
  PfSnLogEndTrace(P);
  v8 = *((_DWORD *)P + 83);
  v9 = *((_DWORD *)P + 81);
  if ( v9 > v8 )
  {
    *((_DWORD *)P + 81) = v8;
    v9 = v8;
  }
  v10 = *((int *)P + 82);
  if ( (int)v10 >= *(int *)&stru_140E66D40.KeReferenceCount )
  {
    if ( (int)v10 > 10 )
    {
      *((_DWORD *)P + 82) = 10;
      LODWORD(v10) = 10;
    }
    if ( v9 != v8 )
      *(_DWORD *)&P[4 * (int)v10 + 280] += v8 - v9;
  }
  else
  {
    *(_DWORD *)&P[4 * v10 + 284] = v8 - v9;
    v11 = *((_DWORD *)P + 83);
    ++*((_DWORD *)P + 82);
    *((_DWORD *)P + 81) = v11;
  }
  if ( *((_DWORD *)P + 22) != 1 || *((_DWORD *)P + 100) == 8 )
  {
    v12 = PfSnBuildDumpFromTrace(&Pa, P);
    v2 = Pa;
    v13 = v12;
  }
  else
  {
    v13 = -2147483614;
  }
  v14 = *((_QWORD *)P + 44);
  *((_DWORD *)P + 114) = v13;
  *((_QWORD *)P + 56) = v2;
  v15 = PfpPartitionReferenceParentSafeByProcess(&v27, v14);
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v13 >= 0 )
  {
    if ( v15 && v27 && *(_DWORD *)(v27 + 608) < *(_DWORD *)(v27 + 612) )
      PfFbBufferListFlushStandby(v27, v27 + 288);
    ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
    if ( *(_DWORD *)&stru_140E67200.ApcStateFill[28] == 1 )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
      ExFreePoolWithTag(v2, 0);
    }
    else
    {
      v16 = *(_QWORD **)&stru_140E67200.WaitRegister.Flags;
      if ( **(struct _KTHREAD ***)&stru_140E67200.WaitRegister.Flags != (struct _KTHREAD *)&stru_140E67200.SchedulingGroup )
LABEL_13:
        __fastfail(3u);
      v2[1] = *(_QWORD *)&stru_140E67200.WaitRegister.Flags;
      *v2 = &stru_140E67200.SchedulingGroup;
      *v16 = v2;
      v17 = *(_DWORD *)&stru_140E67200.ApcStateFill[24] + 1;
      *(_QWORD *)&stru_140E67200.WaitRegister.Flags = v2;
      while ( 1 )
      {
        *(_DWORD *)&stru_140E67200.ApcStateFill[24] = v17;
        if ( v17 <= HIDWORD(stru_140E66D40.LastXStateSaveDebugInfo) )
          break;
        SchedulingGroup = stru_140E67200.SchedulingGroup;
        if ( (_KSCHEDULING_GROUP *volatile *)stru_140E67200.SchedulingGroup == &stru_140E67200.SchedulingGroup )
          break;
        if ( *(struct _KTHREAD **)&stru_140E67200.SchedulingGroup->RelativeWeight != (struct _KTHREAD *)&stru_140E67200.SchedulingGroup )
          goto LABEL_13;
        Policy = stru_140E67200.SchedulingGroup->Policy;
        if ( *(_KSCHEDULING_GROUP *volatile *)(*(_QWORD *)&stru_140E67200.SchedulingGroup->Policy + 8LL) != stru_140E67200.SchedulingGroup )
          goto LABEL_13;
        stru_140E67200.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)stru_140E67200.SchedulingGroup->Policy;
        *(_QWORD *)(*(_QWORD *)&Policy + 8LL) = &stru_140E67200.SchedulingGroup;
        ExFreePoolWithTag(SchedulingGroup, 0);
        v17 = *(_DWORD *)&stru_140E67200.ApcStateFill[24] - 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
      if ( stru_140E67200.ApcState.Process )
        KeSetEvent((PRKEVENT)stru_140E67200.ApcState.Process, 0, 0);
      v13 = 0;
    }
  }
  if ( v15 )
    PfpPartitionDereferenceParent(v15);
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
  {
    LODWORD(v25) = v13;
    v32 = &v25;
    v33 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v34, (const WCHAR *)v29);
    v35 = &v24;
    v24 = HIDWORD(v30);
    v36 = v22;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&byte_140049CC7, 0LL, 0LL, 5u, v31);
  }
  return (unsigned int)v13;
}
