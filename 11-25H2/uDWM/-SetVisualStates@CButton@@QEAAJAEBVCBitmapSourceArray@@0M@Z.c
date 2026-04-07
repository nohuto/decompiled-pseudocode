/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001C8B8
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800132B8 (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800072D0 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??8CBitmapSourceArray@@QEAA_NAEBV0@@Z @ 0x18001C9C8 (--8CBitmapSourceArray@@QEAA_NAEBV0@@Z.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001CA4C (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        float a4)
{
  CBitmapSourceArray *v4; // r15
  unsigned int v8; // ebx
  bool v9; // si
  int v10; // eax
  int v11; // eax

  v4 = (CButton *)((char *)this + 264);
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 264) )
  {
    v10 = CBitmapSourceArray::CopyAndAddRef(v4, a2);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x5Fu, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 296) )
  {
    v11 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 296), a3);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x65u, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( *((float *)this + 89) != a4 )
  {
    *((float *)this + 89) = a4;
    CButton::UpdateCurrentGlyphOpacity(this, v9);
  }
  if ( v9 )
    CVisual::SetDirtyFlags(this, 0x8000);
  return v8;
}
