/*
 * XREFs of ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18041D370
 * Callers:
 *     ?RemoveAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18041D350 (-RemoveAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 *     ?RemoveAtEnd@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18041D360 (-RemoveAtEnd@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EC350 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180411F24 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x18041353C (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18041C17C (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18041D85C (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180420C58 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 *     memmove_s @ 0x180420EC4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // ebx
  unsigned int *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+38h] [rbp-18h]
  _BYTE v16[16]; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0;
  v14 = -2147483627;
  v15 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v18, (RTL_SRWLOCK *)(a1 + 128), &v17);
  v6 = v17;
  if ( v17 >= 0 )
  {
    v7 = (unsigned int *)(a1 + 96);
    if ( a3 )
      a2 = *v7 - 1;
    if ( a2 >= *v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v8 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
             (__int64)v16,
             *(_DWORD *)(a1 + 176),
             (_DWORD *)(a1 + 180));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v14, v8);
      v6 = XWinRT::detail::ReentrancyGuard<1>::hr(&v14);
      if ( v6 >= 0 )
      {
        if ( a2 < *v7 - 1
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 112) + 4LL * a2),
               4LL * (*v7 - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 112) + 4LL * (a2 + 1)),
               4LL * (*v7 - a2 - 1)) )
        {
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 100);
          v10 = *(_DWORD *)(a1 + 96) - 1;
          ++*(_DWORD *)(a1 + 144);
          *(_DWORD *)(a1 + 96) = v10;
          if ( v10 < v9 / 3 )
          {
            v11 = 1;
            if ( v9 - 1 >= v9 - v9 / 3 )
              v11 = v9 / 3;
            v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                   a1,
                   v9 - v11);
          }
        }
      }
    }
  }
  if ( v18 )
  {
    if ( LODWORD(v18->Ptr) == 1 )
      LODWORD(v18[1].Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v18 + 1);
  }
  if ( v6 >= 0 )
  {
    v13 = a2;
    v6 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v14,
           a1 + 152,
           (a1 + 16) & -(__int64)(a1 != 0),
           2,
           v13);
  }
  if ( v15 )
    *v15 = 0;
  return (unsigned int)v6;
}
