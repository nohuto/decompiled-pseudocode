/*
 * XREFs of ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1801CC82C
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F7F70 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1802130E4 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1801CC884 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::ResetTokenThread(CComposition *this)
{
  unsigned int v1; // ebx
  CSurfaceManager *v2; // rcx
  int v4; // eax

  v1 = 0;
  v2 = (CSurfaceManager *)*((_QWORD *)g_pComposition + 78);
  if ( v2 )
  {
    v4 = CSurfaceManager::ResetTokenThread(v2);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2FCu, 0LL);
  }
  return v1;
}
