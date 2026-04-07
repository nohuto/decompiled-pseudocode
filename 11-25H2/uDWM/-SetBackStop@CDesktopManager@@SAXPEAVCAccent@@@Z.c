/*
 * XREFs of ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180065C7C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003F72C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall CDesktopManager::SetBackStop(struct CAccent *a1)
{
  CAnalogCompositorManager *Instance; // rax

  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = a1;
  Instance = CAnalogCompositorManager::GetInstance();
  CAnalogCompositorManager::ToggleLockBackstopImpl(Instance, a1 != 0LL);
}
