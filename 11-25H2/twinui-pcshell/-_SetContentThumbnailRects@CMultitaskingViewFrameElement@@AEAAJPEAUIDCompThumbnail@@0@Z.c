/*
 * XREFs of ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1804B9AD8
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804B8B44 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804B983C (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804B96B0 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::_SetContentThumbnailRects(
        CMultitaskingViewFrameElement *this,
        struct IDCompThumbnail *a2,
        struct IDCompThumbnail *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __m128i v9; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, (struct tagRECT *)&v9, (_DWORD *)this + 14);
  v6 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __m128i *, _QWORD, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v9,
         0LL,
         0LL);
  if ( v6 < 0 )
  {
    v7 = 788LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( a3 )
  {
    v10 = (struct tagRECT)v9;
    v10.top = _mm_srli_si128(v9, 8).m128i_i32[1] - *((_DWORD *)this + 89);
    v6 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)a3 + 24LL))(
           a3,
           &v10,
           0LL,
           0LL);
    if ( v6 < 0 )
    {
      v7 = 793LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
