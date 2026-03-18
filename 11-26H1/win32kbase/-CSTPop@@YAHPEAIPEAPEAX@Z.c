/*
 * XREFs of ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1401746CC
 * Callers:
 *     xxxCreateSystemThreads @ 0x1401C2200 (xxxCreateSystemThreads.c)
 *     CSTCleanupStack @ 0x1401C3EE8 (CSTCleanupStack.c)
 *     HandleSystemThreadCreationFailure @ 0x1401D52F0 (HandleSystemThreadCreationFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTPop(unsigned int *a1, void **a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 i; // r8
  void *v7; // rcx
  unsigned int v8; // ecx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  for ( i = 0LL; (unsigned int)i < 0x1E; i = (unsigned int)(i + 1) )
  {
    v7 = *(void **)(UserSessionState + 24 * i + 71280);
    if ( v7 )
    {
      *a2 = v7;
      v8 = *(_DWORD *)(UserSessionState + 24 * i + 71296);
      *(_DWORD *)(UserSessionState + 24 * i + 71296) = 0;
      *(_QWORD *)(UserSessionState + 24 * i + 71280) = 0LL;
      result = 1LL;
      *a1 = v8;
      return result;
    }
  }
  return 0LL;
}
