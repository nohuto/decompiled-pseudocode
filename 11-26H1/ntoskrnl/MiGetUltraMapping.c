/*
 * XREFs of MiGetUltraMapping @ 0x1402881D0
 * Callers:
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiZeroWithUltraSpace @ 0x1402A0EE0 (MiZeroWithUltraSpace.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiComputeCombineHash @ 0x1402F39F0 (MiComputeCombineHash.c)
 *     MiSharePages @ 0x140306F88 (MiSharePages.c)
 *     MiReplacePageTablePage @ 0x14033C35C (MiReplacePageTablePage.c)
 *     MiScrubPage @ 0x140413AE4 (MiScrubPage.c)
 *     MiReplacePageOfProtoPool @ 0x14044B400 (MiReplacePageOfProtoPool.c)
 *     MiGetPteMappingSet @ 0x14044FFD0 (MiGetPteMappingSet.c)
 *     MiAllocateHyperSpace @ 0x14045E5F0 (MiAllocateHyperSpace.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MmMapMdl @ 0x1404E1360 (MmMapMdl.c)
 *     MiMapBackgroundPageToZero @ 0x14051F110 (MiMapBackgroundPageToZero.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1407054FC (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAcquireScrubProtection @ 0x14070BC8C (MiAcquireScrubProtection.c)
 *     MiUpdateForkMaps @ 0x140AF443C (MiUpdateForkMaps.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiGetHighestUltraLevel @ 0x14024EE20 (MiGetHighestUltraLevel.c)
 *     MiDeleteUltraMapHierarchy @ 0x14029F45C (MiDeleteUltraMapHierarchy.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiReuseUltraPageTable @ 0x14029F784 (MiReuseUltraPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetUltraMapping(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  int v5; // r14d
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbp
  _QWORD *v27; // r8
  int v28; // ebx
  unsigned __int64 HighestUltraLevel; // r14
  __int64 v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v34; // [rsp+68h] [rbp+10h]

  v34 = a2;
  v4 = *(_QWORD *)a1;
  v5 = a2;
  v8 = MiUltraMapSizes[(unsigned int)a2];
  if ( *(_QWORD *)a1 )
  {
    v9 = 0x40000000LL;
    if ( (_DWORD)a2 != 1 )
      v9 = 0x200000LL;
    v10 = (unsigned __int64)(unsigned int)v9 << 9;
    if ( (_DWORD)a2 )
      v10 = v9;
    v11 = a3 << 12;
    v12 = v4 & (v10 - 1);
    a2 = (a3 << 12) + v12;
    if ( a2 <= v10 && v12 && (a4 & 2) == 0 )
    {
      result = v4;
      *(_QWORD *)a1 = v4 + v11;
      return result;
    }
    if ( v5 )
    {
      if ( a2 > v10 )
      {
        v4 = -(__int64)v10 & (v10 + v4 - 1);
        *(_QWORD *)a1 = v4;
      }
      v14 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v5 == 1 )
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (a4 & 2) != 0 )
      {
        MiDeleteUltraMapHierarchy(v14);
      }
      else
      {
        MiRewritePteWithLockBit(0LL, 0LL, v14, *(_QWORD *)&CLFS_LSN_NULL_EXT);
        if ( v5 != 1 )
        {
          v17 = (_QWORD *)(v14 + 8);
          if ( ((v14 + 8) & 0xFFF) != 0 )
          {
            if ( byte_140E2D71A )
              MiReuseUltraPageTable(a1, 1LL);
            v18 = v14 + 8;
            v19 = (__int64)((_QWORD)v17 << 25) >> 16 << 25 >> 16;
            *v17 = MiMakeValidPte(v18, *(_QWORD *)(a1 + 16), 3087007748LL);
            *(_QWORD *)a1 = v19 + v11;
            *(_BYTE *)(a1 + 25) = 1;
            if ( v19 )
              return (__int64)((_QWORD)v17 << 25) >> 16 << 25 >> 16;
          }
        }
      }
    }
    v4 = *(_QWORD *)a1 - v8;
  }
  v15 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    CurrentIrql = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v20 = 0;
      if ( _interlockedbittestandset(&dword_140E34BA8, 0x1Fu) )
        v20 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E34BA8, 0xFFu);
      v21 = (unsigned int)dword_140E34BA8;
      v22 = (unsigned int)dword_140E34BA8;
      for ( LODWORD(v22) = dword_140E34BA8 & 0xBFFFFFFF;
            (dword_140E34BA8 & 0xBFFFFFFF) != 0x80000000;
            v21 = (unsigned int)dword_140E34BA8 )
      {
        if ( (v21 & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E34BA8, 0x40000000u);
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v21, a3) )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E34BA8, 0xFFu);
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v23 = 0;
      if ( _interlockedbittestandset(&dword_140E34BA8, 0x1Fu) )
        v23 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E34BA8, CurrentIrql);
      v24 = (unsigned int)dword_140E34BA8;
      v25 = (unsigned int)dword_140E34BA8;
      for ( LODWORD(v25) = dword_140E34BA8 & 0xBFFFFFFF;
            (dword_140E34BA8 & 0xBFFFFFFF) != 0x80000000;
            v24 = (unsigned int)dword_140E34BA8 )
      {
        if ( (v24 & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E34BA8, 0x40000000u);
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, a3) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E34BA8, CurrentIrql);
    }
  }
  if ( v4 )
  {
    v26 = (v4 - qword_140E34BB0) >> 30;
    v27 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    if ( *v27 )
      MiRewritePteWithLockBit(0LL, 0LL, v27, *(_QWORD *)&CLFS_LSN_NULL_EXT);
    v28 = a4 & 2;
    if ( (a4 & 2) == 0 && byte_140E2D71A && *(_QWORD *)(a1 + 8) != -1LL )
      MiReuseUltraPageTable(a1, 0LL);
    *(_BYTE *)(qword_140E34BD8 + (v26 >> 3)) |= 1 << (v26 & 7);
  }
  else
  {
    v28 = a4 & 2;
  }
  if ( v28 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        dword_140E34BA8 = 0;
        return 0LL;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34BA8, retaddr);
        return 0LL;
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E34BA8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34BA8, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    HighestUltraLevel = MiGetHighestUltraLevel((__int64)&dword_140E34BA8);
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E34BA8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34BA8, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E34BA8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34BA8, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( (a4 & 1) == 0 )
      *(_QWORD *)a1 = HighestUltraLevel + (a3 << 12);
    if ( v34 )
    {
      v30 = ((HighestUltraLevel >> 27) & 0x1FFFF8) - 0x90482600000LL;
      v31 = (_QWORD *)(a1 + 8);
      LOBYTE(v15) = v34 != 1;
      v32 = v15 + 1;
      do
      {
        *(_QWORD *)v30 = MiMakeValidPte(v30, *v31++, 3087007748LL);
        v30 = v30 << 25 >> 16;
        --v32;
      }
      while ( v32 );
      *(_BYTE *)(a1 + 25) = 1;
    }
    return HighestUltraLevel;
  }
}
