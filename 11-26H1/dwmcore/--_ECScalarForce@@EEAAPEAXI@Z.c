/*
 * XREFs of ??_ECScalarForce@@EEAAPEAXI@Z @ 0x18028E730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CScalarForce@@EEAA@XZ @ 0x1801DB880 (--1CScalarForce@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CScalarForce *__fastcall CScalarForce::`vector deleting destructor'(CScalarForce *this, char a2)
{
  CScalarForce::~CScalarForce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
