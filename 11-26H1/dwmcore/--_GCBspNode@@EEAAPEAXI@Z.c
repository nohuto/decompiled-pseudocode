/*
 * XREFs of ??_GCBspNode@@EEAAPEAXI@Z @ 0x18019DF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CBspNode@@EEAA@XZ @ 0x18019DF7C (--1CBspNode@@EEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CBspNode *__fastcall CBspNode::`scalar deleting destructor'(CBspNode *this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 64LL);
    else
      operator delete(this);
  }
  return this;
}
