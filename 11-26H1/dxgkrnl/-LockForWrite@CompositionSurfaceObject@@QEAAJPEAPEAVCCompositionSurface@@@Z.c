/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400262E0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x140026DB0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtUnBindCompositionSurface @ 0x140027080 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x140027340 (NtBindCompositionSurface.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x1400298F0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x140029AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionSurfaceObject::LockForWrite(
        CompositionSurfaceObject *this,
        struct CCompositionSurface **a2)
{
  NTSTATUS result; // eax
  struct CCompositionSurface *v5; // rdi

  *a2 = 0LL;
  result = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( result >= 0 )
  {
    v5 = (CompositionSurfaceObject *)((char *)this + 40);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v5 + 8, 0LL);
    *((_QWORD *)v5 + 2) = PsGetCurrentThreadId();
    result = 0;
    *a2 = v5;
  }
  return result;
}
