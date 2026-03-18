/*
 * XREFs of GetKeyboardDelegationTargetQ @ 0x1402161D0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     PtiFromThreadId @ 0x1400D8EE0 (PtiFromThreadId.c)
 */

__int64 __fastcall GetKeyboardDelegationTargetQ(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rax

  v2 = 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19600) + 4LL);
  if ( v3 )
  {
    v4 = PtiFromThreadId(v3);
    if ( v4 )
      return *(_QWORD *)(v4 + 472);
  }
  return v2;
}
