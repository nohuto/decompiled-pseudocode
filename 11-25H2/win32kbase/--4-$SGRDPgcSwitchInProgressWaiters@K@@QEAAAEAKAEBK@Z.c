/*
 * XREFs of ??4?$SGRDPgcSwitchInProgressWaiters@K@@QEAAAEAKAEBK@Z @ 0x1401A0F14
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgcSwitchInProgressWaiters<unsigned long>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68880) = v2;
  return W32GetUserSessionState(v4, v3) + 68880;
}
