/*
 * XREFs of ?move@?$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z @ 0x14000EE24
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memmove_0 @ 0x14000F810 (memmove_0.c)
 */

void *__fastcall std::_Char_traits<unsigned short,unsigned short>::move(void *a1, const void *a2, __int64 a3)
{
  memmove_0(a1, a2, 2 * a3);
  return a1;
}
