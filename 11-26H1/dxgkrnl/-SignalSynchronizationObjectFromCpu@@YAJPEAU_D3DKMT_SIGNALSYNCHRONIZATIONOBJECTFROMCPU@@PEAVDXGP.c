/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x14034DCCC
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x14034D2A0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x14000D910 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400112A8 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x14002FCE0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x140038920 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1400563EC (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline @ 0x140081F04 (Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x14036AED0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1403865C0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  PERESOURCE *Global; // rax
  __int64 ObjectCount; // rdx
  const void *v8; // r14
  struct _VIDSCH_SYNC_OBJECT **v9; // r12
  UINT v10; // r8d
  UINT v11; // eax
  __int64 v12; // r14
  D3DKMT_HANDLE v13; // r13d
  unsigned int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  const D3DKMT_HANDLE *v22; // rax
  __int64 v23; // rcx
  const D3DKMT_HANDLE *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  UINT v29; // edx
  UINT v30; // r9d
  __int64 v31; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rdi
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  char v41; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[32]; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+B0h] [rbp-50h]
  PVOID v45; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v46[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v47; // [rsp+E0h] [rbp-20h]
  _QWORD v48[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v49; // [rsp+108h] [rbp+8h]
  UINT v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+60h]

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2044);
  if ( (unsigned int)Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline() )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5893;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
        5893LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5899;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 5899LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5900;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSignalSyncObject->ObjectCount > 0",
      5900LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5901;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore() != NULL",
      5901LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v45 = 0LL;
  v47 = 0;
  P = 0LL;
  v44 = 0;
  v51 = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v45, ObjectCount);
  v8 = (const void *)v51;
  if ( !v51 )
    goto LABEL_59;
  v9 = (struct _VIDSCH_SYNC_OBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                        &P,
                                        a1->ObjectCount);
  if ( !v9 )
    goto LABEL_59;
  v10 = a1->ObjectCount;
  v11 = 0;
  v50 = 0;
  if ( !v10 )
  {
LABEL_34:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v48,
      v8,
      v10);
    if ( !v49 )
    {
      if ( (*((_BYTE *)a3 + 1917) & 1) != 0 )
      {
        v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4712LL),
                a2,
                a1->ObjectCount,
                a1->ObjectHandleArray,
                a1->Flags,
                0,
                0LL,
                a1->FenceValueArray,
                0LL,
                0LL,
                0,
                1,
                a3);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v48);
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
        return v27;
      }
      v29 = a1->ObjectCount;
      v30 = 0;
      if ( !v29 )
      {
LABEL_83:
        v34 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                *(VIDSCH_EXPORT **)(*((_QWORD *)a3 + 2) + 736LL),
                v29,
                v9,
                a1->Flags,
                a1->FenceValueArray);
        v35 = v34;
        if ( v34 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6047;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
            v35,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0pqPR1XR1_EtwWriteTransfer(a1->ObjectCount, (__int64)&EventSignalSynchronizationObjectFromCpu);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v48);
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
        return (unsigned int)v35;
      }
      while ( 1 )
      {
        v31 = v30;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v8 + v30),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v9[v31] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v29 = a1->ObjectCount;
        v30 = v33 + 1;
        if ( v30 >= v29 )
          goto LABEL_83;
      }
      WdLogSingleEntry1(2LL);
      ObjectHandleArray = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 6027;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
        ObjectHandleArray[v31],
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v48);
LABEL_88:
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      v44 = 0;
      P = 0LL;
      if ( v45 != v46 && v45 )
        ExFreePoolWithTag(v45, 0);
      v45 = 0LL;
      v47 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( !v41 )
        return 3221225485LL;
      v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_96:
      if ( !v21 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    if ( v48[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5996;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The same sync object handle is passed twice",
        5996LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v48);
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v44 = 0;
      if ( v45 != v46 && v45 )
        ExFreePoolWithTag(v45, 0);
      v45 = 0LL;
      v47 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( !v41 )
        return 3221225485LL;
      v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_96;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v48);
LABEL_59:
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v44 = 0;
    if ( v45 != v46 && v45 )
      ExFreePoolWithTag(v45, 0);
    v45 = 0LL;
    v47 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  while ( 1 )
  {
    v12 = v11;
    v13 = a1->ObjectHandleArray[v11];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)a2 + 74) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v14 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        v16 = *((_QWORD *)a2 + 35);
        if ( (*(_BYTE *)(v16 + 16LL * v14 + 8) & 0x1F) == 0xB )
        {
          v17 = *(_QWORD *)(v16 + 16LL * v14);
          goto LABEL_25;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v17 = 0LL;
LABEL_25:
    _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
    ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v17 )
    {
      WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v12], v12, -1073741811LL);
      v25 = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 5938;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)a2,
        v25[v12],
        v12,
        -1073741811LL,
        0LL);
      goto LABEL_88;
    }
    if ( (*(_DWORD *)(v17 + 72) & 0x10) != 0 )
      break;
    v18 = *(_QWORD *)(v17 + 32);
    if ( *(_DWORD *)(v18 + 420) == 7 && *(_DWORD *)(v18 + 316) == 1 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5954;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFENCE"
                  "_TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_88;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5959;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5959LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(v51 + 8 * v12) = *(_QWORD *)(v17 + 32);
    v19 = *(struct DXGDEVICE **)(v17 + 16);
    if ( v19 != a3 )
    {
      WdLogSingleEntry5(2LL, v19, v17, v12, a3, -1073741811LL);
      v38 = *(_QWORD *)(v17 + 16);
      WdLogGlobalForLineNumber = 5970;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x"
                  "%I64x, returning 0x%I64x.",
        v38,
        v17,
        v12,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_88;
    }
    v10 = a1->ObjectCount;
    v11 = v50 + 1;
    v50 = v11;
    if ( v11 >= v10 )
    {
      v8 = (const void *)v51;
      goto LABEL_34;
    }
  }
  WdLogSingleEntry1(2LL);
  v22 = a1->ObjectHandleArray;
  WdLogGlobalForLineNumber = 5946;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x object is opened as wait only and thus cannot be signaled.",
    v22[v12],
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v43 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v44 = 0;
  if ( v45 != v46 && v45 )
    ExFreePoolWithTag(v45, 0);
  v45 = 0LL;
  v47 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return 3221225506LL;
}
