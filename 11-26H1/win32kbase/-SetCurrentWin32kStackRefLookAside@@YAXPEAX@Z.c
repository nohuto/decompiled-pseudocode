/*
 * XREFs of ?SetCurrentWin32kStackRefLookAside@@YAXPEAX@Z @ 0x14019B840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetCurrentWin32kStackRefLookAside(void *a1, int a2, int a3)
{
  *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 42608) = a1;
}
