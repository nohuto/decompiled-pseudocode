/*
 * XREFs of UpdatesLockedForDwm @ 0x14012CB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx

  v6 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 70556) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 70544);
    return PsGetCurrentProcess(v9) != v8;
  }
  return v6;
}
