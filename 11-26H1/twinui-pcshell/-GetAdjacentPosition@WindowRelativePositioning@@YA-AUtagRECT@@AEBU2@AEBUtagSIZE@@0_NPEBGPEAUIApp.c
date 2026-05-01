/*
 * XREFs of ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180513AB4
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18008C738 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802099B8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802C3C54 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x18051400C (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 *     WindowRelativePositioning::_anonymous_namespace_::OverlapsWith @ 0x180514108 (WindowRelativePositioning--_anonymous_namespace_--OverlapsWith.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v13; // r13d
  __int64 *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rdx
  __int64 *v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 *v21; // rdx
  __int64 *v22; // rdx
  __int64 *v23; // rdx
  __m128i v24; // xmm0
  __int128 v25; // xmm6
  int (__fastcall *v26)(const unsigned __int16 *, _QWORD, __int64 *); // rbx
  __int64 *v27; // rbx
  __int64 v28; // rax
  _DWORD *i; // rbx
  _DWORD *v30; // rsi
  __int128 v31; // xmm1
  __int128 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  unsigned int v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v46; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E8h] [rbp-20h] BYREF

  *(_QWORD *)&v41 = a6;
  ScaleFactorForRect = GetScaleFactorForRect(a8);
  v13 = (int)(float)((float)(10 * ScaleFactorForRect) / 100.0);
  v40[0] = a4[1].cx + a4->cx - a3->left - v13;
  v35 = v13 + retstr->m128i_i32[2] - retstr->m128i_i32[0] - a4->cx - a4[1].cx;
  LODWORD(v36) = (int)(float)((float)(40 * ScaleFactorForRect) / 100.0);
  HIDWORD(v36) = v36;
  LODWORD(v37) = -(int)v36;
  HIDWORD(v37) = v36;
  LODWORD(v48) = v36;
  DWORD1(v48) = -(int)v36;
  v38.m128i_i32[0] = -(int)v36;
  v38.m128i_i32[1] = -(int)v36;
  v33 = 0LL;
  v34 = 0LL;
  if ( (_BYTE)a5 )
  {
    std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, 0LL, v40);
    if ( *((__int64 **)&v33 + 1) == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, *((__int64 *)&v33 + 1), &v35);
      v14 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      **((_QWORD **)&v33 + 1) = v35;
      v14 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v14 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v14, &v37);
      v15 = v37;
      v16 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      v15 = v37;
      *v14 = v37;
      v16 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v16 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v16, &v36);
      v17 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      *v16 = v36;
      v17 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v17 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v17, v38.m128i_i64);
      v18 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      *v17 = v38.m128i_i64[0];
      v18 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v18 != v34 )
    {
      v19 = v48;
LABEL_16:
      *v18 = v19;
      *((_QWORD *)&v33 + 1) += 8LL;
      goto LABEL_34;
    }
    v20 = (__int64 *)&v48;
  }
  else
  {
    std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, 0LL, &v35);
    if ( *((__int64 **)&v33 + 1) == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, *((__int64 *)&v33 + 1), v40);
      v21 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      **((_QWORD **)&v33 + 1) = v40[0];
      v21 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v21 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v21, &v36);
      v15 = v36;
      v22 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      v15 = v36;
      *v21 = v36;
      v22 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v22 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v22, &v37);
      v23 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      *v22 = v37;
      v23 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v23 == v34 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v23, (__int64 *)&v48);
      v18 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      *v23 = v48;
      v18 = (__int64 *)(*((_QWORD *)&v33 + 1) + 8LL);
      *((_QWORD *)&v33 + 1) += 8LL;
    }
    if ( v18 != v34 )
    {
      v19 = v38.m128i_i64[0];
      goto LABEL_16;
    }
    v20 = (__int64 *)&v38;
  }
  std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(&v33, (__int64)v18, v20);
LABEL_34:
  v24 = *retstr;
  v38 = v24;
  v38.m128i_i32[2] = _mm_cvtsi128_si32(v24) + a3->left;
  v38.m128i_i32[3] = a3->top + v24.m128i_i32[1];
  v25 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                     (unsigned int)v40,
                     (unsigned int)&v38,
                     v15,
                     HIDWORD(v15),
                     (__int64)a8);
  v39 = 0LL;
  v26 = *(int (__fastcall **)(const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)a7 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
  if ( v26(a7, v41, &v39) >= 0 )
  {
    v42 = 0LL;
    v43 = 0LL;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v41,
      v39);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v44,
      (__int64)&v41,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v46,
      (__int64)&v41,
      SDWORD2(v41));
    while ( v44 != v46 || v45[1] != v47[1] )
    {
      v27 = (__int64 *)v45[0];
      v35 = v45[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
      v48 = 0LL;
      v40[0] = 0LL;
      v28 = *v27;
      v40[0] = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v28 + 104))(
             v27,
             &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
             v40) >= 0
        && (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v40[0] + 24LL))(v40[0], &v48) >= 0 )
      {
        if ( *((_QWORD *)&v42 + 1) == v43 )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(&v42, *((__int64 *)&v42 + 1), &v48);
        }
        else
        {
          **((_OWORD **)&v42 + 1) = v48;
          *((_QWORD *)&v42 + 1) += 16LL;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v40);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      ++v44;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v44);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v47);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v45);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
    v30 = (_DWORD *)*((_QWORD *)&v33 + 1);
    for ( i = (_DWORD *)v33; i != v30; i += 2 )
    {
      v31 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                         (unsigned int)v40,
                         (unsigned int)&v38,
                         *i,
                         HIDWORD(*(_QWORD *)i),
                         (__int64)a8);
      v41 = v31;
      if ( !(unsigned __int8)WindowRelativePositioning::_anonymous_namespace_::OverlapsWith(&v41, &v42, v13) )
      {
        *(_OWORD *)this = v31;
        std::vector<Geometry::CRect>::_Tidy((__int64 *)&v42);
        goto LABEL_51;
      }
    }
    std::vector<Geometry::CRect>::_Tidy((__int64 *)&v42);
  }
  *(_OWORD *)this = v25;
LABEL_51:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
  if ( (_QWORD)v33 )
    std::_Deallocate<16>((void *)v33, (struct std::nothrow_t *)(((unsigned __int64)v34 - v33) & 0xFFFFFFFFFFFFFFF8uLL));
  return (struct tagRECT *)this;
}
