/*
 * XREFs of ?Session_UnInitialize@CBaseInput@@SAJXZ @ 0x140210D40
 * Callers:
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::Session_UnInitialize(__int64 a1, __int64 a2)
{
  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 3080) = 0;
  return 0LL;
}
