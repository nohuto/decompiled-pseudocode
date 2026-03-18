/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1403068C4
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        struct _KEVENT **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned __int64 a4)
{
  __int64 v7; // r8
  struct DXGPROCESS *v8; // r14
  _QWORD *v9; // r9
  unsigned int v10; // ebx
  _QWORD *i; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // edi
  unsigned int *v16; // rsi
  unsigned __int64 *v17; // r8
  __int64 result; // rax
  struct DXGPROCESS *v19; // [rsp+28h] [rbp-190h]
  unsigned __int64 v20; // [rsp+60h] [rbp-158h] BYREF
  _DWORD v21[64]; // [rsp+70h] [rbp-148h] BYREF

  v20 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3939;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pClientInfo->pTempDevice", 3939LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && *((_BYTE *)a2 + 44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3942;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!pClientInfo->bUserModeFences", 3942LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(struct DXGPROCESS **)(v7 + 40);
  if ( v8 )
  {
    v9 = (_QWORD *)(v7 + 496);
    v10 = 0;
    for ( i = *(_QWORD **)(v7 + 496); ; i = (_QWORD *)*i )
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
      v21[v13] = *((_DWORD *)v14 + 6);
      if ( v10 >= 0x40 )
        break;
    }
    if ( v10 )
    {
      v15 = 0;
      v16 = v21;
      do
      {
        if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
          v17 = &v20;
        else
          v17 = 0LL;
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (const unsigned int *)a3 + 12 * *((int *)a2 + 7) + 20,
                   v17,
                   v20,
                   *v16,
                   v8,
                   0,
                   1,
                   0,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        ++v15;
        ++v16;
      }
      while ( v15 < v10 );
    }
    else
    {
      WdLogSingleEntry2(2LL, this, v7);
      v19 = (struct DXGPROCESS *)*((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 3962;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        (__int64)v19,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3949;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3949LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this);
    return 3221225485LL;
  }
  return result;
}
