/*
 * XREFs of ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009D04C
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140029460 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  _QWORD **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v2 = (_QWORD **)((char *)this + 45096);
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 45000));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v7 = (struct _LIST_ENTRY *)(i - 2);
    if ( !*(i - 2) && *(i - 22) )
    {
      VidSchSuspendResumeDevice((_KEVENT *)*(i - 21), 1, 0, 2);
      Blink = a2->Blink;
      if ( Blink->Flink != a2 )
        __fastfail(3u);
      v7->Flink = a2;
      *(i - 1) = Blink;
      Blink->Flink = v7;
      a2->Blink = v7;
    }
  }
  if ( (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 8018);
}
