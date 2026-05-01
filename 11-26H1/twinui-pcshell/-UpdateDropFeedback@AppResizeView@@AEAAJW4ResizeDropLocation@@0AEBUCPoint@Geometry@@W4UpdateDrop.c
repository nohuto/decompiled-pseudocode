/*
 * XREFs of ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18052EFD8
 * Callers:
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052DB3C (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18052EDE0 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805272DC (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x18052DF3C (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x18052DFA0 (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18052E330 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x18052F370 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053CCF8 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppResizeView::UpdateDropFeedback(__int64 a1, int a2, int a3, int *a4, char a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r15
  unsigned int v15; // esi
  int v16; // r15d
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  unsigned int v22; // edi
  int v23; // ebx
  bool v24; // zf
  __int64 v25; // rax
  int v26; // eax
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v28)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v29; // rcx
  __int64 *v31; // [rsp+30h] [rbp-50h] BYREF
  void *v32; // [rsp+38h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v37; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LODWORD(v31) = a2;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v35);
  v8 = AppResizeView::QueryResizeApps(a1, a3, (__int64)a4, &v35);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_38;
  }
  v33 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v35, &v33);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_38;
  }
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  v12 = CDropFeedbackList_CreateInstance(v11, &v32);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 392LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    goto LABEL_5;
  }
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    v34 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v34);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 398LL;
      goto LABEL_8;
    }
    v15 = 0;
    if ( v34 )
    {
      v16 = (int)v31;
      do
      {
        v31 = 0LL;
        v17 = v33;
        v18 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v33 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
        if ( v18(v17, v15, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, (__int64 *)&v31) >= 0 )
        {
          v36 = 0LL;
          v19 = (__int64)v31;
          v20 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*v31 + 32);
          v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v36);
          if ( v20(v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v21) >= 0 )
          {
            v22 = v36;
            v37 = 0LL;
            v23 = 16;
            if ( a3 == v16 )
              v23 = 256;
            v24 = (*(unsigned int (__fastcall **)(__int64 *))(*v31 + 88))(v31) == 0;
            v25 = *v31;
            if ( v24 )
            {
              (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v25 + 56))(v31, 0LL, &v37);
              v26 = v37.left - v37.right;
              if ( a3 )
                v26 = v37.right - v37.left;
              v37.left += v26;
              v37.right += v26;
              v23 |= 0x200u;
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v25 + 72))(v31, 0LL, &v37);
            }
            (*(void (__fastcall **)(void *, _QWORD, _QWORD, struct tagRECT *, int))(*(_QWORD *)v32 + 88LL))(
              v32,
              v22,
              0LL,
              &v37,
              v23);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
        ++v15;
      }
      while ( v15 < v34 );
      v14 = a5;
    }
  }
  if ( (v14 & 2) != 0 )
  {
    v37 = 0LL;
    AppResizeView::MakeDragGutterRect((AppResizeView *)a1, *a4, &v37);
    v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, _DWORD))(*(_QWORD *)v32 + 88LL))(
            v32,
            100LL,
            2LL,
            &v37,
            0);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 453LL;
      goto LABEL_8;
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(
          *(_QWORD *)(a1 + 56),
          v32,
          0LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 456LL;
    goto LABEL_8;
  }
  v27 = v35;
  v28 = (*v35)[6];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 72));
  v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))v28)(v27, a1 + 72);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 457LL;
    goto LABEL_8;
  }
  if ( (v14 & 4) != 0 )
  {
    LODWORD(v31) = 0;
    if ( (int)AppResizeView::MapResizeDropLocationToResizeAction(v29, a3, &v31) >= 0 )
      AppResizeView::UpdateUIADropEffect(a1, v35, (unsigned int)v31);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v9 = 0;
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v35);
  return v9;
}
