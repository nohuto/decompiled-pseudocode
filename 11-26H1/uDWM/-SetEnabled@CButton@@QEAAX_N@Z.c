/*
 * XREFs of ?SetEnabled@CButton@@QEAAX_N@Z @ 0x180022978
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180020E50 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CButton::SetEnabled(CButton *this, char a2)
{
  int *v2; // rax
  CVisual *v3; // r9
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 184) & 1) != a2 )
  {
    *((_BYTE *)this + 184) = a2 | *((_BYTE *)this + 184) & 0xFE;
    v2 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(v3, *v2);
  }
}
