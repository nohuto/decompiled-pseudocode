/*
 * XREFs of MiVaToFlushVm @ 0x1402843F8
 * Callers:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x14028E9CC (MiDeleteKernelStackPages.c)
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiReleasePteMappings @ 0x1402A3B00 (MiReleasePteMappings.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiDecommitInitializePacket @ 0x140361B88 (MiDecommitInitializePacket.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiOutSwapKernelStackPage @ 0x140405238 (MiOutSwapKernelStackPage.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiFlushCacheMdl @ 0x140516770 (MiFlushCacheMdl.c)
 *     MiClearSystemAccessBits @ 0x1406F2490 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B382E8 (MmUnmapProtectedKernelPageRange.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 */

void *__fastcall MiVaToFlushVm(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  void *v3; // rcx

  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFF800000000000uLL && (a1 > qword_140E2DE50 || a1 < qword_140E2DE40) )
    v1 = (unsigned __int8)byte_140E37A70[((a1 >> 39) & 0x1FF) - 256];
  else
    v1 = 1LL;
  v2 = MiSystemVaTypeToVm(v1, 0xFFFFF68000000000uLL);
  v3 = &unk_140E371C0;
  if ( v2 )
    return (void *)v2;
  return v3;
}
