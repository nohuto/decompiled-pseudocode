/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180056FC0
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180055110 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180056A90 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180056EA0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D14B4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D5FEC (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPC3DStateHelper::Is3DCompositorRunning(PSRWLOCK SRWLock)
{
  char v2; // bl

  AcquireSRWLockShared(SRWLock);
  v2 = BYTE4(SRWLock[2].Ptr);
  ReleaseSRWLockShared(SRWLock);
  return v2;
}
