/*
 * XREFs of ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1802FF2DC
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18022C8D0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802FBD20 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802FC268 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1802FE6D4 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1802FE6FC (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1802FF3B0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  RTL_SRWLOCK *v7[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v8[80]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v8);
  ObjectWithIamLock::LockExclusive(v4, (CAutoSRWExclusiveLock *)v7);
  v5 = 0;
  if ( !a2 || *(_QWORD *)(a1 + 56) == a2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(a1, v8);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify((__int64)v8);
  }
  else
  {
    v5 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x237,
      (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
  }
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::~ChainLinkNotifier((__int64)v8);
  return v5;
}
