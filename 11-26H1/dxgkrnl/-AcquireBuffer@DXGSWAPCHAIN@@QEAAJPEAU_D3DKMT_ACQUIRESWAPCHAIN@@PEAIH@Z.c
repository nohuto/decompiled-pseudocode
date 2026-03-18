/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x140207C24 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x140300AB0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x14004BF78 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140050B50 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x140053284 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x14005C320 (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1403068C4 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        DXGFIXEDQUEUE **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int inserted; // ebx
  __int64 v10; // rcx
  char *v11; // r15
  int v12; // eax
  unsigned int v13; // r12d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v14; // r14
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v15; // r13
  unsigned __int64 v16; // r9
  void *v18; // r8
  unsigned int v19; // r8d
  DXGFIXEDQUEUE *v20; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v21; // [rsp+20h] [rbp-30h]
  int v22[2]; // [rsp+28h] [rbp-28h]
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int64 v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v26; // [rsp+90h] [rbp+40h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A8h] [rbp+58h]

  v28 = a4;
  inserted = 0;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3070;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3070LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = a2->bProducer ? 0x30 : 0;
  v11 = (char *)this + v10 + 96;
  if ( !a2->bReleaseBeforeAcquire )
    goto LABEL_4;
  if ( *((_DWORD *)v11 + 7) == 1 )
  {
    v10 = (__int64)this[27];
    if ( *(_DWORD *)(v10 + 8) == *(_DWORD *)(v10 + 12) )
      goto LABEL_29;
    v18 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, &a2->ReleaseInfo, v18, 1, 0);
    if ( inserted < 0 )
      goto LABEL_25;
    inserted = 0;
LABEL_4:
    if ( *((_DWORD *)v11 + 10) != -1 )
      goto LABEL_29;
    LODWORD(v26) = 0;
    if ( *((_DWORD *)v11 + 7) )
    {
      v12 = DXGFIXEDQUEUE::Remove(this[27], (unsigned int *)&v26);
      inserted = v12;
      if ( v12 == -2147483622 )
        goto LABEL_29;
      if ( v12 < 0 )
        goto LABEL_25;
      v13 = (unsigned int)v26;
      inserted = 0;
    }
    else
    {
      if ( !a3 )
        a3 = (unsigned int *)this[28];
      v13 = *a3;
    }
    v26 = 0LL;
    v27 = 0LL;
    DXGSWAPCHAIN::GetClientSurfaceInfo(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
      v13,
      &v26,
      &v27);
    v14 = v26;
    v15 = v27;
    if ( !*((_DWORD *)this + 58) || *(_BYTE *)v27 )
      goto LABEL_10;
    inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)this, v26, 0, 0LL, v11[44], v28);
    if ( inserted >= 0 )
    {
      inserted = 0;
LABEL_10:
      if ( *(_DWORD *)v14 == 2 )
      {
        *(_DWORD *)v14 = 0;
        goto LABEL_12;
      }
      if ( !*(_DWORD *)v14 )
      {
LABEL_12:
        if ( *((_DWORD *)v14 + 1) == *((_DWORD *)v11 + 7) )
        {
          *(_DWORD *)v14 = 1;
          *((_DWORD *)v11 + 10) = v13;
          *((_DWORD *)v14 + 6) = 0;
          if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && v11[44] )
          {
            if ( !a2->bProducer && !*((_QWORD *)v15 + 1) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3205;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pSurfaceClientInfo->NextWaitFenceId",
                3205LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !*((_QWORD *)v15 + 3) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3207;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pSurfaceClientInfo->hFenceUserModeDuplicated",
                3207LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_QWORD *)&a2[1].ReleaseInfo.bProducer = *((_QWORD *)v15 + 3);
            a2[1].ReleaseInfo.pMetaData = (PVOID)*((_QWORD *)v15 + 1);
            *(_QWORD *)&a2[1].ReleaseInfo.DeferredFreeListSize = this[24];
            v19 = *((_DWORD *)v11 + 10);
            v27 = 0LL;
            v26 = 0LL;
            DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
              (DXGSWAPCHAIN *)this,
              (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
              v19,
              &v27,
              &v26);
            v20 = this[24];
            this[24] = (DXGFIXEDQUEUE *)((char *)v20 + 1);
            *((_QWORD *)v26 + 1) = v20;
            goto LABEL_15;
          }
          v16 = *((_QWORD *)v15 + 1);
          if ( !v16
            || (inserted = DXGSWAPCHAIN::InsertGPUWait(
                             (DXGSWAPCHAIN *)this,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                             v14,
                             v16),
                inserted >= 0) )
          {
LABEL_15:
            LODWORD(a2[1].hNtSwapChain) = v13;
            *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v15 + 5);
            v10 = *(unsigned int *)(*((_QWORD *)v14 + 2) + 8LL);
            LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = v10;
            goto LABEL_16;
          }
          goto LABEL_25;
        }
      }
LABEL_29:
      inserted = 259;
      goto LABEL_16;
    }
LABEL_25:
    DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
    goto LABEL_16;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 3082;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Release before acquire is only supported for consumers",
    3082LL,
    0LL,
    0LL,
    0LL,
    0LL);
  inserted = -1073741637;
LABEL_16:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
  {
    LODWORD(v25) = a2[1].ReleaseInfo.hNtSwapChain;
    LODWORD(v24) = a2[1].hNtSwapChain;
    LODWORD(v23) = a2->bReleaseBeforeAcquire;
    v22[0] = a2->bProducer;
    LODWORD(v21) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer(v10, v7, v8, this, v21, *(_QWORD *)v22, v23, v24, v25);
  }
  return (unsigned int)inserted;
}
