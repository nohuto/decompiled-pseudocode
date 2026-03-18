/*
 * XREFs of ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009DBF4
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v6; // rbx
  _KEVENT *Blink; // rcx

  if ( (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerExit, a3, 8018);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v6 = Flink;
    Blink = (_KEVENT *)Flink[-10].Blink;
    Flink = Flink->Flink;
    VidSchSuspendResumeDevice(Blink, 0, 0, 2);
    v6->Flink = 0LL;
    v6->Blink = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 11254);
  ExReleasePushLockSharedEx((char *)this + 45000, 0LL);
  KeLeaveCriticalRegion();
}
