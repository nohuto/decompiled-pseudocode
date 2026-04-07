/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180004920
 * Callers:
 *     ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18000488C (-UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180015FC0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r10d
  int cyTopHeight; // r11d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  LONG cx; // ecx
  int v11; // ecx
  int v12; // eax
  bool result; // al
  int v14; // eax
  struct tagPOINT v15; // [rsp+0h] [rbp-18h]
  struct tagSIZE v16; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cyTopHeight = a2->cyTopHeight;
  if ( a2->cxLeftWidth == 0x7FFFFFFF
    && cyTopHeight == 0x7FFFFFFF
    && a2->cxRightWidth == 0x7FFFFFFF
    && a2->cyBottomHeight == 0x7FFFFFFF )
  {
    return 0;
  }
  v8 = (unsigned __int64)*a3;
  v9 = HIDWORD(*(unsigned __int64 *)a3);
  if ( a2->cxRightWidth == 0x7FFFFFFF )
  {
    v11 = v8;
    v14 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v14 = a2->cxLeftWidth;
    v15.x = v14;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth == 0x7FFFFFFF )
    {
      v15.x = cx - v8 - a2->cxRightWidth;
      v11 = v8;
    }
    else
    {
      v11 = cx - a2->cxRightWidth - cxLeftWidth;
      v15.x = a2->cxLeftWidth;
    }
  }
  if ( a2->cyBottomHeight == 0x7FFFFFFF )
  {
    LODWORD(v8) = 0;
    if ( cyTopHeight != 0x7FFFFFFF )
      LODWORD(v8) = a2->cyTopHeight;
    v15.y = v8;
    v12 = HIDWORD(v8);
  }
  else
  {
    LODWORD(v8) = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v15.y = v8 - v9 - a2->cyBottomHeight;
      v12 = HIDWORD(v8);
    }
    else
    {
      v15.y = a2->cyTopHeight;
      v12 = v8 - cyTopHeight - a2->cyBottomHeight;
    }
  }
  if ( v11 <= 0 )
    v11 = 0;
  v16.cx = v11;
  if ( v12 <= 0 )
    v12 = 0;
  v16.cy = v12;
  result = 1;
  *a5 = v16;
  *a4 = v15;
  return result;
}
