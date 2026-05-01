/*
 * XREFs of ??_ECTempAppVisualArray@@UEAAPEAXI@Z @ 0x1805455E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1CTempAppVisualArray@@UEAA@XZ @ 0x180545560 (--1CTempAppVisualArray@@UEAA@XZ.c)
 */

CTempAppVisualArray *__fastcall CTempAppVisualArray::`vector deleting destructor'(CTempAppVisualArray *this, char a2)
{
  CTempAppVisualArray::~CTempAppVisualArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
