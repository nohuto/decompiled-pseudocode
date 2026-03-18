/*
 * XREFs of ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1400CF540
 * Callers:
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x140327EBC (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x140328130 (-vClosePrintKView@@YAXXZ.c)
 */

char __fastcall MapFontFileInKernel(void *a1, void **a2)
{
  char v4; // bl
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  void *v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v7 = 0LL;
  v11 = 6;
  v4 = Gre::MapViewOfSectionObj::Map(&v7, a1, 3LL, 0LL, &v12);
  if ( v4 || (vClosePrintKView(), (v4 = Gre::MapViewOfSectionObj::Map(&v7, a1, 3LL)) != 0) )
  {
    v5 = 6;
    v11 = 6;
    *a2 = v9;
    v9 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
  }
  else
  {
    v5 = v11;
  }
  if ( v5 != 6 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v7);
  return v4;
}
