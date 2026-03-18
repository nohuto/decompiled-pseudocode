/*
 * XREFs of ?UnInitialize@CFrameIdGenerator@@SAXXZ @ 0x140215CC0
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14014CCD0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CFrameIdGenerator::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(UserSessionState + 16728);
  if ( v3 )
  {
    tagDomLock::LockUnInitialize((PVOID *)(v3 + 8));
    GreDeleteFastMutex((char *)v3);
    *(_QWORD *)(UserSessionState + 16728) = 0LL;
  }
}
