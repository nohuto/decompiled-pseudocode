/*
 * XREFs of RtlpSetupEnvironmentHashTable @ 0x1800A0618
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x1800A0498 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x1800A069C (RtlpAllocateEnvironmentHashTable.c)
 */

__int64 RtlpSetupEnvironmentHashTable()
{
  char *EnvironmentHashTable; // rax

  RtlpEnvironmentHashTable = 0LL;
  xmmword_1801CB850 = 0LL;
  EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(256LL, 0LL);
  if ( !EnvironmentHashTable )
    return 3221225626LL;
  *(_QWORD *)&RtlpEnvironmentHashTable = 0x40000000000LL;
  *((_QWORD *)&RtlpEnvironmentHashTable + 1) = EnvironmentHashTable;
  if ( (EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0) != 0 )
    memset64(
      EnvironmentHashTable,
      (unsigned __int64)&RtlpEnvironmentHashTable + 1,
      EnvironmentHashTable + 256 >= EnvironmentHashTable ? 0x20 : 0);
  return 0LL;
}
