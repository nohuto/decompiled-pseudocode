/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x14002FF8C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::MapViewOfSectionObj::Unmap(int a1, void *a2)
{
  NTSTATUS v3; // ebx
  PEPROCESS Process; // [rsp+40h] [rbp+18h] BYREF

  Process = 0LL;
  v3 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  if ( v3 >= 0 )
  {
    v3 = MmUnmapViewOfSection(Process, a2);
    ObfDereferenceObject(Process);
  }
  return v3 >= 0;
}
