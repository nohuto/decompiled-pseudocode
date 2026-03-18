/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x14028B734
 * Callers:
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140222EE0 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x14028B660 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z @ 0x14022B7DC (-VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct DXGPROCESS *a1, unsigned int a2, int a3)
{
  struct _KTHREAD **v4; // rcx
  __int64 v5; // r12
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // rcx
  struct DXGALLOCATION *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rsi
  DXGPUSHLOCK *v13; // rcx
  struct _KEVENT *v14; // r14
  __int64 v15; // r14
  DXGADAPTER *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  DXGPUSHLOCK *v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  char v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  char v30; // [rsp+98h] [rbp-68h]
  _BYTE v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+A8h] [rbp-58h] BYREF
  DXGADAPTER *v33; // [rsp+B8h] [rbp-48h]
  _BYTE v34[16]; // [rsp+E8h] [rbp-18h] BYREF
  DXGADAPTER *v35; // [rsp+F8h] [rbp-8h]
  char v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]

  v4 = (struct _KTHREAD **)((char *)a1 + 248);
  v5 = a2;
  v26 = (DXGPUSHLOCK *)v4;
  v6 = 0;
  if ( v4 && v4[1] == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireShared(v26);
  v27 = 1;
  v7 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)a1 + 74) )
  {
    v8 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v7 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v7 + 8) & 0x60)
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      v9 = *((_QWORD *)a1 + 35);
      if ( (*(_BYTE *)(v9 + 16LL * v7 + 8) & 0x1F) == 5 )
      {
        v10 = *(struct DXGALLOCATION **)(v9 + 16LL * v7);
        goto LABEL_10;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v10 = 0LL;
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v10);
  v11 = v23;
  v28 = v23;
  v23 = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23);
  if ( !v11 )
  {
    v18 = -1073741811;
    WdLogSingleEntry2(3LL, v5, -1073741811LL);
    WdLogGlobalForLineNumber = 2115;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    goto LABEL_31;
  }
  v12 = *(_QWORD *)(v11 + 8);
  if ( v27 == 1 )
  {
    v13 = v26;
    v27 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v26 + 4);
    ExReleasePushLockSharedEx(v13, 0LL);
  }
  else
  {
    if ( v27 != 2 )
      goto LABEL_14;
    v20 = v26;
    v27 = 0;
    *((_QWORD *)v26 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_14:
  v14 = *(struct _KEVENT **)(v12 + 16);
  v23 = v12;
  v24 = 1;
  if ( !KeReadStateEvent(v14 + 5) )
    KeWaitForSingleObject(&v14[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)"g");
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  v29[1] = v15;
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
  v29[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 152));
  v30 = 1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, (struct DXGADAPTER *const)v15, 0LL);
  if ( v36 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v34, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v16 = v35;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v35 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v35 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)"g");
      KeWaitForSingleObject((char *)v35 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v35, 0LL);
    v16 = v35;
  }
  v37 = 0LL;
  v36 = 1;
  if ( *((_DWORD *)v16 + 50) != 1 )
    goto LABEL_40;
  if ( v33 != v35 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v32, 0LL);
    if ( *((_DWORD *)v33 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v32);
LABEL_40:
      COREACCESS::Release((COREACCESS *)v34);
      v18 = -1073741130;
      WdLogSingleEntry3(4LL, -1073741130LL, v15, a1);
      WdLogGlobalForLineNumber = 2144;
LABEL_50:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v23);
      goto LABEL_31;
    }
  }
  v31[1] = 1;
  if ( !*(_QWORD *)(v15 + 3168) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2148;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      2148LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(v15 + 209) )
  {
    v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4712),
            a1,
            *(_DWORD *)(v11 + 20),
            a3 != 0);
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v11 + 24) )
  {
    if ( a3 )
    {
      v6 = 1;
      *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) &= ~0x400u;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v31);
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
    KeLeaveCriticalRegion();
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 3168)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 584LL))(
            *(_QWORD *)(*(_QWORD *)(v15 + 3168) + 768LL),
            *(_QWORD *)(v11 + 24),
            v5 & 0x3F,
            v6);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 152));
    ExReleasePushLockSharedEx(v15 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  }
  else
  {
    v18 = -1073741811;
    WdLogSingleEntry3(3LL, v5, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 2162;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_31:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28);
  return v18;
}
