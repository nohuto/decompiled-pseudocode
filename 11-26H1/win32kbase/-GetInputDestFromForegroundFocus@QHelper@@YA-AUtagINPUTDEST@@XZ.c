/*
 * XREFs of ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1401A224C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x140148938 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundFocus(_OWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _DWORD v17[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 18928) )
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18928) + 120LL);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = INPUTDEST_FROM_PWND(v17, v8);
    v10 = v9[1];
    *a1 = *v9;
    v11 = v9[2];
    a1[1] = v10;
    v12 = v9[3];
    a1[2] = v11;
    v13 = v9[4];
    a1[3] = v12;
    v14 = v9[5];
    a1[4] = v13;
    v15 = v9[6];
    a1[5] = v14;
    a1[6] = v15;
  }
  return a1;
}
