/*
 * XREFs of ?InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z @ 0x1402030EC
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403FDDC0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x140202A10 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

void __fastcall DXGSESSIONDATA::InitializeContainerData(DXGSESSIONDATA *this, struct _EJOB *a2)
{
  *((_BYTE *)this + 18504) = DxgkpQueryHostDriverStoreAvailability();
}
