/*
 * XREFs of ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x140083B68
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepW32PidFromW32Process(PEPROCESS *a1)
{
  return PsGetProcessId(*a1);
}
