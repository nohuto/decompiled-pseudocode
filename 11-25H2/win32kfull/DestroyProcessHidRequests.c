/*
 * XREFs of DestroyProcessHidRequests @ 0x14011D080
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x14011D098 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
