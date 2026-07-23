/*
 * XREFs of ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x14072001C
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071F1D4 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14072036C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SC_PART_ENTRY::IsUnused(SC_PART_ENTRY *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  if ( !*(_DWORD *)this )
    return *((_BYTE *)this + 32) == 0;
  if ( *(_DWORD *)this == 1 )
  {
    v2 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_ENTRY_UNUSED_GUID.Data1;
    if ( !v2 )
      v2 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_ENTRY_UNUSED_GUID.Data4;
    if ( !v2 )
      return 1;
  }
  return v1;
}
