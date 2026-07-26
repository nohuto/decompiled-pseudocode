/*
 * XREFs of ??_GInterfaceProfileKnobCollection@@UEAAPEAXI@Z @ 0x14014FD90
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$KALLOCATOR@$0EDGCGOEL@$00@@SAXPEAX@Z @ 0x14014FD60 (--3-$KALLOCATOR@$0EDGCGOEL@$00@@SAXPEAX@Z.c)
 */

InterfaceProfileKnobCollection *__fastcall InterfaceProfileKnobCollection::`scalar deleting destructor'(
        InterfaceProfileKnobCollection *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    KALLOCATOR<1130524235,1>::operator delete(this);
  return this;
}
