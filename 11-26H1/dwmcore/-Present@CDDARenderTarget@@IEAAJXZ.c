/*
 * XREFs of ?Present@CDDARenderTarget@@IEAAJXZ @ 0x1800560EC
 * Callers:
 *     ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180056090 (-RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056238 (-Present@CDDASwapChain@@QEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056338 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CDDARenderTarget::Present(CDDARenderTarget *this)
{
  unsigned int v1; // ebx
  bool v3; // cf
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  v1 = 0;
  if ( *((_QWORD *)this + 22) && *(int *)(*((_QWORD *)this + 3) + 6256LL) < 7 && *((_BYTE *)this + 2384) )
  {
    v3 = *((_BYTE *)this + 2385) != 0;
    v10 = 0LL;
    v4 = v3 ? 0x80 : 0;
    v9 = 0LL;
    CTargetDirtyBase<8>::GetTightDirtyRects((char *)this + 504, &v9);
    v6 = CDDASwapChain::Present(*((_QWORD *)this + 22), v5, v4, &v9);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x102u, 0LL);
      if ( (_QWORD)v9 )
      {
        std::_Deallocate<16>(v9, (v10 - v9) & 0xFFFFFFFFFFFFFFF0uLL);
        v10 = 0LL;
      }
    }
    else
    {
      v7 = v9;
      *((_BYTE *)this + 2384) = 0;
      if ( v7 )
      {
        std::_Deallocate<16>(v7, (v10 - v7) & 0xFFFFFFFFFFFFFFF0uLL);
        v10 = 0LL;
        v9 = 0LL;
      }
      if ( v1 == 142213130 )
      {
        if ( g_pComposition && *((_BYTE *)g_pComposition + 6465) )
          CComposition::ScheduleCompositionPass(g_pComposition, 0LL, 0x2000LL);
        *((_BYTE *)this + 2384) = 1;
        return 0;
      }
    }
  }
  return v1;
}
