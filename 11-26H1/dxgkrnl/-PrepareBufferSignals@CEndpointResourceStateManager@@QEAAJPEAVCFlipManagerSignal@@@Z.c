/*
 * XREFs of ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareBufferSignals(
        CEndpointResourceStateManager *this,
        struct CFlipManagerSignal *a2)
{
  CEndpointResourceStateManager *v2; // r8
  CEndpointResourceStateManager *v3; // r15
  unsigned int v4; // r14d
  struct CFlipManagerSignal *v5; // rdi
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 Pool2; // r13
  CEndpointResourceStateManager *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 Win32kImportTable; // rax
  __int64 v17; // rdi
  void (__fastcall *v18)(_QWORD, __int64, _QWORD); // rsi
  __int64 v19; // rcx
  unsigned int v20; // [rsp+60h] [rbp+8h]

  v2 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  v3 = (CEndpointResourceStateManager *)((char *)this + 16);
  v4 = 0;
  v5 = a2;
  if ( v2 == (CEndpointResourceStateManager *)((char *)this + 16) )
    return 0LL;
  do
  {
    v6 = v2 == 0LL;
    v7 = (__int64)v2 + 40;
    v2 = *(CEndpointResourceStateManager **)v2;
    v8 = v4 + 1;
    if ( v6 )
      v7 = 48LL;
    if ( !*(_QWORD *)v7 )
      v8 = v4;
    v4 = v8;
  }
  while ( v2 != v3 );
  v20 = v8;
  if ( !v8 )
    return 0LL;
  if ( !is_mul_ok(v8, 8uLL) )
    return 3221225621LL;
  Pool2 = ExAllocatePool2(257LL, 8LL * v8, 1651721030LL);
  if ( !Pool2 )
    return 3221225495LL;
  v10 = *(CEndpointResourceStateManager **)v3;
  v11 = 0LL;
  if ( *(CEndpointResourceStateManager **)v3 != v3 )
  {
    do
    {
      v12 = (__int64)v10 + 40;
      if ( !v10 )
        v12 = 48LL;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
      {
        ++*(_DWORD *)(v13 + 24);
        v6 = *(_DWORD *)(v13 + 80) == 0;
        *(_QWORD *)(Pool2 + 8 * v11) = v13;
        if ( v6 )
        {
          KeResetEvent(*(PRKEVENT *)(v13 + 64));
          Win32kImportTable = DxgkGetWin32kImportTable(v15);
          v17 = *(_QWORD *)(v13 + 48);
          v18 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(Win32kImportTable + 240);
          v6 = (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() == 0;
          v19 = 368LL;
          if ( v6 )
            v19 = 340LL;
          v18(*(unsigned int *)(v19 + v17), v13, 0LL);
        }
        ++*(_DWORD *)(v13 + 80);
        v11 = (unsigned int)(v11 + 1);
      }
      v10 = *(CEndpointResourceStateManager **)v10;
    }
    while ( v10 != v3 );
    v4 = v20;
    v5 = a2;
  }
  result = 0LL;
  *((_QWORD *)v5 + 4) = Pool2;
  *((_DWORD *)v5 + 10) = v4;
  return result;
}
