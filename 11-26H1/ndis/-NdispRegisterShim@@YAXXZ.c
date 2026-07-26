/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x140141DC8
 * Callers:
 *     NdisDllInitialize @ 0x140097800 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
