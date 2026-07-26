/*
 * XREFs of ??_GKModule@@QEAAPEAXI@Z @ 0x1401480D4
 * Callers:
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x14016A9D0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 * Callees:
 *     ??1KModule@@QEAA@XZ @ 0x140148080 (--1KModule@@QEAA@XZ.c)
 *     ??3?$KALLOCATOR@$0GCGJEMEO@$00@@SAXPEAX@Z @ 0x1401480AC (--3-$KALLOCATOR@$0GCGJEMEO@$00@@SAXPEAX@Z.c)
 */

void **__fastcall KModule::`scalar deleting destructor'(void **this, char a2)
{
  KModule::~KModule(this);
  if ( (a2 & 1) != 0 )
    KALLOCATOR<1651067982,1>::operator delete(this);
  return this;
}
