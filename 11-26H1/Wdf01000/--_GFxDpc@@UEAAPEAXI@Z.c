/*
 * XREFs of ??_GFxDpc@@UEAAPEAXI@Z @ 0x14003AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x14003AEC8 (--1FxDpc@@UEAA@XZ.c)
 */

FxDpc *__fastcall FxDpc::`scalar deleting destructor'(FxDpc *this, char a2)
{
  FxDpc::~FxDpc(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
