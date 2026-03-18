/*
 * XREFs of ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022F4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSceneResourceManager::NotifyInvalidResource(
        CSceneResourceManager *this,
        const struct IDeviceResource *a2)
{
  CSceneResourceManager::ReleaseSceneCompositor(this);
}
