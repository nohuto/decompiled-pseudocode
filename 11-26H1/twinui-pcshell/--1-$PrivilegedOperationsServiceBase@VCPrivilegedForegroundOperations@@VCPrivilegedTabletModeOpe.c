/*
 * XREFs of ??1?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x18010CC50
 * Callers:
 *     ??1?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x18010C664 (--1-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180081CF4 (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::~PrivilegedOperationsServiceBase<CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease((__int64 *)(a1 + 48));
  return PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::~PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>(a1);
}
