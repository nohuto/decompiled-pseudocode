/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140300450
 * Callers:
 *     MiMakeTradeVaReadOnly @ 0x140293834 (MiMakeTradeVaReadOnly.c)
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiUpdateWsleAge @ 0x14029C120 (MiUpdateWsleAge.c)
 *     MiProcessWsInSwapFault @ 0x14029EFBC (MiProcessWsInSwapFault.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMakeCombineCandidateClean @ 0x1403193BC (MiMakeCombineCandidateClean.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A7860 (MiLargePageFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiRevokeExecutePte @ 0x140433EB0 (MiRevokeExecutePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiDirtyPte @ 0x1404B1254 (MiDirtyPte.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404C57B8 (MiMakeProtoPoolReadOnly.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiWriteAweClusterPte @ 0x14052DDF8 (MiWriteAweClusterPte.c)
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 *     MiPromoteVirtualizationFault @ 0x1406FF80C (MiPromoteVirtualizationFault.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MxCreatePfnsForPtes @ 0x140CF6200 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewProtection(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // r9
  _KPROCESS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _KPROCESS *Process; // r11
  unsigned __int64 KernelWaitTime; // r11
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  v4 = (unsigned __int64)a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v14 = *a1;
    if ( (v2 & 1) != 0 && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 = v2 | 0x20;
          v2 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v2 = v14;
        }
      }
    }
  }
  v5 = (_KPROCESS *)0x80FFFFFFFFFFFFFFLL;
  v6 = a2 ^ v2;
  v7 = 0LL;
  v8 = v2 ^ v6 & 0x80FFFFFFFFFFFFFFuLL;
  v18 = v8;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    result = MiPteHasShadow(0x80FFFFFFFFFFFFFFuLL, v8, 0LL);
    if ( result )
    {
      v7 = 1LL;
      if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
      {
        result = v18;
        if ( (v18 & 1) != 0 )
          goto LABEL_29;
      }
    }
    else
    {
      v5 = KeGetCurrentThread()->ApcState.Process;
      result = HIDWORD(v5[3].ActiveGroupsMask.Masks[1]);
      if ( (result & 0x1000) != 0 )
      {
        result = v18;
        if ( (v18 & 1) != 0 )
        {
LABEL_29:
          v5 = (_KPROCESS *)0x8000000000000000LL;
          v8 = result | 0x8000000000000000uLL;
        }
      }
    }
  }
  *(_QWORD *)v4 = v8;
  if ( (_DWORD)v7 )
  {
    result = MiPteHasShadow(v5, v8, v7);
    if ( result )
    {
      v12 = *(_QWORD *)(result + 1288);
      if ( v12 )
      {
        v13 = (v11 >> 3) & 0x1FF;
        result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v10 & 1) != 0 )
          result = v10 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v12 + 8 * v13) = result;
      }
    }
  }
  return result;
}
