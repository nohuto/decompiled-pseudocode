/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1409A594C
 * Callers:
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1409A5900 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1409A5998 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  void *v2; // r8

  v1 = BiOpenStoreKeyFromObject(a1);
  if ( v1 >= 0 )
    BiSetFirmwareModified(0LL, 1, v2);
  return (unsigned int)v1;
}
