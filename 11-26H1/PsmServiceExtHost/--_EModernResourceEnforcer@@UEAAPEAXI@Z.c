/*
 * XREFs of ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x18007F830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18006EED4 (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceEnforcer@@UEAA@XZ @ 0x18007F7E0 (--1ModernResourceEnforcer@@UEAA@XZ.c)
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::`vector deleting destructor'(
        ModernResourceEnforcer *this,
        char a2)
{
  ModernResourceEnforcer::~ModernResourceEnforcer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
