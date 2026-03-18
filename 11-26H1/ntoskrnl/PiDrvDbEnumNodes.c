/*
 * XREFs of PiDrvDbEnumNodes @ 0x1407B556C
 * Callers:
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 * Callees:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407A9D18 (PiDevCfgInitDriverDatabaseCallback.c)
 */

__int64 PiDrvDbEnumNodes()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)PiDrvDbNodeList; i != &PiDrvDbNodeList && PiDevCfgInitDriverDatabaseCallback(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
