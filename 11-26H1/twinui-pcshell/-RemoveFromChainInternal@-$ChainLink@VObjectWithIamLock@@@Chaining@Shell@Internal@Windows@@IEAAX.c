/*
 * XREFs of ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1802FF3B0
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800CE250 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1802FF2DC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18028634C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1802FC5F8 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x1802FC668 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@_ea_1802FC668.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rbp
  __int64 *v4; // rdi
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rcx

  v2 = *(__int64 **)(a1 + 40);
  v4 = *(__int64 **)(a1 + 32);
  if ( v2 - v4 )
  {
    while ( v4 != v2 )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        a2,
        a1,
        *v4++,
        a1,
        0);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 2);
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v6,
      a1,
      1u);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 1);
    ++*(_DWORD *)(a1 + 64);
    *(_BYTE *)(a1 + 80) = 1;
  }
  v7 = *(__int64 **)(a1 + 40);
  v8 = *(__int64 **)(a1 + 32);
  if ( v8 != v7 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      v8,
      v7);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 56));
}
