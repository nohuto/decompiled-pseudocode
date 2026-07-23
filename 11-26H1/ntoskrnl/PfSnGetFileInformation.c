/*
 * XREFs of PfSnGetFileInformation @ 0x140265260
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x1402650C0 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  BOOLEAN v2; // r15
  _RTL_BALANCED_NODE *v3; // rdi
  int v4; // r13d
  _RTL_BALANCED_NODE **i; // rax
  unsigned int v8; // edi
  ULONG_PTR ParentValue; // rbp
  signed __int64 v10; // rbx
  bool v11; // cc
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  int v17; // ecx
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *Pool2; // rax
  _RTL_BALANCED_NODE *v20; // r14
  _RTL_BALANCED_NODE **v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // r8
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  BOOLEAN v33; // al
  ULONG_PTR v34; // rcx
  __int64 v35; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  for ( i = (_RTL_BALANCED_NODE **)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
  {
    if ( *i == v3 )
      return 0;
  }
  v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
  v15 = *(_QWORD *)(a1 + 528);
  v16 = *(_QWORD *)(a1 + 520);
  if ( (v15 & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_28;
    v16 ^= a1 + 520;
  }
  v17 = v15 & 1;
  while ( v16 )
  {
    if ( *(_QWORD *)(v16 + 24) > (unsigned __int64)v3 )
    {
      v18 = *(_QWORD *)v16;
      if ( v17 && v18 )
        goto LABEL_57;
    }
    else
    {
      if ( *(_QWORD *)(v16 + 24) >= (unsigned __int64)v3 )
        break;
      v18 = *(_QWORD *)(v16 + 8);
      if ( v17 && v18 )
      {
LABEL_57:
        v16 ^= v18;
        continue;
      }
    }
    v16 = v18;
  }
LABEL_28:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  __writecr8(v14);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    return 0;
  }
  Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(0x40uLL);
  v20 = Pool2;
  if ( !Pool2 )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return (unsigned int)-1073741670;
  }
  Pool2->0 = 0LL;
  *(_OWORD *)&Pool2->0 = 0LL;
  *(_OWORD *)&Pool2[1].Right = 0LL;
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  v20[1].ParentValue = (unsigned __int64)a2;
  v20[1].Children[0] = v3;
  v21 = (_RTL_BALANCED_NODE **)(a1 + 520);
  v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v23 = *(_QWORD *)(a1 + 528);
  v24 = *(_QWORD *)(a1 + 520);
  if ( (v23 & 1) != 0 )
  {
    if ( !v24 )
    {
LABEL_40:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v2 )
        {
          v8 = -1073741431;
          goto LABEL_8;
        }
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        v4 = 1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      v20[1].Children[1] = *(_RTL_BALANCED_NODE **)(a1 + 536);
      *(_QWORD *)(a1 + 536) = (char *)v20 + 32;
      v27 = *(_QWORD *)(a1 + 528);
      v28 = (unsigned __int64)*v21;
      if ( (v27 & 1) != 0 )
      {
        if ( !v28 )
        {
          v28 = 0LL;
          v29 = 0;
LABEL_49:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v28, v29, v20);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
          __writecr8(v22);
          if ( v4 )
          {
            v2 = 0;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
          }
          *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
          v8 = 0;
          if ( v2 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
          return v8;
        }
        v28 ^= (unsigned __int64)v21;
      }
      v29 = 0;
      v30 = v27 & 1;
      if ( v28 )
      {
        while ( 1 )
        {
          while ( *(_QWORD *)(v28 + 24) > (unsigned __int64)v3 )
          {
            v32 = *(_QWORD *)v28;
            if ( v30 )
            {
              if ( !v32 )
                goto LABEL_49;
              v32 ^= v28;
            }
            if ( !v32 )
              goto LABEL_49;
            v28 = v32;
          }
          v31 = *(_QWORD *)(v28 + 8);
          if ( v30 )
          {
            if ( !v31 )
              break;
            v31 ^= v28;
          }
          if ( !v31 )
            break;
          v28 = v31;
        }
        v29 = 1;
      }
      goto LABEL_49;
    }
    v24 ^= (unsigned __int64)v21;
  }
  v25 = v23 & 1;
  if ( !v24 )
    goto LABEL_40;
  while ( *(_QWORD *)(v24 + 24) > (unsigned __int64)v3 )
  {
    v26 = *(_QWORD *)v24;
    if ( v25 && v26 )
    {
LABEL_60:
      v24 ^= v26;
      goto LABEL_39;
    }
LABEL_38:
    v24 = v26;
LABEL_39:
    if ( !v24 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(v24 + 24) < (unsigned __int64)v3 )
  {
    v26 = *(_QWORD *)(v24 + 8);
    if ( v25 && v26 )
      goto LABEL_60;
    goto LABEL_38;
  }
  v8 = 0;
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *(_DWORD *)(a1 + 576) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 576), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
  __writecr8(v22);
  ParentValue = v20[1].ParentValue;
  if ( ObpTraceFlags )
    ObpPushStackInfo(ParentValue - 48, -1, 0x746C6644u);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(ParentValue - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v11 = v10 <= 1;
  BugCheckParameter4 = v10 - 1;
  if ( v11 )
  {
    if ( *(_QWORD *)(ParentValue - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(ParentValue - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(ParentValue - 48) >> 8)],
        ParentValue,
        1uLL,
        *(_QWORD *)(ParentValue - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, ParentValue, 2uLL, BugCheckParameter4);
    v33 = KeAreAllApcsDisabled();
    v34 = ParentValue - 48;
    if ( v33 )
    {
      ObpDeferObjectDeletion(v34);
    }
    else
    {
      v35 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v34);
      if ( v35 )
        ObpHandleRevocationBlockRemoveObject(v35);
      if ( ObpTraceFlags )
        ObpDeregisterObject(ParentValue - 48);
      ObpRemoveObjectRoutine(ParentValue - 48, 0LL);
    }
  }
  ExFreePoolWithTag(v20, 0);
  return v8;
}
