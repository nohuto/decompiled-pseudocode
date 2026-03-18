/*
 * XREFs of CiSystemTerminate @ 0x14000DF14
 * Callers:
 *     CsTerminate @ 0x14000D444 (CsTerminate.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x140003F50 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}
