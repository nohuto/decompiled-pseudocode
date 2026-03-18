/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1400B9CF0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400B9D44 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *this)
{
  const struct tagTHREADINFO *v2; // rdx

  v2 = (const struct tagTHREADINFO *)*((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
  return ((unsigned __int8)v2 & 1) != 0 && InputDelegation::IsDelegationEnabledForThread(this, v2);
}
