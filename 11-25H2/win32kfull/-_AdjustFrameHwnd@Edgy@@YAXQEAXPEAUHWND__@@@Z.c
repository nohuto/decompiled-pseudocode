/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1402A5B30
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402A62F0 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x140154898 (INPUTDEST_FROM_PWND.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  __int128 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-E8h]
  __int128 v10; // [rsp+30h] [rbp-D8h]
  __int128 v11; // [rsp+40h] [rbp-C8h]
  __int128 v12; // [rsp+50h] [rbp-B8h]
  __int128 v13; // [rsp+60h] [rbp-A8h]
  __int128 v14; // [rsp+70h] [rbp-98h]
  __int128 v15; // [rsp+80h] [rbp-88h]
  _OWORD v16[7]; // [rsp+90h] [rbp-78h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = (__int128 *)INPUTDEST_FROM_PWND(v16, v4);
    v9 = *v5;
    v10 = v5[1];
    v11 = v5[2];
    v12 = v5[3];
    v13 = v5[4];
    v14 = v5[5];
    v15 = v5[6];
    v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 3256);
    v16[0] = v9;
    v16[1] = v10;
    v16[2] = v11;
    v16[3] = v12;
    v16[4] = v13;
    v16[5] = v14;
    v16[6] = v15;
    CTouchProcessor::AdjustEdgyFrameInputDest(v8, this, v16);
  }
}
