/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x14003AAB0
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1401BE41C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(PERESOURCE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v4, v3) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v6, v5)
     || ExIsResourceAcquiredExclusiveLite(*a1) != 1 && !ExIsResourceAcquiredSharedLite(*a1)) )
  {
    __int2c();
  }
}
