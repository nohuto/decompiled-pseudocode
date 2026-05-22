/*
 * XREFs of ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x18010FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 *     ??1SipcEndpoint@@EEAA@XZ @ 0x18010F8BC (--1SipcEndpoint@@EEAA@XZ.c)
 */

SipcEndpoint *__fastcall SipcEndpoint::`scalar deleting destructor'(SipcEndpoint *this, char a2)
{
  SipcEndpoint::~SipcEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
