/*
 * XREFs of IsKeyboardDelegationTarget @ 0x14021BCF0
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     UpdateDelegationTargetForMouseInput @ 0x14021C4C0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

char __fastcall IsKeyboardDelegationTarget(tagTHREADINFO *this, int a2, int a3)
{
  char v4; // di
  __int64 v5; // rbx
  int v6; // ebx

  v4 = 1;
  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19632);
  if ( (*(_DWORD *)(v5 + 8) & 1) == 0 )
    return 0;
  if ( !*((_QWORD *)this + 58) )
    return 0;
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned int)tagTHREADINFO::GetTID((PETHREAD *)this) != v6 )
    return 0;
  return v4;
}
