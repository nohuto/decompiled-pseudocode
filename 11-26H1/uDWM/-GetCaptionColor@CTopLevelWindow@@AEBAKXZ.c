/*
 * XREFs of ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18004B30C (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x180020F94 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB94 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 */

unsigned int __fastcall CTopLevelWindow::GetCaptionColor(CTopLevelWindow *this)
{
  int v1; // edx
  CTopLevelWindow *v2; // rbx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  CSystemBackdropVisual *v6; // rcx
  unsigned int result; // eax

  v1 = *((_DWORD *)this + 190);
  v2 = this;
  if ( !v1 )
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        return CTopLevelWindow::GetSolidColorCaptionColor(this);
      if ( v5 != 1 )
        return 0;
    }
    v6 = (CSystemBackdropVisual *)*((_QWORD *)this + 33);
    if ( v6 )
      return CSystemBackdropVisual::GetCurrentBaseColor(v6);
LABEL_7:
    this = v2;
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  if ( !*((_QWORD *)this + 30) )
    goto LABEL_7;
  if ( CTopLevelWindow::HasCaptionAreaColorOverride(this) )
    goto LABEL_7;
  result = CAccent::s_clrCurrentAccentBackground;
  if ( CAccent::s_clrCurrentAccentBackground == 0xFFFFFF )
    goto LABEL_7;
  return result;
}
