/*
 * XREFs of ?AdapterInfoSort@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180675210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AdapterInfoSort(const struct _LUID *p1, const struct _LUID *p2, LPARAM lParam)
{
  char HighPart; // al

  HighPart = p1[3].HighPart;
  if ( HighPart == LOBYTE(p2[3].HighPart) )
    return LUIDCompare(p1, p2);
  else
    return HighPart != 0 ? -1 : 1;
}
