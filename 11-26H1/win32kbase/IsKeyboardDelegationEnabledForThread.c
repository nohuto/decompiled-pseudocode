/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x14006C780
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14006CF6C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *this, int a2, int a3)
{
  const struct tagTHREADINFO *v4; // rdx

  v4 = *(const struct tagTHREADINFO **)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19632);
  return (*((_DWORD *)v4 + 2) & 1) != 0 && InputDelegation::IsDelegationEnabledForThread(this, v4);
}
