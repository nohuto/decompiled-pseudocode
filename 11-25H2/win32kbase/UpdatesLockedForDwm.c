/*
 * XREFs of UpdatesLockedForDwm @ 0x1400E5260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rbx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 70564) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 70552);
    return PsGetCurrentProcess() != v6;
  }
  return v4;
}
