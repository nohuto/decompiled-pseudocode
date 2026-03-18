/*
 * XREFs of ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14015EA78
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x140108EC4 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundFocus(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _DWORD v15[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888) )
    v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888) + 120LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = INPUTDEST_FROM_PWND(v15, v6);
    v8 = v7[1];
    *a1 = *v7;
    v9 = v7[2];
    a1[1] = v8;
    v10 = v7[3];
    a1[2] = v9;
    v11 = v7[4];
    a1[3] = v10;
    v12 = v7[5];
    a1[4] = v11;
    v13 = v7[6];
    a1[5] = v12;
    a1[6] = v13;
  }
  return a1;
}
