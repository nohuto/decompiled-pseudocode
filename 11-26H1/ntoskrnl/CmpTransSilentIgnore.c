/*
 * XREFs of CmpTransSilentIgnore @ 0x14046B120
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE6(NlsMbOemCodePageTag) != 0;
}
