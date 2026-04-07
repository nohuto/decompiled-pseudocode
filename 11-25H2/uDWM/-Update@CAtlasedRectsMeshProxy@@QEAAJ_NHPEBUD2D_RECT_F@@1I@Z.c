/*
 * XREFs of ?Update@CAtlasedRectsMeshProxy@@QEAAJ_NHPEBUD2D_RECT_F@@1I@Z @ 0x180005500
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800051EC (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsMeshProxy::Update(
        CAtlasedRectsMeshProxy *this,
        char a2,
        __int64 a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        unsigned int a6)
{
  __int64 v6; // r9

  v6 = (unsigned int)a3;
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, const struct D2D_RECT_F *, const struct D2D_RECT_F *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 544LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3,
           v6,
           a4,
           a5,
           a6);
}
