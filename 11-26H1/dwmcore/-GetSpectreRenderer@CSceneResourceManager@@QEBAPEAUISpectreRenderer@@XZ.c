/*
 * XREFs of ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C
 * Callers:
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1800F3840 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802069C0 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18022F230 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18022F4CC (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

struct ISpectreRenderer *__fastcall CSceneResourceManager::GetSpectreRenderer(CSceneResourceManager *this)
{
  struct ISpectreRenderer *result; // rax

  result = (struct ISpectreRenderer *)*((_QWORD *)this + 3);
  if ( result )
    return (struct ISpectreRenderer *)*((_QWORD *)result + 15);
  return result;
}
