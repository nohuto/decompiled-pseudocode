/*
 * XREFs of MiWriteValidPteNewProtection @ 0x1402E24D0
 * Callers:
 *     MiMakeTradeVaReadOnly @ 0x140292D94 (MiMakeTradeVaReadOnly.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiUpdateWsleAge @ 0x14029B680 (MiUpdateWsleAge.c)
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMakeCombineCandidateClean @ 0x14031B3EC (MiMakeCombineCandidateClean.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiRevokeExecutePte @ 0x140428F80 (MiRevokeExecutePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404BF168 (MiMakeProtoPoolReadOnly.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiWriteAweClusterPte @ 0x140530318 (MiWriteAweClusterPte.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiPromoteVirtualizationFault @ 0x1407044DC (MiPromoteVirtualizationFault.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
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
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
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
