/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
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
