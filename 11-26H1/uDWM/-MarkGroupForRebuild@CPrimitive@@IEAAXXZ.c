/*
 * XREFs of ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C
 * Callers:
 *     ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8 (-SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658 (-SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18008DD88 (-SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@.c)
 *     ?InternalSetOpacity@CNineGridImagePrimitive@@IEAAXM@Z @ 0x1800BD7F0 (-InternalSetOpacity@CNineGridImagePrimitive@@IEAAXM@Z.c)
 *     ?SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD87C (-SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z @ 0x1800BD890 (-SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitive::MarkGroupForRebuild(CPrimitive *this)
{
  unsigned int *v1; // rax
  __int64 v2; // r9
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v1 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v3);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *v1);
  }
}
