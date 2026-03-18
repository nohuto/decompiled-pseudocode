/*
 * XREFs of ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140219320
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x14025184C (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14029D55C (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402A7964 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
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
