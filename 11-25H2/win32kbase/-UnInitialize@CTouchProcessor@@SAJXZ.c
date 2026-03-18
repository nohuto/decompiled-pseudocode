/*
 * XREFs of ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400CF13C
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400CF1E8 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400CF2BC (--1CTouchProcessor@@QEAA@XZ.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x14021CCCC (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rbx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3256) )
  {
    DelayZonePalmRejection::Uninitialize();
    UserSessionState = W32GetUserSessionState(v3, v2);
    v7 = UserSessionState;
    v8 = *(char **)(UserSessionState + 19280);
    if ( v8 )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(UserSessionState + 19280));
      GreDeleteFastMutex(v8);
      *(_QWORD *)(v7 + 19280) = 0LL;
    }
    v9 = W32GetUserSessionState(v6, v5);
    v12 = *(char **)(v9 + 3256);
    if ( v12 )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)(v9 + 3256));
      GreDeleteFastMutex(v12);
    }
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 3256) = 0LL;
  }
  return 0LL;
}
