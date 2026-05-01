/*
 * XREFs of ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1804F23F4
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18023E7C4 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1800FDCB0 (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AE.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180217F3C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802CC798 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180459A28 (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1804F2994 (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 *     WindowRelativePositioning::_anonymous_namespace_::OverlapsWith @ 0x1804F2A90 (WindowRelativePositioning--_anonymous_namespace_--OverlapsWith.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
struct tagRECT *__fastcall WindowRelativePositioning::GetAdjacentPosition(
        WindowRelativePositioning *this,
        __m128i *__return_ptr retstr,
        const struct tagRECT *a3,
        const struct tagSIZE *a4,
        const struct tagRECT *a5,
        __int64 a6,
        const unsigned __int16 *a7,
        struct tagRECT *a8)
{
  int ScaleFactorForRect; // eax
  int v13; // ecx
  __int64 v14; // rdi
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  _BYTE *v18; // rdi
  _BYTE *v19; // rdi
  _BYTE *v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rdi
  __m128i *v23; // r8
  __int64 v24; // rdi
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  _BYTE *v27; // rdi
  __m128i v28; // xmm0
  __int128 v29; // xmm6
  __int64 (__fastcall *v30)(const unsigned __int16 *, _QWORD, __int64 *); // rbx
  int v31; // eax
  _DWORD *v32; // r15
  _BYTE *v33; // r12
  _BYTE *v34; // r14
  __int64 *v35; // rbx
  __int64 v36; // rax
  _DWORD *v37; // rbx
  unsigned int v38; // r12d
  __int128 v39; // xmm1
  __int128 v41; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  __int128 v48; // [rsp+80h] [rbp-88h] BYREF
  int v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v51; // [rsp+A8h] [rbp-60h]
  struct tagRECT *v52; // [rsp+B0h] [rbp-58h]
  unsigned int v53; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v54[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v55; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v56[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m128i v57; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v58; // [rsp+F8h] [rbp-10h] BYREF

  *(_QWORD *)&v48 = a6;
  v52 = a8;
  ScaleFactorForRect = GetScaleFactorForRect(a8);
  v49 = (int)(float)((float)(10 * ScaleFactorForRect) / 100.0);
  v13 = retstr->m128i_i32[2] - retstr->m128i_i32[0];
  v47 = (unsigned int)(a4[1].cx + a4->cx - a3->left - v49);
  v43 = (unsigned int)(v49 + v13 - a4->cx - a4[1].cx);
  LODWORD(v44) = (int)(float)((float)(40 * ScaleFactorForRect) / 100.0);
  HIDWORD(v44) = v44;
  LODWORD(v45) = -(int)v44;
  HIDWORD(v45) = v44;
  LODWORD(v58) = v44;
  DWORD1(v58) = -(int)v44;
  v57.m128i_i32[0] = -(int)v44;
  v57.m128i_i32[1] = -(int)v44;
  v41 = 0LL;
  v42 = 0LL;
  if ( (_BYTE)a5 )
  {
    std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, 0LL, &v47);
    v14 = *((_QWORD *)&v41 + 1);
    v15 = v42;
    if ( *((_BYTE **)&v41 + 1) == v42 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, *((_BYTE **)&v41 + 1), &v43);
      v15 = v42;
      v16 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      **((_QWORD **)&v41 + 1) = v43;
      v16 = (_BYTE *)(v14 + 8);
      *((_QWORD *)&v41 + 1) = v16;
    }
    if ( v16 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v16, &v45);
      v17 = v45;
      v15 = v42;
      v18 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      v17 = v45;
      *(_QWORD *)v16 = v45;
      v18 = v16 + 8;
      *((_QWORD *)&v41 + 1) = v18;
    }
    if ( v18 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v18, &v44);
      v15 = v42;
      v19 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      *(_QWORD *)v18 = v44;
      v19 = v18 + 8;
      *((_QWORD *)&v41 + 1) = v19;
    }
    if ( v19 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v19, &v57);
      v15 = v42;
      v20 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      *(_QWORD *)v19 = v57.m128i_i64[0];
      v20 = v19 + 8;
      *((_QWORD *)&v41 + 1) = v20;
    }
    if ( v20 != v15 )
    {
      v21 = v58;
LABEL_16:
      *(_QWORD *)v20 = v21;
      v22 = v20 + 8;
      *((_QWORD *)&v41 + 1) = v22;
      goto LABEL_34;
    }
    v23 = (__m128i *)&v58;
  }
  else
  {
    std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, 0LL, &v43);
    v24 = *((_QWORD *)&v41 + 1);
    v15 = v42;
    if ( *((_BYTE **)&v41 + 1) == v42 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, *((_BYTE **)&v41 + 1), &v47);
      v15 = v42;
      v25 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      **((_QWORD **)&v41 + 1) = v47;
      v25 = (_BYTE *)(v24 + 8);
      *((_QWORD *)&v41 + 1) = v25;
    }
    if ( v25 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v25, &v44);
      v17 = v44;
      v15 = v42;
      v26 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      v17 = v44;
      *(_QWORD *)v25 = v44;
      v26 = v25 + 8;
      *((_QWORD *)&v41 + 1) = v26;
    }
    if ( v26 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v26, &v45);
      v15 = v42;
      v27 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      *(_QWORD *)v26 = v45;
      v27 = v26 + 8;
      *((_QWORD *)&v41 + 1) = v27;
    }
    if ( v27 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v27, &v58);
      v15 = v42;
      v20 = (_BYTE *)*((_QWORD *)&v41 + 1);
    }
    else
    {
      *(_QWORD *)v27 = v58;
      v20 = v27 + 8;
      *((_QWORD *)&v41 + 1) = v20;
    }
    if ( v20 != v15 )
    {
      v21 = v57.m128i_i64[0];
      goto LABEL_16;
    }
    v23 = &v57;
  }
  std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((__int64)&v41, v20, v23);
  v22 = (_DWORD *)*((_QWORD *)&v41 + 1);
  v15 = v42;
LABEL_34:
  v28 = *retstr;
  v57 = v28;
  v57.m128i_i32[2] = _mm_cvtsi128_si32(v28) + a3->left;
  v57.m128i_i32[3] = a3->top + v28.m128i_i32[1];
  v29 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                     (unsigned int)&v47,
                     (unsigned int)&v57,
                     v17,
                     HIDWORD(v17),
                     (__int64)v52);
  v46 = 0LL;
  v30 = *(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)a7 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
  v31 = v30(a7, v48, &v46);
  v32 = (_DWORD *)v41;
  if ( v31 >= 0 )
  {
    v50 = 0LL;
    v33 = 0LL;
    v51 = 0LL;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v48,
      v46);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v53,
      (__int64)&v48,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v55,
      (__int64)&v48,
      SDWORD2(v48));
    v34 = (_BYTE *)*((_QWORD *)&v50 + 1);
    while ( v53 != v55 || v54[1] != v56[1] )
    {
      v35 = (__int64 *)v54[0];
      v43 = v54[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v43);
      v58 = 0LL;
      v47 = 0LL;
      v36 = *v35;
      v47 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v36 + 104))(
             v35,
             &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
             &v47) >= 0
        && (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v47 + 24LL))(v47, &v58) >= 0 )
      {
        if ( v34 == v33 )
        {
          std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(
            (const void **)&v50,
            v34,
            &v58);
          v33 = v51;
          v34 = (_BYTE *)*((_QWORD *)&v50 + 1);
        }
        else
        {
          *(_OWORD *)v34 = v58;
          v34 += 16;
          *((_QWORD *)&v50 + 1) = v34;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
      ++v53;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v53);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v56);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v54);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
    v37 = v32;
    v38 = v49;
    while ( v37 != v22 )
    {
      v39 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                         (unsigned int)&v47,
                         (unsigned int)&v57,
                         *v37,
                         HIDWORD(*(_QWORD *)v37),
                         (__int64)v52);
      v48 = v39;
      if ( !(unsigned __int8)WindowRelativePositioning::_anonymous_namespace_::OverlapsWith(&v48, &v50, v38) )
      {
        *(_OWORD *)this = v39;
        std::vector<Geometry::CRect>::_Tidy((__int64)&v50);
        goto LABEL_51;
      }
      v37 += 2;
    }
    std::vector<Geometry::CRect>::_Tidy((__int64)&v50);
  }
  *(_OWORD *)this = v29;
LABEL_51:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
  if ( v32 )
    std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)((v15 - (_BYTE *)v32) & 0xFFFFFFFFFFFFFFF8uLL));
  return (struct tagRECT *)this;
}
