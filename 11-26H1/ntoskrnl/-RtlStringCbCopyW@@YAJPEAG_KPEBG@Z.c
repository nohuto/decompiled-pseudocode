/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14071EEA8
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14071EBC0 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14071F1D4 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14072036C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(char *a1, __int64 a2, char *a3)
{
  signed __int64 v3; // r8
  char *v4; // rdx
  __int64 v5; // r9
  __int16 v6; // ax
  char *v7; // rcx
  __int64 result; // rax

  v3 = a3 - a1;
  v4 = a1;
  v5 = 36LL;
  do
  {
    if ( v5 == -2147483610 )
      break;
    v6 = *(_WORD *)&v4[v3];
    if ( !v6 )
      break;
    *(_WORD *)v4 = v6;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v7 = v4 - 2;
  result = v5 == 0 ? 0x80000005 : 0;
  if ( v5 )
    v7 = v4;
  *(_WORD *)v7 = 0;
  return result;
}
