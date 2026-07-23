/*
 * XREFs of PsBoostThreadIoEx @ 0x140248200
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x1404DC574 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1404EE9D0 (IoBoostThreadIo.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026ED10 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC (-KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(LegacyAutoBoost *this, __int64 a2, char a3, struct _SINGLE_LIST_ENTRY *a4)
{
  signed __int32 v4; // esi
  KIRQL v5; // r15
  char v7; // r14
  char v8; // r12
  LegacyAutoBoost *v10; // r13
  volatile signed __int64 *v11; // rdi
  LegacyAutoBoost **v12; // rcx
  char v13; // al
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v16; // rdx
  __int64 Pool2; // rax
  __int64 **v18; // rbx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 **v21; // rbx
  __int64 *v22; // rcx
  __int64 v23; // rax
  LegacyAutoBoost **v24; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v8 = a2;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    v11 = (volatile signed __int64 *)((char *)this + 1552);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v10 = (LegacyAutoBoost *)Pool2;
  if ( Pool2 )
  {
    RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
    *((_QWORD *)v10 + 12) = KeGetCurrentThread();
    *((_QWORD *)v10 + 13) = a4;
  }
  v11 = (volatile signed __int64 *)((char *)this + 1552);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 194);
LABEL_4:
  if ( v8 )
  {
    if ( *((_DWORD *)this + 376) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)this + 376);
      if ( !v7 )
        goto LABEL_22;
      if ( *((_DWORD *)this + 376) )
      {
        if ( v10 )
        {
          v12 = (LegacyAutoBoost **)*((_QWORD *)this + 193);
          if ( *v12 != (LegacyAutoBoost *)((char *)this + 1536) )
            goto LABEL_13;
          *(_QWORD *)v10 = (char *)this + 1536;
          *((_QWORD *)v10 + 1) = v12;
          *v12 = v10;
          *((_QWORD *)this + 193) = v10;
        }
      }
      else
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x736F6F42u);
        v18 = (__int64 **)((char *)this + 1520);
        while ( 1 )
        {
          v19 = *v18;
          if ( *v18 == (__int64 *)v18 )
            break;
          v20 = *v19;
          if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
            goto LABEL_13;
          *v18 = (__int64 *)v20;
          *(_QWORD *)(v20 + 8) = v18;
          ExFreePoolWithTag(v19, 0x736F6F42u);
        }
        v21 = (__int64 **)((char *)this + 1536);
        while ( 1 )
        {
          v22 = *v21;
          if ( *v21 == (__int64 *)v21 )
            break;
          v23 = *v22;
          if ( (__int64 **)v22[1] != v21 || *(__int64 **)(v23 + 8) != v22 )
            goto LABEL_13;
          *v21 = (__int64 *)v23;
          *(_QWORD *)(v23 + 8) = v21;
          ExFreePoolWithTag(v22, 0x736F6F42u);
        }
      }
      v11 = (volatile signed __int64 *)((char *)this + 1552);
    }
LABEL_15:
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_16;
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)this + 376);
  if ( !v7 )
    goto LABEL_6;
  if ( !v10 )
    goto LABEL_15;
  v24 = (LegacyAutoBoost **)*((_QWORD *)this + 191);
  if ( *v24 != (LegacyAutoBoost *)((char *)this + 1520) )
LABEL_13:
    __fastfail(3u);
  *(_QWORD *)v10 = (char *)this + 1520;
  *((_QWORD *)v10 + 1) = v24;
  *v24 = v10;
  *((_QWORD *)this + 191) = v10;
LABEL_16:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v11, 0LL);
  else
    KiReleaseSpinLockInstrumented(v11, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
LABEL_21:
  if ( !v8 )
  {
LABEL_6:
    if ( v4 != 1 )
      return;
    goto LABEL_23;
  }
LABEL_22:
  if ( v4 )
    return;
LABEL_23:
  if ( v8 )
    return;
  v13 = *((_BYTE *)this + 792);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( !v13 )
      return;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !AutoBoost::KiAbpThreadInsertList(
            this,
            (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
            (struct _SINGLE_LIST_ENTRY *)this + 101,
            a4) )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( !v13 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( LegacyAutoBoost::KiAbThreadInsertList(
         this,
         (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
         (struct _SINGLE_LIST_ENTRY *)this + 101,
         a4) )
  {
LABEL_31:
    AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v16);
  }
LABEL_32:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
