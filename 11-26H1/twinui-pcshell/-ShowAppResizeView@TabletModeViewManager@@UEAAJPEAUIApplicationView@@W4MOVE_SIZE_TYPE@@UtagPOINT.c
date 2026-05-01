/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18051FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1801C5DDC (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x180520DE4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x18052D53C (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x18052F938 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, LONG *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64 *, _QWORD); // rdi
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct _GUID *v19; // rdx
  bool v20; // cl
  int Instance; // eax
  IUnknown *v22; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __m128i v27; // xmm6
  IUnknown *v28; // rdx
  int v29; // eax
  unsigned int v30; // edi
  IUnknown *v31; // rbx
  IUnknown *punk; // [rsp+38h] [rbp-49h] BYREF
  __int64 v34; // [rsp+40h] [rbp-41h] BYREF
  struct tagRECT v35; // [rsp+48h] [rbp-39h] BYREF
  __int64 v36; // [rsp+58h] [rbp-29h] BYREF
  __int64 v37; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v38; // [rsp+68h] [rbp-19h] BYREF
  __m128i v39; // [rsp+78h] [rbp-9h] BYREF
  __int128 v40; // [rsp+88h] [rbp+7h]
  __int64 v41; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v37 = a4;
  if ( !a2 )
    goto LABEL_14;
  *(_QWORD *)&v35.right = 0LL;
  v7 = a1[4];
  v8 = *(__int64 (__fastcall **)(__int64, LONG *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
  v9 = v8(v7, &v35.right);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&v35.right + 48LL))(*(_QWORD *)&v35.right) )
    {
      v10 = -2147019873;
      v11 = 2147947423LL;
      v12 = 285LL;
      goto LABEL_6;
    }
    v34 = 0LL;
    v13 = *(_QWORD *)&v35.right;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(**(_QWORD **)&v35.right + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    v15 = v14(v13, a2, &v34, 0LL);
    v10 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 289LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      goto LABEL_20;
    }
    v38 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v34 + 56LL))(v34, 0LL, &v38);
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)&v35.right + 24LL))(*(_QWORD *)&v35.right, &v39);
    v35.left = 0;
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)&v39, &v38, &v38, &v35);
    if ( (a3 != 4 || (v35.left & 1) == 0) && (a3 != 3 || (v35.left & 2) == 0) )
    {
      v10 = -2147418113;
      v16 = 2147549183LL;
      v17 = 304LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
LABEL_14:
    v18 = a1[7];
    if ( v18 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 32LL))(v18, 0LL);
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = AppResizeView_CreateInstance(v20, v19, (void **)&punk);
    v10 = Instance;
    if ( Instance >= 0 )
    {
      v36 = 0LL;
      v22 = punk;
      QueryInterface = punk->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      v24 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
              v22,
              &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
              &v36);
      v10 = v24;
      if ( v24 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 8);
        v24 = TabletModeInputHandler_CreateInstance(1LL, v36, v26, a1 + 8);
        v10 = v24;
        if ( v24 >= 0 )
        {
          v27 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                              &v38,
                              (__int64)(a1 - 11),
                              (__int64)&punk);
          v39 = v27;
          LOBYTE(v40) = 1;
          IUnknown_SetSite(punk, v28);
          v29 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].QueryInterface)(punk, &v37);
          v30 = v29;
          if ( v29 >= 0 )
          {
            v31 = punk;
            if ( (IUnknown *)a1[7] != punk )
            {
              if ( punk )
                ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
              v34 = a1[7];
              a1[7] = v31;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
            }
            TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)(a1 - 11));
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            v10 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14B,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
              (const char *)(unsigned int)v29);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v27.m128i_i64[0] + 152) + 56LL))(*(_QWORD *)(v27.m128i_i64[0] + 152));
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v27.m128i_i64[0] + 152));
            IUnknown_SetSite(*(IUnknown **)_mm_srli_si128(v27, 8).m128i_i64[0], 0LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            v10 = v30;
          }
          goto LABEL_33;
        }
        v25 = 320LL;
      }
      else
      {
        v25 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
    }
LABEL_33:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    return v10;
  }
  v11 = (unsigned int)v9;
  v12 = 284LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)v11);
LABEL_20:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35.right);
  return v10;
}
