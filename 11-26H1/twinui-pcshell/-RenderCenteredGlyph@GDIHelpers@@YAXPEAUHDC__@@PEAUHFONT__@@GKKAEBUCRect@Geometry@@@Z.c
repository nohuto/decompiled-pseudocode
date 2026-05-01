/*
 * XREFs of ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x18053C774
 * Callers:
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18053C678 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x18021AA24 (-GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA-AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180530DF4 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

void __fastcall GDIHelpers::RenderCenteredGlyph(
        HDC hdc,
        HDC h,
        const struct tagRECT *a3,
        COLORREF a4,
        COLORREF color,
        const RECT *a6)
{
  unsigned __int16 v8; // r14
  HGDIOBJ v10; // rbx
  WCHAR chText[4]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-40h] BYREF

  v8 = (unsigned __int16)a3;
  GDIHelpers::FillRectARGB(hdc, a6, a3, a4);
  v10 = SelectObject(hdc, h);
  SetBkColor(hdc, a4);
  SetTextColor(hdc, color);
  GDIHelpers::GetDrawTextRectForCenteredGlyph((__int64)&rc, hdc, v8, (__int64)a6);
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&rc) )
  {
    chText[1] = 0;
    chText[0] = v8;
    DrawTextW(hdc, chText, 1, &rc, 0x21u);
  }
  SelectObject(hdc, v10);
}
