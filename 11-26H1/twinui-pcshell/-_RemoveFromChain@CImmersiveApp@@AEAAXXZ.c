/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800CE250
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1802FDC80 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x1800CE334 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___ @ 0x1802FB99C (Windows--Internal--ComTaskPool--QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802FBD20 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x1802FBE80 (--1-$CAutoMemPtr@VChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Win.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1802FF3B0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  char *v1; // rdi
  void *v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  _DWORD *v10; // [rsp+58h] [rbp+38h] BYREF

  v8 = 0LL;
  v7 = 0;
  v1 = (char *)this + 176;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  if ( (int)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(v1, &v8) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 56LL))(v8, &v7) >= 0
    && v7 )
  {
    v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v2
      || (v3 = Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier(v2),
          v4 = (_DWORD *)v3,
          (v9 = v3) != 0)
      && (Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(v1, v3),
          *v4 = 1,
          v10 = v4,
          (int)Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___(v5, &v10) >= 0) )
    {
      v9 = 0LL;
    }
    CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>::~CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>(&v9);
  }
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
