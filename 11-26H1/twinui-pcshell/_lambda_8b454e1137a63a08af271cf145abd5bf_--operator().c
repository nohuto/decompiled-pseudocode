/*
 * XREFs of _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x18050EE4C
 * Callers:
 *     wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x18050E69C (wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180165F80 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180166600 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180166D5C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EB174 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1802AF360 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x1802B68C8 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802BAB88 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1805105AC (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x180512608 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8b454e1137a63a08af271cf145abd5bf_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  struct IApplicationViewPosition *v4; // rbx
  CDesktopPositioner *v5; // rbx
  CDesktopPositioner *v6; // rcx
  char v7; // bl
  int v8; // ecx
  CDesktopPositioner *v9; // rcx
  __int64 v10; // rcx
  CDesktopPositioner *v11; // rcx
  int v12; // eax
  struct IApplicationViewPosition **v14; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v15[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationViewPosition *v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v18; // [rsp+50h] [rbp-B8h] BYREF
  struct IApplicationViewPosition *v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[44]; // [rsp+68h] [rbp-A0h]
  struct tagRECT v22; // [rsp+98h] [rbp-70h] BYREF
  __int128 v23[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-38h]
  _BYTE v26[40]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v28; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT v29; // [rsp+128h] [rbp+20h] BYREF

  v2 = *(_QWORD *)a1;
  v16 = **(struct IApplicationViewPosition ***)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v19 = *(struct IApplicationViewPosition **)(*(_QWORD *)std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
                                                           (__int64 *)(v2 + 384),
                                                           (__int64)&v22,
                                                           &v16)
                                            + 40LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v4 = v19;
  if ( v19 )
  {
LABEL_4:
    v18 = 0LL;
    if ( **(_QWORD **)(a1 + 16) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      if ( (int)CDesktopPositioner::_FixPositionForLayout(
                  v6,
                  **(struct IApplicationView ***)(a1 + 8),
                  **(struct IAppLayout ***)(a1 + 16),
                  v19,
                  &v18) >= 0 )
        goto LABEL_9;
      v4 = v19;
    }
    if ( v18 != v4 )
    {
      v16 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      v16 = v18;
      v18 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    }
LABEL_9:
    v7 = 0;
    v8 = **(_DWORD **)(a1 + 24);
    if ( v8 == 4 )
    {
      v16 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v18,
                  (__int64 *)&v16) >= 0 )
      {
        LODWORD(v17) = 0;
        if ( (*(int (__fastcall **)(struct IApplicationViewPosition *, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, &v17) >= 0
          && (_DWORD)v17 == 3 )
        {
          v27 = 0LL;
          if ( (*(int (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v16 + 56LL))(
                 v16,
                 &v27) >= 0 )
          {
            v28 = 0LL;
            CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v9, &v27, &v28);
            v29 = 0LL;
            v7 = 1;
            CDesktopPositioner::_FixRectForWorkArea(*(_QWORD *)a1, 1, &v28.left, 0LL, (__int64)v14, &v29);
            (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 48LL))(**(_QWORD **)(a1 + 32), 3LL);
            v10 = **(_QWORD **)(a1 + 32);
            v22 = v29;
            (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v10 + 56LL))(v10, &v22);
            (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 72LL))(**(_QWORD **)(a1 + 32), 1LL);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      if ( v7 )
        goto LABEL_31;
    }
    else if ( v8 == 5 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u,
        v3);
      v15[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v11, **(struct IUnknown ***)(a1 + 40), v15) >= 0 && !v15[0] )
      {
        v16 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v18,
                    (__int64 *)&v16) >= 0 )
        {
          LODWORD(v17) = 0;
          if ( (*(int (__fastcall **)(struct IApplicationViewPosition *, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, &v17) >= 0
            && (_DWORD)v17 == 1 )
          {
            memset(v26, 0, sizeof(v26));
            if ( (*(int (__fastcall **)(struct IApplicationViewPosition *, _BYTE *))(*(_QWORD *)v16 + 72LL))(v16, v26) >= 0 )
            {
              *(_DWORD *)v21 = 44;
              *(_OWORD *)&v21[4] = *(_OWORD *)v26;
              *(_QWORD *)&v21[20] = *(_QWORD *)&v26[16];
              *(_OWORD *)&v21[28] = *(_OWORD *)&v26[24];
              v23[0] = *(_OWORD *)v21;
              v23[1] = *(_OWORD *)&v21[16];
              v24 = *(_OWORD *)&v26[24] >> 32;
              v25 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v26[24], 12));
              DWORD2(v23[0]) = 1;
              v20 = 0;
              if ( (*(int (__fastcall **)(struct IApplicationViewPosition *, int *))(*(_QWORD *)v16 + 64LL))(v16, &v20) >= 0 )
              {
                v12 = 1;
                if ( v20 == 1 )
                  v12 = 3;
                DWORD2(v23[0]) = v12;
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
              Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                &v16,
                v23);
              Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(
                (__int64 *)&v18,
                &v16);
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 96LL))(**(_QWORD **)(a1 + 32), 1LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(***(_QWORD ***)(a1 + 32) + 80LL))(
      **(_QWORD **)(a1 + 32),
      v18);
LABEL_31:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  }
  v5 = *(CDesktopPositioner **)a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  if ( (int)CDesktopPositioner::_GetRestorePosition(v5, **(struct IApplicationView ***)(a1 + 8), 0LL, &v19) >= 0 )
  {
    v4 = v19;
    goto LABEL_4;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
}
