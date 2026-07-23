/*
 * XREFs of MiReferenceControlArea @ 0x1404694F0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     MiReferenceActiveControlArea @ 0x1402EDCE4 (MiReferenceActiveControlArea.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 *     MiValidateControlAreaPartition @ 0x140491A04 (MiValidateControlAreaPartition.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
 *     ?KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z @ 0x1404A4560 (-KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILE_OBJECT *v3; // r13
  bool v4; // zf
  struct _KTHREAD *p_ImageSectionObject; // r15
  KIRQL v9; // al
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rsi
  unsigned __int8 v12; // bl
  KIRQL v13; // al
  unsigned __int64 v14; // rax
  int v15; // ebp
  struct _KLOCK_ENTRIES *v16; // r9
  int v17; // r11d
  AutoBoost *v18; // rax
  struct AutoBoost::_AB_THREAD_ENTRY *v19; // rdx
  __int64 v20; // r8
  struct _SINGLE_LIST_ENTRY *v21; // r9
  unsigned __int64 v22; // rbp
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // r11d
  _QWORD *active; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int128 v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+30h] [rbp-48h] BYREF
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v4 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  p_ImageSectionObject = (struct _KTHREAD *)&v3->SectionObjectPointer->ImageSectionObject;
  if ( v4 )
    p_ImageSectionObject = (struct _KTHREAD *)v3->SectionObjectPointer;
  v9 = ExAcquireSpinLockExclusive(&dword_140E2C940);
  v11 = *(_QWORD *)&p_ImageSectionObject->Header.Lock;
  v12 = v9;
  if ( !*(_QWORD *)&p_ImageSectionObject->Header.Lock )
  {
LABEL_18:
    *(_QWORD *)&p_ImageSectionObject->Header.Lock = a2;
    v14 = KeAbPreAcquire((__int64)p_ImageSectionObject, 0LL, 0LL, v10);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v14 + 33) |= 2u;
      else
        *(_BYTE *)(v14 + 10) = 1;
    }
    if ( v12 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
    }
    *a3 = a2;
    return 0LL;
  }
  while ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v11 + 72)) )
  {
    if ( v12 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
    }
    v13 = ExAcquireSpinLockExclusive(&dword_140E2C940);
    v11 = *(_QWORD *)&p_ImageSectionObject->Header.Lock;
    v12 = v13;
    if ( !*(_QWORD *)&p_ImageSectionObject->Header.Lock )
      goto LABEL_18;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2C940 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
  v15 = MiValidateControlAreaPartition(a1, v11);
  if ( v15 < 0 )
  {
    if ( v12 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v11 + 72) = v17;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v11 + 72) = v17;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
    }
LABEL_76:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v15;
  }
  if ( !(*(_DWORD *)(v11 + 56) & 1 | ((*(_DWORD *)(v11 + 56) & 2) != 0)) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
      && !(unsigned int)MiControlAreaRequiresCharge(v11, 2LL) )
    {
      if ( v12 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v11 + 72) = v27;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)(v11 + 72) = v27;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        __writecr8(v12);
      }
      v15 = -1073740277;
      goto LABEL_76;
    }
    active = (_QWORD *)MiReferenceActiveControlArea((_DWORD *)a1, v11);
    v31 = active;
    if ( v12 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v29 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
      {
        *(_DWORD *)(v11 + 72) = 0;
        MiReleaseControlAreaWaiters(active, v29, v30);
        *a3 = v11;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
        MiReleaseControlAreaWaiters(v31, v32, v33);
        *a3 = v11;
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v11 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
      MiReleaseControlAreaWaiters(v31, v29, v30);
      *a3 = v11;
    }
    return 0LL;
  }
  v18 = (AutoBoost *)KeAbPreAcquire((__int64)p_ImageSectionObject, 0LL, 0LL, v16);
  v22 = (unsigned __int64)v18;
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPreWait(v18, v19, v20, v21);
    else
      LegacyAutoBoost::KiAbPreWait(v18, v19);
  }
  WORD4(v35) = 263;
  *((_QWORD *)&v36 + 1) = &v36;
  BYTE10(v35) = 6;
  *(_QWORD *)&v36 = &v36;
  HIDWORD(v35) = 0;
  DWORD2(v34) = 1;
  *(_QWORD *)&v34 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(v11 + 80) = &v34;
  if ( v12 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v11 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v11 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 72), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
  }
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  KeWaitForGate((__int64)&v35 + 8, 18LL);
  if ( v22 )
  {
    KeAbPreAcquire((__int64)p_ImageSectionObject, v22, 0LL, v23);
    KeAbPostReleaseEx(p_ImageSectionObject, v22, v24, v25);
  }
  *a3 = 0LL;
  return 3221226029LL;
}
