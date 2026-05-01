/*
 * XREFs of ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x18050E9CC
 * Callers:
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x18050E880 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18050E784 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

void __fastcall JointDivider::PaintFocusIndicator(JointDivider *this, HDC a2, const struct Geometry::CRect *a3)
{
  int v3; // ebx
  int v5; // r9d
  float v6; // xmm0_4
  int v7; // r11d
  LONG v8; // eax
  int Color; // eax
  const struct tagRECT *v10; // r8
  RECT v11; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    v5 = (int)(float)((float)(*((_DWORD *)this + 24) * *((_DWORD *)this + 20)) / 100.0);
    v6 = (float)(3 * *((_DWORD *)this + 20)) / 100.0;
    v11.top = (*((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1)) / 2 - v5 / 2 + *((_DWORD *)a3 + 1);
    v11.bottom = v5 + v11.top;
    v7 = (int)v6;
    if ( v3 == 1 )
      v8 = *(_DWORD *)a3 + 1;
    else
      v8 = *((_DWORD *)a3 + 2) - v7 - 1;
    v11.left = v8;
    v11.right = v7 + v8;
    Color = CImmersiveColor::GetColor(3u);
    GDIHelpers::FillRectARGB(a2, &v11, v10, Color);
  }
}
