/*
 * XREFs of ?Insert@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAUIInspectable@@PEAE@Z @ 0x180195FF0
 * Callers:
 *     ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180195CDC (-CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUID.c)
 * Callees:
 *     ?EnsureInitialized@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x180214C00 (-EnsureInitialized@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collecti.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18021F650 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18029D88C (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 *     ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x18029FCB8 (-Initialize@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z.c)
 *     ?Lookup@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBU_GUID@@PEAPEAVCPair@12@@Z @ 0x1802A050C (-Lookup@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap.c)
 *     ?RaiseEvent@?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1802A0F0C (-RaiseEvent@-$HashMapOptions@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Interna.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802A14E0 (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 *     ?SetAt@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x1802A17D0 (-SetAt@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1802A1B5C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Insert(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _BYTE *a4)
{
  char v4; // r12
  __int128 v9; // xmm0
  int v10; // eax
  int v11; // ebx
  void *v12; // rdi
  char v13; // si
  void *v14; // r14
  __m128i v15; // xmm1
  RTL_SRWLOCK *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  _BYTE v20[8]; // [rsp+30h] [rbp-39h] BYREF
  int v21[4]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v22; // [rsp+48h] [rbp-21h] BYREF
  __int128 v23; // [rsp+60h] [rbp-9h] BYREF
  RTL_SRWLOCK *v24; // [rsp+70h] [rbp+7h] BYREF
  __int128 *v25; // [rsp+78h] [rbp+Fh]

  v4 = 0;
  v25 = a2;
  *a4 = 0;
  Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized();
  v9 = *a2;
  *(_QWORD *)&v22 = 0LL;
  BYTE8(v22) = 0;
  v23 = v9;
  v10 = XWinRT::detail::GitStorageType<IInspectable>::Initialize(&v22, a3);
  v21[0] = v10;
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = BYTE8(v22);
    v12 = (void *)v22;
  }
  else
  {
    v12 = 0LL;
    *(_QWORD *)&v22 = 0LL;
    v13 = 0;
    BYTE8(v22) = 0;
  }
  v14 = 0LL;
  if ( v10 < 0 )
    goto LABEL_19;
  XWinRT::SerializingLockPolicy::Write(&v24, a1 + 160, v21);
  v11 = v21[0];
  if ( v21[0] >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v20, *(unsigned __int8 *)(a1 + 186), a1 + 188);
    XWinRT::SecureVersionTag::TagManager::ChangeVersion((XWinRT::SecureVersionTag::TagManager *)(a1 + 176));
    *(_QWORD *)v21 = 0LL;
    v11 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
            a1 + 72,
            &v23,
            v21);
    if ( v11 >= 0 )
    {
      if ( *(_QWORD *)v21 )
      {
        v15 = *(__m128i *)(*(_QWORD *)v21 + 16LL);
        v14 = *(void **)(*(_QWORD *)v21 + 16LL);
        *(_OWORD *)(*(_QWORD *)v21 + 16LL) = v22;
        *a4 = 1;
        v4 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
LABEL_12:
        v12 = 0LL;
        v13 = 0;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(a1 + 88) == 0x7FFFFFFFLL )
      {
        v11 = -2147024882;
        goto LABEL_13;
      }
      *(_QWORD *)v21 = 0LL;
      v11 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::SetAt(
              a1 + 72,
              &v23,
              &v22,
              v21);
      if ( v11 >= 0 )
        goto LABEL_12;
    }
  }
LABEL_13:
  if ( v24 )
  {
    v16 = v24 + 1;
    if ( LODWORD(v24->Ptr) == 1 )
      LODWORD(v16->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v16);
  }
  if ( v4 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v14);
    goto LABEL_21;
  }
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_21:
  if ( v13 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v12);
  }
  else if ( v12 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 >= 0 )
  {
    v17 = *(unsigned __int8 *)(a1 + 185);
    v18 = *a4 != 0 ? 3 : 1;
    v23 = *v25;
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>::RaiseEvent(
                           v20[0],
                           v17,
                           a1,
                           v18,
                           &v23);
  }
  return (unsigned int)v11;
}
