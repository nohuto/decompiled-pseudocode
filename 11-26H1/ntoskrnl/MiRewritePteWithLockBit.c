/*
 * XREFs of MiRewritePteWithLockBit @ 0x14029F518
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiDeleteUltraMapHierarchy @ 0x14029F45C (MiDeleteUltraMapHierarchy.c)
 *     MiTradePageWritePte @ 0x14029F8EC (MiTradePageWritePte.c)
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiZeroWithUltraSpace @ 0x1402A0EE0 (MiZeroWithUltraSpace.c)
 *     MiWriteLargePte @ 0x1402A10E0 (MiWriteLargePte.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiMakePteClean @ 0x14031A2A0 (MiMakePteClean.c)
 *     MiDecommitLargePte @ 0x14033EDBC (MiDecommitLargePte.c)
 *     MiDecommitLargePoolVa @ 0x1403C3720 (MiDecommitLargePoolVa.c)
 *     MiDeleteLargeUserPde @ 0x140477A60 (MiDeleteLargeUserPde.c)
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiWriteAweClusterPte @ 0x14052DDF8 (MiWriteAweClusterPte.c)
 *     MiPromoteVirtualizationFault @ 0x1406FF80C (MiPromoteVirtualizationFault.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiLockNestedPageTable @ 0x14029EBE0 (MiLockNestedPageTable.c)
 *     MiWriteValidPteNewPage @ 0x14029FC70 (MiWriteValidPteNewPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockPte @ 0x140325920 (MiLockPte.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiReplicatePteChange @ 0x140528570 (MiReplicatePteChange.c)
 */

__int64 __fastcall MiRewritePteWithLockBit(signed __int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // r14d
  BOOL v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // r9
  int v16; // ecx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBEDFFFuLL;
  if ( a1 )
  {
    if ( !a2 )
    {
      MiLockNestedPageTable(a1, a3);
      return MiUnlockNestedPageTableWritePte(a1, a3, a4, 0LL);
    }
    if ( v8 && (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v7 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36080);
    }
    result = *(_QWORD *)a3;
    v15 = 0xFFFFF6FB7DBED7F8uLL;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
      result = MiReadPteShadow(a3, *(_QWORD *)a3);
    if ( (a4 & 1) != 0 && (result & 1) != 0 )
    {
      if ( ((a4 ^ result) & 0xFFFFFFFFFF000LL) != 0 )
        result = MiWriteValidPteNewPage(a3, a4, 0LL);
      else
        result = MiWriteValidPteNewProtection(a3, a4);
    }
    else if ( v8 )
    {
      v16 = 0;
      v18 = a4;
      result = 0xFFFFF6FB7DBED000uLL;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL )
      {
        result = v15;
        if ( a3 <= v15 )
        {
          result = MiSanitizeShadowPxe(0LL, &v18, a3);
          a4 = v18;
          v16 = result;
        }
      }
      *(_QWORD *)a3 = a4;
      if ( v16 )
        result = MiWritePteShadow(a3, a4, a3, v15);
    }
    else
    {
      *(_QWORD *)a3 = a4;
    }
  }
  else
  {
    if ( v8 )
    {
      v7 = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36080);
    }
    MiLockPte(a3, 0LL);
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    _InterlockedExchange64((volatile __int64 *)a3, a4);
    result = 0xFFFFF6FB7DBED000uLL;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( a3 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = MiPteHasShadow(v10, v9, v11);
        if ( result )
        {
          v13 = *(_QWORD *)(result + 1288);
          if ( v13 )
          {
            result = (a3 >> 3) & 0x1FF;
            if ( (a4 & 1) != 0 )
              v14 = a4 & 0x7FFFFFFFFFFFFFFFLL;
            else
              v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            *(_QWORD *)(v13 + 8 * result) = v14;
          }
        }
      }
    }
  }
  if ( v7 )
  {
    result = MiReplicatePteChange(a3, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
    {
      dword_140E36080 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36080, retaddr);
    }
  }
  return result;
}
