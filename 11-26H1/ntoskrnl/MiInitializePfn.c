/*
 * XREFs of MiInitializePfn @ 0x1402D7680
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiIncreaseUsedPtesInPfn @ 0x14030B600 (MiIncreaseUsedPtesInPfn.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x14045CF48 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  signed __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  __int64 v23; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // r14d
  unsigned int v26; // r14d
  unsigned __int64 v27; // rax
  unsigned int v28; // ebp
  unsigned int v29; // ebp
  __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // r11
  __int64 v35; // rdx
  __int64 v36; // rcx
  _KPROCESS *v37; // r8
  unsigned __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rax
  _KPROCESS *v41; // r9
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // eax
  _DWORD *SubsectionFromPte; // rax
  __int64 CurrentIrql; // rcx
  unsigned __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  __int128 v49; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]
  unsigned __int8 v51; // [rsp+90h] [rbp+8h]
  int v52; // [rsp+A0h] [rbp+18h] BYREF
  BOOL v53; // [rsp+A8h] [rbp+20h]

  DemandZeroPte = *(_QWORD *)BugCheckParameter4;
  v6 = a3 & 0x1F;
  if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v32 = *(_QWORD *)BugCheckParameter4;
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
          v35 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v32 = DemandZeroPte | 0x20;
          DemandZeroPte = v32 | 0x42;
          if ( (v35 & 0x42) == 0 )
            DemandZeroPte = v32;
        }
      }
    }
  }
  v9 = 0LL;
  v53 = DemandZeroPte == 0;
  if ( (a4 & 4) != 0 )
  {
    if ( DemandZeroPte )
      DemandZeroPte = DemandZeroPte & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a3 & 0x1F));
    else
      DemandZeroPte = MiMakeDemandZeroPte(a3);
  }
  v48 = DemandZeroPte;
  if ( (unsigned __int64)&v48 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v36 = DemandZeroPte;
    if ( (DemandZeroPte & 1) != 0
      && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      v37 = KeGetCurrentThread()->ApcState.Process;
      if ( v37->AddressPolicy != 1 )
      {
        v38 = v37[2].KernelWaitTime;
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v36 = DemandZeroPte | 0x20;
          DemandZeroPte = v36 | 0x42;
          if ( (v39 & 0x42) == 0 )
            DemandZeroPte = v36;
        }
      }
    }
  }
  v10 = -65537LL;
  if ( (DemandZeroPte & 0x400) != 0 )
    v10 = -5LL;
  v48 = DemandZeroPte & v10;
  v11 = DemandZeroPte & v10;
  if ( (a4 & 8) != 0 )
  {
    v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( qword_140E2D740 )
    {
      v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
      if ( (qword_140E2D740 & v11) == 0 )
        v12 = qword_140E2D740 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
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
  if ( BugCheckParameter4 >= 0xFFFF800000000000uLL && byte_140E37A70[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4 )
  {
    v50 = 0LL;
    v49 = 0LL;
    if ( (int)MiGetVirtualAddressState((__int64)&v49, BugCheckParameter4, 0) < 0 )
      KeBugCheckEx(0x1Au, 0x530BuLL, BugCheckParameter4, 1uLL, BugCheckParameter4);
    v17 = v50 >> 12;
    LODWORD(v9) = 0;
  }
  else
  {
    v14 = (BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL;
    v15 = *(_QWORD *)(v14 - 0x98000000000LL);
    v16 = v14 - 0x98000000000LL;
    if ( v14 - 0x98000000000LL >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v40 = *(_QWORD *)(v14 - 0x98000000000LL);
      if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        v41 = KeGetCurrentThread()->ApcState.Process;
        if ( v41->AddressPolicy != 1 )
        {
          v42 = v41[2].KernelWaitTime;
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * ((v16 >> 3) & 0x1FF));
            if ( (v43 & 0x20) != 0 )
              v40 = v15 | 0x20;
            v15 = v40 | 0x42;
            if ( (v43 & 0x42) == 0 )
              v15 = v40;
          }
        }
      }
    }
    v17 = (v15 >> 12) & 0xFFFFFFFFFFLL;
  }
  v18 = *(_QWORD *)(BugCheckParameter2 + 40);
  v19 = 0xFFFFFF0000000000uLL;
  v20 = v17 ^ (v17 ^ v18) & 0xFFFFFF0000000000uLL;
  v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 40), v20, v18);
  if ( v18 != v21 )
  {
    do
    {
      v22 = v21;
      v20 = v17 ^ (v17 ^ v21) & 0xFFFFFF0000000000uLL;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 40), v20, v21);
    }
    while ( v22 != v21 );
  }
  v23 = 48 * v17 - 0x220000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v26 = Queue >> 9;
  }
  else
  {
    v26 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v27 = CurrentThread->Process[1].Padding[3];
    if ( v27 )
    {
      v44 = *(_DWORD *)(v27 + 1092);
      if ( v26 >= v44 )
        LOBYTE(v26) = v44;
    }
  }
  v51 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v28 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v28);
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
      v51 = CurrentIrql;
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v20) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v20);
        LODWORD(v9) = 0;
      }
      v52 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v52);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
    }
    LODWORD(v9) = 0;
  }
  v29 = v9;
  *(_DWORD *)(BugCheckParameter2 + 32) = *(_DWORD *)(BugCheckParameter2 + 32) & 0xFFFF0000 | 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v29);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  if ( v53 && BugCheckParameter4 >= 0xFFFFF68000000000uLL && BugCheckParameter4 <= 0xFFFFF6FFFFFFFFFFuLL )
    MiIncreaseUsedPtesInPfn(v23, 1LL, v17, v19);
  *(_QWORD *)(v23 + 24) = (*(_QWORD *)(v23 + 24) + 1LL) ^ ((*(_QWORD *)(v23 + 24) + 1LL) ^ *(_QWORD *)(v23 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) >> 22) & 3) != v13 )
    MiChangePageAttribute(BugCheckParameter2, v13, 1LL);
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 32) = ((char)v26 << 24) ^ (((char)v26 << 24) ^ *(_DWORD *)(BugCheckParameter2 + 32)) & 0xF8FFFFFF;
  *(_QWORD *)(BugCheckParameter2 + 8) = BugCheckParameter4;
  LODWORD(v30) = *(_DWORD *)(BugCheckParameter2 + 32) & 0xFFF8FFFF | 0x60000;
  *(_DWORD *)(BugCheckParameter2 + 32) = v30;
  if ( (a4 & 0x20) == 0 )
  {
    v31 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, 1uLL);
    }
    v30 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( v30 < 0 )
    {
      LODWORD(v30) = *(_DWORD *)(BugCheckParameter2 + 16);
      if ( (v30 & 0x400) != 0 )
      {
        v30 = *(_QWORD *)(BugCheckParameter2 + 24);
        if ( (v30 & 0x4000000000000000LL) == 0 )
        {
          v30 = MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v30 + 56LL) & 0x20) == 0 && (*(_DWORD *)(v30 + 152) & 1) == 0 )
            LOBYTE(v30) = MiSetSubsectionModified(v30, 0LL);
        }
      }
    }
    if ( (v31 & 0x80000) != 0 )
    {
      LODWORD(v30) = MiCanPfnOriginalPteBeLost(BugCheckParameter2);
      if ( (_DWORD)v30 )
      {
        LOBYTE(v30) = (v31 & 0x100000) == 0;
        if ( (((*(_QWORD *)(BugCheckParameter2 + 16) & 8LL) != 0) & (unsigned __int8)v30) != 0 )
        {
          v30 = *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFF7uLL;
          *(_QWORD *)(BugCheckParameter2 + 16) = v30;
        }
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v31 | 0x100000;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v30 = *(_QWORD *)BugCheckParameter2 | 1LL;
    *(_QWORD *)BugCheckParameter2 = v30;
  }
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 && v51 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      LOBYTE(v30) = v51;
      __writecr8(v51);
    }
  }
  return v30;
}
