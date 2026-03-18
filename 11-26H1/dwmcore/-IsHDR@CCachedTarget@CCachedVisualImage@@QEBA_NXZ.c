/*
 * XREFs of ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801D844C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsHDR(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v1; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF
  float v4; // [rsp+30h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 16) + 120LL))(v1 + 16, v3);
  return v4 != 0.0;
}
