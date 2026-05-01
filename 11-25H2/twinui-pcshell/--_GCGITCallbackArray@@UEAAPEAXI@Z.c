/*
 * XREFs of ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x18008BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGITCallbackArray@@UEAA@XZ @ 0x18008BEE8 (--1CGITCallbackArray@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

CGITCallbackArray *__fastcall CGITCallbackArray::`scalar deleting destructor'(CGITCallbackArray *this, char a2)
{
  CGITCallbackArray::~CGITCallbackArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
