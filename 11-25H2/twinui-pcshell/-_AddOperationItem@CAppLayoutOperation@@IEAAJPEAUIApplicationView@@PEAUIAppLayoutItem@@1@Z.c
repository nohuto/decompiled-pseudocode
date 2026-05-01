/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x18069BD4C
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18069CFD0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18069B200 (--$FindEx@VCAppLayoutAnimationDataFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutAnima.c)
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806A1878 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // esi
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // rcx
  struct IUnknown *v12; // r8
  int v13; // ebx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // esi
  __int64 v17; // rbx
  void *v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rdx
  struct IUnknown *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v27; // [rsp+68h] [rbp-98h] BYREF
  __int128 *v28; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT rcDst; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v32; // [rsp+98h] [rbp-68h] BYREF
  RECT rcSrc; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int128 v36; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v37[3]; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v39[3]; // [rsp+108h] [rbp+8h]
  __int128 v40; // [rsp+120h] [rbp+20h] BYREF
  __int128 v41; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  v9 = 0;
  v10 = 0;
  v39[0] = 0LL;
  v38 = 0LL;
  *(__m128i *)&v39[1] = _mm_load_si128((const __m128i *)&_xmm);
  v36 = 0LL;
  v37[0] = 0LL;
  *(_OWORD *)&v37[1] = *(_OWORD *)&v39[1];
  v40 = 0LL;
  rcDst = 0LL;
  v41 = 0LL;
  v32 = 0LL;
  if ( a3 )
  {
    v9 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a3 + 64LL))(a3, &v38);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, &v40);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, &v41);
  }
  if ( a4 )
  {
    v10 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a4 + 64LL))(a4, &v36);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v32);
  }
  else
  {
    v11 = *((_QWORD *)this + 5);
    v35 = 0LL;
    rcSrc = 0LL;
    v34 = 0LL;
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v11 + 24LL))(v11, &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v32, &rcDst);
    DWORD2(v36) = 3;
  }
  v24 = 0LL;
  v26 = 0LL;
  v22 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  v13 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
          (__int64 *)this + 11,
          &v22,
          v12,
          &v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  if ( v13 >= 0 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v24);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
  v29 = a2;
  v27 = &v36;
  LODWORD(v26) = v4;
  v28 = &v38;
  LODWORD(v24) = v10;
  *(_QWORD *)&rcSrc.left = &v40;
  LODWORD(v22) = v9;
  *(_QWORD *)&rcSrc.right = &v41;
  *(_QWORD *)&v34 = &rcDst;
  *((_QWORD *)&v34 + 1) = &v32;
  v23 = 0LL;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (unsigned int)&v30,
    (unsigned int)&v29,
    (unsigned int)&v28,
    (unsigned int)&v27,
    (__int64)&rcSrc,
    (__int64)&v22,
    (__int64)&v24,
    (__int64)&v26);
  v15 = v30;
  if ( v30 )
    v16 = (**v30)(v30, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v23);
  else
    v16 = -2147024882;
  if ( v15 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
  if ( v16 >= 0 )
  {
    v17 = v23;
    v25 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v25);
    v19 = *((_QWORD *)this + 16);
    v16 = 0;
    if ( v19 != *((_QWORD *)this + 18)
      || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 120,
                  v19 + 1,
                  v18),
          v16 >= 0) )
    {
      v20 = (__int64 *)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v20 )
      {
        *v20 = 0LL;
        if ( v20 != &v25 )
        {
          *v20 = v17;
          v25 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v25);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
  return (unsigned int)v16;
}
