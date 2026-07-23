/*
 * XREFs of PfxInitialize @ 0x140808720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PfxInitialize(PPREFIX_TABLE PrefixTable)
{
  *(_DWORD *)&PrefixTable->NodeTypeCode = 512;
  PrefixTable->NextPrefixTree = (PPREFIX_TABLE_ENTRY)PrefixTable;
}
