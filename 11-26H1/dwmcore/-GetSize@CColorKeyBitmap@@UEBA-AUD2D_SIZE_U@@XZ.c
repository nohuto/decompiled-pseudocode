/*
 * XREFs of ?GetSize@CColorKeyBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801B70C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmap::GetSize(CColorKeyBitmap *this, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
  return (struct D2D_SIZE_U)a2;
}
