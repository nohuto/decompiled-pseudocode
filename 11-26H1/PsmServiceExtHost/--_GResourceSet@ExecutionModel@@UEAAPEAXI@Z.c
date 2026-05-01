/*
 * XREFs of ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18002C900
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x18002C938 (--1ResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18006EED4 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::`scalar deleting destructor'(
        ExecutionModel::ResourceSet *this,
        char a2)
{
  ExecutionModel::ResourceSet::~ResourceSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
