/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x140008500
 * Callers:
 *     GreNotifyCleanupLogonProcess @ 0x14000849C (GreNotifyCleanupLogonProcess.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(W32GetSessionState(this) + 88) != 0LL;
}
