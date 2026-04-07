/*
 * XREFs of ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@UEAAXXZ @ 0x180094580
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAccentAcrylicBlurBehind::OnGraphicsDeviceLost(CAccentAcrylicBlurBehind *this)
{
  char *v1; // rbx
  _DWORD *v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this - 184;
  CSpriteVisual::SetBrush<std::nullptr_t>((__int64)this - 184);
  v2 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v3);
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, (unsigned int)*v2);
}
