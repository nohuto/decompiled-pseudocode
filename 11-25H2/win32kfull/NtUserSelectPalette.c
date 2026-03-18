/*
 * XREFs of NtUserSelectPalette @ 0x14018BCF0
 * Callers:
 *     <none>
 * Callees:
 *     _SelectPalette @ 0x14018BD50 (_SelectPalette.c)
 */

__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  EnterCrit(0LL, 0LL);
  v6 = SelectPalette(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
