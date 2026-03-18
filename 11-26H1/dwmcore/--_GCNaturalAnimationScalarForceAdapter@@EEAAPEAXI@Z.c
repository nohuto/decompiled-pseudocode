/*
 * XREFs of ??_GCNaturalAnimationScalarForceAdapter@@EEAAPEAXI@Z @ 0x18027B350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CNaturalAnimationScalarForceAdapter@@EEAA@XZ @ 0x18028ECFC (--1CNaturalAnimationScalarForceAdapter@@EEAA@XZ.c)
 */

CNaturalAnimationScalarForceAdapter *__fastcall CNaturalAnimationScalarForceAdapter::`scalar deleting destructor'(
        CNaturalAnimationScalarForceAdapter *this,
        char a2)
{
  CNaturalAnimationScalarForceAdapter::~CNaturalAnimationScalarForceAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
