/*
 * XREFs of ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18018B800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180023E4C (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x18018B590 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018B920 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovemen.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180297BA4 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     wil::ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___ @ 0x1804E90E4 (wil--ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  WindowSizeConverter *v6; // rsi
  __int64 v7; // rdx
  __int64 v9; // rax
  WindowSizeConverter *v10; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationFrame *v12; // [rsp+50h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+38h] BYREF

  v6 = (WindowSizeConverter *)(a1 - 96);
  if ( !SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 - 96 + 120)) )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::GetImpl'::`2'::impl,
      v7);
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        if ( (a3 & 0x20) != 0 )
        {
          LODWORD(v12) = 0;
          if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)a2 + 48LL))(
                 a2,
                 &v12) >= 0 )
          {
            if ( (_DWORD)v12 )
            {
              WindowSizeConverter::EnsureEntry(v6, a2);
            }
            else
            {
              v13 = 0;
              if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v13) >= 0 )
              {
                v9 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v11, v6, &v13);
                wil::ResultFromException__lambda_5053f9d2b5f05b91476ca909f4f2555a___(v9);
              }
            }
          }
        }
        if ( (a3 & 0x10) != 0 )
        {
          v12 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
          if ( (int)WindowSizeConverter::GetFrameForMonitor(v6, a2, &v12) >= 0 )
            WindowSizeConverter::EnsurePosition(v10, a2, v12);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        }
      }
    }
  }
  return 0LL;
}
