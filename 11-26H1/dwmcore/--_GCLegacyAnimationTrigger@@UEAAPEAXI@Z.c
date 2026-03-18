/*
 * XREFs of ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x1802469B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x180245FE0 (--1CLegacyAnimationTrigger@@UEAA@XZ.c)
 */

CLegacyAnimationTrigger *__fastcall CLegacyAnimationTrigger::`scalar deleting destructor'(
        CLegacyAnimationTrigger *this,
        char a2)
{
  CLegacyAnimationTrigger::~CLegacyAnimationTrigger(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
