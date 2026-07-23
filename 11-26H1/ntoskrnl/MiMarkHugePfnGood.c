/*
 * XREFs of MiMarkHugePfnGood @ 0x1406F1A84
 * Callers:
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 *v6; // r14
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rbx
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  const signed __int64 *v11; // rcx
  const signed __int64 *v12; // r8
  signed __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h]

  v1 = a1 >> 18;
  v2 = 0;
  v3 = 0LL;
  v4 = (a1 >> 18) & 0x3FFFFF;
  v6 = (__int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  MiLockHugePfnAtDpc((__int64)v6);
  if ( !MiIsPageInHugePfn(a1) )
    goto LABEL_8;
  v8 = *v6;
  if ( (*v6 & 8) != 0 )
  {
    v19 = MiHugePfnPartition(v6);
    if ( !v19 )
    {
LABEL_8:
      v2 = -1073740748;
      goto LABEL_34;
    }
    v9 = a1 & 0x3FFFF;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
    v3 = qword_140E2ECE0;
    while ( v3 )
    {
      v10 = *(_QWORD *)(v3 + 24) & 0x3FFFFFLL;
      if ( v4 > v10 )
      {
        v3 = *(_QWORD *)(v3 + 8);
      }
      else
      {
        if ( v4 >= v10 )
          break;
        v3 = *(_QWORD *)v3;
      }
    }
    v11 = *(const signed __int64 **)(v3 + 32);
    if ( _bittest64(v11, v9) )
    {
      v2 = 274;
      *((_BYTE *)v11 + ((unsigned __int64)v9 >> 3)) &= ~(1 << (v9 & 7));
      --qword_140E2ECE8;
      v12 = v11 + 4095;
      while ( 1 )
      {
        v13 = *v11;
        if ( v11 == v12 )
          break;
        if ( v13 )
          goto LABEL_31;
        ++v11;
      }
      if ( v13 )
      {
LABEL_31:
        v17 = *(_QWORD *)(v3 + 32);
        if ( _bittest64((const signed __int64 *)(v17 + 0x8000), v9) )
          *(_BYTE *)(((unsigned __int64)v9 >> 3) + v17 + 0x8000) &= ~(1 << (v9 & 7));
        goto LABEL_33;
      }
      if ( (v8 & 7) == 4 )
      {
        MiUnlinkHugeRangeEx(v19, v1, 0);
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2ECE0, v3);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
      v15 = *v6;
      *v6 &= ~8uLL;
      if ( v14 || (v16 = v15 & 7, v16 != 3) && v16 != 5 )
        MiInsertHugeRangeInList(0LL, v1, 2);
    }
    else
    {
LABEL_33:
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
      v3 = 0LL;
    }
  }
LABEL_34:
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4
                              * (((((__int64)v6 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((__int64)v6 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    ExFreePoolWithTag(*(PVOID *)(v3 + 32), 0);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
  return v2;
}
