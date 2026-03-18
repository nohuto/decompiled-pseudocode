/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20
 * Callers:
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x14011012C (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x14026078C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     bInitSystemFont @ 0x1403FA27C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403FB108 (bInitOneStockFontInternal.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6,
        int a7)
{
  __int64 v7; // rax
  unsigned int v12; // ebx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rdi
  unsigned int Fonts; // ebx
  size_t v17; // [rsp+28h] [rbp-60h]

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v12 = v7 + 1;
  if ( (unsigned int)(v7 + 1) > 0x1388000 )
    return 0LL;
  v13 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v12);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  cCapString(v13, a2, v12);
  LODWORD(v17) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v14, v12, 1u, 0LL, v17, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v14);
  return Fonts;
}
