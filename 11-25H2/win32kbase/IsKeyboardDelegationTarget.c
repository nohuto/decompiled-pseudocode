/*
 * XREFs of IsKeyboardDelegationTarget @ 0x1402167C0
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     UpdateDelegationTargetForMouseInput @ 0x140216FA0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

char __fastcall IsKeyboardDelegationTarget(tagTHREADINFO *this, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rsi

  v3 = 1;
  v4 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19600);
  if ( (*(_DWORD *)(v4 + 8) & 1) == 0
    || !*((_QWORD *)this + 59)
    || (unsigned int)tagTHREADINFO::GetTID((PETHREAD *)this) != *(_DWORD *)(v4 + 4) )
  {
    return 0;
  }
  return v3;
}
