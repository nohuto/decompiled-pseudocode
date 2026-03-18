/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x140302A58
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        struct _KEVENT **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // r8
  _QWORD *v9; // r9
  unsigned int v10; // edi
  _QWORD *i; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // [rsp+28h] [rbp-180h]
  _DWORD v17[64]; // [rsp+60h] [rbp-148h]

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3860;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pClientInfo->pTempDevice", 3860LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
    && *((_BYTE *)a2 + 44)
    && !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3863;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pClientInfo->bUserModeFences || IddPresent",
      3863LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_QWORD *)a2 + 1);
  if ( *(_QWORD *)(v8 + 40) )
  {
    v9 = (_QWORD *)(v8 + 496);
    v10 = 0;
    for ( i = *(_QWORD **)(v8 + 496); ; i = (_QWORD *)*i )
    {
      v12 = 0LL;
      if ( i != v9 )
        v12 = i;
      if ( !v12 )
        break;
      v13 = v10;
      v14 = i;
      if ( i == v9 )
        v14 = 0LL;
      ++v10;
      v17[v13] = *((_DWORD *)v14 + 6);
      if ( v10 >= 0x40 )
        break;
    }
    if ( v10 )
    {
      Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline();
      return SignalSynchronizationObjectInternal(1LL, (char *)a3 + 48 * *((int *)a2 + 7) + 80, 0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, this, v8);
      v16 = *((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 3883;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        v16,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3870;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3870LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this);
    return 3221225485LL;
  }
}
