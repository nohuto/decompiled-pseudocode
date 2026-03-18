/*
 * XREFs of ??_ECFlipExSwapchainStatistics@@MEAAPEAXI@Z @ 0x1801C8600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CFlipExSwapchainStatistics *__fastcall CFlipExSwapchainStatistics::`vector deleting destructor'(
        CFlipExSwapchainStatistics *this,
        char a2)
{
  *(_QWORD *)this = &CFlipExSwapchainStatistics::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
