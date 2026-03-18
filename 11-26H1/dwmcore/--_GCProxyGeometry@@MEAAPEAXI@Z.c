/*
 * XREFs of ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x1801B8C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801B8CAC (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CProxyGeometry *__fastcall CProxyGeometry::`scalar deleting destructor'(CProxyGeometry *this, char a2)
{
  CProxyGeometry::~CProxyGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 152LL);
    else
      operator delete(this);
  }
  return this;
}
