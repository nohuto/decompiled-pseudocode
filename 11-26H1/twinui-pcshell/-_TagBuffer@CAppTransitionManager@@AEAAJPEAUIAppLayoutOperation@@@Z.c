/*
 * XREFs of ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E393C
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E380C (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1804E2F4C (-_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1804E3F54 (-s_GetLayoutBufferRect@CAppTransitionManager@@CA-AUCRect@Geometry@@PEAUIAppLayout@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::_TagBuffer(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v10; // eax
  __m128i *v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm6
  bool IsEmpty; // di
  int v15; // eax
  unsigned __int64 v16; // xmm6_8
  HWND v17; // rcx
  __int128 *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // edi
  unsigned __int64 v22; // xmm6_8
  HWND v23; // rcx
  unsigned __int64 v24; // xmm6_8
  HWND v25; // rcx
  char v27[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v28; // [rsp+50h] [rbp-21h] BYREF
  int v29; // [rsp+58h] [rbp-19h] BYREF
  __int64 v30; // [rsp+60h] [rbp-11h] BYREF
  __int64 v31; // [rsp+68h] [rbp-9h] BYREF
  __int128 v32; // [rsp+78h] [rbp+7h] BYREF
  __int128 v33; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = *(_QWORD *)a2;
  v27[0] = 0;
  v30 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v2 + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  v6 = v5(a2, &v30);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25D,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_28;
  }
  v8 = *(_QWORD *)a2;
  v28 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v8 + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  v10 = v9(a2, &v28);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x260,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    goto LABEL_28;
  }
  CAppTransitionManager::s_GetLayoutBufferRect(&v33, v30);
  CAppTransitionManager::s_GetLayoutBufferRect(&v32, v28);
  v11 = (__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     &v31,
                     (__int64)v27,
                     (__int64)this);
  v12 = *((_QWORD *)this + 26);
  v13 = *v11;
  v29 = 0;
  if ( v12 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, &v29) >= 0 && v29 )
    v33 = v32;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v33) )
  {
    IsEmpty = Geometry::CRect::IsEmpty((Geometry::CRect *)&v32);
    v15 = CAppTransitionManager::_EnsureWindowForBufferTag(this);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28A,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v15);
      if ( !*(_BYTE *)v13.m128i_i64[0] )
      {
        v16 = _mm_srli_si128(v13, 8).m128i_u64[0];
        v17 = *(HWND *)(v16 + 192);
        if ( v17 )
        {
          DestroyWindow(v17);
          *(_QWORD *)(v16 + 192) = 0LL;
        }
      }
      goto LABEL_5;
    }
    if ( IsEmpty )
    {
      v18 = 0LL;
      v19 = 0;
    }
    else
    {
      v18 = &v32;
      v19 = 1;
    }
    v20 = DwmpTransitionWindowWithRects(
            *((_QWORD *)this + 24),
            IsEmpty ? 16777284 : 25264196,
            &v33,
            &v33,
            (unsigned __int64)&v32 & -(__int64)(v19 != 0),
            v18,
            0LL);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v20);
      if ( !*(_BYTE *)v13.m128i_i64[0] )
      {
        v22 = _mm_srli_si128(v13, 8).m128i_u64[0];
        v23 = *(HWND *)(v22 + 192);
        if ( v23 )
        {
          DestroyWindow(v23);
          *(_QWORD *)(v22 + 192) = 0LL;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      v7 = v21;
      goto LABEL_28;
    }
    v27[0] = 1;
  }
  if ( !*(_BYTE *)v13.m128i_i64[0] )
  {
    v24 = _mm_srli_si128(v13, 8).m128i_u64[0];
    v25 = *(HWND *)(v24 + 192);
    if ( v25 )
    {
      DestroyWindow(v25);
      *(_QWORD *)(v24 + 192) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  v7 = 0;
LABEL_28:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  return v7;
}
