/*
 * XREFs of ??_ECBaseObject@@UEAAPEAXI@Z @ 0x18006B210
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseObject@@UEAA@XZ @ 0x18001BD1C (--1CBaseObject@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CBaseObject *__fastcall CBaseObject::`vector deleting destructor'(CBaseObject *this, char a2)
{
  CBaseObject::~CBaseObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
