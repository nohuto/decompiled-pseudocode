/*
 * XREFs of ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ @ 0x180094558
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180016500 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 *     ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18007CE10 (-OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetBorderDpi@CWindowBorder@@QEAAJH@Z @ 0x180083BB0 (-SetBorderDpi@CWindowBorder@@QEAAJH@Z.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ @ 0x1800DE660 (-OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CProjectionBorderVisual::UpdateStyle(CProjectionBorderVisual *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v3);
  CVisual::SetDirtyFlags(v2, *v1);
}
