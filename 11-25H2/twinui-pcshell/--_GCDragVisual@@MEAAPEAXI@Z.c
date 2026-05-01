/*
 * XREFs of ??_GCDragVisual@@MEAAPEAXI@Z @ 0x18051DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x18051DA5C (--1CDragVisual@@MEAA@XZ.c)
 */

CDragVisual *__fastcall CDragVisual::`scalar deleting destructor'(CDragVisual *this, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CDragVisual::~CDragVisual(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
