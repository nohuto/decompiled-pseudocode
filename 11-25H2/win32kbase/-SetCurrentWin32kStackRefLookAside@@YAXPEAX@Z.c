/*
 * XREFs of ?SetCurrentWin32kStackRefLookAside@@YAXPEAX@Z @ 0x14015B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetCurrentWin32kStackRefLookAside(void *a1, __int64 a2)
{
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42584) = a1;
}
