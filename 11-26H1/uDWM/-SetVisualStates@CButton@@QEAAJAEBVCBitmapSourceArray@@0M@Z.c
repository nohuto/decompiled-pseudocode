/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18002139C
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x18005D3D4 (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAA_NXZ @ 0x180008CE8 (-UpdateCurrentGlyphOpacity@CButton@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001B2A4 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8CBitmapSourceArray@@QEAA_NAEBV0@@Z @ 0x18002340C (--8CBitmapSourceArray@@QEAA_NAEBV0@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        float a4)
{
  CBitmapSourceArray *v4; // r15
  unsigned int v8; // ebx
  char v9; // di
  int v10; // eax
  int v11; // eax
  int *v12; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = (CButton *)((char *)this + 208);
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 208) )
  {
    v10 = CBitmapSourceArray::CopyAndAddRef(v4, a2);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x4Cu, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( !(unsigned __int8)CBitmapSourceArray::operator==((char *)this + 240) )
  {
    v11 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 240), a3);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x52u, 0LL);
      return v8;
    }
    v9 = 1;
  }
  if ( *((float *)this + 75) != a4 )
  {
    *((float *)this + 75) = a4;
    v9 |= CButton::UpdateCurrentGlyphOpacity(this);
  }
  if ( v9 )
  {
    v12 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v14);
    CVisual::SetDirtyFlags(this, *v12);
  }
  return v8;
}
