/*
 * XREFs of ?ReplaceAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804128B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EA410 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1804071E0 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x180408718 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x1804113F4 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180415E98 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r15
  _DWORD *v5; // r14
  int v6; // r12d
  void *v9; // rax
  void *v10; // rsi
  _DWORD *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  void *v16; // rax
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+40h] [rbp-20h]
  _BYTE v22[24]; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0LL;
  v23 = 0;
  v6 = 0;
  v20 = -2147483627;
  v21 = 0LL;
  if ( a2 )
  {
    v9 = malloc(4LL * a2);
    v10 = v9;
    if ( v9 )
    {
      v6 = v4;
      v11 = v9;
      v12 = a3 - (_QWORD)v9;
      v13 = v4;
      do
      {
        *v11 = *(_DWORD *)((char *)v11 + v12);
        ++v11;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v3 = -2147024882;
      LODWORD(v4) = 0;
      v23 = -2147024882;
    }
  }
  else
  {
    LODWORD(v4) = 0;
    v10 = 0LL;
  }
  if ( v3 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v19, (RTL_SRWLOCK *)(a1 + 128), &v23);
    v3 = v23;
    if ( v23 >= 0 )
    {
      v14 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
              (__int64)v22,
              *(_DWORD *)(a1 + 176),
              (_DWORD *)(a1 + 180));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v20, v14);
      v15 = XWinRT::detail::ReentrancyGuard<1>::hr(&v20);
      v5 = v21;
      v3 = v15;
      v23 = v15;
      if ( v15 >= 0 )
      {
        *(_DWORD *)(a1 + 96) = v4;
        *(_DWORD *)(a1 + 100) = v6;
        v16 = *(void **)(a1 + 112);
        *(_QWORD *)(a1 + 112) = v10;
        v10 = v16;
        ++*(_DWORD *)(a1 + 144);
      }
    }
    if ( v19 )
    {
      v17 = v19 + 1;
      if ( LODWORD(v19->Ptr) == 1 )
        LODWORD(v17->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v17);
      v19 = 0LL;
    }
  }
  if ( v10 )
    free(v10);
  if ( v3 >= 0 )
  {
    v3 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v20,
           a1 + 152,
           (a1 + 16) & -(__int64)(a1 != 0),
           0,
           0);
    v23 = v3;
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v3;
}
