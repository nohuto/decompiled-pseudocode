/*
 * XREFs of FeedbackSetWindowSetting @ 0x14005DEF8
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x14005DD90 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rdx

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = ~(1 << v4) & (GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41350), 1u) | (0x10000 << v4));
  v9 = v7 | (1 << v4);
  v10 = *(unsigned __int16 *)(W32GetUserSessionState(v4, v8) + 41350);
  if ( !a3 )
    v9 = v7;
  InternalSetProp(a1, v10, v9, 5u);
  return 1LL;
}
