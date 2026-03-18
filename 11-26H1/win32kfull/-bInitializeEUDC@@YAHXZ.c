/*
 * XREFs of ?bInitializeEUDC@@YAHXZ @ 0x1402657C0
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bInitializeEUDC(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  *(_WORD *)(v2 + 13536) = 0;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 13472));
  result = GreCreateSemaphore();
  *(_QWORD *)(v2 + 13480) = result;
  if ( result )
  {
    GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 13488));
    result = 1LL;
    *(_QWORD *)(v2 + 14072) = 0LL;
    *(_DWORD *)(v2 + 14064) = 1;
  }
  return result;
}
