/*
 * XREFs of IsForegroundLocked @ 0x14018E0E8
 * Callers:
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018DBC4 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsForegroundLocked(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18848) || *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18840) )
    return 1;
  return v4;
}
