/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804CCE30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180067A40 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x1804CC898 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1804CC940 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1804CCB20 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_1804CCB20.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804CCCBC (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804CCCFC (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1804CCD88 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // r14
  _OWORD *v4; // r15
  int v5; // ebx
  ItemAnimationCoordinatorBase *v6; // r12
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // ebx
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rsi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v11; // rbx
  int v12; // eax
  _DWORD *v13; // rsi
  _DWORD *v14; // r14
  _OWORD *v15; // r15
  int v16; // ebx
  _DWORD *v17; // rsi
  _DWORD *v18; // r14
  _OWORD *v19; // r15
  int v20; // ebx
  __int128 v21; // xmm0
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v22; // r14
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v23; // rsi
  unsigned int v24; // ebx
  bool v25; // r15
  __int64 *v26; // rbx
  __int64 *v27; // r14
  __int128 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct IUnknown **v32; // [rsp+38h] [rbp-D0h] BYREF
  ItemAnimationCoordinatorBase *v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v35[2]; // [rsp+50h] [rbp-B8h] BYREF
  ItemAnimationCoordinatorBase *v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v38[44]; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+A4h] [rbp-64h]
  int v40; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  int v44; // [rsp+D0h] [rbp-38h]
  __int128 v45; // [rsp+D4h] [rbp-34h]
  __int128 v46; // [rsp+E4h] [rbp-24h]
  int v47; // [rsp+F4h] [rbp-14h]
  __int64 v48; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v49; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v33 = (ItemAnimationCoordinatorBase *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v37, (__int64 *)&v33, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  *((_BYTE *)this + 232) = 0;
  v2 = (_DWORD *)*((_QWORD *)this + 3);
  v3 = &v2[8 * *((_QWORD *)this + 4)];
  if ( v2 != v3 )
  {
    v4 = v2 + 4;
    do
    {
      v40 = *v2;
      v41 = *((_QWORD *)v4 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v41);
      v42 = *v4;
      v33 = 0LL;
      memset(v38, 0, sizeof(v38));
      v39 = 0;
      v32 = (struct IUnknown **)&v40;
      v5 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
             (_QWORD *)this + 19,
             (__int64)&v32,
             (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v38,
             (unsigned __int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
      if ( v5 >= 0 )
      {
        *(_DWORD *)v38 = v40;
        *(_QWORD *)&v38[8] = v41;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38[8]);
        *(_OWORD *)&v38[16] = v42;
        *(_OWORD *)&v38[16] = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v33 + 28);
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 128LL))(this, v38);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38[8]);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v2 += 8;
      v4 += 2;
    }
    while ( v2 != v3 );
  }
  v34 = 0LL;
  v36 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
  v6 = this;
  v33 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v32 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  v34 = 0LL;
  v32 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  LOBYTE(v7) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v7, (__int64 *)&v32, v8, &v34);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v11 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v10 + 16 * *((_QWORD *)this + 8));
    while ( v10 != v11 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)v35,
        v10);
      v12 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, unsigned __int64 *, __int64))(*(_QWORD *)this + 136LL))(
              this,
              v35,
              v34);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v12);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v35[0] + 80LL))(v35[0]);
      }
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v35);
      v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v10 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64)&v33);
    v6 = v33;
  }
  v13 = (_DWORD *)*((_QWORD *)this + 11);
  v14 = &v13[8 * *((_QWORD *)this + 12)];
  if ( v13 != v14 )
  {
    v15 = v13 + 4;
    do
    {
      v40 = *v13;
      v41 = *((_QWORD *)v15 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v41);
      v42 = *v15;
      v32 = 0LL;
      memset(v38, 0, sizeof(v38));
      v39 = 0;
      v35[0] = (unsigned __int64)&v40;
      v16 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
              (_QWORD *)this + 19,
              (__int64)v35,
              (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v38,
              (unsigned __int64 *)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
      if ( v16 >= 0 )
      {
        *(_DWORD *)v38 = v40;
        *(_QWORD *)&v38[8] = v41;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38[8]);
        *(_OWORD *)&v38[16] = v42;
        *(_OWORD *)&v38[16] = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 144LL))(this, v38);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38[8]);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v13 += 8;
      v15 += 2;
    }
    while ( v13 != v14 );
  }
  v17 = (_DWORD *)*((_QWORD *)this + 15);
  v18 = &v17[8 * *((_QWORD *)this + 16)];
  if ( v17 != v18 )
  {
    v19 = v17 + 4;
    do
    {
      v40 = *v17;
      v41 = *((_QWORD *)v19 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v41);
      v42 = *v19;
      *(_DWORD *)v38 = v40;
      *(_QWORD *)&v38[8] = v41;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38[8]);
      *(_OWORD *)&v38[16] = v42;
      v32 = 0LL;
      v43 = 0LL;
      v44 = 0;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0;
      v35[0] = (unsigned __int64)&v40;
      v20 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
              (_QWORD *)this + 19,
              (__int64)v35,
              (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v43,
              (unsigned __int64 *)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
      if ( v20 < 0 )
        v21 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 88LL))(v41, &v48);
      else
        v21 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 12);
      *(_OWORD *)&v38[16] = v21;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 152LL))(this, v38);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38[8]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v17 += 8;
      v19 += 2;
    }
    while ( v17 != v18 );
  }
  v22 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)*((_QWORD *)this + 19);
  v23 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v22 + 48 * *((_QWORD *)this + 20));
  if ( v22 != v23 )
  {
    do
    {
      ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
        (ItemAnimationCoordinatorBase::PositionChangedInfo *)&v43,
        v22);
      v32 = (struct IUnknown **)&v43;
      memset(v38, 0, 32);
      v24 = (unsigned int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                            (__int64 *)this + 3,
                            &v32,
                            (int *)v38,
                            v35) >> 31;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38[8]);
      memset(v38, 0, 32);
      v25 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                   (__int64 *)this + 11,
                   &v32,
                   (int *)v38,
                   v35) >= 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38[8]);
      if ( (unsigned __int8)v24 == 1 && !v25 )
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 160LL))(this, &v43);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
      v22 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v22 + 48);
    }
    while ( v22 != v23 );
    v6 = v33;
  }
  v26 = (__int64 *)*((_QWORD *)this + 23);
  v27 = &v26[3 * *((_QWORD *)this + 24)];
  if ( v26 != v27 )
  {
    v28 = (__int128 *)(v26 + 1);
    do
    {
      v29 = *v26;
      v48 = v29;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v49 = *v28;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL))(this, &v48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48);
      v26 += 3;
      v28 = (__int128 *)((char *)v28 + 24);
    }
    while ( v26 != v27 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  v30 = *((_QWORD *)this + 28);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  }
  if ( v6 )
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v6 + 16LL))(v6);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v37);
  return 0LL;
}
