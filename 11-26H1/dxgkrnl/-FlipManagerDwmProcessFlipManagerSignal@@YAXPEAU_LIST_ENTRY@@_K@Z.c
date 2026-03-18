/*
 * XREFs of ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14001E0E0
 * Callers:
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1400614C4 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall FlipManagerDwmProcessFlipManagerSignal(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // di
  struct CFlipManagerSignal *v6; // r14
  __int64 v7; // r15
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v4 = 0;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 )
    {
      DxgkGetSessionTokenManager(&v8);
      v2 = v8;
      if ( v8 )
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    }
  }
  while ( a1->Flink != a1 )
  {
    v6 = (struct CFlipManagerSignal *)((__int64)&a1->Flink[-1].Blink & -(__int64)(a1->Flink != 0LL));
    v7 = *((_QWORD *)v6 + 6);
    *((_QWORD *)v6 + 6) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v7 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v7 + 32), v6, a2, 1);
      CPushLock::ReleaseLock((CPushLock *)(v7 + 40));
    }
    ObfDereferenceObject((PVOID)v7);
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
