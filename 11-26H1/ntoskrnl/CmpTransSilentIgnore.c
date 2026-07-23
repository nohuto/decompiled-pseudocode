/*
 * XREFs of CmpTransSilentIgnore @ 0x1404648A0
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE6(NlsMbOemCodePageTag) != 0;
}
