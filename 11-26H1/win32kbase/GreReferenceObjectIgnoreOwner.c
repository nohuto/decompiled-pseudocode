/*
 * XREFs of GreReferenceObjectIgnoreOwner @ 0x1401489F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 */

__int64 __fastcall GreReferenceObjectIgnoreOwner(__int64 a1, char a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  return HmgShareLock(*(_QWORD *)(SessionState + 88), v3, a2, 1) == 0 ? 0xC0000008 : 0;
}
