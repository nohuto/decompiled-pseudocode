/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400453A8
 * Callers:
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400451FC (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionSurfaceObject::LockForRead(
        CompositionSurfaceObject *this,
        const struct CCompositionSurface **a2)
{
  NTSTATUS result; // eax
  const struct CCompositionSurface *v5; // rbx

  *a2 = 0LL;
  result = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( result >= 0 )
  {
    KeEnterCriticalRegion();
    v5 = (CompositionSurfaceObject *)((char *)this + 40);
    ExAcquirePushLockSharedEx((char *)v5 + 8, 0LL);
    result = 0;
    *a2 = v5;
  }
  return result;
}
