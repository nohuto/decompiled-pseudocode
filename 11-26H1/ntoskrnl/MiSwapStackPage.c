/*
 * XREFs of MiSwapStackPage @ 0x140409E34
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiTryLockPageTableUnordered @ 0x1402FCF54 (MiTryLockPageTableUnordered.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiCanStealKernelStack @ 0x14040A394 (MiCanStealKernelStack.c)
 *     MiCheckSameSlabType @ 0x14040A460 (MiCheckSameSlabType.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(_WORD *a1, __int64 a2, int a3, unsigned int a4, __int64 *a5, _DWORD *a6)
{
  unsigned __int64 v10; // r14
  int SystemRegionType; // eax
  void *v12; // rax
  _QWORD *PoolMm; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rbp
  ULONG_PTR v16; // rcx
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // r8d
  __int64 Page; // rax
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // bl
  int v26; // eax
  unsigned __int8 v27; // r11
  int PfnSlabType; // eax
  int v29; // r9d
  int v30; // r11d
  __int64 LeafPfnBuddy; // rbp
  signed int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdi
  unsigned __int8 v42; // bl
  unsigned __int8 CurrentIrql; // bl
  char v44; // [rsp+30h] [rbp-58h]
  char v45; // [rsp+31h] [rbp-57h]
  int v46; // [rsp+34h] [rbp-54h] BYREF
  int v47; // [rsp+38h] [rbp-50h] BYREF
  __int64 v48; // [rsp+40h] [rbp-48h]
  ULONG_PTR v49; // [rsp+48h] [rbp-40h]
  struct _KTHREAD *v50; // [rsp+50h] [rbp-38h]

  if ( !LOBYTE(stru_140E366D8.ReadyTime) )
    return 0LL;
  v44 = byte_140E2D809 & 1;
  v10 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  SystemRegionType = MiGetSystemRegionType((__int64)(v10 << 25) >> 16);
  v47 = SystemRegionType;
  if ( SystemRegionType == 13 )
  {
    v12 = &unk_140E37480;
  }
  else
  {
    if ( SystemRegionType != 11 )
      return 0LL;
    v12 = &unk_140E36F80;
  }
  v48 = (__int64)v12;
  PoolMm = (_QWORD *)ExAllocatePoolMm(
                       64LL,
                       0x40uLL,
                       1934321997,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  PoolMm[5] = (__int64)(v10 << 25) >> 16;
  v15 = v48;
  PoolMm[7] = v48;
  v50 = CurrentThread;
  PoolMm[3] = a1;
  v16 = (a2 + 0x220000000000LL) / 48;
  v49 = v16;
  if ( a5 && (v17 = *a5, *a5 != -1) )
  {
    v21 = 48 * v17 - 0x220000000000LL;
    MiFinalizePageAttribute(v21, 1LL, 8LL);
  }
  else
  {
    if ( (a4 & 0x4000) != 0 )
    {
      v19 = 12288;
      v18 = a3 ^ (unsigned __int8)(v16 ^ a3);
    }
    else
    {
      v18 = MI_PAGE_TO_FULL_COLOR(v16);
      v19 = (a4 >> 9) & 0x8000;
      if ( (a4 & 0x2000000) != 0 )
        v19 |= 0x800u;
    }
    Page = MiGetPage((__int64)a1, v18 & 0xFFF3FFFF | 0x40000, v19);
    v17 = Page;
    if ( Page == -1 )
      goto LABEL_34;
    v21 = 48 * Page - 0x220000000000LL;
  }
  MiSetPfnTbFlushStamp(v21, 0LL, 0);
  PoolMm[6] = v22;
  v25 = MiLockWorkingSetShared(v15, v23, v22);
  v45 = v25;
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v46);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) != *a1
    || v10 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v26 = MiGetSystemRegionType(PoolMm[5]), v47 != v26)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || ((*(_DWORD *)(a2 + 32) >> 30) & v27) != 0 && (a4 & 0x10000000) == 0
    || (MiGetPfnSlabType(v21),
        PfnSlabType = MiGetPfnSlabType(a2),
        !(unsigned int)MiCheckSameSlabType(a2, PfnSlabType, v21, v29, v30))
    || !(unsigned int)MiTryLockPageTableUnordered(v15, ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v24) = v25;
    MiUnlockWorkingSetShared(v15, v24);
LABEL_33:
    if ( v21 && (!a5 || *a5 == -1) )
      MiReleaseFreshPage(v21, v34, v36);
LABEL_34:
    ExFreePoolWithTag(PoolMm, 0);
    return 0LL;
  }
  if ( v44 && (unsigned int)MiTradeStackPageFast(a2, v21) )
  {
    LeafPfnBuddy = 0LL;
    *(_DWORD *)(a2 + 32) &= 0xFFFF0000;
    v32 = 0;
    goto LABEL_24;
  }
  LeafPfnBuddy = MiGetLeafPfnBuddy(a2, 1LL);
  if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) == 0 )
    goto LABEL_38;
  if ( LeafPfnBuddy == -16 || (struct _KTHREAD *)LeafPfnBuddy == v50 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a2, 0, v38, v39) )
    {
LABEL_38:
      v32 = -1073741823;
      goto LABEL_24;
    }
    PoolMm[6] = a2;
    v32 = -1073741267;
  }
  else
  {
    v32 = (unsigned int)MiTradeIsolatedThreadStackPage(LeafPfnBuddy, v17, v49) == 0 ? 0xC000022D : 0;
  }
LABEL_24:
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v48, ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v33) = v45;
  MiUnlockWorkingSetShared(v48, v33);
  *((_DWORD *)PoolMm + 8) = v32;
  if ( v32 < 0 )
  {
    if ( v32 == -1073741267 )
    {
      *PoolMm = v49;
      PoolMm[1] = v17;
      PoolMm[2] = 0LL;
      *((_DWORD *)PoolMm + 8) = 0;
      if ( (struct _KTHREAD *)LeafPfnBuddy == v50 || LeafPfnBuddy == -16 )
      {
        v40 = KeExpandKernelStackAndCalloutInternal(
                (ULONG_PTR)MiJumpStack,
                (ULONG_PTR)PoolMm,
                KeKernelStackSize,
                1,
                0LL);
        if ( v40 < 0 )
          *((_DWORD *)PoolMm + 8) = v40;
      }
      else
      {
        KeGenericCallDpcEx((__int64)MiDoStackCopy, (__int64)PoolMm);
      }
      if ( *((int *)PoolMm + 8) < 0 )
        goto LABEL_49;
      *a6 = 0;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v34) = 2;
        LOBYTE(v35) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v35, v34);
      }
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(__int64 *)(a2 + 24) < 0 );
      }
      v35 = 0xC000000000000000uLL;
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
      *(_DWORD *)(a2 + 32) &= 0xFFFF0000;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
  else
  {
    *a6 = 1;
  }
  if ( *((int *)PoolMm + 8) < 0 )
  {
LABEL_49:
    v41 = PoolMm[6];
    if ( v41 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v34) = 2;
        LOBYTE(v35) = v42;
        KiRaiseIrqlProcessIrqlFlags(v35, v34);
      }
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(__int64 *)(v41 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(PoolMm[6]);
      _InterlockedAnd64((volatile signed __int64 *)(PoolMm[6] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v42 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
        __writecr8(v42);
      }
    }
    goto LABEL_33;
  }
  if ( a5 )
    *a5 = v17;
  ExFreePoolWithTag(PoolMm, 0);
  return 1LL;
}
