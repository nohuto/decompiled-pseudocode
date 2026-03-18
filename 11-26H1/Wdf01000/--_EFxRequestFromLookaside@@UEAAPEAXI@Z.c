/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x140094AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(FxRequestBase *this, char a2)
{
  FxRequestBase::~FxRequestBase(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
