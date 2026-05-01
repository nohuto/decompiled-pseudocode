/*
 * XREFs of ?IndexOf@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAIPEAE@Z @ 0x18041A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180106720 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@IU67825@PEAIPEAE@Z @ 0x18041A594 (-IndexOfInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  const struct std::nothrow_t *v8; // rdx
  int v9; // ecx
  unsigned int v10; // edi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v12 = 0;
  XWinRT::SerializingLockPolicy::Read(&v13, (RTL_SRWLOCK *)(a1 + 128), &v12);
  v10 = v12;
  if ( v12 >= 0 )
    v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::IndexOfInternal(
            v9,
            *(_QWORD *)(a1 + 112),
            *(_DWORD *)(a1 + 96),
            a2,
            (__int64)a3,
            (__int64)a4);
  if ( v13 )
  {
    if ( LODWORD(v13->Ptr) == 1 )
      --LODWORD(v13[1].Ptr);
    else
      ReleaseSRWLockShared(v13 + 1);
  }
  operator delete(0LL, v8);
  return v10;
}
