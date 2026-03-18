/*
 * XREFs of PfSnGetFileInformation @ 0x140265CF0
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x140265B50 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  BOOLEAN v2; // r15
  unsigned __int64 v3; // rdi
  int v4; // r13d
  _QWORD *i; // rax
  unsigned int v8; // edi
  ULONG_PTR v9; // rbp
  signed __int64 v10; // rbx
  bool v11; // cc
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  int v17; // ecx
  unsigned __int64 v18; // rax
  _OWORD *Pool2; // rax
  _QWORD *v20; // r14
  unsigned __int64 *v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  BOOLEAN v33; // al
  ULONG_PTR v34; // rcx
  __int64 v35; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  v3 = a2[3];
  v4 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  for ( i = (_QWORD *)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
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
    if ( *(_QWORD *)(v16 + 24) > v3 )
    {
      v18 = *(_QWORD *)v16;
      if ( v17 && v18 )
        goto LABEL_57;
    }
    else
    {
      if ( *(_QWORD *)(v16 + 24) >= v3 )
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
  Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
  v20 = Pool2;
  if ( !Pool2 )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return (unsigned int)-1073741670;
  }
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  v20[5] = a2;
  v20[3] = v3;
  v21 = (unsigned __int64 *)(a1 + 520);
  v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v24 = *(_QWORD *)(a1 + 528);
  v25 = *(_QWORD *)(a1 + 520);
  if ( (v24 & 1) != 0 )
  {
    if ( !v25 )
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
      v20[4] = *(_QWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 536) = v20 + 4;
      v28 = *(_QWORD *)(a1 + 528);
      v29 = *v21;
      if ( (v28 & 1) != 0 )
      {
        if ( !v29 )
        {
          v29 = 0LL;
          LOBYTE(v23) = 0;
LABEL_49:
          RtlRbInsertNodeEx(a1 + 520, v29, v23, v20);
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
        v29 ^= (unsigned __int64)v21;
      }
      LOBYTE(v23) = 0;
      v30 = v28 & 1;
      if ( v29 )
      {
        while ( 1 )
        {
          while ( *(_QWORD *)(v29 + 24) > v3 )
          {
            v32 = *(_QWORD *)v29;
            if ( v30 )
            {
              if ( !v32 )
                goto LABEL_49;
              v32 ^= v29;
            }
            if ( !v32 )
              goto LABEL_49;
            v29 = v32;
          }
          v31 = *(_QWORD *)(v29 + 8);
          if ( v30 )
          {
            if ( !v31 )
              break;
            v31 ^= v29;
          }
          if ( !v31 )
            break;
          v29 = v31;
        }
        LOBYTE(v23) = 1;
      }
      goto LABEL_49;
    }
    v25 ^= (unsigned __int64)v21;
  }
  v26 = v24 & 1;
  if ( !v25 )
    goto LABEL_40;
  while ( *(_QWORD *)(v25 + 24) > v3 )
  {
    v27 = *(_QWORD *)v25;
    if ( v26 && v27 )
    {
LABEL_60:
      v25 ^= v27;
      goto LABEL_39;
    }
LABEL_38:
    v25 = v27;
LABEL_39:
    if ( !v25 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(v25 + 24) < v3 )
  {
    v27 = *(_QWORD *)(v25 + 8);
    if ( v26 && v27 )
      goto LABEL_60;
    goto LABEL_38;
  }
  v8 = 0;
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    *(_DWORD *)(a1 + 576) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 576), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
  __writecr8(v22);
  v9 = v20[5];
  if ( ObpTraceFlags )
    ObpPushStackInfo(v9 - 48, -1, 0x746C6644u);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v11 = v10 <= 1;
  BugCheckParameter4 = v10 - 1;
  if ( v11 )
  {
    if ( *(_QWORD *)(v9 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v9 - 48) >> 8)],
        v9,
        1uLL,
        *(_QWORD *)(v9 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v9, 2uLL, BugCheckParameter4);
    v33 = KeAreAllApcsDisabled();
    v34 = v9 - 48;
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
        ObpDeregisterObject(v9 - 48);
      ObpRemoveObjectRoutine(v9 - 48, 0LL);
    }
  }
  ExFreePoolWithTag(v20, 0);
  return v8;
}
