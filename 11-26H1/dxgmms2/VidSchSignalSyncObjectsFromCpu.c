/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1400069F0
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140055E30 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchSignalPagingFences @ 0x14010A330 (VidSchSignalPagingFences.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        unsigned int a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned __int64 *a4)
{
  __int64 Value; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  _QWORD v18[4]; // [rsp+78h] [rbp+27h] BYREF
  __int16 v19; // [rsp+98h] [rbp+47h]

  Value = a3.Value;
  if ( (*(_BYTE *)&a3.0 & 4) == a3.0 )
  {
    v8 = *((_QWORD *)*a2 + 1);
    v19 = 0;
    v18[0] = v8 + 2016;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v18);
    v9 = *((_QWORD *)*a2 + 1);
    v15[1] = v15;
    v14 = v9;
    v15[0] = v15;
    v16 = 0;
    v17 = 1;
    v10 = VidSchiSignalSyncObjectsFromCpu(
            (struct HwQueueStagingList *)&v14,
            a1,
            a2,
            (struct _D3DDDICB_SIGNALFLAGS)Value,
            a4,
            0LL);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v14);
    AcquireSpinLock::Release((AcquireSpinLock *)v18);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(1LL, a3.Value, -1073741811LL);
    WdLogGlobalForLineNumber = 11553;
    DxgkLogInternalTriageEvent(
      v12,
      0x40000,
      v13,
      (unsigned int)L"Invalid Flags value of 0x%I64x, only AllowFenceRewind is valid for signaling from CPU, returning 0x%I64x.\n",
      Value,
      -1073741811LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
