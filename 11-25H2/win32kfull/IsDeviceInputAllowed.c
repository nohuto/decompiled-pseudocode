/*
 * XREFs of IsDeviceInputAllowed @ 0x1401BCA78
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDeviceInputAllowed(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax

  v3 = 1;
  v4 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872);
  if ( (*v4 & 0x2000) != 0 )
    return 0;
  v6 = *(_DWORD **)(W32GetUserSessionState(v5, v4) + 19872);
  if ( (*v6 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
      return 0;
    v9 = *(_QWORD *)(a1 + 440);
    if ( *(_WORD *)(v9 + 42) != 13 || *(_WORD *)(v9 + 40) != 5 )
      return 0;
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19872) & 0x2000) != 0 )
    return 0;
  return v3;
}
