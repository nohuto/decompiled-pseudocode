/*
 * XREFs of PiIommuGetDmaRemappingPolicy @ 0x1405DFDCC
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall PiIommuGetDmaRemappingPolicy(__int64 a1)
{
  if ( a1 )
    return *(_BYTE *)(a1 + 16) & 1;
  else
    return 0;
}
