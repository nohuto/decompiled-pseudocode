/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4
 * Callers:
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223850 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x1402E7AB0 (DxgkCloseAdapterImpl.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1403687E8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140368B20 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140369220 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct DXGPROCESS *this, unsigned int a2)
{
  struct _KTHREAD **v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  HMGRTABLE *v8; // rsi
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  volatile signed __int64 *v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _BYTE v23[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h]
  DXGADAPTER *v25; // [rsp+70h] [rbp-19h]
  char v26; // [rsp+78h] [rbp-11h]
  __int64 v27; // [rsp+80h] [rbp-9h]

  v2 = (struct _KTHREAD **)((char *)this + 248);
  if ( this )
  {
    if ( this == (struct DXGPROCESS *)-248LL )
      goto LABEL_5;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3369;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3369LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v2[1] == KeGetCurrentThread() )
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
LABEL_5:
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v2, v5, v6);
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  v2[1] = KeGetCurrentThread();
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
  {
    v19 = *((_QWORD *)this + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 248));
    if ( (unsigned int)v7 < *(_DWORD *)(v19 + 296) )
    {
      v20 = *(_DWORD *)(*(_QWORD *)(v19 + 280) + 16 * v7 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v19 + 280) + 16 * v7 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        v21 = *(_QWORD *)(v19 + 280);
        v22 = 2 * v7;
        if ( (*(_BYTE *)(v21 + 8 * v22 + 8) & 0x1F) == 1 )
        {
          v11 = *(_QWORD *)(v21 + 8 * v22);
LABEL_47:
          _InterlockedDecrement((volatile signed __int32 *)(v19 + 264));
          ExReleasePushLockSharedEx(v19 + 248, 0LL);
          KeLeaveCriticalRegion();
          v8 = (struct DXGPROCESS *)((char *)this + 280);
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
    goto LABEL_47;
  }
  v8 = (struct DXGPROCESS *)((char *)this + 280);
  if ( (unsigned int)v7 < *((_DWORD *)this + 74) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)v8 + 16LL * (unsigned int)v7 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16LL * (unsigned int)v7 + 8) & 0x60)
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      v10 = 2 * v7;
      if ( (*(_BYTE *)(*(_QWORD *)v8 + 8 * v10 + 8) & 0x1F) == 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v8 + 8 * v10);
        goto LABEL_14;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = 0LL;
LABEL_14:
  if ( v11 )
  {
    Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
    HMGRTABLE::FreeHandle(v8, a2);
    v2[1] = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v11 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 152));
    v12 = *(_QWORD *)(v11 + 3168);
    if ( v12 )
    {
      if ( *(_DWORD *)(v11 + 240) == -1 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3399;
      }
      else
      {
        v13 = *(volatile signed __int64 **)(v12 + 16);
        v25 = (DXGADAPTER *)v13;
        v26 = 0;
        v27 = 0LL;
        if ( v13 )
        {
          _InterlockedIncrement64(v13 + 3);
          v24 = -1LL;
        }
        while ( 1 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v12 + 72, 0LL);
          *(_QWORD *)(v12 + 80) = KeGetCurrentThread();
          v14 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*(_QWORD *)(v12 + 16) + 240LL));
          if ( !v14 )
            break;
          if ( !*(_DWORD *)(v14 + 56) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2857;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAdapterInfo->AdapterInfoReferenceCount > 0",
              2857LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*(_DWORD *)(v14 + 56))-- != 1 )
            break;
          if ( v12 != *(_QWORD *)(v14 + 80) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2860;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderCore == pAdapterInfo->pRenderCore",
              2860LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !*(_BYTE *)(v14 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v12 + 16)) )
          {
            DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v14);
            break;
          }
          ++*(_DWORD *)(v14 + 56);
          *(_QWORD *)(v12 + 80) = 0LL;
          ExReleasePushLockExclusiveEx(v12 + 72, 0LL);
          KeLeaveCriticalRegion();
          if ( v26 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7648;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v25 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v25 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)"g");
              KeWaitForSingleObject((char *)v25 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v25, 0LL);
          }
          v27 = 0LL;
          v26 = 1;
        }
        *(_QWORD *)(v12 + 80) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 72, 0LL);
        KeLeaveCriticalRegion();
        COREACCESS::~COREACCESS((COREACCESS *)v23, v16);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 152));
    ExReleasePushLockSharedEx(v11 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
    return 0LL;
  }
  else
  {
    v2[1] = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
}
