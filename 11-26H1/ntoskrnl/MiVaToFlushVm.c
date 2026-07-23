/*
 * XREFs of MiVaToFlushVm @ 0x140283968
 * Callers:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiOutSwapKernelStackPage @ 0x1403FE32C (MiOutSwapKernelStackPage.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x1406F7808 (MiWritePteHighLevel.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B3A4F8 (MmUnmapProtectedKernelPageRange.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 */

void *__fastcall MiVaToFlushVm(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  void *v3; // rcx

  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFF800000000000uLL && (a1 > qword_140E2DFD0 || a1 < qword_140E2DFC0) )
    v1 = (unsigned __int8)byte_140E37BF0[((a1 >> 39) & 0x1FF) - 256];
  else
    v1 = 1LL;
  v2 = MiSystemVaTypeToVm(v1, 0xFFFFF68000000000uLL);
  v3 = &unk_140E37340;
  if ( v2 )
    return (void *)v2;
  return v3;
}
