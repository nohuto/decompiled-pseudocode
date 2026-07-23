/*
 * XREFs of MiUpControlAreaRefs @ 0x1404D7C38
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1408853D4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x140A9DE10 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A9F940 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 v4; // rbx
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // esi
  bool v8; // zf
  unsigned __int64 v9; // r12
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *v14; // rax
  unsigned __int64 *v15; // r14
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rsi
  KIRQL v19; // r13
  __int64 *v20; // r14
  __int64 *v21; // rsi
  int active; // eax
  int v23; // esi
  __int64 v24; // rax
  volatile LONG *v25; // rcx
  __int64 v26; // rdx
  unsigned int *v27; // rdi
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-68h]
  BOOL v30; // [rsp+24h] [rbp-64h]
  unsigned int *v31; // [rsp+28h] [rbp-60h] BYREF
  unsigned int *v32; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v29 = 0;
  v4 = **(_QWORD **)(a1 + 80);
  v35 = MiControlAreaRequiresCharge(v4);
  v6 = v35;
  if ( !v35 )
    return 3221227019LL;
  v30 = *(_QWORD *)(v4 + 64) != 0LL;
  if ( (((*(_DWORD *)(a1 + 48) & 0x3E0) - 128) & 0xFFFFFFBF) == 0
    && *(_QWORD *)(v4 + 64)
    && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( v2 )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 1u);
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v29 = 1;
  }
  v8 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v9 = 0LL;
  v33 = 0;
  v10 = 0LL;
  v36 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v10 = (__int64 *)(v4 + 128);
    }
    else
    {
      MiGetProtoPteAddress(a1, v11, 0, &v31);
      v10 = (__int64 *)v31;
    }
    if ( v10 )
      v36 = 1;
    else
      MiUnlockNestedVad(a1, v12);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v31 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v31 = *(unsigned int **)v4;
    v14 = v31;
    --CurrentThread->SpecialApcDisable;
    v15 = (unsigned __int64 *)(v14 + 10);
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)(v14 + 10), 0LL, 0LL, v5);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v6 = v35;
    v2 = a2;
  }
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  *(__m128i *)(v4 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)(v4 + 40)));
  if ( !v10 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 || !*(_QWORD *)(v4 + 64) )
  {
    if ( v2 )
    {
      active = MiReferenceActiveSubsection(v10, 4u, v19);
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
    {
      v24 = MiDecrementSubsections(v10, v10, 4);
LABEL_45:
      v9 = v24;
LABEL_46:
      v23 = v33;
      goto LABEL_49;
    }
    if ( v6 == 2 )
    {
      v24 = MiDecrementSubsectionViewCount((ULONG_PTR)v10, 12);
      goto LABEL_45;
    }
LABEL_48:
    v23 = 0;
    goto LABEL_49;
  }
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    1u,
    &v32);
  v20 = 0LL;
  v21 = v10;
  while ( !a2 )
  {
    v9 += MiDecrementSubsections(v21, v21, 4);
LABEL_36:
    v20 = v21;
    if ( v21 != (__int64 *)v32 )
    {
      v21 = (__int64 *)v21[2];
      if ( v21 )
        continue;
    }
    goto LABEL_46;
  }
  active = MiReferenceActiveSubsection(v21, 4u, v19);
  v33 = active;
  if ( active >= 0 )
    goto LABEL_36;
  if ( v20 )
  {
    v9 += MiDecrementSubsections(v10, v20, 4);
    goto LABEL_46;
  }
LABEL_41:
  v23 = active;
LABEL_49:
  v25 = (volatile LONG *)(v4 + 72);
  if ( v19 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v25);
  else
    ExReleaseSpinLockExclusive(v25, v19);
  if ( v9 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v4 + 60) & 0x3FF)),
      v30,
      v9);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v27 = v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v27 + 5);
    KeAbPostRelease((unsigned __int64)(v27 + 10));
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v28, v26);
  }
  if ( v36 )
    MiUnlockNestedVad(a1, v26);
  if ( v23 < 0 )
  {
    if ( v29 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  return (unsigned int)v23;
}
