/*
 * XREFs of DxgkReleaseSwapChain @ 0x140301170
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403015D4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(char *Src)
{
  PVOID pMetaData; // r12
  void *v3; // rdi
  NTSTATUS v4; // eax
  int v5; // esi
  HANDLE hNtSwapChain; // r8
  PVOID v7; // r15
  __int64 v8; // rcx
  __int64 bProducer; // rax
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v17; // [rsp+50h] [rbp-98h] BYREF
  __int64 v18; // [rsp+58h] [rbp-90h]
  char v19; // [rsp+60h] [rbp-88h]
  struct _D3DKMT_RELEASESWAPCHAIN Handle[3]; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+10h] BYREF
  void *v22; // [rsp+100h] [rbp+18h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2112);
  memset(Handle, 0, 0x40uLL);
  pMetaData = 0LL;
  v3 = 0LL;
  v22 = 0LL;
  RtlCopyFromUser(Handle, Src, 0x40uLL);
  if ( Handle[1].bProducer > 0x32u )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1368;
    bProducer = Handle[1].bProducer;
    v11 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
    goto LABEL_21;
  }
  if ( !Handle[1].bProducer )
  {
LABEL_7:
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0].hNtSwapChain, v4);
      WdLogGlobalForLineNumber = 1404;
    }
    else
    {
      hNtSwapChain = Handle[1].hNtSwapChain;
      Handle[1].hNtSwapChain = 0LL;
      v7 = Object;
      v5 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, Handle, hNtSwapChain, 1, 0, HandleInformation);
      if ( v5 >= 0 )
      {
        RtlCopyToUser(Src + 48, &Handle[1].bProducer, 4uLL);
        if ( Handle[0].pMetaData )
        {
          RtlCopyToUser(Src + 16, &Handle[0].pMetaData, 8uLL);
          RtlCopyToUser(Src + 24, &Handle[0].DeferredFreeListSize, 8uLL);
        }
        if ( Handle[1].bProducer )
          RtlCopyToUser(pMetaData, Handle[1].pMetaData, 4LL * Handle[1].bProducer);
      }
      ObfDereferenceObject(v7);
    }
    if ( v3 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v5;
  }
  if ( !Handle[1].pMetaData )
  {
    WdLogSingleEntry0(2LL);
    bProducer = 1376LL;
    WdLogGlobalForLineNumber = 1376;
    v11 = L"Caller specified non-zero free list size but failed to provide buffer";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, bProducer, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v13 = 4LL * Handle[1].bProducer;
  if ( !is_mul_ok(Handle[1].bProducer, 4uLL) )
    v13 = -1LL;
  v14 = (void *)operator new[](v13, 0x4B677844u, 256LL);
  v3 = v14;
  v22 = v14;
  if ( v14 )
  {
    pMetaData = Handle[1].pMetaData;
    Handle[1].pMetaData = v14;
    goto LABEL_7;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1383;
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate deferred list", 1383LL, 0LL, 0LL, 0LL, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return 3221225495LL;
}
