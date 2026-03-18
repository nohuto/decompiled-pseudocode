/*
 * XREFs of ??_ECContentResource@@UEAAPEAXI@Z @ 0x1400593B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContentResource@@UEAA@XZ @ 0x1400593F4 (--1CContentResource@@UEAA@XZ.c)
 */

CContentResource *__fastcall CContentResource::`vector deleting destructor'(CContentResource *P, char a2)
{
  CContentResource::~CContentResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
