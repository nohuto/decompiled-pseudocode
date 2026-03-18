/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60
 * Callers:
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x14021E3A0 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140282CC8 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035450C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140356CC0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403575E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x140395C40 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A8330 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1403B67C0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403C98A8 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403CDBFC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022DF4C (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x140373448 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v11; // rcx
  __int64 v12; // r13
  struct COREDEVICEACCESS *v13; // r13
  struct DXGALLOCATION *v14; // rdi
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct DXGALLOCATION *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rsi
  _QWORD *v27; // rax
  struct DXGALLOCATION *v28; // r9
  _QWORD *v29; // rax
  struct DXGALLOCATION *v30; // r9
  int v31; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v33; // rcx
  struct DXGALLOCATION **v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // [rsp+50h] [rbp-38h] BYREF
  char v38; // [rsp+58h] [rbp-30h]

  v7 = 0LL;
  v8 = a2;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6672;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
      6672LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v12 + 209) )
  {
    if ( a4 )
      LODWORD(v7) = *((_DWORD *)a4 + 5);
    v31 = *((_DWORD *)this + 118);
    Current = DXGPROCESS::GetCurrent();
    v33 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v12 + 4712);
    v13 = (struct COREDEVICEACCESS *)a5;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(v33, *((_DWORD *)Current + 122), v31, v7, v8, a3, a6, a5);
    v7 = 0LL;
    if ( a4 )
      *((_DWORD *)a4 + 5) = 0;
    if ( (_DWORD)v8 )
    {
      v34 = a3;
      v35 = v8;
      do
      {
        v36 = (__int64)*v34++;
        *(_BYTE *)(v36 + 128) &= ~4u;
        --v35;
      }
      while ( v35 );
    }
  }
  else
  {
    v13 = (struct COREDEVICEACCESS *)a5;
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(this, a4, 1, *((struct DXGALLOCATION **)a4 + 3), v13, a6);
  }
  else
  {
    v14 = 0LL;
    v15 = 0;
    if ( this != (DXGDEVICE *)-208LL && *((struct _KTHREAD **)this + 27) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1495LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v37 = 0LL;
    v38 = 0;
    if ( (_DWORD)v8 && *a3 && (v16 = *((_QWORD *)*a3 + 5)) != 0 )
    {
      v37 = v16 + 80;
      if ( v16 == -80 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 649;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 649LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v37);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 208, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGDEVICE *)((char *)this + 208), v17, v18);
        ExAcquirePushLockExclusiveEx((char *)this + 208, 0LL);
      }
      v15 = 2;
      *((_QWORD *)this + 27) = KeGetCurrentThread();
    }
    if ( (_DWORD)v8 )
    {
      v7 = v8;
      do
      {
        v19 = *a3;
        if ( *a3 )
        {
          if ( *((_DWORD *)this + 152) == 1 )
          {
            v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8732;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
                8732LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          v21 = *((_QWORD *)v19 + 5);
          if ( v21 )
          {
            DXGDEVICE::RemoveAllocationFromList(this, v19, (struct DXGALLOCATION **)(v21 + 24));
          }
          else
          {
            if ( *((_DWORD *)this + 152) == 1 )
            {
              v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
                && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 8702;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
                  8702LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            v23 = *((_QWORD *)v19 + 8);
            if ( v23 )
              *(_QWORD *)(v23 + 56) = *((_QWORD *)v19 + 7);
            v24 = *((_QWORD *)v19 + 7);
            v25 = *((_QWORD *)v19 + 8);
            if ( v24 )
              *(_QWORD *)(v24 + 64) = v25;
            else
              *((_QWORD *)this + 6) = v25;
            *((_QWORD *)v19 + 7) = 0LL;
          }
          *((_QWORD *)v19 + 8) = v14;
          v14 = v19;
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8876;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 8876LL, 0LL, 0LL, 0LL, 0LL);
        }
        ++a3;
        --v7;
      }
      while ( v7 );
    }
    if ( v38 != (_BYTE)v7 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v37);
    if ( v15 == 2 )
    {
      *((_QWORD *)this + 27) = v7;
      ExReleasePushLockExclusiveEx((char *)this + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v14 )
    {
      v26 = (void *)*((_QWORD *)v14 + 5);
      if ( v26 )
      {
        do
        {
          v29 = (_QWORD *)((char *)v14 + 64);
          v30 = v14;
          v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
          *v29 = v7;
          DXGDEVICE::TerminateAllocations(this, v26, 0, v30, (struct COREDEVICEACCESS *)a5, a6);
        }
        while ( v14 );
      }
      else
      {
        do
        {
          v27 = (_QWORD *)((char *)v14 + 64);
          v28 = v14;
          v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
          *v27 = v7;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v28, (struct COREDEVICEACCESS *)a5, a6);
        }
        while ( v14 );
      }
    }
  }
}
