/*
 * XREFs of GdiMultiUserFontCleanup @ 0x14010FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x14010FB1C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x14010FEB4 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCache@@YAXXZ @ 0x14026EE0C (-vCleanUpFntCache@@YAXXZ.c)
 *     ?vCleanupPrintKViewList@@YAXXZ @ 0x14030FA30 (-vCleanupPrintKViewList@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // edx
  __int64 v4; // rbx

  CleanUpEUDC();
  v4 = *(_QWORD *)(W32GetSessionState(v1, v0, v2) + 96);
  if ( *(_QWORD *)(v4 + 20408) )
    bCleanupFontTable((struct PFT **)(v4 + 20408), v3);
  if ( *(_QWORD *)(v4 + 20416) )
    bCleanupFontTable((struct PFT **)(v4 + 20416), v3);
  if ( *(_QWORD *)(v4 + 20424) )
    bCleanupFontTable((struct PFT **)(v4 + 20424), v3);
  if ( *(_QWORD *)(v4 + 24032) )
    vCleanupPrintKViewList();
  vCleanUpFntCache();
}
