/*
 * XREFs of ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180186920
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 144LL))(*(_QWORD *)(a1 + 8));
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 16) + 120LL))(v3 + 16, a2);
  return a2;
}
