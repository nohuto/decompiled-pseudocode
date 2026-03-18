/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x14004E480
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1400A3C60 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x140045DC0 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::ReleasePendingPresentLimits(CFlipExBuffer *this)
{
  LONG v1; // edx
  struct _KSEMAPHORE *v3; // rcx

  v1 = *((_DWORD *)this + 88);
  if ( v1 > 0 )
  {
    v3 = (struct _KSEMAPHORE *)*((_QWORD *)this + 43);
    if ( v3 )
      SignalPresentLimitSemaphore(v3, v1);
    *((_DWORD *)this + 88) = 0;
  }
}
