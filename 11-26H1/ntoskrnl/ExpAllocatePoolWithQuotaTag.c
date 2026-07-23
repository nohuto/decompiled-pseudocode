/*
 * XREFs of ExpAllocatePoolWithQuotaTag @ 0x140C169D0
 * Callers:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExpStampBigPoolEntry @ 0x14029B2E0 (ExpStampBigPoolEntry.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14039A460 (ExpAllocatePoolWithTagFromNode.c)
 *     PspExpandQuota @ 0x1403C7758 (PspExpandQuota.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

ULONG_PTR __fastcall ExpAllocatePoolWithQuotaTag(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // rbx
  _KPROCESS *Process; // r15
  __int64 PoolWithTagFromNode; // rax
  ULONG_PTR v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *i; // rax
  ULONG_PTR v15; // r14
  ULONG_PTR v16; // rdx
  __int16 v17; // cx
  int v18; // eax
  __int64 v19; // rdi
  _KSCHEDULING_GROUP *SchedulingGroup; // rcx
  _BOOL8 v21; // r10
  unsigned __int64 *v22; // r13
  unsigned __int8 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rtt
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  ULONG_PTR v33; // rdi
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  char v38; // al
  signed __int32 v39[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v40; // [rsp+30h] [rbp-78h]
  _DWORD v41[3]; // [rsp+34h] [rbp-74h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-60h]
  _BOOL8 v44; // [rsp+50h] [rbp-58h]
  ULONG_PTR v45; // [rsp+58h] [rbp-50h]
  __int128 v46; // [rsp+60h] [rbp-48h] BYREF
  __int128 v47; // [rsp+70h] [rbp-38h]

  v5 = 0;
  v41[0] = 0;
  v7 = a2;
  v42 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == PsInitialSystemProcess )
    v7 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(a1, v7, a3, a4, a5);
  v10 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode || (v7 & 1) == 0 )
    return v10;
  if ( LODWORD(stru_140EFF2C0.InitialStack) )
  {
    if ( (_WORD)PoolWithTagFromNode )
    {
      v11 = 0;
    }
    else
    {
      v36 = RtlCSparseBitmapBitmaskRead(
              (__int64)&ExpUuidLock.CycleTime,
              2 * ((PoolWithTagFromNode - ExpUuidLock.ThreadLock) >> 20));
      if ( !v36 || (v11 = v36 - 1, v11 == 2) )
      {
        v46 = 0LL;
        v47 = 0LL;
        RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.TrapFrame, v10, (__int64)&v46);
        v13 = *(_QWORD *)v47;
LABEL_9:
        if ( !v13 )
          KeBugCheckEx(0xC2u, 0LL, 0LL, v10, 0LL);
        for ( i = qword_140EEF000; (__int64)i < (__int64)qword_140EEF020; ++i )
        {
          if ( v13 == *i )
            return v10;
        }
        goto LABEL_12;
      }
    }
    *(_QWORD *)&v41[1] = 0x100000000100000LL;
    v12 = (unsigned int)v41[v11 + 1];
    v13 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((v10 & -v12) + 0x10) ^ v10 & -v12)
        - 192LL * v11
        - 320;
    goto LABEL_9;
  }
LABEL_12:
  v45 = v10 & 0xFFF;
  if ( (v10 & 0xFFF) != 0 )
  {
    v15 = v10 - 16;
    v16 = v10 - 16;
    if ( (*(_BYTE *)(v10 - 13) & 4) != 0 )
      v16 -= 16LL * (unsigned __int8)*(_WORD *)v15;
    v17 = *(_WORD *)(v16 + 2);
    v18 = *(_DWORD *)(v16 + 4);
    v19 = 16LL * (unsigned __int8)v17;
    v42 = v19;
    v41[0] = v18;
    if ( (v17 & 0x800) != 0 )
      *(_QWORD *)(v16 + 8) = (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v16;
  }
  else
  {
    ExpStampBigPoolEntry(v10, v7, 0LL, &v42, v41);
    v19 = v42;
    v15 = v10 - 16;
  }
  if ( Process == PsInitialSystemProcess )
  {
LABEL_33:
    v33 = 0LL;
    if ( v45 )
    {
      v33 = v15;
      if ( (*(_BYTE *)(v15 + 3) & 4) != 0 )
        v33 = v15 - 16LL * (unsigned __int8)*(_WORD *)v15;
      if ( (*(_BYTE *)(v33 + 3) & 8) != 0 )
      {
        BugCheckParameter4 = *(_QWORD *)(v33 + 8) ^ (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v33;
        *(_QWORD *)(v33 + 8) = (unsigned __int64)Process ^ (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v33;
      }
      else
      {
        BugCheckParameter4 = -1LL;
      }
    }
    else
    {
      BugCheckParameter4 = ExpStampBigPoolEntry(v10, v7, (__int64)Process, &v42, v41);
    }
    if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL
      && (BugCheckParameter4 < 0xFFFF800000000000uLL || (*(_BYTE *)BugCheckParameter4 & 0x7F) != 3) )
    {
      if ( v33 )
        v5 = *(_DWORD *)(v33 + 4);
      KeBugCheckEx(0xC2u, 0xDuLL, v10, v5, BugCheckParameter4);
    }
    ObfReferenceObjectWithTag(Process, a4);
  }
  else
  {
    SchedulingGroup = Process[1].SchedulingGroup;
    v21 = (v7 & 0x100) != 0;
    v44 = v21;
    v22 = (unsigned __int64 *)(&SchedulingGroup->Policy + 16 * v21);
    v23 = stru_140FC11F0.SchedulerApcFill3[8 * v21 + 40];
    v40 = v23;
    _m_prefetchw(v22);
    v24 = *v22;
    v43 = *v22;
    _InterlockedOr(v39, 0);
LABEL_19:
    v25 = v22[8];
LABEL_20:
    *(_QWORD *)&v41[1] = v25;
    while ( 1 )
    {
      v26 = v24 + v19;
      if ( v24 + v19 < v24 )
        break;
      if ( v26 <= v25 )
      {
        v27 = v24;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v26, v24);
        v43 = v24;
        if ( v27 != v24 )
          goto LABEL_19;
        _m_prefetchw(v22 + 1);
        v28 = v22[1];
        do
        {
          if ( v26 <= v28 )
            break;
          v29 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 1, v26, v28);
        }
        while ( v28 != v29 );
        if ( (v23 & 4) != 0 )
        {
          v30 = v19 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v21, v19);
          _m_prefetchw(&Process[1].DeepFreezeStartTime + v21);
          v31 = *(&Process[1].DeepFreezeStartTime + v21);
          do
          {
            if ( v30 <= v31 )
              break;
            v32 = v31;
            v31 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v21,
                    v30,
                    v31);
          }
          while ( v31 != v32 );
        }
        goto LABEL_33;
      }
      if ( (v23 & 1) == 0 || !v22[10] )
        break;
      v37 = _InterlockedExchange64((volatile __int64 *)v22 + 9, 0LL);
      if ( v37 )
      {
        v25 = v37 + _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, v37);
        goto LABEL_20;
      }
      v38 = PspExpandQuota(v21, (__int64)v22, v24, v19, (unsigned __int64 *)&v41[1]);
      v21 = v44;
      if ( !v38 )
        break;
      v25 = *(_QWORD *)&v41[1];
      v24 = v43;
      v23 = v40;
    }
    if ( *(int *)&stru_140FC11F0.SchedulerApcFill5[8 * v21 + 44] >= 0 )
      goto LABEL_33;
    ExFreePoolWithTag((PVOID)v10, a4);
    return 0LL;
  }
  return v10;
}
