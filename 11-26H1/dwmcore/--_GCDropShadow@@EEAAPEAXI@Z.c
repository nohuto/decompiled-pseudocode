/*
 * XREFs of ??_GCDropShadow@@EEAAPEAXI@Z @ 0x1801C87F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CDropShadow@@EEAA@XZ @ 0x1801C883C (--1CDropShadow@@EEAA@XZ.c)
 */

CDropShadow *__fastcall CDropShadow::`scalar deleting destructor'(CDropShadow *this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
