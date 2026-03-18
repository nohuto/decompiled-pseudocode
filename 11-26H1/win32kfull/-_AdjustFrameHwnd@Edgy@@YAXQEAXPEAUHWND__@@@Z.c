/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1402C2F40
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402C36B8 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x14008B1BC (INPUTDEST_FROM_PWND.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  __int128 v11; // xmm6
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  _OWORD v15[7]; // [rsp+20h] [rbp-88h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = INPUTDEST_FROM_PWND(v15, v4);
    v6 = v5[1];
    v7 = v5[2];
    v8 = v5[3];
    v9 = v5[4];
    v10 = v5[5];
    v11 = v5[6];
    v15[0] = *v5;
    v15[1] = v6;
    v15[2] = v7;
    v15[3] = v8;
    v15[4] = v9;
    v15[5] = v10;
    v15[6] = v11;
    UserSessionState = W32GetUserSessionState(v13, v12);
    CTouchProcessor::AdjustEdgyFrameInputDest(*(_QWORD *)(UserSessionState + 3256), this, v15);
  }
}
