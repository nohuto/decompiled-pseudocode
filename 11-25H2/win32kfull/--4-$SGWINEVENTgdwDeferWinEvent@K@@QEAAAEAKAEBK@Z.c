/*
 * XREFs of ??4?$SGWINEVENTgdwDeferWinEvent@K@@QEAAAEAKAEBK@Z @ 0x14026EBF0
 * Callers:
 *     EditionDeactivateMitInput @ 0x140247350 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGWINEVENTgdwDeferWinEvent<unsigned long>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 70600) = v2;
  return W32GetUserSessionState(v4, v3) + 70600;
}
