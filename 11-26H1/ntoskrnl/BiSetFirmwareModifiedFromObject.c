/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1409D496C
 * Callers:
 *     BcdDeleteObject @ 0x140891108 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1409D4920 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1409D49B8 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
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
