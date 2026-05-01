/*
 * XREFs of ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x18041A720
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180414750 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Append@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804173F0 (-Append@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispl.c)
 *     ?InsertAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x18041A710 (-InsertAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EC350 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180411F24 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x18041353C (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18041C17C (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18041D85C (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180420C58 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 *     memmove_s @ 0x180420EC4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  int v8; // edi
  unsigned int *v9; // r14
  int *v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  int *v13; // r13
  unsigned int v14; // r9d
  int v15; // edx
  int v16; // eax
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+40h] [rbp-20h]
  char v22[24]; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+A0h] [rbp+40h] BYREF

  v20 = -2147483627;
  v21 = 0LL;
  v23 = 0;
  XWinRT::SerializingLockPolicy::Write(&v19, (RTL_SRWLOCK *)(a1 + 128), &v23);
  v8 = v23;
  if ( v23 >= 0 )
  {
    v9 = (unsigned int *)(a1 + 96);
    if ( a4 )
      a2 = *v9;
    if ( a2 > *v9 )
    {
      v8 = -2147483637;
LABEL_6:
      RoOriginateError((unsigned int)v8, 0LL);
      goto LABEL_20;
    }
    v10 = (int *)(a1 + 96);
    if ( *v9 >= 0x7FFFFFFF )
    {
      v8 = -2147024882;
      v10 = (int *)(a1 + 96);
    }
    if ( v8 >= 0 )
    {
      v11 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
              (__int64)v22,
              *(_DWORD *)(a1 + 176),
              (_DWORD *)(a1 + 180));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v20, v11);
      v8 = XWinRT::detail::ReentrancyGuard<1>::hr(&v20);
      v12 = v8;
      v13 = v10;
      if ( v8 >= 0 )
      {
        v14 = *(_DWORD *)(a1 + 100);
        if ( *v9 + 1 > v14 )
        {
          v15 = 1;
          if ( v14 + 1 <= (v14 >> 1) + v14 )
            v15 = v14 >> 1;
          v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                 a1,
                 v14 + v15);
          v13 = (int *)(a1 + 96);
          v12 = v8;
        }
      }
      if ( v12 >= 0 )
      {
        if ( a2 < *v10
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 112) + 4LL * (a2 + 1)),
               4LL * (*(_DWORD *)(a1 + 100) - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 112) + 4LL * a2),
               4LL * (*v10 - a2)) )
        {
          v8 = -2147418113;
          goto LABEL_6;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * a2) = a3;
        v16 = *(_DWORD *)(a1 + 96) + 1;
        ++*(_DWORD *)(a1 + 144);
        *v13 = v16;
      }
    }
  }
LABEL_20:
  if ( v19 )
  {
    v17 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      LODWORD(v17->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v17);
  }
  if ( v8 >= 0 )
    v8 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (unsigned int)&v20,
           (int)a1 + 152,
           a1 != 0 ? a1 + 16 : 0,
           1,
           a2);
  if ( v21 )
    *v21 = 0;
  return (unsigned int)v8;
}
