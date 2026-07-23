/*
 * XREFs of SdbpCloseLocalDatabaseEx @ 0x14088C524
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x14088C60C (SdbpOpenLocalDatabaseEx.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1409D6348 (SdbpCleanupLocalDatabaseSupport.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x1409D6398 (SdbCloseDatabaseRead.c)
 */

__int64 __fastcall SdbpCloseLocalDatabaseEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi

  if ( a3 != 1 && a3 - 3 > 0xC || ((1 << a3) & *(_DWORD *)(a1 + 36)) == 0 )
    return 0LL;
  v5 = 32LL * a3;
  if ( (*(_DWORD *)(v5 + a1 + 64) & 2) != 0 && *(_QWORD *)(v5 + a1 + 56) )
    SdbCloseDatabaseRead();
  *(_OWORD *)(v5 + a1 + 40) = 0LL;
  *(_OWORD *)(v5 + a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 36) &= ~(1 << a3);
  if ( a3 == 1 )
    *(_QWORD *)(a1 + 24) = 0LL;
  return 1LL;
}
