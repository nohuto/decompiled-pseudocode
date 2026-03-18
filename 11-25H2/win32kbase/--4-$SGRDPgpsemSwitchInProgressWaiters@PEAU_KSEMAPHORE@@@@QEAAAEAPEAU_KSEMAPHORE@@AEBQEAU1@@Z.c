/*
 * XREFs of ??4?$SGRDPgpsemSwitchInProgressWaiters@PEAU_KSEMAPHORE@@@@QEAAAEAPEAU_KSEMAPHORE@@AEBQEAU1@@Z @ 0x1401A0E9C
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgpsemSwitchInProgressWaiters<_KSEMAPHORE *>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68872) = v2;
  return W32GetUserSessionState(v4, v3) + 68872;
}
