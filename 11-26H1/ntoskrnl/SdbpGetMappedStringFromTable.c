/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1409E7AD0
 * Callers:
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1409E7A4C (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1409E7B3C (SdbpGetStringTableItemFromStringRef.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    977,
    (unsigned int)"SdbpGetStringTableItemFromStringRef failed to get tagid for string ref");
  return 0LL;
}
