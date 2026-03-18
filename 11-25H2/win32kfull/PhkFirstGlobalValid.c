/*
 * XREFs of PhkFirstGlobalValid @ 0x1400C8280
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1400C92D4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402865C0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1400C7900 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PERESOURCE v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (int)a2;
  v8 = *(PERESOURCE *)(W32GetUserSessionState(a1, a2) + 42312);
  LockRefactorStagingAssertAny(&v8, v4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8 * v2 + 48);
  if ( v6 && (*(_DWORD *)(v6 + 64) & 0x80u) != 0 )
    return PhkNextValid(v6, v5);
  return v6;
}
