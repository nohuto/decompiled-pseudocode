/*
 * XREFs of ?UnInitialize@CDesktopInputSink@@SAXXZ @ 0x1402136C8
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 */

void __fastcall CDesktopInputSink::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  char *v3; // rcx
  struct _LUID v4; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 19128) )
  {
    v4 = 0LL;
    CDesktopInputSink::SetDesktopInputSink(0LL, &v4);
    v3 = *(char **)(UserSessionState + 19128);
    if ( v3 )
      GreDeleteFastMutex(v3);
    *(_QWORD *)(UserSessionState + 19128) = 0LL;
  }
}
