/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x14003CB00
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1400037E8 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x140043FA0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1400562DC (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchControlVSyncAdapter @ 0x1400FD840 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_QWORD *P, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  __int64 v5; // rcx
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _KEVENT *v18; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-1h] BYREF
  char v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  _QWORD v22[4]; // [rsp+78h] [rbp+17h] BYREF
  __int16 v23; // [rsp+98h] [rbp+37h]

  v3 = (unsigned int *)(P + 1);
  if ( (byte_14008A201 & 4) != 0 )
    McTemplateK0pqxxqpp_EtwWriteTransfer(
      (_DWORD)P,
      (unsigned int)&EventDestroyPeriodicFrameNotification,
      a3,
      *P,
      *v3,
      P[2],
      0,
      *((_DWORD *)P + 6),
      P[4],
      P[5]);
  v5 = P[5];
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v5, a2, a3, 0LL);
  }
  v6 = v3;
  if ( P[4] )
  {
    v18 = (struct _KEVENT *)P[4];
    v12 = *P;
    v19[0] = 0LL;
    v13 = ((__int64 (__fastcall *)(_QWORD, struct _KEVENT **))DxgCoreInterface[75])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL) + 3160LL),
            &v18);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(1LL, v13);
      WdLogGlobalForLineNumber = 14719;
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      v6 = (unsigned int *)(P + 1);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(struct _VIDSCH_GLOBAL **)(*P + 8LL)) < 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*P + 8LL) + 2500LL) )
      v15 = *v6;
    else
      v15 = -3;
    WdLogSingleEntry1(1LL, v15);
    v16 = *P;
    WdLogGlobalForLineNumber = 14730;
    DxgkLogInternalTriageEvent(*(_QWORD *)(v16 + 8), 0x40000LL);
  }
  v7 = *(_QWORD *)(*P + 8LL);
  v23 = 0;
  v22[0] = v7 + 2016;
  AcquireSpinLock::Acquire((Acquire *)v22);
  v8 = *P;
  v9 = *v6;
  v18 = *(struct _KEVENT **)(*P + 8LL);
  v19[1] = v19;
  v19[0] = v19;
  v20 = 0;
  v21 = 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v9 + 3448) + 78960LL)
            + 8LL * (unsigned __int8)*((_DWORD *)P + 6)) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)*P, (struct HwQueueStagingList *)&v18, 1);
  HwQueueStagingList::~HwQueueStagingList(&v18);
  AcquireSpinLock::Release((AcquireSpinLock *)v22);
  VidSchiReleaseSyncObjectReference((char *)*P, v10);
  v11 = *(_QWORD *)(*P + 16LL);
  if ( *(_DWORD *)(v11 + 420) != 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
    DxgkLogInternalTriageEvent(v17, 262146LL);
  }
  *(_QWORD *)(v11 + 192) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
