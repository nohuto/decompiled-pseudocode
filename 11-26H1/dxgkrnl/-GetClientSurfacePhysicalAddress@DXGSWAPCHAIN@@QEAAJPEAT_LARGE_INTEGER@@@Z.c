/*
 * XREFs of ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x140206580
 * Callers:
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x140208FC0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x14004BF78 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z @ 0x1401C2E74 (-GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(DXGSWAPCHAIN *this, union _LARGE_INTEGER *a2)
{
  DXGDEVICE *v5; // rsi
  bool v6; // dl
  unsigned int v7; // r8d
  HANDLE *v8; // rax
  NTSTATUS v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned int AllocationPhysicalAddress; // ebx
  PVOID *Object; // [rsp+20h] [rbp-50h]
  _BYTE v15[32]; // [rsp+50h] [rbp-20h] BYREF
  PVOID v16; // [rsp+A0h] [rbp+30h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v17; // [rsp+B0h] [rbp+40h] BYREF

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4166;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 4166LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 34) == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 14), this);
    Object = (PVOID *)*((_QWORD *)this + 14);
    WdLogGlobalForLineNumber = 4173;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      (__int64)Object,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v5 = (DXGDEVICE *)*((_QWORD *)this + 13);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4179;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice", 4179LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)v5 + 5) )
  {
    v7 = *((_DWORD *)this + 34);
    v17 = 0LL;
    v16 = 0LL;
    DXGSWAPCHAIN::GetClientSurfaceInfo(
      this,
      (DXGSWAPCHAIN *)((char *)this + 96),
      v7,
      &v17,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **)&v16);
    v8 = (HANDLE *)v16;
    v16 = 0LL;
    v9 = ObReferenceObjectByHandle(v8[5], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v16, 0LL);
    v10 = v16;
    if ( v9 >= 0 )
    {
      v11 = *((_QWORD *)v16 + 2);
      if ( v11 && *(_QWORD *)(v11 + 80) )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(v11 + 32), 0);
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v15);
        v12 = (_QWORD *)(v10[2] + 136LL);
        if ( (_QWORD *)*v12 != v12 )
        {
          AllocationPhysicalAddress = DXGDEVICE::GetAllocationPhysicalAddress(
                                        v5,
                                        (const struct DXGADAPTERALLOCATION *)(*v12 - 48LL),
                                        a2);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
          NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v16);
          return AllocationPhysicalAddress;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4226;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Shared resource does not have an allocation",
          4226LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4214;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not get shared resource or render core",
          4214LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4205;
    }
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v16);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4184;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 4184LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v6);
  }
  return 3221225473LL;
}
