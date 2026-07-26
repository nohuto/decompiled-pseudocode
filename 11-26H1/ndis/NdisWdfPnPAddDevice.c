/*
 * XREFs of NdisWdfPnPAddDevice @ 0x140096A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(__int64 a1, void **a2)
{
  return ndisPnPAddDevice(*(struct _DRIVER_OBJECT **)a1, *(struct _DEVICE_OBJECT **)(a1 + 8), *(void **)(a1 + 16), a2);
}
