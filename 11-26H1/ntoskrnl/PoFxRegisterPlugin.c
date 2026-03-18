/*
 * XREFs of PoFxRegisterPlugin @ 0x1407CD3A0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x140605604 (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
