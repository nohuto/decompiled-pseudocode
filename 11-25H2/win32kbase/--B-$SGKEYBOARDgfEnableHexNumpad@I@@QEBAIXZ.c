/*
 * XREFs of ??B?$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ @ 0x1402177FC
 * Callers:
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int(__int64 a1, __int64 a2)
{
  return *(unsigned int *)(W32GetUserSessionState(a1, a2) + 14708);
}
