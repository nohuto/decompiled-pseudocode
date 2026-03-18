/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1801BA4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CD2DBitmapCache *v2; // rbx
  __int64 v4; // rcx

  v2 = (CColorKeyBitmapRealization *)((char *)this - 80);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  CD2DBitmapCache::AddInvalidRegion(v2, a2);
}
