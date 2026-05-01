/*
 * XREFs of ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x1802FCA80
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1802FC8D0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FC9A0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$emplace_back@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FBB64 (--$emplace_back@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$vector@V-$ComPtr@UIChainLi.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1802FC5F8 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  struct IUnknown ***v3; // rsi
  __int64 v5; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  struct IUnknown **v12; // rbx
  struct IUnknown **v13; // rbp
  __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v3 = (struct IUnknown ***)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 32);
  v8 = (*(_QWORD *)(a1 + 40) - v5) >> 3;
  if ( v8 )
  {
    v16 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v5 + 8 * v8 - 8) + 48LL))(
           *(_QWORD *)(v5 + 8 * v8 - 8),
           &v16);
    if ( v9 < 0 )
    {
      v10 = 287LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    if ( !v16 )
    {
      v9 = -2147024811;
      v10 = 288LL;
      goto LABEL_4;
    }
  }
  v12 = *v3;
  v13 = v3[1];
  while ( v12 != v13 && !SHIsSameObject(*v12, a2) )
    ++v12;
  if ( v12 != *(struct IUnknown ***)(a1 + 40) )
  {
    v9 = -2147024811;
    v10 = 297LL;
    goto LABEL_4;
  }
  std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::emplace_back<Windows::Internal::Shell::Chaining::IChainLink * &>(
    v3,
    (__int64 *)&v17);
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a3,
      a1,
      v14,
      (__int64)v17,
      2u);
  ++*(_DWORD *)(a1 + 64);
  return 0LL;
}
