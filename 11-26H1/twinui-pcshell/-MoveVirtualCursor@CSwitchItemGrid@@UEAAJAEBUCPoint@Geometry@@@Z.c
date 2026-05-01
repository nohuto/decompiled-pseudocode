/*
 * XREFs of ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804C6BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C55F8 (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?BoundToRect@CPoint@Geometry@@QEAAXAEBUtagRECT@@@Z @ 0x1804C5EF0 (-BoundToRect@CPoint@Geometry@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804C647C (-GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z.c)
 *     ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x1804D52D0 (-HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchItemGrid::MoveVirtualCursor(CSwitchItemGrid *this, const struct Geometry::CPoint *a2)
{
  char *v4; // rsi
  _DWORD *v6; // r8
  int v7; // ebx
  int v8; // eax
  struct IMultitaskingViewElement *v9; // r8
  int v10; // r15d
  __int64 **v11; // rbx
  __int64 **v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  __m128i *v15; // rax
  __m128i v16; // xmm0
  int NearestEdgeToPointDistanceSquared; // eax
  ElementHelpers *v18; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+34h] [rbp-4Ch]
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (char *)this - 208;
  if ( *((_QWORD *)this - 23) )
  {
    (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v4 + 120LL))((char *)this - 208, &v20);
    if ( !*((_BYTE *)this + 732) )
    {
      *((_BYTE *)this + 732) = 1;
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this - 5) + 88LL))(
                       *((_QWORD *)this - 5),
                       &v23);
      LODWORD(v19) = (v6[2] - *v6) / 2 + *v6;
      HIDWORD(v19) = v6[1] + (v6[3] - v6[1]) / 2;
      LODWORD(v18) = v19 - v20;
      HIDWORD(v18) = HIDWORD(v19) - v21;
      *(_QWORD *)((char *)this + 724) = v18;
    }
    v7 = MulDiv(*(_DWORD *)a2, *((_DWORD *)this - 36) - *((_DWORD *)this - 38), *((_DWORD *)this + 160));
    v8 = MulDiv(*((_DWORD *)a2 + 1), *((_DWORD *)this - 35) - *((_DWORD *)this - 37), *((_DWORD *)this + 161));
    v23 = (struct tagRECT)*((_OWORD *)this + 37);
    *((_DWORD *)this + 181) += v7;
    *((_DWORD *)this + 182) += v8;
    Geometry::CPoint::BoundToRect((LONG *)this + 181, &v23);
    v19 = 0LL;
    GridLayout::HitTestRow((CSwitchItemGrid *)((char *)this + 560), (CSwitchItemGrid *)((char *)this + 724), &v19);
    rc = *(struct tagRECT *)(*((_QWORD *)this + 76) + 56 * v19 + 8);
    InflateRect(&rc, 0, *((_DWORD *)this + 141));
    Geometry::CPoint::BoundToRect((LONG *)this + 181, &rc);
    v18 = 0LL;
    v10 = 0x7FFFFFFF;
    v11 = (__int64 **)*((_QWORD *)this - 24);
    v12 = &v11[*((_QWORD *)this - 23)];
    while ( v11 != v12 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v11,
        (__int64 *)&v19);
      v13 = *v11;
      v14 = **v11;
      v22 = *(_QWORD *)((char *)this + 724);
      LODWORD(v22) = v20 + v22;
      HIDWORD(v22) += v21;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(v14 + 112))(v13, &v22) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v18, v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        break;
      }
      v15 = (__m128i *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(**v11 + 88))(*v11, v25);
      v16 = *v15;
      v23.left = _mm_cvtsi128_si32(*v15) - v20;
      v23.right = v16.m128i_i32[2] - v20;
      v23.bottom = v16.m128i_i32[3] - v21;
      v23.top = v16.m128i_i32[1] - v21;
      NearestEdgeToPointDistanceSquared = Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
                                            (Geometry::CRect *)&v23,
                                            (const struct tagPOINT *)((char *)this + 724));
      if ( NearestEdgeToPointDistanceSquared < v10 )
      {
        v10 = NearestEdgeToPointDistanceSquared;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v18, v11);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      ++v11;
    }
    if ( !ElementHelpers::IsSameElement((struct IUnknown *)v18, *((struct IUnknown **)this - 5), v9) )
      (*(void (__fastcall **)(char *, ElementHelpers *))(*((_QWORD *)this - 26) + 288LL))(v4, v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
