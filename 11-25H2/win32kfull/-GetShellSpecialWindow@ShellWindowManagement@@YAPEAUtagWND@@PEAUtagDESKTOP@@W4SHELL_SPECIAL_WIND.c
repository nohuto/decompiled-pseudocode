/*
 * XREFs of ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C1AD8
 * Callers:
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14023A9B4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x140277658 (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x14028AAD4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B5B04 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::GetShellSpecialWindow(__int64 a1, int a2)
{
  if ( !a2 )
    return *(struct tagWND **)(a1 + 296);
  if ( a2 == 1 )
    return tagUNIQUE_WINDOW_HANDLE::Get((tagUNIQUE_WINDOW_HANDLE *)(a1 + 344));
  return 0LL;
}
