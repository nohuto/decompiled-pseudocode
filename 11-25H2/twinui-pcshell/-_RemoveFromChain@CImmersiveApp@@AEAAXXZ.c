/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1801AC9B8
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180302540 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x1801ACAA4 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___ @ 0x18030031C (Windows--Internal--ComTaskPool--QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1803005EC (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x180300740 (--1-$CAutoMemPtr@VChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Win.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x180303A88 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  char *v1; // rdi
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+48h] [rbp+28h] BYREF
  _DWORD *v8; // [rsp+50h] [rbp+30h] BYREF

  v7 = 0LL;
  v6 = 0;
  v1 = (char *)this + 176;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  if ( (int)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(v1, &v7) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 56LL))(v7, &v6) >= 0
    && v6 )
  {
    v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v2;
    if ( v2 )
      v3 = (_DWORD *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier(v2);
    else
      v3 = 0LL;
    v8 = v3;
    if ( v3 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(v1, v3);
      *v3 = 1;
      v8 = v3;
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___(v4, &v8) >= 0 )
        v3 = 0LL;
      v8 = v3;
    }
    CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>::~CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>(&v8);
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
