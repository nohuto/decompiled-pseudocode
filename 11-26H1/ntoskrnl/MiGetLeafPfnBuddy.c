/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140416870
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiIdentifyResidentPage @ 0x1402F17A0 (MiIdentifyResidentPage.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031BFF4 (MiRelockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiFreePhysicalPageChain @ 0x1403C73D4 (MiFreePhysicalPageChain.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MiIdentifyAwePage @ 0x140415764 (MiIdentifyAwePage.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x140415D64 (MiCanStealKernelStack.c)
 *     MiGetPfnPidSafe @ 0x140416120 (MiGetPfnPidSafe.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     MiDeleteSubsectionLargePages @ 0x140510EFC (MiDeleteSubsectionLargePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
