/*
 * XREFs of ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x180508370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506744 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::PlaceModeTap(WindowArrangementView *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __m128i v8; // xmm1
  __int64 *v9; // rcx
  __int64 v10; // rax
  struct tagPOINT v12; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[20]; // [rsp+28h] [rbp-38h] BYREF
  char v14; // [rsp+3Ch] [rbp-24h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = *((_QWORD *)this + 7) == 0LL;
  v12 = a2;
  if ( v2 )
  {
    v5 = -2147019873;
    v6 = 569LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)v5);
    return v5;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v15);
  if ( Geometry::CRect::Contains((Geometry::CRect *)&v15, &v12) )
  {
    *(_DWORD *)v13 = 5;
    v14 = 1;
    *(_OWORD *)&v13[4] = v15;
    v8 = *(__m128i *)v13;
  }
  else
  {
    v9 = (__int64 *)*((_QWORD *)this + 7);
    v10 = *v9;
    v12 = a2;
    v8 = *(__m128i *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, struct tagPOINT *))(v10 + 40))(v9, v13, &v12);
  }
  v5 = WindowArrangementView::CommitPlaceModeTap((_BYTE *)this - 48, (unsigned int)_mm_cvtsi128_si32(v8), v7);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 582LL;
    goto LABEL_8;
  }
  return v5;
}
