/*
 * XREFs of ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x140127104 (-TerminateDesktopThreads@@YAXXZ.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     FreeWindowStation @ 0x1401EEE70 (FreeWindowStation.c)
 *     xxxRemoteNotify @ 0x140219660 (xxxRemoteNotify.c)
 *     WakeRITForShutdown @ 0x140223A10 (WakeRITForShutdown.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x140275BC0 (-NumHandles@@YAKPEAX@Z.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x14028528C (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     xxxDesktopThread @ 0x140288970 (xxxDesktopThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HYDRA_HINT(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(result + 68936) |= v2;
  return result;
}
