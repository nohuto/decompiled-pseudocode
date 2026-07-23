/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1409A570C
 * Callers:
 *     BcdCreateObject @ 0x140777E00 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1409A5660 (BiGetFirmwareType.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, int *a2)
{
  __int64 v4; // r8
  char v5; // bl
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)BiGetFirmwareType(0LL) != 2 )
    return 0;
  v5 = 0;
  v8 = 0LL;
  if ( (int)BiGetObjectDescription(a1, &v8, v4) >= 0
    && (HIDWORD(v8) & 0xF0000000) == 0x10000000
    && (HIDWORD(v8) & 0xF00000) == 0x100000 )
  {
    if ( (HIDWORD(v8) & 0xFFFFF) != 2 )
      return 1;
    if ( !a2 )
      return 1;
    v6 = *a2;
    if ( *a2 == 301989890 || v6 == 285212673 || v6 == 301989892 || v6 == 369098882 )
      return 1;
  }
  return v5;
}
