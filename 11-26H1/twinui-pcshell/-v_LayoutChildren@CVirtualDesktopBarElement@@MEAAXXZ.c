/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804CEA80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804CDBA0 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CE8AC (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVirtualDesktopBarElement::v_LayoutChildren(CVirtualDesktopBarElement *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  int v5; // edi
  __m128i v6; // xmm6
  unsigned __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int32 v11; // edi
  __int32 v12; // ecx
  __int64 v13; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+40h] [rbp-21h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-19h] BYREF
  __m128i v16; // [rsp+58h] [rbp-9h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  int v18; // [rsp+70h] [rbp+Fh]
  int v19; // [rsp+74h] [rbp+13h]
  __m128i v20; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v17 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v15, &v17, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v17) = *((_DWORD *)this + 14);
  HIDWORD(v17) = v4;
  v18 = v17 + 1;
  v19 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v3 + 24))(v2, &v17, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v16.m128i_i64[0] = 0LL;
  v16.m128i_i32[2] = v5;
  v16.m128i_i32[3] = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = v16;
  v7 = HIDWORD(_mm_srli_si128(v16, 8).m128i_u64[0]);
  v13 = 0LL;
  v14 = 0LL;
  v8 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 94,
         &v14);
  v9 = retaddr;
  if ( v8 < 0 )
  {
    v10 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v13);
  v9 = retaddr;
  if ( v8 < 0 )
  {
    v10 = 266LL;
    goto LABEL_3;
  }
  if ( (int)v7 <= (int)v13 )
    LODWORD(v7) = v13;
LABEL_8:
  v16.m128i_i32[0] = v16.m128i_i32[2] - v7;
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v11 = v5 - v16.m128i_i32[2];
    v16.m128i_i32[2] += v11 - v16.m128i_i32[0];
    v16.m128i_i32[0] = v11;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), &v16);
  v20 = v6;
  v12 = *((_DWORD *)this + 84);
  if ( v12 <= v16.m128i_i32[2] - v16.m128i_i32[0] )
    v12 = v16.m128i_i32[2] - v16.m128i_i32[0];
  v20.m128i_i32[0] = v12;
  v20.m128i_i32[2] -= v12;
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v15);
}
