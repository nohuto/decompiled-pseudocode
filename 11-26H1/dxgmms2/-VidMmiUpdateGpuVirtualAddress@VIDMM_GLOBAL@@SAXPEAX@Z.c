/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x14011A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1400046F4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  __int64 v2; // rax
  struct VIDMM_WORKER_THREAD **v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v7[13]; // [rsp+50h] [rbp-68h] BYREF

  memset(v7, 0, 0x58uLL);
  v2 = *((_QWORD *)this + 11);
  v3 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)this + 1);
  LODWORD(v7[0]) = 119;
  v7[4] = this;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = 32LL * *((unsigned int *)this + 4);
  v7[1] = v4;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(
              v3,
              *(struct VIDMM_PAGING_QUEUE **)(v5 + *(_QWORD *)(v4 + 72)),
              (struct _VIDMM_DEFERRED_COMMAND *)v7,
              0,
              0LL) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 25256;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(this);
  }
}
