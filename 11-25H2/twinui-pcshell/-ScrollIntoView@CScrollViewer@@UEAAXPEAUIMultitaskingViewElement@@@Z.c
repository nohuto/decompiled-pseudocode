/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C7160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804C751C (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804C78F8 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  void (__fastcall *v4)(__m128i *, int *); // rsi
  _DWORD *v5; // rbx
  __m128i v6; // xmm0
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  __int64 VisibleRect; // rax
  int v11; // edx
  int v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+24h] [rbp-3Ch]
  int v14; // [rsp+28h] [rbp-38h] BYREF
  int v15; // [rsp+2Ch] [rbp-34h]
  _BYTE v16[8]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v17; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetHorizontalSegment;
  if ( !(*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v4 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetVerticalSegment;
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 26) + 120LL))((char *)this - 208, v16);
  v17 = *(__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                      a2,
                      v18);
  v6 = v17;
  v7 = v5[1];
  v8 = -*v5;
  v17.m128i_i32[2] -= *v5;
  v9 = -v7;
  v17.m128i_i32[3] += v9;
  v17.m128i_i32[1] += v9;
  v17.m128i_i32[0] = v8 + _mm_cvtsi128_si32(v6);
  v4(&v17, &v12);
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v4((__m128i *)VisibleRect, &v14);
  if ( v12 < v14 || v13 > v15 )
  {
    if ( v13 <= v15 )
    {
      if ( v12 >= v14 )
        return;
      v11 = *((_DWORD *)this + 12) - v12 + v14;
    }
    else
    {
      v11 = v15 + *((_DWORD *)this + 12) - v13;
    }
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v11, 0);
  }
}
