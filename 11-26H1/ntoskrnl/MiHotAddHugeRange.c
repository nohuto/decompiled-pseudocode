/*
 * XREFs of MiHotAddHugeRange @ 0x14086E030
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 *     MiCreatePartitionPages @ 0x140881FEC (MiCreatePartitionPages.c)
 * Callees:
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x1406F10F0 (MiInitializeHugePfnDatabase.c)
 */

__int64 __fastcall MiHotAddHugeRange(unsigned __int16 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  v13 = 0;
  if ( !(unsigned int)MiInitializeHugePfnDatabase() )
    return 3221225626LL;
  v14 = a2;
  v15 = a3;
  v12 = 38;
  return MiAddPartitionHugeRange(a1, (__int64)&v10, a4, (struct _KLOCK_ENTRIES *)a5);
}
