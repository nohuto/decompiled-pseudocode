/*
 * XREFs of ?ReplaceAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x18041D640
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EC350 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180411F24 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x18041353C (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18041C17C (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180420C58 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v4; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // r12d
  void *v13; // r14
  int v14; // r13d
  __int64 v15; // rax
  int v16; // eax
  void *v17; // rax
  RTL_SRWLOCK *v18; // rcx
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v22; // [rsp+40h] [rbp-20h]
  _BYTE v23[24]; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0LL;
  v4 = a2;
  v24 = 0;
  v21 = -2147483627;
  v22 = 0LL;
  if ( a2 )
  {
    v7 = malloc(4LL * a2);
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
    v10 = v4;
    v11 = a3 - (_QWORD)v7;
    v12 = v4;
    v13 = v7;
    v14 = v4;
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + v11);
      ++v8;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
  }
  XWinRT::SerializingLockPolicy::Write(&v20, (RTL_SRWLOCK *)(a1 + 128), &v24);
  v9 = v24;
  if ( v24 >= 0 )
  {
    v15 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
            (__int64)v23,
            *(_DWORD *)(a1 + 176),
            (_DWORD *)(a1 + 180));
    XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v21, v15);
    v16 = XWinRT::detail::ReentrancyGuard<1>::hr(&v21);
    v3 = v22;
    v9 = v16;
    if ( v16 >= 0 )
    {
      *(_DWORD *)(a1 + 96) = v12;
      *(_DWORD *)(a1 + 100) = v14;
      v17 = *(void **)(a1 + 112);
      *(_QWORD *)(a1 + 112) = v13;
      v13 = v17;
      ++*(_DWORD *)(a1 + 144);
    }
  }
  if ( v20 )
  {
    v18 = v20 + 1;
    if ( LODWORD(v20->Ptr) == 1 )
      LODWORD(v18->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v18);
  }
  if ( v13 )
    free(v13);
  if ( v9 >= 0 )
    v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v21,
           a1 + 152,
           (a1 + 16) & -(__int64)(a1 != 0),
           0,
           0);
  if ( v3 )
    *v3 = 0;
  return (unsigned int)v9;
}
