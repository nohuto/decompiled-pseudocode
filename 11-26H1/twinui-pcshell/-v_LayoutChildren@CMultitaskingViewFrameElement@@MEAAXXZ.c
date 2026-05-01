/*
 * XREFs of ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x1804CBC00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804CB570 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrameElement::v_LayoutChildren(CMultitaskingViewFrameElement *this)
{
  __int64 v2; // rcx
  LONG v3; // edx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  struct tagRECT v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct tagRECT v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+4Ch] [rbp-34h]
  struct tagRECT v14; // [rsp+50h] [rbp-30h] BYREF
  __m128i v15; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v10.left = *((_DWORD *)this + 14);
    v10.right = v10.left + 1;
    v10.top = v3;
    v10.bottom = v3 + 1;
    (*(void (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v10, 0LL, 0LL);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216);
  v4 = *((_QWORD *)this + 36);
  v12 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v11 = 0LL;
  v13 = v5;
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 104LL))(v4, &v11);
  CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, (struct tagRECT *)&v15, &v11);
  v6 = *((_QWORD *)this + 34);
  v7 = (struct tagRECT)v15;
  v14 = (struct tagRECT)v15;
  if ( v6 )
  {
    v10 = (struct tagRECT)v15;
    v10.top = _mm_srli_si128(v15, 8).m128i_i32[1] - *((_DWORD *)this + 93);
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v6 + 104LL))(v6, &v10);
    v7 = (struct tagRECT)v15;
    v14.bottom = v10.top - *((_DWORD *)this + 94);
  }
  v8 = *((_QWORD *)this + 35);
  if ( v8 )
  {
    v10 = v7;
    v10.bottom = v7.top + 100;
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 104LL))(v8, &v10);
    v14.top = v10.bottom + 10;
  }
  v9 = *((_QWORD *)this + 33);
  if ( v9 )
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 104LL))(v9, &v14);
}
