/*
 * XREFs of ?bInitializeEUDC@@YAHXZ @ 0x14010BC20
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bInitializeEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  *(_WORD *)(v3 + 13544) = 0;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 13480));
  result = GreCreateSemaphore();
  *(_QWORD *)(v3 + 13488) = result;
  if ( result )
  {
    GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 13496));
    result = 1LL;
    *(_QWORD *)(v3 + 14080) = 0LL;
    *(_DWORD *)(v3 + 14072) = 1;
  }
  return result;
}
