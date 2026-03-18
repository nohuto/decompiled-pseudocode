/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140084B10 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJ<36>::vUnlock(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *v3; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MapRot", (int)*a1);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
      *(_QWORD *)v3 &= ~0x1000000000uLL;
    GreReleaseSemaphoreSharedInternal(v1);
    *a1 = 0LL;
  }
}
