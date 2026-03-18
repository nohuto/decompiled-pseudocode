/*
 * XREFs of ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278
 * Callers:
 *     DxgkEngReleaseStableVisRgn @ 0x140078130 (DxgkEngReleaseStableVisRgn.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x140088F00 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreShared<2,>(__int64 *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"GreLock", *a1 + 1144);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 10))-- == 1 )
      *(_QWORD *)v2 &= ~4uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 1144));
}
