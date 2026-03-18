/*
 * XREFs of ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18019BD30
 * Callers:
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18019BCE0 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCachedVisualImage::CalcOcclusion(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int (__fastcall *v10)(__int64 *, _QWORD *, _QWORD *); // r9
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 110);
  if ( a1[26] == v5 && (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 208LL))(a1) == a1[24] )
    return a1 + 24;
  v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 208LL))(a1);
  v9 = *v6;
  v12[0] = 1LL;
  v12[1] = a2;
  v10 = *(int (__fastcall **)(__int64 *, _QWORD *, _QWORD *))(v9 + 208);
  if ( !a2 )
    ((void (__fastcall *)(__int64, __int64, __int64, int (__fastcall *)(__int64 *, _QWORD *, _QWORD *)))`gsl::details::get_terminate_handler'::`2'::handler)(
      v9,
      v7,
      v8,
      v10);
  if ( v10(v6, v12, a1 + 24) >= 0 )
    return a1 + 24;
  return (_QWORD *)v2;
}
