/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4
 * Callers:
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401905C0 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1401F28D0 (DxgkUpdateAllocationProperty.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkReclaimAllocations2 @ 0x14038E1A0 (DxgkReclaimAllocations2.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  char *v5; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // r8d
  struct _KTHREAD *v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d

  v5 = (char *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          1495,
          v17,
          v18,
          0LL,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1495LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v5 + 6) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 4);
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a3 + 74) )
    goto LABEL_19;
  v12 = *((_DWORD *)a3[35] + 4 * v11 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)a3[35] + 16 * v11 + 8) & 0x60) || (v12 & 0x2000) != 0 || (v12 & 0x1F) == 0 )
    goto LABEL_19;
  v13 = a3[35];
  if ( (*((_BYTE *)v13 + 16 * v11 + 8) & 0x1F) != 0xA )
  {
    if ( a5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            318,
            v19,
            v20,
            0LL,
            0,
            -1,
            (__int64)L"Handle type mismatch",
            318LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
LABEL_19:
    *(_QWORD *)this = 0LL;
    goto LABEL_20;
  }
  v14 = *((_QWORD *)v13 + 2 * v11);
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v14 + 64));
    v15 = *(_QWORD *)(v14 + 64);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 64), v15 + 1, v15);
      if ( v16 == v15 )
        goto LABEL_20;
    }
    goto LABEL_19;
  }
LABEL_20:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  _InterlockedDecrement((volatile signed __int32 *)v5 + 4);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
