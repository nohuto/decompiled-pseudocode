/*
 * XREFs of ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x1800E12A0
 * Callers:
 *     ??_ECRadialGradientBrush@@WJI@EAAPEAXI@Z @ 0x180246490 (--_ECRadialGradientBrush@@WJI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CRadialGradientBrush@@UEAA@XZ @ 0x1800E12EC (--1CRadialGradientBrush@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::`scalar deleting destructor'(
        CRadialGradientBrush *this,
        char a2)
{
  CRadialGradientBrush::~CRadialGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 288LL);
    else
      operator delete(this);
  }
  return this;
}
