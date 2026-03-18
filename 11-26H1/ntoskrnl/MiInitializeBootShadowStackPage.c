/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140CFC214
 * Callers:
 *     MiInitializeBootKernelShadowStack @ 0x1406FF1A0 (MiInitializeBootKernelShadowStack.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140CFC130 (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x1402843F8 (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140309350 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiDecreaseUsedPtes @ 0x14033F020 (MiDecreaseUsedPtes.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiMarkPfnVerified @ 0x14038C9E8 (MiMarkPfnVerified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiInitializeBootShadowStackPage(unsigned __int64 a1, int a2)
{
  int v3; // esi
  __int64 v4; // r15
  int v5; // edi
  unsigned __int8 CurrentIrql; // bl
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int64 v10; // r14
  unsigned __int64 v11; // rsi
  char v12; // bp
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  signed __int64 v16; // rbp
  unsigned __int64 v17; // r14
  char v18; // r13
  __int64 v19; // rbx
  unsigned __int64 v20; // r8
  _KPROCESS *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v28; // rbx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v4 = 48 * ((*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  LODWORD(v32) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) != 3 && _bittest64(&MiFlags, 0x2Bu) )
    MiMarkPfnVerified(v4, 4);
  if ( (unsigned int)MiGetPfnSlabType(v4) != 9 && !(unsigned int)MiIsPfnFromChargedSlabAllocation(v4) )
    v5 = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v5 )
  {
    MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0LL);
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.320, 1uLL);
  }
  v7 = MiVaToFlushVm((__int64)(a1 << 25) >> 16);
  if ( _bittest64(&MiFlags, 0x2Bu) )
  {
    v16 = (signed __int64)v7;
    v17 = v9 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
    v18 = MiLockWorkingSetShared((__int64)v7, v8, v9);
    MiLockPageTableInternal(v16, v17, 0);
    v19 = *(_QWORD *)a1;
    v20 = 0xFFFFF6FB7DBED000uLL;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL
      && a1 <= 0xFFFFF6FB7DBED7F8uLL
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v21 = MiPteHasShadow();
      if ( v21 )
      {
        KernelWaitTime = v21[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v24 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            v22 |= 0x20uLL;
          v19 = v22 | 0x42;
          if ( (v24 & 0x42) == 0 )
            v19 = v22;
        }
      }
    }
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        MiLockPageAndSetDirty(v4, 1);
        v25 = v19 & 0xFFFFFFFFFFFFF7BDuLL;
        v32 = v25;
        v26 = 0;
        if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v27 = MiSanitizeShadowPxe();
          v25 = v32;
          v26 = v27;
        }
        *(_QWORD *)a1 = v25;
        if ( v26 )
          MiWritePteShadow();
        MiFlushSingleTbEntry((__int64)(a1 << 25) >> 16, 2LL);
      }
    }
    else
    {
      v28 = v19 & 0xFFFFFFFFFFFFF7FFuLL;
      v29 = 0;
      v32 = v28;
      if ( a1 >= v20 && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v30 = MiSanitizeShadowPxe();
        v28 = v32;
        v29 = v30;
      }
      *(_QWORD *)a1 = v28;
      if ( v29 )
        MiWritePteShadow();
    }
    MiUnlockPageTableInternal(v16, v17);
    LOBYTE(v31) = v18;
    MiUnlockWorkingSetShared(v16, v31);
  }
  else
  {
    v10 = (signed __int64)v7;
    v11 = v9 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
    v12 = MiLockWorkingSetShared((__int64)v7, v8, v9);
    MiLockPageTableInternal(v10, v11, 0);
    v13 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(v14, v11, (_KPROCESS *)1);
    MiFlushSingleTbEntry((__int64)(a1 << 25) >> 16, 2LL);
    MiLockAndDecrementShareCount(v4, 1LL);
    MiLockAndDecrementShareCount(48 * (v13 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0LL);
    MiUnlockPageTableInternal(v10, v11);
    LOBYTE(v15) = v12;
    MiUnlockWorkingSetShared(v10, v15);
    MiReturnResident((__int64)&MiSystemPartition, 1uLL);
    MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
    _InterlockedDecrement64((volatile signed __int64 *)&stru_140E36558.320);
  }
}
