/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180016EA0
 * Callers:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800163C0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C (-Rebuild@CPrimitiveGroupVisual@@IEAAJXZ.c)
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
  LONG v9; // r9d
  unsigned __int64 v10; // rdi
  LONG cx; // r8d
  int v12; // r8d
  LONG cy; // eax
  int v14; // eax
  LONG v15; // ecx
  bool result; // al
  int v17; // eax
  int v18; // eax
  struct tagPOINT v19; // [rsp+0h] [rbp-18h]
  unsigned __int64 v20; // [rsp+28h] [rbp+10h]
  struct tagSIZE v21; // [rsp+28h] [rbp+10h]

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
  v9 = 0;
  v10 = HIDWORD(*(unsigned __int64 *)a3);
  v20 = (unsigned __int64)*a3;
  if ( a2->cxRightWidth == 0x7FFFFFFF )
  {
    v12 = (int)*a3;
    v18 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v18 = a2->cxLeftWidth;
    v19.x = v18;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth == 0x7FFFFFFF )
    {
      v19.x = cx - v8 - a2->cxRightWidth;
      v12 = v20;
    }
    else
    {
      v12 = cx - a2->cxRightWidth - cxLeftWidth;
      v19.x = a2->cxLeftWidth;
    }
  }
  if ( a2->cyBottomHeight == 0x7FFFFFFF )
  {
    v17 = 0;
    if ( cyTopHeight != 0x7FFFFFFF )
      v17 = a2->cyTopHeight;
    v19.y = v17;
    v14 = HIDWORD(v20);
  }
  else
  {
    cy = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v19.y = cy - v10 - a2->cyBottomHeight;
      v14 = HIDWORD(v20);
    }
    else
    {
      v19.y = a2->cyTopHeight;
      v14 = cy - cyTopHeight - a2->cyBottomHeight;
    }
  }
  v15 = 0;
  if ( v12 > 0 )
    v15 = v12;
  v21.cx = v15;
  if ( v14 > 0 )
    v9 = v14;
  result = 1;
  v21.cy = v9;
  *a5 = v21;
  *a4 = v19;
  return result;
}
