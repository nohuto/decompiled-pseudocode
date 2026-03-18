/*
 * XREFs of CleanupMediaChange @ 0x14027BB40
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupMediaChange(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  void *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rbx
  int i; // esi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r8d

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v3 = (void *)UserSessionState[8742];
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    UserSessionState[8742] = 0LL;
  }
  v4 = (void *)UserSessionState[8741];
  if ( v4 )
  {
    Win32FreePool(v4);
    UserSessionState[8741] = 0LL;
  }
  v5 = (_QWORD **)(UserSessionState + 8738);
  if ( UserSessionState[8738] )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v7[1] != v5 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v5 = v8;
      v8[1] = v5;
      Win32FreePool(v7);
    }
    if ( i > 0 )
    {
      v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
         - UserSessionState[8740];
      if ( i > 10 )
      {
        if ( v9 <= 0x2710 )
          return;
        v10 = 165;
      }
      else
      {
        if ( v9 <= 0x2710 )
          return;
        v10 = 163;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, v10);
    }
  }
}
