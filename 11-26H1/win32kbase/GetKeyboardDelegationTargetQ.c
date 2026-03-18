/*
 * XREFs of GetKeyboardDelegationTargetQ @ 0x14021B5F0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     PtiFromThreadId @ 0x1401200F0 (PtiFromThreadId.c)
 */

__int64 __fastcall GetKeyboardDelegationTargetQ(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632) + 4LL);
  if ( v4 )
  {
    v5 = PtiFromThreadId(v4);
    if ( v5 )
      return *(_QWORD *)(v5 + 464);
  }
  return v3;
}
