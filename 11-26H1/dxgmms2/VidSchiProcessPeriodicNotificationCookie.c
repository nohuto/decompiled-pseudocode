/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x14002F828
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400444B4 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1400547C8 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     McTemplateK0qqix_EtwWriteTransfer @ 0x1400549F8 (McTemplateK0qqix_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  union _SLIST_HEADER *v7; // r15
  union _SLIST_HEADER *v8; // r14
  union _SLIST_HEADER *v9; // rbx
  ULONGLONG Alignment; // rsi
  __int64 v11; // rsi
  ULONGLONG v12; // r12
  ULONGLONG v13; // r8
  ULONGLONG v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // ecx
  struct _KEVENT *v24; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-11h] BYREF
  char v26; // [rsp+70h] [rbp-1h]
  int v27; // [rsp+74h] [rbp+3h]
  _QWORD v28[4]; // [rsp+78h] [rbp+7h] BYREF
  __int16 v29; // [rsp+98h] [rbp+27h]
  unsigned __int64 v30; // [rsp+D8h] [rbp+67h] BYREF

  v3 = *(unsigned int *)(a2 + 48);
  v5 = *(unsigned int *)(a2 + 52);
  v7 = (union _SLIST_HEADER *)*((_QWORD *)a1 + v3 + 431);
  v8 = v7 + 2772;
  v9 = v7 + 2773;
  if ( (byte_14008A201 & 4) != 0 )
    McTemplateK0qqix_EtwWriteTransfer((_DWORD)a1, a2, a3, v3, v5, v9->Alignment, v8->Alignment);
  ExpInterlockedPushEntrySList(v7 + 4936, (PSLIST_ENTRY)(a2 + 16));
  v29 = 0;
  v28[0] = (char *)a1 + 2016;
  AcquireSpinLock::Acquire((Acquire *)v28);
  v24 = (struct _KEVENT *)a1;
  v26 = 0;
  v25[1] = v25;
  v25[0] = v25;
  v27 = 2;
  Alignment = v7[4935].Alignment;
  if ( !Alignment
    || (v11 = *(_QWORD *)(Alignment + 8LL * (unsigned __int8)v5)) == 0
    || *(_DWORD *)(v11 + 24) != (_DWORD)v5 )
  {
    WdLogSingleEntry1(1LL, v5);
    WdLogGlobalForLineNumber = 9570;
    goto LABEL_17;
  }
  v12 = v9->Alignment;
  v13 = v8->Alignment;
  v14 = v9->Alignment;
  LODWORD(v30) = 0;
  v15 = VidSchiCalculatePeriodicTargetFrameNumber(v11, v14, v13, (int)&v30, a1, (__int64)v7);
  v18 = v15;
  v30 = v15;
  if ( *(_QWORD *)(v11 + 48) == v15 )
  {
    WdLogSingleEntry1(1LL, v15);
    WdLogGlobalForLineNumber = 9599;
LABEL_17:
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    goto LABEL_18;
  }
  if ( *(_QWORD *)(v11 + 48) > v15 )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventPerformanceWarning, v17, 25);
    WdLogSingleEntry2(1LL, v18, *(_QWORD *)(v11 + 48));
    WdLogGlobalForLineNumber = 9613;
    goto LABEL_17;
  }
  v20 = VidSchiSignalSyncObjectsFromCpu(
          (struct HwQueueStagingList *)&v24,
          1u,
          (struct _VIDSCH_SYNC_OBJECT **)v11,
          0,
          &v30,
          0LL);
  if ( v20 < 0 )
  {
    WdLogSingleEntry3(1LL, *(unsigned int *)(v11 + 8), v5, v20);
    WdLogGlobalForLineNumber = 9630;
    goto LABEL_17;
  }
  v23 = v30;
  *(_QWORD *)(v11 + 48) = v30;
  if ( (byte_14008A201 & 4) != 0 )
    McTemplateK0pqqiix_EtwWriteTransfer(v23, v21, v22, *(_QWORD *)v11, *(_DWORD *)(v11 + 8), v5, v12, 0, v23);
LABEL_18:
  HwQueueStagingList::~HwQueueStagingList(&v24);
  AcquireSpinLock::Release((AcquireSpinLock *)v28);
}
