/*
 * XREFs of ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x180549330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1CPlaceModeButtonAcc@@MEAA@XZ @ 0x180549214 (--1CPlaceModeButtonAcc@@MEAA@XZ.c)
 */

CPlaceModeButtonAcc *__fastcall CPlaceModeButtonAcc::`scalar deleting destructor'(CPlaceModeButtonAcc *this, char a2)
{
  CPlaceModeButtonAcc::~CPlaceModeButtonAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
