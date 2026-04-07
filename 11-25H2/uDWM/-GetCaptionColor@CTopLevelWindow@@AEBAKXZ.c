/*
 * XREFs of ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180012D98
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180038F98 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x1800592D4 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18000F9B0 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180012FE4 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
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

  v1 = *((_DWORD *)this + 200);
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
    v6 = (CSystemBackdropVisual *)*((_QWORD *)this + 35);
    if ( v6 )
      return CSystemBackdropVisual::GetCurrentBaseColor(v6);
LABEL_7:
    this = v2;
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_7;
  if ( CTopLevelWindow::HasCaptionAreaColorOverride(this) )
    goto LABEL_7;
  result = CAccent::s_clrCurrentAccentBackground;
  if ( CAccent::s_clrCurrentAccentBackground == 0xFFFFFF )
    goto LABEL_7;
  return result;
}
