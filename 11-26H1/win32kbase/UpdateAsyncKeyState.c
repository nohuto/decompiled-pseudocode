/*
 * XREFs of UpdateAsyncKeyState @ 0x14008A330
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021E144 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1400E8AFC (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionUpdateAsyncKeyStateThreads @ 0x140197FD0 (ApiSetEditionUpdateAsyncKeyStateThreads.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  char v5; // bl
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  int v10; // edx
  int v11; // ecx
  unsigned __int64 v12; // r8
  int v13; // r15d
  char v14; // r12
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // r15d
  unsigned __int64 v19; // rsi
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = (unsigned __int8)a2;
  v5 = a3;
  if ( a1 && (*(_DWORD *)(a1 + 436) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, a2, a3, a4);
  if ( v5 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    v8 = 2 * (unsigned int)(v4 & 3);
    *(_BYTE *)(UserSessionState + (v4 >> 2) + 14328) &= ~(1 << (2 * (v4 & 3)));
  }
  else
  {
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      v24 = W32GetUserSessionState(v11, v10, v12);
      v12 = v4 >> 3;
      v11 = v4 & 7;
      v10 = *(unsigned __int8 *)(v24 + (v4 >> 3) + 14456) | (1 << v11);
      *(_BYTE *)(v24 + (v4 >> 3) + 14456) = v10;
    }
    v13 = v4 & 3;
    v14 = 2 * v13;
    LOBYTE(v15) = *(_BYTE *)(W32GetUserSessionState(v11, v10, v12) + (v4 >> 2) + 14328);
    v17 = 2 * v13;
    if ( ((unsigned __int8)v15 & (unsigned __int8)(1 << (2 * v13))) == 0 )
    {
      v18 = 2 * v13 + 1;
      v19 = v4 >> 2;
      if ( ((unsigned __int8)(1 << v18) & *(_BYTE *)(W32GetUserSessionState(v17, v15, v16) + (v4 >> 2) + 14328)) != 0 )
      {
        v22 = W32GetUserSessionState(v18, v20, v21);
        v17 = *(unsigned __int8 *)(v22 + v19 + 14328) & ~(1 << v18);
      }
      else
      {
        v22 = W32GetUserSessionState(v18, v20, v21);
        v17 = *(unsigned __int8 *)(v22 + v19 + 14328) | (1 << v18);
      }
      *(_BYTE *)(v22 + v19 + 14328) = v17;
    }
    v23 = W32GetUserSessionState(v17, v15, v16);
    *(_BYTE *)(v23 + (v4 >> 2) + 14328) |= 1 << v14;
  }
  LOBYTE(v8) = v4;
  return ApiSetEditionUpdateAsyncKeyStateThreads(a1, v8);
}
