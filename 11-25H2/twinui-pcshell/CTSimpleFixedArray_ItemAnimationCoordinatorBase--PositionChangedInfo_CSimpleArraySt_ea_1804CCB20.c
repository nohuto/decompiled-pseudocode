/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1804CCB20
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804CCE30 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804CCCFC (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
        _QWORD *a1,
        __int64 a2,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  BOOL v10; // ebx
  _BYTE v12[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[104]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v14; // [rsp+C0h] [rbp+8h]
  struct IUnknown **v16; // [rsp+D8h] [rbp+20h]

  v6 = a2;
  *a4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < a1[1] )
  {
    v14 = (__int64 *)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                       (ItemAnimationCoordinatorBase::PositionChangedInfo *)v12,
                       a3);
    v16 = (struct IUnknown **)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                                (ItemAnimationCoordinatorBase::PositionChangedInfo *)v13,
                                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)(v9 + *a1));
    v10 = SHIsSameObject(*(struct IUnknown **)(*(_QWORD *)v6 + 8LL), *v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
    if ( v10 )
    {
      *a4 = v8;
      return 0LL;
    }
    ++v8;
    v9 += 48LL;
    v6 = a2;
  }
  return 2147647531LL;
}
