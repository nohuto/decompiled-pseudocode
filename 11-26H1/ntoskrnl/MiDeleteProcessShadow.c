/*
 * XREFs of MiDeleteProcessShadow @ 0x14047D73C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x140B27900 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     KeFlushProcessTb @ 0x14047DA1C (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x14047DA4C (MiDeleteTopLevelPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // r12
  KIRQL v7; // al
  KIRQL CurrentIrql; // di
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  signed __int64 v11; // rdx
  signed __int64 v12; // rax
  __int64 *v13; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  _KPROCESS *v17; // rax
  signed __int64 v18; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v20; // rax

  v2 = a2;
  v3 = a1;
  if ( (MiFlags & 0x1800000) != 0 && *(_QWORD *)(a1 + 1288) )
  {
    v4 = *(unsigned __int16 *)(a1 + 1198);
    v5 = a1 + 1024;
    v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v4);
    if ( (_DWORD)a2 )
    {
      v7 = MiLockWorkingSetExclusive(a1 + 1024, a2, v4);
      CurrentIrql = v7;
      if ( *(_QWORD *)(v3 + 1288) )
      {
        v9 = 0xFFFFF6FB7DBED000uLL;
        v10 = 256LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)v9;
          if ( v9 < 0xFFFFF6FB7DBED000uLL || v9 > 0xFFFFF6FB7DBED7F8uLL )
            goto LABEL_8;
          if ( (v11 & 1) != 0 )
            break;
LABEL_14:
          v9 += 8LL;
          if ( !--v10 )
            goto LABEL_15;
        }
        if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
        {
          v17 = MiPteHasShadow();
          if ( v17 )
          {
            KernelWaitTime = v17[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v20 & 0x20) != 0 )
                v18 |= 0x20uLL;
              v11 = v18 | 0x42;
              if ( (v20 & 0x42) == 0 )
                v11 = v18;
            }
          }
        }
LABEL_8:
        if ( (v11 & 1) != 0 )
        {
          do
          {
            if ( v11 >= 0 )
              break;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v11 & 0x7FFFFFFFFFFFFFFFLL, v11);
            if ( v11 == v12 )
              break;
            v11 = v12;
          }
          while ( (v12 & 1) != 0 );
        }
        goto LABEL_14;
      }
      MiUnlockWorkingSetExclusive(v5, v7);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
LABEL_15:
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
      v13 = (__int64 *)(((*(_QWORD *)(v3 + 1288) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v13;
      if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(((*(_QWORD *)(v3 + 1288) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v13);
      *(_QWORD *)(v3 + 1288) = 0LL;
      v15 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
      *(_QWORD *)(v3 + 344) = KiFlushPcid != 0;
      if ( v2 )
      {
        MiUnlockWorkingSetExclusive(v5, CurrentIrql);
      }
      else
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v13, 1u);
      KeFlushProcessTb(v15 << 12);
      if ( (unsigned int)MiDeleteTopLevelPage(v16, v15) != 3 )
        MiReleaseNonPagedResources(v6, 1LL);
    }
  }
}
