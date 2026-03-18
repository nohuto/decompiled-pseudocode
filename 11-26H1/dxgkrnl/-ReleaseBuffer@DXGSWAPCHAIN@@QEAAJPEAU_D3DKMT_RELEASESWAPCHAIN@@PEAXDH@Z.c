/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x140207C24 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403015D4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x14004BF78 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140050B50 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140050C1C (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x140050CB0 (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x14005C194 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqdqp_EtwWriteTransfer @ 0x14005E500 (McTemplateK0pqdqp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x140205CBC (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1402FFE44 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x140302A58 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  struct _KEVENT *v7; // rbx
  __int64 v8; // r14
  BOOL bProducer; // edx
  __int64 v10; // rcx
  char *v11; // rsi
  struct _KEVENT **v12; // rax
  PVOID *v13; // r12
  unsigned int v14; // r8d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v15; // r15
  unsigned int v16; // r8d
  __int64 v17; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 pDeferredFreeList_low; // rcx
  int v22; // eax
  int *v23; // r8
  int v24; // ecx
  struct _KEVENT **v25; // rbx
  struct AUTOEXPANDALLOCATION *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  struct _WORK_QUEUE_ITEM *v31; // rbx
  size_t Size; // [rsp+20h] [rbp-91h]
  size_t Sizea; // [rsp+20h] [rbp-91h]
  size_t Sizeb; // [rsp+20h] [rbp-91h]
  void *Src; // [rsp+28h] [rbp-89h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v36; // [rsp+30h] [rbp-81h]
  int v37; // [rsp+38h] [rbp-79h]
  __int64 v38; // [rsp+40h] [rbp-71h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v40; // [rsp+78h] [rbp-39h] BYREF
  struct _KEVENT *v41; // [rsp+80h] [rbp-31h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v42; // [rsp+88h] [rbp-29h] BYREF
  struct _KEVENT **v43; // [rsp+90h] [rbp-21h]
  void *v44; // [rsp+98h] [rbp-19h]
  BOOL v45; // [rsp+A0h] [rbp-11h] BYREF
  int v46; // [rsp+A4h] [rbp-Dh]
  __int128 v47; // [rsp+A8h] [rbp-9h]
  __int128 v48; // [rsp+B8h] [rbp+7h]

  v44 = a3;
  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3334;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3334LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 0LL;
  LODWORD(v8) = 0;
  v41 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3341;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRelease->pMetaData == nullptr", 3341LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2->bProducer;
  v10 = bProducer ? 0x30 : 0;
  v11 = (char *)this + v10 + 96;
  if ( bProducer )
  {
    v12 = (struct _KEVENT **)((char *)this + 128);
    v13 = (PVOID *)((char *)this + 112);
  }
  else
  {
    v12 = (struct _KEVENT **)((char *)this + 176);
    v13 = (PVOID *)((char *)this + 160);
  }
  v43 = v12;
  if ( *((_DWORD *)this + 58) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3349;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-sequential swapchain client cannot provided metadata when releasing",
      3349LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v14 = *((_DWORD *)v11 + 10);
  if ( v14 == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
    WdLogGlobalForLineNumber = 3356;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_42;
  }
  v40 = 0LL;
  v42 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (DXGSWAPCHAIN *)((char *)this + v10 + 96), v14, &v40, &v42);
  v15 = v40;
  if ( *(_DWORD *)v40 != 1 || *((_DWORD *)v40 + 1) != *((_DWORD *)v11 + 7) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
    WdLogGlobalForLineNumber = 3369;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v11 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
LABEL_42:
    LODWORD(v8) = -1073741811;
    goto LABEL_27;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    LODWORD(v8) = DXGSWAPCHAIN::InsertGPUSignal(
                    this,
                    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                    v15,
                    *((_QWORD *)this + 24),
                    a5);
    if ( (int)v8 >= 0 )
      goto LABEL_13;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3394;
LABEL_40:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to insert GPU signal, swapchain 0x%I64x",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
    goto LABEL_27;
  }
  if ( !v11[44] || a5 )
  {
    LODWORD(v8) = DXGSWAPCHAIN::InsertGPUSignal(
                    this,
                    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
                    v15,
                    *((_QWORD *)this + 24),
                    a5);
    if ( (int)v8 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3382;
      goto LABEL_40;
    }
  }
LABEL_13:
  if ( *((_DWORD *)v11 + 7) == 1 )
  {
    if ( *((_DWORD *)this + 58) )
    {
      v28 = *((_QWORD *)v15 + 6);
      if ( v28 )
      {
        v29 = *((_QWORD *)v11 + 2);
        LOBYTE(v37) = 1;
        LODWORD(Size) = 0;
        v40 = 0LL;
        v30 = ObDuplicateObject(*v13, v28, v29, &v40, Size, 0, 6, v37);
        v8 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)v15 + 6), v30);
          WdLogGlobalForLineNumber = 3416;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
            *((_QWORD *)v15 + 6),
            v8,
            0LL,
            0LL,
            0LL);
          DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
          goto LABEL_27;
        }
        a2->pMetaData = v40;
        *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v15 + 7);
        v31 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL);
        if ( !v31 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3429;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
            *((_QWORD *)v15 + 6),
            0LL,
            0LL,
            0LL,
            0LL);
          DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
LABEL_58:
          v7 = v41;
          goto LABEL_27;
        }
        LODWORD(v8) = ObReferenceObjectByPointer(*v13, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
        if ( (int)v8 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3442;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to increment refcount on Process 0x%I64x",
            (__int64)*v13,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
          goto LABEL_58;
        }
        v31[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v15 + 6);
        v31[1].List.Flink = (struct _LIST_ENTRY *)*v13;
        v31->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
        v31->Parameter = v31;
        v31->List.Flink = 0LL;
        ExQueueWorkItem(v31, DelayedWorkQueue);
        *((_QWORD *)v15 + 6) = 0LL;
        *((_QWORD *)v15 + 7) = 0LL;
      }
    }
  }
  v16 = *((_DWORD *)v11 + 10);
  v42 = 0LL;
  v40 = 0LL;
  DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11, v16, &v42, &v40);
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() || !v11[44] )
  {
    v17 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v17 + 1;
    *((_QWORD *)v40 + 1) = v17;
  }
  v18 = v42;
  *(_DWORD *)v42 = 2;
  *((_DWORD *)v18 + 1) = DXGSWAPCHAIN::SwitchClient(v17, *((_DWORD *)v11 + 7));
  pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
  if ( !(_DWORD)pDeferredFreeList_low )
    goto LABEL_66;
  v27 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v18 + 2);
  v45 = a2->bProducer;
  LODWORD(Sizea) = pDeferredFreeList_low;
  v47 = 0LL;
  v46 = 0;
  v48 = 0LL;
  LODWORD(v8) = DXGSWAPCHAIN::SetMetaDataInternal(
                  this,
                  v27,
                  (int *)v18 + 6,
                  0,
                  Sizea,
                  v44,
                  (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v45,
                  a4);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
  {
    LODWORD(v38) = DWORD2(v47);
    LODWORD(v36) = v46;
    LODWORD(Src) = v45;
    LODWORD(Sizea) = v8;
    McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
      pDeferredFreeList_low,
      v19,
      v20,
      this,
      Sizea,
      Src,
      v36,
      (_QWORD)v47,
      v38,
      HIDWORD(v47),
      (_DWORD)v48,
      DWORD1(v48),
      DWORD2(v48),
      HIDWORD(v48));
  }
  if ( (int)v8 >= 0 )
  {
LABEL_66:
    if ( !*((_DWORD *)v18 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)v18 + 2), 0, 0);
    v22 = *((_DWORD *)this + 58);
    if ( *((_DWORD *)v11 + 7) )
    {
      if ( v22 )
      {
        LODWORD(v8) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree(this, a2);
        if ( (int)v8 < 0 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( !v22 )
      {
        v23 = (int *)*((_QWORD *)this + 28);
        v24 = *v23 + 1;
        if ( *v23 == v23[1] )
          v24 = 0;
        *v23 = v24;
      }
      LODWORD(v8) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v11 + 10));
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3521;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to add to surface to process queue, swapchain 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_35;
      }
    }
    v25 = v43;
    *((_DWORD *)v11 + 10) = -1;
    v7 = *v25;
    if ( v7 )
      KeSetEvent(v7, 2, 0);
    goto LABEL_27;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)v11 + 2), this);
  Sizeb = *((_QWORD *)v11 + 2);
  WdLogGlobalForLineNumber = 3497;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"ReleaseBuffer could not store the caller's (0x%I64x) metadata for swapchain (0x%I64x)",
    Sizeb,
    (__int64)this,
    0LL,
    0LL,
    0LL);
LABEL_35:
  DXGSWAPCHAIN::MarkAbandoned((struct _KEVENT **)this);
  v7 = 0LL;
LABEL_27:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
  {
    LODWORD(v36) = a2->pDeferredFreeList;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Sizea) = v8;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v19, v20, this, Sizea, Src, v36, v7);
  }
  return (unsigned int)v8;
}
