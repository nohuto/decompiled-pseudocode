/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1400672C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x140045DC0 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(CFlipExBuffer *this)
{
  struct _KSEMAPHORE *v2; // rcx

  if ( *((int *)this + 88) > 0 )
  {
    v2 = (struct _KSEMAPHORE *)*((_QWORD *)this + 43);
    if ( v2 )
      SignalPresentLimitSemaphore(v2, 1);
    --*((_DWORD *)this + 88);
  }
}
