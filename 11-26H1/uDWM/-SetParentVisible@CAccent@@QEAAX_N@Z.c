/*
 * XREFs of ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x18008D9A8
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 */

void __fastcall CAccent::SetParentVisible(CAccent *this, char a2)
{
  char v2; // r9
  int *v3; // rax
  CVisual *v4; // r8
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != *((_BYTE *)this + 277) )
  {
    *((_BYTE *)this + 277) = a2;
    if ( CAccent::_IsAcrylicBlurEnabledAndAllowed(this) )
    {
      if ( v2 )
      {
        v3 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v5);
        CVisual::SetDirtyFlags(v4, *v3);
      }
    }
  }
}
