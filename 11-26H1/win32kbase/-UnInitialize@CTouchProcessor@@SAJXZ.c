/*
 * XREFs of ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x14018860C
 * Callers:
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1401BB8A0 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1401C439C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x140220698 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::UnInitialize(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3256) )
  {
    DelayZonePalmRejection::Uninitialize();
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    v11 = UserSessionState;
    v12 = *(char **)(UserSessionState + 19312);
    if ( v12 )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(UserSessionState + 19312));
      GreDeleteFastMutex(v12, v21, v22, v23);
      *(_QWORD *)(v11 + 19312) = 0LL;
    }
    v13 = W32GetUserSessionState(v9, v8, v10);
    v17 = *(char **)(v13 + 3256);
    if ( v17 )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)(v13 + 3256));
      GreDeleteFastMutex(v17, v18, v19, v20);
    }
    *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 3256) = 0LL;
  }
  return 0LL;
}
