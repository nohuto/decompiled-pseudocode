/*
 * XREFs of ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1401C2DB0
 * Callers:
 *     NtGdiGetFontFileData @ 0x1401C2B80 (NtGdiGetFontFileData.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x1401E2D2C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x14030FA84 (-vClosePrintKView@@YAXXZ.c)
 */

char __fastcall MapFontFileInKernel(void *a1, void **a2)
{
  char v4; // bl
  void *v5; // rax
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+78h] [rbp+18h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 5;
  v10 = 0LL;
  v4 = Gre::MapViewOfSectionObj::Map(&v8, a1, 3LL, 0LL, &v13);
  if ( v4 || (vClosePrintKView(), (v4 = Gre::MapViewOfSectionObj::Map(&v8, a1, 3LL)) != 0) )
  {
    v5 = (void *)v10;
    v6 = 5;
    v10 = 0uLL;
    v8 = 0LL;
    v9 = 0LL;
    v11 = 0LL;
    v12 = 5;
    *a2 = v5;
  }
  else
  {
    v6 = v12;
  }
  if ( v6 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v8);
  return v4;
}
