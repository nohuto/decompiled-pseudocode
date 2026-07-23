/*
 * XREFs of MiInitializePfn @ 0x1402B9440
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiInitializePfn(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, char a3, __int16 a4)
{
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v6; // r9d
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // r13d
  ULONG_PTR v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  signed __int64 CurrentIrql; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  signed __int64 i; // rax
  __int64 v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // r14d
  unsigned int v25; // r14d
  unsigned __int64 v26; // rax
  unsigned int v27; // ebp
  unsigned int v28; // ebp
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // r11
  __int64 v34; // rdx
  __int64 v35; // rcx
  _KPROCESS *v36; // r8
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rax
  _KPROCESS *v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // eax
  _DWORD *SubsectionFromPte; // rax
  unsigned __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]
  unsigned __int8 v49; // [rsp+90h] [rbp+8h]
  int v50; // [rsp+A0h] [rbp+18h] BYREF
  BOOL v51; // [rsp+A8h] [rbp+20h]

  DemandZeroPte = *(_QWORD *)BugCheckParameter4;
  v6 = a3 & 0x1F;
  if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v31 = *(_QWORD *)BugCheckParameter4;
    if ( (DemandZeroPte & 1) != 0
      && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v34 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v34 & 0x20) != 0 )
            v31 = DemandZeroPte | 0x20;
          DemandZeroPte = v31 | 0x42;
          if ( (v34 & 0x42) == 0 )
            DemandZeroPte = v31;
        }
      }
    }
  }
  v9 = 0LL;
  v51 = DemandZeroPte == 0;
  if ( (a4 & 4) != 0 )
  {
    if ( DemandZeroPte )
      DemandZeroPte = DemandZeroPte & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a3 & 0x1F));
    else
      DemandZeroPte = MiMakeDemandZeroPte(a3);
  }
  v46 = DemandZeroPte;
  if ( (unsigned __int64)&v46 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v46 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v35 = DemandZeroPte;
    if ( (DemandZeroPte & 1) != 0
      && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      v36 = KeGetCurrentThread()->ApcState.Process;
      if ( v36->AddressPolicy != 1 )
      {
        v37 = v36[2].KernelWaitTime;
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)&v46 >> 3) & 0x1FF));
          if ( (v38 & 0x20) != 0 )
            v35 = DemandZeroPte | 0x20;
          DemandZeroPte = v35 | 0x42;
          if ( (v38 & 0x42) == 0 )
            DemandZeroPte = v35;
        }
      }
    }
  }
  v10 = -65537LL;
  if ( (DemandZeroPte & 0x400) != 0 )
    v10 = -5LL;
  v46 = DemandZeroPte & v10;
  v11 = DemandZeroPte & v10;
  if ( (a4 & 8) != 0 )
  {
    v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( qword_140E2D8C0 )
    {
      v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
      if ( (qword_140E2D8C0 & v11) == 0 )
        v12 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
      v11 = v12;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 16) = v11;
  *(_QWORD *)BugCheckParameter2 = v9;
  if ( (a4 & 2) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 40) |= 0x8000000000000000uLL;
  v13 = 1;
  if ( v6 )
  {
    if ( v6 != 31 )
    {
      if ( v6 >> 3 == 3 )
      {
        if ( (v6 & 7) != 0 )
          v13 = 2;
      }
      else if ( v6 >> 3 == 1 )
      {
        v13 = v9;
      }
    }
  }
  else
  {
    v13 = 3;
  }
  if ( BugCheckParameter4 >= 0xFFFF800000000000uLL && byte_140E37BF0[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4 )
  {
    v48 = 0LL;
    v47 = 0LL;
    if ( (int)MiGetVirtualAddressState((__int64)&v47, BugCheckParameter4, 0) < 0 )
      KeBugCheckEx(0x1Au, 0x530BuLL, BugCheckParameter4, 1uLL, BugCheckParameter4);
    v17 = v48 >> 12;
    LODWORD(v9) = 0;
  }
  else
  {
    v14 = (BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL;
    v15 = *(_QWORD *)(v14 - 0x98000000000LL);
    v16 = v14 - 0x98000000000LL;
    if ( v14 - 0x98000000000LL >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v39 = *(_QWORD *)(v14 - 0x98000000000LL);
      if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        v40 = KeGetCurrentThread()->ApcState.Process;
        if ( v40->AddressPolicy != 1 )
        {
          v41 = v40[2].KernelWaitTime;
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 8 * ((v16 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v39 = v15 | 0x20;
            v15 = v39 | 0x42;
            if ( (v42 & 0x42) == 0 )
              v15 = v39;
          }
        }
      }
    }
    v17 = (v15 >> 12) & 0xFFFFFFFFFFLL;
  }
  CurrentIrql = *(_QWORD *)(BugCheckParameter2 + 40);
  v19 = 0xFFFFFF0000000000uLL;
  v20 = v17 ^ (v17 ^ CurrentIrql) & 0xFFFFFF0000000000uLL;
  for ( i = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 40), v20, CurrentIrql);
        CurrentIrql != i;
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 40), v20, i) )
  {
    CurrentIrql = i;
    v20 = v17 ^ (v17 ^ i) & 0xFFFFFF0000000000uLL;
  }
  v22 = 48 * v17 - 0x220000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v25 = Queue >> 9;
  }
  else
  {
    v25 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v26 = CurrentThread->Process[1].Padding[3];
    if ( v26 )
    {
      v43 = *(_DWORD *)(v26 + 1092);
      if ( v25 >= v43 )
        LOBYTE(v25) = v43;
    }
  }
  LOBYTE(CurrentIrql) = 17;
  v49 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v27 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v20, v17) )
          {
            HvlNotifyLongSpinWait(v27);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v49 = CurrentIrql;
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v20) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v20);
        LODWORD(v9) = 0;
      }
      v50 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
    }
    LODWORD(v9) = 0;
  }
  v28 = v9;
  *(_DWORD *)(BugCheckParameter2 + 32) = *(_DWORD *)(BugCheckParameter2 + 32) & 0xFFFF0000 | 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v28 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v20, v17) )
      {
        HvlNotifyLongSpinWait(v28);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  if ( v51 && BugCheckParameter4 >= 0xFFFFF68000000000uLL && BugCheckParameter4 <= 0xFFFFF6FFFFFFFFFFuLL )
    MiIncreaseUsedPtesInPfn(v22, 1LL, v17, v19);
  *(_QWORD *)(v22 + 24) = (*(_QWORD *)(v22 + 24) + 1LL) ^ ((*(_QWORD *)(v22 + 24) + 1LL) ^ *(_QWORD *)(v22 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) >> 22) & 3) != v13 )
    MiChangePageAttribute(BugCheckParameter2, v13, 1LL);
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 32) = ((char)v25 << 24) ^ (((char)v25 << 24) ^ *(_DWORD *)(BugCheckParameter2 + 32)) & 0xF8FFFFFF;
  *(_QWORD *)(BugCheckParameter2 + 8) = BugCheckParameter4;
  LODWORD(v29) = *(_DWORD *)(BugCheckParameter2 + 32) & 0xFFF8FFFF | 0x60000;
  *(_DWORD *)(BugCheckParameter2 + 32) = v29;
  if ( (a4 & 0x20) == 0 )
  {
    v30 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, 1uLL);
    }
    v29 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( v29 < 0 )
    {
      LODWORD(v29) = *(_DWORD *)(BugCheckParameter2 + 16);
      if ( (v29 & 0x400) != 0 )
      {
        v29 = *(_QWORD *)(BugCheckParameter2 + 24);
        if ( (v29 & 0x4000000000000000LL) == 0 )
        {
          v29 = MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v29 + 56LL) & 0x20) == 0 && (*(_DWORD *)(v29 + 152) & 1) == 0 )
            LOBYTE(v29) = MiSetSubsectionModified(v29, 0LL);
        }
      }
    }
    if ( (v30 & 0x80000) != 0 )
    {
      LODWORD(v29) = MiCanPfnOriginalPteBeLost(BugCheckParameter2);
      if ( (_DWORD)v29 )
      {
        LOBYTE(v29) = (v30 & 0x100000) == 0;
        if ( (((*(_QWORD *)(BugCheckParameter2 + 16) & 8LL) != 0) & (unsigned __int8)v29) != 0 )
        {
          v29 = *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFF7uLL;
          *(_QWORD *)(BugCheckParameter2 + 16) = v29;
        }
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v30 | 0x100000;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v29 = *(_QWORD *)BugCheckParameter2 | 1LL;
    *(_QWORD *)BugCheckParameter2 = v29;
  }
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 && v49 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
      LOBYTE(v29) = v49;
      __writecr8(v49);
    }
  }
  return v29;
}
