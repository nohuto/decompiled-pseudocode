/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744
 * Callers:
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x14003B670 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14004E450 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x14006C5B0 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x1400A28B4 (--1CFlipAwayFence@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x140013B9C (McTemplateK0qpx_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14018DC2C (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036DC38 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r15d
  _QWORD *v6; // rbx
  struct DXGADAPTER *v7; // rdx
  DXGADAPTER *v8; // rcx
  __int64 v9; // rcx
  DXGFASTMUTEX *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  _QWORD *v18; // rbx
  int v19; // eax
  struct DXGGLOBAL *Global; // rax
  int v21; // [rsp+40h] [rbp-C0h]
  DXGFASTMUTEX *v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v30; // [rsp+C8h] [rbp-38h]
  char v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v4 = a1[2];
  v6 = (_QWORD *)(*(_QWORD *)a1 + 440LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 424LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v22, (struct DXGFASTMUTEX *const)(v2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
    if ( (_QWORD *)*v6 == v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1340;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1340LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = (_QWORD *)*v6;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
    v19 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v18 - 19, v2, a2, v4, 0);
    goto LABEL_27;
  }
  v7 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)a1 + 456LL) + 16LL);
  if ( *((_BYTE *)v7 + 209) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((struct DXG_VMBUS_CHANNEL_BASE **)Global + 212), v4, a2, 0);
LABEL_27:
    LODWORD(v16) = v19;
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v7, 0LL);
  if ( v31 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v8 = v30;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v30 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v30 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)"g");
      KeWaitForSingleObject((char *)v30 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v30, 0LL);
    v8 = v30;
  }
  v32 = 0LL;
  v31 = 1;
  if ( *((_DWORD *)v8 + 50) != 1 )
    goto LABEL_30;
  if ( v28 != v30 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v27, 0LL);
    if ( *((_DWORD *)v28 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v27);
LABEL_30:
      COREACCESS::Release((COREACCESS *)v29);
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 1279;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      LODWORD(v16) = 0;
      goto LABEL_20;
    }
  }
  v10 = (DXGFASTMUTEX *)(v2 + 32);
  v26[1] = 1;
  v22 = (DXGFASTMUTEX *)(v2 + 32);
  v23 = 0;
  if ( v2 == -32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v22;
  }
  if ( DXGFASTMUTEX::IsOwner(v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
  v25 = v6[4];
  v11 = v6[2];
  v24 = a2;
  LOBYTE(v21) = 0;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v11 + 736) + 8LL) + 664LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v25,
          0,
          &v24,
          v21);
  v16 = v12;
  if ( v12 >= 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qpx_EtwWriteTransfer(v14, v13, v15, 0, v25, v24);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1305;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
    v16,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
LABEL_20:
  if ( (int)v16 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, (int)v16);
    WdLogGlobalForLineNumber = 1367;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      (__int64)a1,
      (int)v16,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v16;
}
