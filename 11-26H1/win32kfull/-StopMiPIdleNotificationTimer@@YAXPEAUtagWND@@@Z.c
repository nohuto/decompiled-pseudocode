/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x140054760
 * Callers:
 *     PostMousePointerLeaveAndCleanup @ 0x1400545E0 (PostMousePointerLeaveAndCleanup.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1402728F8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 */

void __fastcall StopMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1512LL);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 8) )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    FindTimer((__int64)a1, 65523LL, 2u, 1, 0LL);
  }
}
