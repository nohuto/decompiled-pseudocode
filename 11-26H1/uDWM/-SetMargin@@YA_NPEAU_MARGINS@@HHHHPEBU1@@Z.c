/*
 * XREFs of ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18001F030
 * Callers:
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18001EC20 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z @ 0x18001F000 (-SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SetMargin(struct _MARGINS *a1, int a2, int a3, int a4, int a5, const struct _MARGINS *a6)
{
  char v6; // r10
  int cxLeftWidth; // eax
  int cxRightWidth; // eax
  int cyTopHeight; // eax
  int cyBottomHeight; // r11d

  v6 = 0;
  if ( a6 )
  {
    cxLeftWidth = a6->cxLeftWidth;
    if ( a2 < a6->cxLeftWidth )
      cxLeftWidth = a2;
    a2 = cxLeftWidth;
    cxRightWidth = a6->cxRightWidth;
    if ( a3 < cxRightWidth )
      cxRightWidth = a3;
    a3 = cxRightWidth;
    cyTopHeight = a6->cyTopHeight;
    cyBottomHeight = a6->cyBottomHeight;
    if ( a4 < cyTopHeight )
      cyTopHeight = a4;
    a4 = cyTopHeight;
    if ( a5 < cyBottomHeight )
      cyBottomHeight = a5;
  }
  else
  {
    cyBottomHeight = a5;
  }
  if ( a2 != a1->cxLeftWidth )
  {
    a1->cxLeftWidth = a2;
    v6 = 1;
  }
  if ( a3 != a1->cxRightWidth )
  {
    a1->cxRightWidth = a3;
    v6 = 1;
  }
  if ( a4 != a1->cyTopHeight )
  {
    a1->cyTopHeight = a4;
    v6 = 1;
  }
  if ( cyBottomHeight == a1->cyBottomHeight )
    return v6;
  a1->cyBottomHeight = cyBottomHeight;
  return 1;
}
