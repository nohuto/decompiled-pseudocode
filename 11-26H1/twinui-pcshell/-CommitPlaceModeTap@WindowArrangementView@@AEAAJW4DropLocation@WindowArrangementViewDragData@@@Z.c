/*
 * XREFs of ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180528A94
 * Callers:
 *     ?CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ @ 0x180528A30 (-CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x18052A7A0 (-PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x1805289EC (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052A888 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052BA50 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::CommitPlaceModeTap(__int64 a1, unsigned int a2)
{
  __m128i v2; // xmm6
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  __m128i v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  if ( !*(_BYTE *)(a1 + 314) )
  {
    *(_BYTE *)(a1 + 314) = 1;
    v2 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       &v7,
                       a1,
                       (__int64)&v11);
    v8 = v2;
    v9 = 1;
    v4 = WindowArrangementView::ProcessDrop(v3, v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v4);
      WindowArrangementView::Hide((WindowArrangementView *)(v2.m128i_i64[0] + 24), 1);
      WindowArrangementView::Cleanup((WindowArrangementView *)v2.m128i_i64[0]);
      TabletModeTelemetry::TMAppArrange::Stop(
        v2.m128i_i64[0] + 328,
        *(unsigned int *)_mm_srli_si128(v2, 8).m128i_u32[0]);
      return v5;
    }
    WindowArrangementView::Hide((WindowArrangementView *)(v2.m128i_i64[0] + 24), 1);
    WindowArrangementView::Cleanup((WindowArrangementView *)v2.m128i_i64[0]);
    TabletModeTelemetry::TMAppArrange::Stop(v2.m128i_i64[0] + 328, *(unsigned int *)_mm_srli_si128(v2, 8).m128i_u32[0]);
  }
  return 0LL;
}
