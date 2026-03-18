/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14006DB80
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     GreNotifyCleanupLogonProcess @ 0x1401A1CDC (GreNotifyCleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(W32GetSessionState(this) + 88) != 0LL;
}
