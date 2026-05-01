/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041825C
 * Callers:
 *     ?QueryInterface@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18041BA20 (-QueryInterface@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVersionedVector@Internal@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041816C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVersionedVector@Inter.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>>,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r11
  _QWORD *v9; // r8
  const struct _GUID *v10; // r10
  __int64 v11; // r11
  const struct _GUID *v12; // r10
  void **v13; // r8
  const struct _GUID *v14; // r10
  __int64 v15; // r11

  if ( InlineIsEqualGUID(a2, &GUID_b70e5050_39a7_528d_9cca_78e9a03e2720) )
    goto LABEL_2;
  if ( InlineIsEqualGUID(v2, &GUID_c6d1be9f_c3ef_5ac8_9005_e82eb498d9ea) )
  {
    *v7 = v8;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v6, &GUID_7681de37_57d4_54ac_b882_609203cf9c12) )
  {
    *v9 = v11 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046) )
    {
LABEL_2:
      *v3 = v4;
      return 0LL;
    }
    if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::Collections::Internal::IVersionedVector>::CanCastTo(
                v4 + 8,
                v12) >= 0 )
      return 0LL;
    return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v15 + 8), v14, v13);
  }
  return result;
}
