/*
 * XREFs of ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x1804B9D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804B96B0 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrameElement::v_LayoutChildren(CMultitaskingViewFrameElement *this)
{
  __int64 v2; // rcx
  LONG v3; // edx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagRECT v11; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v12[4]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-30h] BYREF
  __m128i v14; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v11.left = *((_DWORD *)this + 14);
    v11.right = v11.left + 1;
    v11.top = v3;
    v11.bottom = v3 + 1;
    (*(void (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v11, 0LL, 0LL);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216);
  v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = v4;
  v6 = *((_QWORD *)this + 36);
  v12[3] = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 104LL))(v6, v12);
  CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, (struct tagRECT *)&v14, v12);
  v7 = *((_QWORD *)this + 34);
  v8 = (struct tagRECT)v14;
  v13 = (struct tagRECT)v14;
  if ( v7 )
  {
    v11 = (struct tagRECT)v14;
    v11.top = _mm_srli_si128(v14, 8).m128i_i32[1] - *((_DWORD *)this + 93);
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 104LL))(v7, &v11);
    v8 = (struct tagRECT)v14;
    v13.bottom = v11.top - *((_DWORD *)this + 94);
  }
  v9 = *((_QWORD *)this + 35);
  if ( v9 )
  {
    v11 = v8;
    v11.bottom = v8.top + 100;
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 104LL))(v9, &v11);
    v13.top = v11.bottom + 10;
  }
  v10 = *((_QWORD *)this + 33);
  if ( v10 )
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v10 + 104LL))(v10, &v13);
}
