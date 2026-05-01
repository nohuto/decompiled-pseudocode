/*
 * XREFs of ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804B6BB4
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804B65F4 (--$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804A47C4 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B3930 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x1804B6818 (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804B6AE0 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ?CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C5B5C (-CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerF.c)
 *     ?CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C69AC (-CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElem.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScrollViewerHost::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 (__fastcall ***a8)(_QWORD, GUID *, __int64 *))
{
  char v8; // r14
  double *v10; // r13
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r12
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  int DWriteTextFormat; // eax
  __int64 v18; // rdx
  int IsThreadRTL; // eax
  __int64 v20; // rbx
  int v21; // r14d
  int Instance; // eax
  __int64 v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v30; // [rsp+70h] [rbp+30h] BYREF

  v8 = a2;
  v10 = (double *)(a1 + 224);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a3 + 96);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a3 + 112);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a3 + 128);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a3 + 144);
  *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 160);
  *(_OWORD *)(a1 + 396) = *a4;
  v11 = a5;
  *(_OWORD *)(a1 + 416) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(v11 + 16);
  *(_DWORD *)(a1 + 392) = a2;
  v12 = a8;
  v13 = (*a8)[14];
  v14 = a1 + 88;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  a5 = 0x100000001LL;
  v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, __int64, GUID *, __int64))v13)(
          v12,
          0LL,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          v14);
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      a5 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a5);
      DWriteTextFormat = DWriteCreateFactory(0LL, &GUID_0439fc60_ca44_4994_8dee_3a9af7b732ec, &a5);
      v16 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v18 = 77LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
          (const char *)(unsigned int)DWriteTextFormat);
LABEL_16:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a5);
        return v16;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 464));
      IsThreadRTL = Mirror_IsThreadRTL();
      DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(
                           a5,
                           (__int64)L"Segoe MDL2 Assets",
                           0x190u,
                           (float)((float)*(int *)(a1 + 276) * (float)a6) / 72.0,
                           2u,
                           2u,
                           IsThreadRTL != 0,
                           (_QWORD *)(a1 + 464));
      v16 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v18 = 87LL;
        goto LABEL_8;
      }
      DWriteTextFormat = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize(
                           (__int64 *)(a1 + 472),
                           a1);
      v16 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v18 = 89LL;
        goto LABEL_8;
      }
      v30 = *(_QWORD *)(a1 + 472);
      v20 = v30;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 456));
      v21 = v8 & 2;
      Instance = CScrollButtonContainer_CreateInstance(v10, v21 != 0, v20, *(_QWORD *)(a1 + 464), v12);
      v16 = Instance;
      if ( Instance < 0 )
      {
        v23 = 99LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
          (const char *)(unsigned int)Instance);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        goto LABEL_16;
      }
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 456));
      v16 = Instance;
      if ( Instance < 0 )
      {
        v23 = 101LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a5);
    }
    else
    {
      v21 = v8 & 2;
    }
    a8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
    v24 = *(_DWORD *)(a1 + 240);
    HighContrastAwareOpacity<double>::operator double(v10);
    v26 = CScrollViewer_CreateInstance(a1 + 396, v25, v24, v21 != 0, a7, v12);
    v16 = v26;
    if ( v26 >= 0 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 64LL))(
              a1,
              a8);
      v16 = v26;
      if ( v26 >= 0 )
      {
        v26 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(&a8, (__int64 *)(a1 + 448));
        v16 = v26;
        if ( v26 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 208) + 40LL))(a1 + 208);
          v16 = 0;
          goto LABEL_27;
        }
        v27 = 109LL;
      }
      else
      {
        v27 = 108LL;
      }
    }
    else
    {
      v27 = 107LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v26);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
    return v16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
