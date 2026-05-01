/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18042A520
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea___ @ 0x180427650 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v4 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
         v8,
         (__int64)&v9,
         a1,
         (__int64)&v10);
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea___(
           v6,
           CurrentThreadId,
           (__int64)v4);
}
