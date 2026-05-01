/*
 * XREFs of _lambda_c8a2fb21ce249544899dca467e4f9e40_::operator() @ 0x18018B3C0
 * Callers:
 *     wil::ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___ @ 0x1802C6940 (wil--ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x18018B590 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18018B6D4 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018B920 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovemen.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_c8a2fb21ce249544899dca467e4f9e40_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor *v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // r9
  struct IImmersiveMonitor *v8; // rdi
  __int64 (__fastcall *v9)(struct IImmersiveMonitor *, __int64, struct IApplicationFrame **); // rbx
  int v10; // eax
  WindowSizeConverter *v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  struct IApplicationFrame *v14; // rbx
  int v15[4]; // [rsp+20h] [rbp-40h] BYREF
  char v16[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  char v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v20; // [rsp+80h] [rbp+20h] BYREF
  struct IApplicationFrame *v21; // [rsp+88h] [rbp+28h] BYREF
  struct IApplicationFrame *v22; // [rsp+90h] [rbp+30h] BYREF

  v20 = 0;
  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v20);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v15[0]);
  v3 = a1[1][17];
  v4 = *((_QWORD *)v3 + 1);
  result = 0LL;
  HIDWORD(v17) = 0;
  v6 = (__int64)v3;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 32) >= v20 )
      {
        v7 = 0;
        v6 = v4;
      }
      else
      {
        v7 = 1;
      }
      result = v4 + 16;
      if ( !v7 )
        result = v4;
      v4 = *(_QWORD *)result;
    }
    while ( !*(_BYTE *)(*(_QWORD *)result + 25LL) );
  }
  if ( *(_BYTE *)(v6 + 25) || (struct IImmersiveMonitor *)v6 == v3 || v20 < *(_DWORD *)(v6 + 32) )
  {
    v21 = 0LL;
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::GetImpl'::`2'::impl,
      v6);
    v8 = a1[1][16];
    v9 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, struct IApplicationFrame **))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    v10 = v9(v8, 1LL, &v21);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x200,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v15[0]);
    v17 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       v15,
                       a1[1],
                       &v21);
    v18 = 1;
    v12 = WindowSizeConverter::EnsurePosition(v11, **a1, v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20D,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v12,
        v15[0]);
    result = std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
               a1[1] + 17,
               v16,
               &v20);
    v13 = *(_QWORD *)result;
    v14 = v21;
    if ( *(struct IApplicationFrame **)(*(_QWORD *)result + 40LL) != v21 )
    {
      v22 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v22 = *(struct IApplicationFrame **)(v13 + 40);
      *(_QWORD *)(v13 + 40) = v14;
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      v14 = v21;
    }
    if ( v14 )
    {
      v21 = 0LL;
      return (*(__int64 (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return result;
}
