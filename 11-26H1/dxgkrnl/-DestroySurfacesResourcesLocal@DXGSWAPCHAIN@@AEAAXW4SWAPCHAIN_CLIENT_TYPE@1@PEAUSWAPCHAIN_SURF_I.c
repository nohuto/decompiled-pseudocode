/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x140205CBC (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x140206508 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x140206AF4 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140207990 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_4100754745__private_IsEnabledDeviceUsageNoInline @ 0x140081E90 (Feature_4100754745__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(DXGSWAPCHAIN *a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _WORK_QUEUE_ITEM *v7; // rbx
  bool v8; // dl
  struct _LIST_ENTRY *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  bool v12; // dl
  unsigned int v13; // r14d
  struct DXGPROCESS *Current; // rbx
  unsigned int v15; // esi
  unsigned int v16; // r8d
  __int64 v17; // r9
  struct DXGSYNCOBJECT *v18; // rbx
  volatile signed __int32 *v19; // r15
  int v20; // r8d
  __int64 v21; // rbx
  PERESOURCE *Global; // rax
  __int64 v23; // [rsp+20h] [rbp-68h]
  _BYTE v24[32]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 6LL * a2;
  if ( *(_QWORD *)(a3 + 48LL * a2 + 104) )
  {
    v7 = (struct _WORK_QUEUE_ITEM *)operator new(0x30uLL, 0x4B677844u, 64LL);
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL);
      v23 = *(_QWORD *)(a3 + 8 * v6 + 104);
      WdLogGlobalForLineNumber = 2020;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
        v23,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGSWAPCHAIN::MarkAbandoned(a1, v8);
      return;
    }
    v9 = *(struct _LIST_ENTRY **)((char *)a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 160);
    v10 = ObReferenceObjectByPointer(v9, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
    if ( v10 < 0 )
    {
      v11 = v10;
      WdLogSingleEntry2(2LL, v9, v10);
      WdLogGlobalForLineNumber = 2035;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to increment refcount on Process 0x%I64x (Status 0x%I64x)",
        (__int64)v9,
        v11,
        0LL,
        0LL,
        0LL);
      DXGSWAPCHAIN::MarkAbandoned(a1, v12);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
      return;
    }
    v7[1].List.Blink = *(struct _LIST_ENTRY **)(a3 + 8 * v6 + 104);
    v7[1].List.Flink = v9;
    v7->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
    v7->Parameter = v7;
    v7->List.Flink = 0LL;
    ExQueueWorkItem(v7, DelayedWorkQueue);
    *(_QWORD *)(a3 + 8 * v6 + 104) = 0LL;
    *(_QWORD *)(a3 + 8 * v6 + 96) = 0LL;
  }
  v13 = *(_DWORD *)(a3 + 8 * v6 + 80);
  if ( v13 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
LABEL_30:
      *(_DWORD *)(a3 + 8 * v6 + 80) = 0;
      return;
    }
    v15 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)Feature_4100754745__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
      if ( v15 < *((_DWORD *)Current + 74) )
      {
        v16 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v15 + 8);
        if ( v13 >> 30 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
        {
          v17 = *((_QWORD *)Current + 35);
          if ( (*(_BYTE *)(v17 + 16LL * v15 + 8) & 0x1F) == 8 )
          {
            v18 = *(struct DXGSYNCOBJECT **)(v17 + 16LL * v15);
            if ( v18 )
              *(_DWORD *)(v17 + 16LL * v15 + 8) |= 0x2000u;
            goto LABEL_17;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v18 = 0LL;
LABEL_17:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
      goto LABEL_28;
    }
    v19 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    if ( v15 < *((_DWORD *)Current + 74) )
    {
      v20 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v15 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v15 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        v21 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v21 + 16LL * v15 + 8) & 0x1F) == 8 )
        {
          v18 = *(struct DXGSYNCOBJECT **)(v21 + 16LL * v15);
          goto LABEL_27;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v18 = 0LL;
LABEL_27:
    _InterlockedDecrement(v19 + 4);
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
LABEL_28:
    if ( v18 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, v18, v13, 0);
    }
    goto LABEL_30;
  }
}
