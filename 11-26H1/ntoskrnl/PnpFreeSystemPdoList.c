/*
 * XREFs of PnpFreeSystemPdoList @ 0x140AC6D90
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpFreePdoDeviceList @ 0x140AC6DA8 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpFreeSystemPdoList(void *a1)
{
  return PiPnpFreePdoDeviceList(a1);
}
