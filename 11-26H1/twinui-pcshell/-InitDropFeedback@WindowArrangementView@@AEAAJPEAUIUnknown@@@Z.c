/*
 * XREFs of ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x180529D2C
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x180529FD4 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053CCF8 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053DD00 (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::InitDropFeedback(WindowArrangementView *this, struct IUnknown *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  __m128i v6; // xmm6
  const struct _GUID *v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int *v14; // [rsp+28h] [rbp-79h]
  void *v15; // [rsp+38h] [rbp-69h] BYREF
  int v16[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h] BYREF
  __m128i v18; // [rsp+50h] [rbp-51h] BYREF
  char v19; // [rsp+60h] [rbp-41h]
  _QWORD v20[2]; // [rsp+68h] [rbp-39h] BYREF
  struct IUnknown *v21; // [rsp+78h] [rbp-29h]
  _BYTE v22[40]; // [rsp+80h] [rbp-21h] BYREF
  _OWORD v23[2]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v23);
  *(_QWORD *)v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
  v14 = v16;
  Instance = CDropFeedback_CreateInstance(a2, v23);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v6 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       &v18,
                       (__int64)v16,
                       (__int64)this);
    v18 = v6;
    v19 = 1;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v8 = CDropFeedbackList_CreateInstance(v7, &v15);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v17 = 0LL;
      v9 = *((_QWORD *)this + 15);
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
      v11 = v10(v9, &v17);
      v5 = v11;
      if ( v11 >= 0 )
      {
        memset_0(v20, 0, 0x40uLL);
        while ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v17 + 24LL))(v17, 5LL, v20) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 24LL))(v20[0]) == 4 )
          {
            (*(void (__fastcall **)(void *, __int64, __int64, _BYTE *))(*(_QWORD *)v15 + 72LL))(v15, 100LL, 1LL, v22);
          }
          else if ( !SHIsSameObject(*((struct IUnknown **)this + 11), v21) )
          {
            LODWORD(v14) = 0;
            (*(void (__fastcall **)(void *, struct IUnknown *, struct IUnknown *, _BYTE *, int *))(*(_QWORD *)v15 + 64LL))(
              v15,
              v21,
              v21,
              v22,
              v14);
          }
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)v16 + 32LL))(*(_QWORD *)v16, v15, 0LL);
        v5 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v16);
          *((_QWORD *)this + 9) = *(_QWORD *)v16;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
          v5 = 0;
          goto LABEL_18;
        }
        v12 = 1060LL;
      }
      else
      {
        v12 = 1035LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x408,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    IUnknown_SetSite(*(IUnknown **)v6.m128i_i64[0], 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(_mm_srli_si128(v6, 8).m128i_u64[0] + 72));
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
  return v5;
}
