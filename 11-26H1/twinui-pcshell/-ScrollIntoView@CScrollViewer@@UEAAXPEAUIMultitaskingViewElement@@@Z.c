/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804D91F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D95A4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D9988 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  CScrollViewer *v2; // r15
  void (__fastcall *v5)(__m128i *, int *); // rsi
  _DWORD *v6; // rbx
  __m128i v7; // xmm0
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  __int64 VisibleRect; // rax
  int v12; // edx
  int v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+24h] [rbp-3Ch]
  int v15; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+2Ch] [rbp-34h]
  _BYTE v17[8]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v18; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-18h] BYREF

  v2 = (CScrollViewer *)((char *)this - 208);
  v5 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetHorizontalSegment;
  if ( !(*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v5 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetVerticalSegment;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, _BYTE *))(*(_QWORD *)v2 + 120LL))(v2, v17);
  v18 = *(__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                      a2,
                      v19);
  v7 = v18;
  v8 = v6[1];
  v9 = -*v6;
  v18.m128i_i32[2] -= *v6;
  v10 = -v8;
  v18.m128i_i32[3] += v10;
  v18.m128i_i32[1] += v10;
  v18.m128i_i32[0] = v9 + _mm_cvtsi128_si32(v7);
  v5(&v18, &v13);
  VisibleRect = CScrollViewer::_GetVisibleRect(v2);
  v5((__m128i *)VisibleRect, &v15);
  if ( v13 < v15 || v14 > v16 )
  {
    if ( v14 <= v16 )
    {
      if ( v13 >= v15 )
        return;
      v12 = *((_DWORD *)this + 12) - v13 + v15;
    }
    else
    {
      v12 = v16 + *((_DWORD *)this + 12) - v14;
    }
    CScrollViewer::_ApplyScroll(v2, v12, 0);
  }
}
