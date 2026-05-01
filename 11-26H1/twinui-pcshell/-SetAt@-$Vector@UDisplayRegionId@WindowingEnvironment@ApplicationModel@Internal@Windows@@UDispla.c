/*
 * XREFs of ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x18041DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EC350 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x180411F24 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x18041353C (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x18041C17C (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x180420C58 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 *     memmove_s @ 0x180420EC4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v3; // r14
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rcx
  int v11; // [rsp+20h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-18h]
  _BYTE v14[16]; // [rsp+40h] [rbp-10h] BYREF
  int Destination; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = a2;
  v12 = -2147483627;
  v13 = 0LL;
  Destination = 0;
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 128), &Destination);
  v6 = Destination;
  if ( Destination >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 96) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v7 = XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
             (__int64)v14,
             *(_DWORD *)(a1 + 176),
             (_DWORD *)(a1 + 180));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v12, v7);
      v6 = XWinRT::detail::ReentrancyGuard<1>::hr(&v12);
      if ( v6 >= 0 )
      {
        v8 = *(_QWORD *)(a1 + 112);
        Destination = 0;
        if ( memmove_s(&Destination, 4uLL, (const void *const)(v8 + 4 * v3), 4uLL) )
        {
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v3) = a3;
          ++*(_DWORD *)(a1 + 144);
        }
      }
    }
  }
  if ( v16 )
  {
    v9 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
  }
  if ( v6 >= 0 )
  {
    v11 = v3;
    v6 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v12,
           a1 + 152,
           (a1 + 16) & -(__int64)(a1 != 0),
           3,
           v11);
  }
  if ( v13 )
    *v13 = 0;
  return (unsigned int)v6;
}
