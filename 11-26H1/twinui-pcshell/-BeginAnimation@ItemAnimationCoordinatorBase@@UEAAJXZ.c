/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804DEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x1804DEA28 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1804DEAD8 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1804DECBC (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_1804DECBC.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804DEE60 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804DEEA0 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1804DEF30 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // r14
  _OWORD *v4; // r15
  int v5; // ebx
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // ebx
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v9; // rsi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rbx
  int v11; // eax
  _DWORD *v12; // rsi
  _DWORD *v13; // r14
  _OWORD *v14; // r15
  int v15; // ebx
  _DWORD *v16; // rsi
  _DWORD *v17; // r14
  _OWORD *v18; // r15
  int v19; // ebx
  __int128 v20; // xmm0
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v21; // r14
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v22; // rsi
  unsigned int v23; // ebx
  bool v24; // r15
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int128 *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct IUnknown **v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  ItemAnimationCoordinatorBase *v34; // [rsp+58h] [rbp-B0h] BYREF
  ItemAnimationCoordinatorBase *v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v37[44]; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+A4h] [rbp-64h]
  int v39; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C8h] [rbp-40h] BYREF
  int v43; // [rsp+D0h] [rbp-38h]
  __int128 v44; // [rsp+D4h] [rbp-34h]
  __int128 v45; // [rsp+E4h] [rbp-24h]
  int v46; // [rsp+F4h] [rbp-14h]
  __int64 v47; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v48; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v31 = (struct IUnknown **)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v36, (__int64 *)&v31, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  *((_BYTE *)this + 232) = 0;
  v2 = (_DWORD *)*((_QWORD *)this + 3);
  v3 = &v2[8 * *((_QWORD *)this + 4)];
  if ( v2 != v3 )
  {
    v4 = v2 + 4;
    do
    {
      v39 = *v2;
      v40 = *((_QWORD *)v4 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
      v41 = *v4;
      v31 = 0LL;
      memset(v37, 0, sizeof(v37));
      v38 = 0;
      v34 = (ItemAnimationCoordinatorBase *)&v39;
      v5 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
             (_QWORD *)this + 19,
             (__int64)&v34,
             (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v37,
             (unsigned __int64 *)&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v37);
      if ( v5 >= 0 )
      {
        *(_DWORD *)v37 = v39;
        *(_QWORD *)&v37[8] = v40;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37[8]);
        *(_OWORD *)&v37[16] = v41;
        *(_OWORD *)&v37[16] = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v31 + 28);
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 128LL))(this, v37);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37[8]);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
      v2 += 8;
      v4 += 2;
    }
    while ( v2 != v3 );
  }
  v32 = 0LL;
  v35 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
  v34 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v31 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  v32 = 0LL;
  v31 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  LOBYTE(v6) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v6, (__int64 *)&v31, v7, &v32);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16 * *((_QWORD *)this + 8));
    while ( v9 != v10 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)v33,
        v9);
      v11 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, unsigned __int64 *, __int64))(*(_QWORD *)this + 136LL))(
              this,
              v33,
              v32);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v11);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33[0] + 80LL))(v33[0]);
      }
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v33);
      v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64)&v34);
  }
  v12 = (_DWORD *)*((_QWORD *)this + 11);
  v13 = &v12[8 * *((_QWORD *)this + 12)];
  if ( v12 != v13 )
  {
    v14 = v12 + 4;
    do
    {
      v39 = *v12;
      v40 = *((_QWORD *)v14 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
      v41 = *v14;
      v31 = 0LL;
      memset(v37, 0, sizeof(v37));
      v38 = 0;
      v33[0] = (unsigned __int64)&v39;
      v15 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
              (_QWORD *)this + 19,
              (__int64)v33,
              (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v37,
              (unsigned __int64 *)&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v37);
      if ( v15 >= 0 )
      {
        *(_DWORD *)v37 = v39;
        *(_QWORD *)&v37[8] = v40;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37[8]);
        *(_OWORD *)&v37[16] = v41;
        *(_OWORD *)&v37[16] = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v31 + 28);
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 144LL))(this, v37);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37[8]);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
      v12 += 8;
      v14 += 2;
    }
    while ( v12 != v13 );
  }
  v16 = (_DWORD *)*((_QWORD *)this + 15);
  v17 = &v16[8 * *((_QWORD *)this + 16)];
  if ( v16 != v17 )
  {
    v18 = v16 + 4;
    do
    {
      v39 = *v16;
      v40 = *((_QWORD *)v18 - 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
      v41 = *v18;
      *(_DWORD *)v37 = v39;
      *(_QWORD *)&v37[8] = v40;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37[8]);
      *(_OWORD *)&v37[16] = v41;
      v31 = 0LL;
      v42 = 0LL;
      v43 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0;
      v33[0] = (unsigned __int64)&v39;
      v19 = CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
              (_QWORD *)this + 19,
              (__int64)v33,
              (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v42,
              (unsigned __int64 *)&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
      if ( v19 < 0 )
        v20 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 88LL))(v40, &v47);
      else
        v20 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v31 + 12);
      *(_OWORD *)&v37[16] = v20;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 152LL))(this, v37);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37[8]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
      v16 += 8;
      v18 += 2;
    }
    while ( v16 != v17 );
  }
  v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)*((_QWORD *)this + 19);
  v22 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48 * *((_QWORD *)this + 20));
  while ( v21 != v22 )
  {
    ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
      (ItemAnimationCoordinatorBase::PositionChangedInfo *)&v42,
      v21);
    v31 = (struct IUnknown **)&v42;
    memset(v37, 0, 32);
    v23 = (unsigned int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                          (__int64 *)this + 3,
                          &v31,
                          (int *)v37,
                          v33) >> 31;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37[8]);
    memset(v37, 0, 32);
    v24 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                 (__int64 *)this + 11,
                 &v31,
                 (int *)v37,
                 v33) >= 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37[8]);
    if ( (unsigned __int8)v23 == 1 && !v24 )
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 160LL))(this, &v42);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
    v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48);
  }
  v25 = (__int64 *)*((_QWORD *)this + 23);
  v26 = &v25[3 * *((_QWORD *)this + 24)];
  if ( v25 != v26 )
  {
    v27 = (__int128 *)(v25 + 1);
    do
    {
      v28 = *v25;
      v47 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v48 = *v27;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL))(this, &v47);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v47);
      v25 += 3;
      v27 = (__int128 *)((char *)v27 + 24);
    }
    while ( v25 != v26 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  v29 = *((_QWORD *)this + 28);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  }
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v36);
  return 0LL;
}
