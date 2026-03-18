/*
 * XREFs of ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x180246460
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801580A0 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x180245DC4 (--1-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x180245E04 (--1CComposeTop@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CComposeTop>::operator()(__int64 a1, CComposeTop *a2)
{
  if ( a2 )
  {
    CComposeTop::~CComposeTop(a2);
    operator delete(a2);
  }
}
