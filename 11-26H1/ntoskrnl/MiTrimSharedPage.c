/*
 * XREFs of MiTrimSharedPage @ 0x1404723B4
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MiClusterVadFull @ 0x140467BE0 (MiClusterVadFull.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     MiIncrementModifiedWriteCount @ 0x1404EF980 (MiIncrementModifiedWriteCount.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 *v5; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r10
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r12d
  int v12; // edx
  int v13; // ebx
  __int64 SubsectionFromPte; // r15
  __int64 v15; // rsi
  volatile LONG *v16; // r12
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r15
  int v21; // ebx
  int v22; // ecx
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // edx
  volatile signed __int32 *v28; // rax
  volatile signed __int32 *v29; // rcx
  volatile LONG *v30; // r14
  KIRQL v31; // al
  __int64 v32; // rdx
  _QWORD *v33; // rbx
  __int64 *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD v38[5]; // [rsp+20h] [rbp-58h] BYREF
  int v39; // [rsp+48h] [rbp-30h]
  int v40; // [rsp+4Ch] [rbp-2Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+8h]
  unsigned __int64 v42; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = a2;
  v40 = 0;
  v7 = v3 | 0x8000000000000000uLL;
  v42 = v7;
  v8 = (a3 >> 18) & 2 | 4;
  if ( (a3 & 0x20000) == 0 )
    v8 = (a3 >> 18) & 2;
  v9 = v8 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v9 = v8;
  v10 = v9;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) != 0 && (a3 & 0x8000000) == 0 )
    v10 = v9 | 0x10;
  v12 = v10 | 0x40;
  if ( (a3 & 0x1000000) == 0 )
    v12 = v10;
  v13 = v12 | 0x80;
  if ( (a3 & 0x2000000) == 0 )
    v13 = v12;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    BugCheckParameter2 = 0LL;
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
    if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) != 0 )
    {
LABEL_14:
      v15 = 0LL;
LABEL_23:
      if ( !v15 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v6 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
          __writecr8(v6);
        }
        _InterlockedIncrement(&dword_140EF909C);
        return 1LL;
      }
      v20 = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v6 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
        __writecr8(v6);
      }
      MiReleaseControlAreaWaiters(v5, v18, v19);
      v5 = (__int64 *)BugCheckParameter2;
      goto LABEL_34;
    }
    v15 = *(_QWORD *)SubsectionFromPte;
    v16 = (volatile LONG *)(*(_QWORD *)SubsectionFromPte + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v16);
    v17 = *(_DWORD *)(v15 + 56);
    if ( v17 & 1 | ((v17 & 2) != 0) )
    {
LABEL_16:
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      goto LABEL_14;
    }
    if ( (v17 & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x10000) != 0
        || !*(_QWORD *)(SubsectionFromPte + 8)
        || *(_DWORD *)(SubsectionFromPte + 108) )
      {
        goto LABEL_16;
      }
      MiReferenceSubsection((__int64 *)SubsectionFromPte, 0);
      BugCheckParameter2 = SubsectionFromPte;
    }
    v5 = (__int64 *)MiIncrementModifiedWriteCount(v15);
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    goto LABEL_23;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v6 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      v7 = v42;
    }
    __writecr8(v6);
  }
  v23 = (__int64 *)MiReferencePfBackedSection(v7);
  v20 = (__int64)v23;
  if ( !v23 )
  {
    _InterlockedIncrement(&dword_140EF90A0);
    return 1LL;
  }
  v15 = *v23;
  if ( v11 && *(int *)(v15 + 56) < 0 && (unsigned int)MiClusterVadFull(a1, 16LL, (__int64)v23) )
  {
    _InterlockedIncrement(&dword_140EF9074);
    v24 = MiDecrementModifiedWriteCount(v15, 0);
    if ( v24 )
      MiReleaseControlAreaWaiters(v24, v25, v26);
    return 1LL;
  }
LABEL_34:
  v21 = v13 | 0x100;
  v38[0] = v15;
  v38[1] = v42;
  v38[2] = v42;
  v38[3] = v20;
  v38[4] = v20;
  v39 = 0;
  v22 = MiTrimSection(v38, 0LL, v21);
  if ( v22 || (*(_DWORD *)(a1 + 32) & 0x70000) == 0x60000 )
  {
    v22 = MiTrimSection(v38, 0LL, v21);
    if ( v22 || (*(_DWORD *)(a1 + 32) & 0x70000) == 0x60000 )
      _InterlockedIncrement(&dword_140EF90B0);
    else
      _InterlockedIncrement(&dword_140EF8FFC);
  }
  v27 = *(_DWORD *)(v15 + 56);
  if ( v22 )
  {
    if ( (v27 & 0x20) != 0 )
    {
      v28 = (volatile signed __int32 *)&unk_140EF90A4;
      goto LABEL_60;
    }
    v28 = (volatile signed __int32 *)&unk_140EF90A8;
    v29 = (volatile signed __int32 *)&unk_140EF90AC;
LABEL_58:
    if ( (v27 & 0x80u) == 0 )
      v28 = v29;
    goto LABEL_60;
  }
  if ( (v27 & 0x20) == 0 )
  {
    v28 = (volatile signed __int32 *)&unk_140EF8FF8;
    v29 = (volatile signed __int32 *)&unk_140EF9000;
    goto LABEL_58;
  }
  v28 = (volatile signed __int32 *)&unk_140EF8FF4;
LABEL_60:
  _InterlockedIncrement(v28);
  if ( v5 )
    MiDecrementSubsection(v5);
  v30 = (volatile LONG *)(v15 + 72);
  v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v15 + 72));
  --*(_DWORD *)(v15 + 76);
  v33 = 0LL;
  v34 = (__int64 *)(v15 + 80);
  LOBYTE(v35) = v31;
  v36 = *v34;
  if ( *v34 )
  {
    do
    {
      v32 = *(_QWORD *)v36;
      if ( (*(_DWORD *)(v36 + 8) & 8) != 0 )
      {
        *(_QWORD *)v36 = v33;
        v33 = (_QWORD *)v36;
        *v34 = v32;
      }
      else
      {
        v34 = (__int64 *)v36;
      }
      v36 = v32;
    }
    while ( v32 );
  }
  if ( v31 != 17 )
    ExReleaseSpinLockExclusive(v30, v31);
  if ( v33 )
    MiReleaseControlAreaWaiters(v33, v32, v35);
  if ( (*(_DWORD *)(a1 + 32) & 0x70000) != 0x60000 )
  {
    _InterlockedIncrement(&dword_140EF8FEC);
    return 2LL;
  }
  _InterlockedIncrement(&dword_140EF90B4);
  return 1LL;
}
