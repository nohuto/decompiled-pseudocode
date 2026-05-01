/*
 * XREFs of SdbInitDatabase @ 0x18008FBB0
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 SdbInitDatabase()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v3; // [rsp+20h] [rbp-18h]

  v3 = 0;
  AslLogCallPrintf(3LL, "SdbInitDatabase", 156LL, "Flags:%d; DatabasePath:%ws", v3, &word_1800BBB1C);
  return SdbInitDatabaseEx(v1, v0, 34404LL);
}
