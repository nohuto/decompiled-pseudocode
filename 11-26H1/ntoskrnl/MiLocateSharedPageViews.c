/*
 * XREFs of MiLocateSharedPageViews @ 0x1406FCFF0
 * Callers:
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x1404EF8B8 (MiPreventControlAreaDeletion.c)
 *     MiDeleteTrimViewInfoList @ 0x140A8954C (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLocateSharedPageViews(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 PoolMm; // rax
  _QWORD *v11; // rbx
  __int64 result; // rax
  int v13; // eax
  __int64 *v14; // rsi
  __int64 v15; // r12
  __int64 SubsectionFromPte; // r14
  __int64 *v17; // rax
  int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD v22[5]; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  int v24; // [rsp+4Ch] [rbp-4h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

  v24 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = MiSafeLockPage(a1, a2, a3);
  v7 = v6;
  if ( v6 == 17 )
    return 3221226548LL;
  if ( MiIsPageOnBadList(v5)
    || (*(_DWORD *)(v5 + 32) & 0x40000000) == 0
    || *(__int64 *)(v5 + 40) >= 0
    || (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0
    || *(__int64 *)(v5 + 8) > 0 && (*(_QWORD *)(v5 + 40) & 0x10000000000LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v7 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
    return 3221226548LL;
  }
  v8 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
  if ( v8 == qword_140E2D7A8 )
  {
    v9 = 2147352576LL;
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v7 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x30uLL,
               1633053005,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v11 = (_QWORD *)PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    *(_QWORD *)(PoolMm + 16) = v9;
    *(_QWORD *)(PoolMm + 8) = a3;
    *(_QWORD *)(PoolMm + 24) = v9 + 4096;
    *(_QWORD *)(PoolMm + 32) = 0LL;
    *(_DWORD *)(PoolMm + 40) = 1;
    if ( ObReferenceObjectSafeWithTag(a3, 0x77566D4Du) )
    {
      *v11 = *(_QWORD *)(a2 + 16);
      result = 0LL;
      *(_QWORD *)(a2 + 16) = v11;
    }
    else
    {
      ExFreePoolWithTag(v11, 0);
      return 3221225738LL;
    }
    return result;
  }
  if ( v8 == qword_140E2D7B0 )
  {
    v9 = qword_140E2D7B8;
    if ( qword_140E2D7B8 )
      goto LABEL_12;
  }
  v13 = *(_DWORD *)(v5 + 16);
  v14 = 0LL;
  v26 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (v13 & 0x400) != 0 )
  {
    v15 = MiPreventControlAreaDeletion(v5, (__int64 *)&BugCheckParameter2, &v26);
    if ( !v15 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v7 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
        __writecr8(v7);
      }
      return 3221225497LL;
    }
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(v5 + 16));
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v7 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
    v14 = (__int64 *)BugCheckParameter2;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v7 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
    }
    v17 = (__int64 *)MiReferencePfBackedSection(v8);
    SubsectionFromPte = (__int64)v17;
    if ( !v17 )
      return 3221225497LL;
    v15 = *v17;
  }
  v22[0] = v15;
  v22[1] = v8;
  v22[2] = v8;
  v22[3] = SubsectionFromPte;
  v22[4] = SubsectionFromPte;
  v23 = 0;
  v18 = MiTrimSection(v22, a2, 256);
  if ( v14 )
    MiDecrementSubsection(v14);
  v19 = MiDecrementModifiedWriteCount(v15, 0);
  if ( v19 )
    MiReleaseControlAreaWaiters(v19, v20, v21);
  if ( v18 < 0 )
    MiDeleteTrimViewInfoList(*(PVOID *)(a2 + 16));
  return (unsigned int)v18;
}
