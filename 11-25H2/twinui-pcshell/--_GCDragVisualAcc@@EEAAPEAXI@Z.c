/*
 * XREFs of ??_GCDragVisualAcc@@EEAAPEAXI@Z @ 0x1805262B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1CDragVisualAcc@@EEAA@XZ @ 0x1805260EC (--1CDragVisualAcc@@EEAA@XZ.c)
 */

CDragVisualAcc *__fastcall CDragVisualAcc::`scalar deleting destructor'(CDragVisualAcc *this, char a2)
{
  CDragVisualAcc::~CDragVisualAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
