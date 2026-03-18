/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x1802AAC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CColorKeyBitmapRealization::MarkFullDirty(CColorKeyBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx
  __int64 v2; // rcx

  v1 = (CColorKeyBitmapRealization *)((char *)this - 80);
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
