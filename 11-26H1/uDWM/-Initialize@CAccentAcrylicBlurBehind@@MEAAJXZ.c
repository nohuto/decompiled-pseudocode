/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@MEAAJXZ @ 0x180094410
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this)
{
  _DWORD *v2; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
  (*(void (__fastcall **)(CAccentAcrylicBlurBehind *, _QWORD))(*(_QWORD *)this + 24LL))(this, (unsigned int)*v2);
  return CSpriteVisual::Initialize(this);
}
