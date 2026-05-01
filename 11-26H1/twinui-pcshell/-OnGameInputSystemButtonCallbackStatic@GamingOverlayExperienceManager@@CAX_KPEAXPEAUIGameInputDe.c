/*
 * XREFs of ?OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDevice@@0W4GameInputSystemButtons@@3@Z @ 0x18034EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034E7E0 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 */

void __fastcall GamingOverlayExperienceManager::OnGameInputSystemButtonCallbackStatic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  if ( a2 )
    GamingOverlayExperienceManager::OnGameInputSystemButtonCallback(a2, a3, a4, a5);
}
