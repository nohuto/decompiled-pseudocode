/*
 * XREFs of ?Remove@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@@Z @ 0x18009DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18008C8BC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18008C928 (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18008CB14 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?EnsureInitialized@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x18009AC9C (-EnsureInitialized@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPositio.c)
 *     ?FreeNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x18009B220 (-FreeNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@.c)
 *     ?Lookup@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@PEAPEAVCPair@12@@Z @ 0x18009C978 (-Lookup@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Co.c)
 *     ?RaiseEvent@?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18009D5C0 (-RaiseEvent@-$HashMapOptions@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Win.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Remove(
        __int64 a1,
        int a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 i; // rcx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  v3 = Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::EnsureInitialized(a1);
  if ( v3 >= 0 )
  {
    LODWORD(v13) = 0;
    XWinRT::SerializingLockPolicy::Write(&v14, (RTL_SRWLOCK *)(a1 + 160), &v13);
    v3 = v13;
    if ( (int)v13 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v13);
      v13 = 0LL;
      v3 = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::Lookup(
             a1 + 72,
             &v12,
             &v13);
      if ( v3 >= 0 )
      {
        v4 = v13;
        if ( v13 )
        {
          v3 = XWinRT::SecureVersionTag::TagManager::ChangeVersion((XWinRT::SecureVersionTag::Tag **)(a1 + 176));
          if ( v3 >= 0 )
          {
            if ( v4 )
            {
              v5 = (unsigned int)(*(_DWORD *)(v4 + 16) % *(_DWORD *)(a1 + 96));
              v6 = *(_QWORD *)(a1 + 80);
              v7 = *(_QWORD *)(v6 + 8 * v5);
              if ( v4 == v7 )
              {
                v7 = 0LL;
              }
              else
              {
                for ( i = *(_QWORD *)(v7 + 8); i != v4; i = *(_QWORD *)(i + 8) )
                  v7 = i;
              }
              v9 = *(_QWORD *)(v4 + 8);
              if ( v7 )
                *(_QWORD *)(v7 + 8) = v9;
              else
                *(_QWORD *)(v6 + 8 * v5) = v9;
              XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::FreeNode(
                a1 + 72,
                v4);
              v3 = 0;
            }
            else
            {
              v3 = -2147418113;
            }
          }
        }
        else
        {
          v3 = -2147483637;
          RoOriginateError(2147483659LL, 0LL);
        }
      }
    }
    if ( v14 )
    {
      v10 = v14 + 1;
      if ( LODWORD(v14->Ptr) == 1 )
        LODWORD(v10->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v10);
    }
  }
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
