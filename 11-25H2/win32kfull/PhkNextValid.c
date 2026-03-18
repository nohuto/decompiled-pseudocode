/*
 * XREFs of PhkNextValid @ 0x1400C5F24
 * Callers:
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1400C40C8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1400C8280 (PhkFirstGlobalValid.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402865C0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1402DD8F0 (fnHkINLPCWPEXSTRUCT.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1402DDA00 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall PhkNextValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *CurrentThreadNonPaged; // rax

  v2 = a1;
  v3 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42312);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v3) != 1 && !ExIsResourceAcquiredSharedLite(v3)) )
  {
    __int2c();
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 40) )
    {
      v2 = *(_QWORD *)(v2 + 40);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v2 + 64) & 1) != 0 )
      return 0LL;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v7, v6);
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    v7 = *(int *)(v2 + 48);
    v2 = *(_QWORD *)(CurrentThreadNonPaged[63] + 8 * v7 + 48);
    if ( !v2 )
      return v2;
LABEL_10:
    if ( (*(_DWORD *)(v2 + 64) & 0x80u) == 0 )
      return v2;
  }
}
