/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x140208210 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1401938A0 (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x140206CB4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(const void **this, unsigned __int64 a2, int a3, void *a4, unsigned int *a5)
{
  unsigned int v8; // r12d
  bool v9; // cf
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rdi
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  char *v14; // r14
  int v15; // r8d
  int v16; // eax
  __int64 v17; // r14
  struct DXGPROCESS *Current; // r14
  int v19; // r13d
  unsigned int v20; // ecx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rbx
  unsigned int *v24; // r12
  int v25; // edx
  int v26; // eax
  ADAPTER_RENDER *v27; // r8
  int v28; // eax
  AUTOEXPANDALLOCATION *v29; // rax
  AUTOEXPANDALLOCATION *v30; // rbx
  DXGSWAPCHAIN *v31; // rcx
  __int64 Src; // [rsp+28h] [rbp-B1h]
  __int64 v33[4]; // [rsp+58h] [rbp-81h] BYREF
  __int128 v34; // [rsp+78h] [rbp-61h]
  _QWORD v35[12]; // [rsp+88h] [rbp-51h] BYREF
  DXGSYNCOBJECT *v36; // [rsp+E8h] [rbp+Fh] BYREF
  DXGSYNCOBJECT *v37; // [rsp+138h] [rbp+5Fh] BYREF
  int v38; // [rsp+148h] [rbp+6Fh]
  void *v39; // [rsp+150h] [rbp+77h]

  v39 = a4;
  v38 = a3;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)this)
    || !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(a2 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2692;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_SwapChainLock.IsOwner() && pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2692LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = a3 == 0;
  v9 = *((_DWORD *)this + 15) < 0x32u;
  LODWORD(v37) = v8;
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2701;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Swapchain is at max number of surfaces so cannot add anymore",
      2701LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)this);
  if ( !EmptySlot )
  {
    if ( *((_DWORD *)this + 14) != *((_DWORD *)this + 15) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2709;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_SurfaceTableSize == m_ActiveSurfaceCo",
        2709LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = *((_DWORD *)this + 14) + 5;
    v13 = 160LL * v12;
    if ( !is_mul_ok(v12, 0xA0uLL) )
      v13 = -1LL;
    v14 = (char *)operator new[](v13, 0x4B677844u, 256LL);
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 2716;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate new surface table, size %ld",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(v14, this[8], 160LL * *((unsigned int *)this + 14));
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v14[160 * *((unsigned int *)this + 14)];
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)this[8]);
    this[8] = v14;
    *((_DWORD *)this + 14) = v12;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    memset(v35, 0, sizeof(v35));
    v27 = *(ADAPTER_RENDER **)(a2 + 16);
    HIDWORD(v35[1]) |= 1u;
    LODWORD(v35[1]) = 3;
    v28 = CreateSynchronizationObjectInternal(0LL, 1, v27, (__int64)v35, 13, 0, &v37, 0LL, 0LL);
    v17 = v28;
    if ( v28 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v28);
      WdLogGlobalForLineNumber = 2805;
      goto LABEL_17;
    }
    goto LABEL_27;
  }
  memset(v35, 0, sizeof(v35));
  v15 = *((_DWORD *)this + 59);
  LODWORD(v35[0]) = *(_DWORD *)(a2 + 468);
  LODWORD(v35[1]) = v15 != 0 ? 5 : 3;
  HIDWORD(v35[1]) = (v15 != 0 ? 0x80 : 0) | HIDWORD(v35[1]) & 0xFFFFFF7D | (v15 != 0 ? 2 : 0) | 1;
  v16 = CreateSynchronizationObjectInternal(
          a2 & -(__int64)(v15 != 0),
          1,
          *(ADAPTER_RENDER **)(a2 + 16),
          (__int64)v35,
          13,
          0,
          &v36,
          (__int64 *)EmptySlot + 4,
          0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v16);
    WdLogGlobalForLineNumber = 2759;
LABEL_17:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v17,
      0LL,
      0LL,
      0LL);
    goto LABEL_38;
  }
  if ( !*((_DWORD *)this + 59) )
  {
LABEL_27:
    *((_DWORD *)EmptySlot + 7) = v35[10];
    goto LABEL_31;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v19 = v35[11];
  v20 = (LODWORD(v35[11]) >> 6) & 0xFFFFFF;
  if ( v20 < *((_DWORD *)Current + 74) )
  {
    v21 = *((_QWORD *)Current + 35);
    v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
    if ( ((LODWORD(v35[11]) >> 25) & 0x60) == (v22 & 0x60) && (v22 & 0x1F) != 0 )
    {
      v23 = 16 * ((v35[11] >> 6) & 0xFFFFFFLL);
      if ( (*(_DWORD *)(v23 + v21 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + v23 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v24 = (unsigned int *)((char *)EmptySlot + 28);
  v33[0] = 48LL;
  *((_DWORD *)EmptySlot + 7) = v19;
  v33[3] = 512LL;
  LOBYTE(v25) = 1;
  v33[1] = 0LL;
  v33[2] = 0LL;
  v34 = 0LL;
  v26 = DxgkShareObjectsInternal(
          0,
          v25,
          0,
          1,
          (char *)EmptySlot + 28,
          (__int64)v33,
          0x10000000u,
          (__int64)EmptySlot + 40,
          0LL);
  v17 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry2(2LL, *v24, v26);
    Src = *v24;
    WdLogGlobalForLineNumber = 2776;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to share Fence Nt handle 0x%I64x, error 0x%I64x",
      Src,
      v17,
      0LL,
      0LL,
      0LL);
    v8 = (unsigned int)v37;
    goto LABEL_38;
  }
  v8 = (unsigned int)v37;
LABEL_31:
  v29 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x4B677844u, 256LL);
  v30 = v29;
  if ( v29 )
  {
    *(_QWORD *)v29 = 0LL;
    *((_QWORD *)v29 + 1) = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer(v29, 0, 0);
  }
  else
  {
    v30 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v30;
  if ( !v30 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2818;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating AUTOEXPANDALLOCATION class",
      2818LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v17) = -1073741801;
    goto LABEL_38;
  }
  LODWORD(v17) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   (DXGSWAPCHAIN *)this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 48 * v8 + 64),
                   v39,
                   v38,
                   *((_BYTE *)this + (v38 != 0 ? 0x30 : 0) + 140));
  if ( (int)v17 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2827;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"OpenSurfacesResourcesLocalForCreator failed",
      2827LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_38:
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, v8, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v31, EmptySlot);
      memset(EmptySlot, 0, 0xA0uLL);
    }
    return (unsigned int)v17;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  *a5 = -858993459 * ((EmptySlot - (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)this[8]) >> 5);
  ++*((_DWORD *)this + 15);
  return (unsigned int)v17;
}
