/*
 * XREFs of ?OnGraphicsDeviceLost@CButtonGlyph@@UEAAXXZ @ 0x18009BD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CButtonGlyph::OnGraphicsDeviceLost(CButtonGlyph *this)
{
  char *v1; // rbx
  _DWORD *v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this - 208;
  CSpriteVisual::SetBrush<std::nullptr_t>((__int64)this - 208);
  v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v3);
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, (unsigned int)*v2);
}
