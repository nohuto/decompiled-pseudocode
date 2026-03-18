/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x140067530
 * Callers:
 *     ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1400A3290 (-PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400265E0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x140067720 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 *     ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1400A34C0 (-QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  int Stats; // ebx
  __int64 v5; // rcx
  CCompositionBuffer *ActiveBuffer; // rax

  Stats = -1073741823;
  if ( (unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
    memset(a2, 0, 0x50uLL);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
    Stats = (*(__int64 (__fastcall **)(__int64, struct CSM_BUFFER_STATISTICS *))(*(_QWORD *)v5 + 48LL))(v5, a2);
  if ( !*((_QWORD *)this + 19) || Stats == -1073741637 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      Stats = CCompositionBuffer::QueryStats(ActiveBuffer, a2);
  }
  if ( Stats < 0 && !(unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
    memset(a2, 0, 0x50uLL);
  return (unsigned int)Stats;
}
