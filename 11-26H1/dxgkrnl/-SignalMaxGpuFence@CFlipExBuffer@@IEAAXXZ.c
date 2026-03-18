/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14004E450
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1400A3C60 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this + 46);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 45);
    if ( v2 )
      DxgkImmediateSignalSynchronizationObjectByReference(v2, v1);
  }
}
