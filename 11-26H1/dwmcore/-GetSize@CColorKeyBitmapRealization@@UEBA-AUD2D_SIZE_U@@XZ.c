/*
 * XREFs of ?GetSize@CColorKeyBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801C0940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmapRealization::GetSize(CColorKeyBitmapRealization *this, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  return (struct D2D_SIZE_U)a2;
}
