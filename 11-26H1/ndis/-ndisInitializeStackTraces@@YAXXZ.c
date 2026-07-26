/*
 * XREFs of ?ndisInitializeStackTraces@@YAXXZ @ 0x140147F94
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisInitializeStackTraces(void)
{
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_14011E73B = 4;
  dword_14011E768 = 0;
  unk_14011E739 = 0;
  byte_14011E738 = RtlCreateHashTable(&HashTable, 0, 0);
}
