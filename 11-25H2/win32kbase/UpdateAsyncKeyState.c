/*
 * XREFs of UpdateAsyncKeyState @ 0x14018CE40
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021971C (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B9BF8 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, char a3))(void)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r14d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 (*result)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx

  v3 = (unsigned __int8)a2;
  if ( a1 && (*(_DWORD *)(a1 + 412) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, a2);
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v18 = 2 * (unsigned int)(v3 & 3);
    v19 = *(unsigned __int8 *)(UserSessionState + (v3 >> 2) + 14336);
    LODWORD(v19) = v19 & ~(1 << (2 * (v3 & 3)));
    *(_BYTE *)(UserSessionState + (v3 >> 2) + 14336) = v19;
  }
  else
  {
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = W32GetUserSessionState(v7, v6);
      v7 = v3 & 7;
      v6 = *(unsigned __int8 *)(v8 + (v3 >> 3) + 14464);
      LODWORD(v6) = v6 | (1 << v7);
      *(_BYTE *)(v8 + (v3 >> 3) + 14464) = v6;
    }
    v9 = v3 & 3;
    v10 = v3 >> 2;
    LOBYTE(v11) = *(_BYTE *)((v3 >> 2) + W32GetUserSessionState(v7, v6) + 14336);
    v12 = 2 * v9;
    v13 = (unsigned int)(2 * v9);
    if ( ((unsigned __int8)v11 & (unsigned __int8)(1 << (2 * v9))) == 0 )
    {
      v15 = 2 * v9 + 1;
      if ( ((unsigned __int8)(1 << v15) & *(_BYTE *)(v10 + W32GetUserSessionState(v13, v11) + 14336)) != 0 )
      {
        v16 = W32GetUserSessionState(v15, v14);
        v13 = *(unsigned __int8 *)(v16 + v10 + 14336);
        LODWORD(v13) = v13 & ~(1 << v15);
      }
      else
      {
        v16 = W32GetUserSessionState(v15, v14);
        v13 = *(unsigned __int8 *)(v16 + v10 + 14336);
        LODWORD(v13) = v13 | (1 << v15);
      }
      *(_BYTE *)(v16 + v10 + 14336) = v13;
    }
    v17 = W32GetUserSessionState(v13, v11);
    v19 = *(unsigned __int8 *)(v17 + v10 + 14336);
    LODWORD(v19) = v19 | (1 << v12);
    *(_BYTE *)(v17 + v10 + 14336) = v19;
  }
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 5848LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 48) + 5856LL);
      if ( result )
      {
        LOBYTE(v24) = v3;
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64))result)(a1, v24);
      }
    }
  }
  return result;
}
