/*
 * XREFs of ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x140207C24
 * Callers:
 *     DxgkUnOrderedPresentSwapChain @ 0x1402094A0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(DXGSWAPCHAIN *this, struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v6; // rbx
  __int64 hNtSwapChain_low; // r9
  __int64 v8; // rax
  const wchar_t *v9; // r9
  bool v10; // dl
  __int64 v11; // r15
  __int64 v12; // r14
  PVOID pMetaData; // rdx
  bool v14; // dl
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  const wchar_t *v18; // r9
  __int64 CurrentProcess; // rax
  HANDLE hNtPresentSurfaceHandle; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  void *v25; // r8
  int v26; // eax
  int v27[2]; // [rsp+20h] [rbp-118h]
  PVOID v28; // [rsp+20h] [rbp-118h]
  HANDLE v29; // [rsp+20h] [rbp-118h]
  __int64 v30; // [rsp+28h] [rbp-110h]
  __int64 v31; // [rsp+30h] [rbp-108h]
  int v32; // [rsp+38h] [rbp-100h]
  _BYTE v33[64]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v34[128]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+140h] [rbp+8h] BYREF

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2964;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2964LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2969;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnOrderedPresent is not allowed for sequential swapchains",
      2969LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 14);
  v6 = a2 + 1;
  hNtSwapChain_low = LODWORD(a2[1].hNtSwapChain);
  if ( (unsigned int)hNtSwapChain_low >= v5 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hNtSwapChain_low, v5);
    v8 = *((unsigned int *)this + 14);
    v9 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
    WdLogGlobalForLineNumber = 2976;
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, LODWORD(v6->hNtSwapChain), v8, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10);
    return 3221225485LL;
  }
  v11 = *((_QWORD *)this + 8);
  v12 = 160 * hNtSwapChain_low;
  if ( !*(_DWORD *)(160 * hNtSwapChain_low + v11 + 8) )
  {
    WdLogSingleEntry2(2LL, LODWORD(a2[1].hNtSwapChain), 0LL);
    v8 = *(int *)(v12 + v11 + 8);
    v9 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    WdLogGlobalForLineNumber = 2985;
    goto LABEL_7;
  }
  pMetaData = a2->pMetaData;
  if ( *(PVOID *)(v12 + v11 + 96) == pMetaData )
  {
    memset(v34, 0, sizeof(v34));
    *(_DWORD *)&v34[12] = a2->bProducer;
    v16 = DXGSWAPCHAIN::AcquireBuffer(this, (struct _D3DKMT_ACQUIRESWAPCHAIN *)v34, (unsigned int *)&a2[1], 0);
    v15 = v16;
    if ( v16 >= 0 )
    {
      result = 259LL;
      if ( (_DWORD)v15 == 259 )
        return result;
      if ( a2->bProducer && a2->hNtPresentSurfaceHandle )
      {
        v35 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v17);
        hNtPresentSurfaceHandle = a2->hNtPresentSurfaceHandle;
        v21 = CurrentProcess;
        v23 = PsGetCurrentProcess(v22);
        LOBYTE(v32) = 1;
        v27[0] = 0;
        v24 = ObDuplicateObject(v23, hNtPresentSurfaceHandle, v21, &v35, *(_QWORD *)v27, 0, 6, v32);
        v15 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry2(2LL, a2->hNtPresentSurfaceHandle, v24);
          v29 = a2->hNtPresentSurfaceHandle;
          WdLogGlobalForLineNumber = 3032;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
            (__int64)v29,
            v15,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        *(_QWORD *)(v12 + v11 + 48) = v35;
        *(_QWORD *)(v12 + v11 + 56) = *(_QWORD *)&a2->PresentBufferIdx;
      }
      memset(v33, 0, sizeof(v33));
      v25 = *(void **)&a2[1].bProducer;
      *(_DWORD *)&v33[8] = a2->bProducer;
      *(_DWORD *)&v33[32] = HIDWORD(a2[1].hNtSwapChain);
      v26 = DXGSWAPCHAIN::ReleaseBuffer(this, (struct _D3DKMT_RELEASESWAPCHAIN *)v33, v25, 1, 0);
      v15 = v26;
      if ( v26 >= 0 )
        return (unsigned int)v15;
      WdLogSingleEntry1(2LL);
      v18 = L"ReleaseBuffer() failed with 0x%I64x for un-ordered present";
      WdLogGlobalForLineNumber = 3051;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v18 = L"AcquireBuffer() failed with 0x%I64x for un-ordered present";
      WdLogGlobalForLineNumber = 3007;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v15, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v15;
  }
  WdLogSingleEntry3(2LL, pMetaData, *(_QWORD *)(v11 + 96), hNtSwapChain_low);
  v31 = LODWORD(v6->hNtSwapChain);
  v30 = *(_QWORD *)(*((_QWORD *)this + 8) + 96LL);
  v28 = a2->pMetaData;
  WdLogGlobalForLineNumber = 2993;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
    (__int64)v28,
    v30,
    v31,
    0LL,
    0LL);
  LODWORD(v15) = -1073741811;
LABEL_19:
  DXGSWAPCHAIN::MarkAbandoned(this, v14);
  return (unsigned int)v15;
}
