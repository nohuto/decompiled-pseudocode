/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1401B3DC4
 * Callers:
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1401BB2D0 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x140197830 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16400) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16400));
    v11 = *(char **)(W32GetUserSessionState(v8, v7, v9) + 16400);
    if ( v11 )
      GreDeleteFastMutex(v11, v10, v12, v13);
    *(_QWORD *)(W32GetUserSessionState((_DWORD)v11, v10, v12) + 16400) = 0LL;
  }
}
