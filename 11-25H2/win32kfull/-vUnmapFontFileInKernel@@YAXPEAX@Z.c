/*
 * XREFs of ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1401C2E9C
 * Callers:
 *     UnmapPrintKView @ 0x1401BD088 (UnmapPrintKView.c)
 *     NtGdiGetFontFileData @ 0x1401C2B80 (NtGdiGetFontFileData.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x14030FA84 (-vClosePrintKView@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnmapFontFileInKernel(void *a1)
{
  _QWORD v1[5]; // [rsp+20h] [rbp-38h] BYREF
  int v2; // [rsp+48h] [rbp-10h]

  v1[2] = a1;
  v1[0] = 0LL;
  v1[1] = 0LL;
  v1[3] = 0LL;
  v1[4] = 0LL;
  v2 = 3;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v1);
  if ( v2 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v1);
}
