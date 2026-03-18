/*
 * XREFs of ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1403261EC
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1403264B0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1403262EC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

_BOOL8 __fastcall OverlapCheck(_DWORD *a1, HRGN a2)
{
  BOOL v4; // ebx
  __int64 RectRgn; // rdi
  struct tagSIZE v6; // rax
  int v7; // r10d
  _DWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  if ( RectRgn )
  {
    PDEVOBJ::sizl((PDEVOBJ *)&v9);
    v6 = PDEVOBJ::sizl((PDEVOBJ *)&v9);
    if ( (unsigned int)GreSetRectRgn(
                         RectRgn,
                         (unsigned int)a1[644],
                         (unsigned int)a1[645],
                         (unsigned int)(a1[644] + *(_DWORD *)v6.cx),
                         v7) )
      v4 = (unsigned int)GreCombineRgn(RectRgn, RectRgn, a2, 1LL) > 1;
    GreDeleteObject(RectRgn);
  }
  return v4;
}
