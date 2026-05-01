/*
 * XREFs of ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x18052A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180528A94 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::PlaceModeTap(WindowArrangementView *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __m128i v7; // xmm1
  __int64 *v8; // rcx
  __int64 v9; // rax
  struct tagPOINT v11; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[20]; // [rsp+28h] [rbp-38h] BYREF
  char v13; // [rsp+3Ch] [rbp-24h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = *((_QWORD *)this + 7) == 0LL;
  v11 = a2;
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
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v14);
  if ( Geometry::CRect::Contains((Geometry::CRect *)&v14, &v11) )
  {
    *(_DWORD *)v12 = 5;
    v13 = 1;
    *(_OWORD *)&v12[4] = v14;
    v7 = *(__m128i *)v12;
  }
  else
  {
    v8 = (__int64 *)*((_QWORD *)this + 7);
    v9 = *v8;
    v11 = a2;
    v7 = *(__m128i *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, struct tagPOINT *))(v9 + 40))(v8, v12, &v11);
  }
  v5 = WindowArrangementView::CommitPlaceModeTap((__int64)this - 48, _mm_cvtsi128_si32(v7));
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 582LL;
    goto LABEL_8;
  }
  return v5;
}
