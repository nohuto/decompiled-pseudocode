/*
 * XREFs of ??_ELinearInterpolation@@UEAAPEAXI@Z @ 0x18018CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

LinearInterpolation *__fastcall LinearInterpolation::`vector deleting destructor'(LinearInterpolation *this, char a2)
{
  HANDLE ProcessHeap; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 24LL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
      return this;
    }
  }
  return this;
}
