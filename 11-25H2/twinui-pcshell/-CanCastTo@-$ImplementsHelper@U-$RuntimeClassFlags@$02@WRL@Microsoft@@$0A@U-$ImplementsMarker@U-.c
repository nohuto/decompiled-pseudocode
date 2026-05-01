/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18040D30C
 * Callers:
 *     ?QueryInterface@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180410CA0 (-QueryInterface@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVersionedVector@Internal@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18040D22C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVersionedVector@Inter.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>>,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  const struct _GUID *v5; // rcx
  _QWORD *v6; // r8
  const struct _GUID *v7; // r10
  __int64 v8; // r11
  __int64 result; // rax
  _QWORD *v10; // r8
  __int64 v11; // r11
  const struct _GUID *v12; // r10
  void **v13; // r8
  const struct _GUID *v14; // r10
  __int64 v15; // r11

  if ( InlineIsEqualGUID(a2, &GUID_b70e5050_39a7_528d_9cca_78e9a03e2720) )
  {
LABEL_10:
    *v3 = v4;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v2, &GUID_c6d1be9f_c3ef_5ac8_9005_e82eb498d9ea) )
  {
    *v6 = v8;
LABEL_4:
    result = 0LL;
    goto LABEL_8;
  }
  if ( InlineIsEqualGUID(v5, &GUID_7681de37_57d4_54ac_b882_609203cf9c12) )
  {
    *v10 = v11 + 8;
    goto LABEL_4;
  }
  result = 2147500034LL;
LABEL_8:
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
    goto LABEL_10;
  if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::Collections::Internal::IVersionedVector>::CanCastTo(
              v4 + 8,
              v12) >= 0 )
    return 0LL;
  return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v15 + 8), v14, v13);
}
