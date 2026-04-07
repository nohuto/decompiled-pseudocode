/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18008D194
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180014AE0 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  int *v2; // rax
  CVisual *v3; // r9
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( ((*((_BYTE *)this + 184) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 184) = (8 * a2) | *((_BYTE *)this + 184) & 0xF7;
    v2 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(v3, *v2);
  }
}
