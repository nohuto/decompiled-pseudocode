/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180007EC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180009810 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000C780 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     DwmpCreateSessionProcess @ 0x18000D9E0 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x18000DBF0 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x18000DC80 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x18000F2E4 (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
