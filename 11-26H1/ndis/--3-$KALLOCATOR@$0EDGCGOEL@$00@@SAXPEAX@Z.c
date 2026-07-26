/*
 * XREFs of ??3?$KALLOCATOR@$0EDGCGOEL@$00@@SAXPEAX@Z @ 0x14014FD60
 * Callers:
 *     ??_GInterfaceProfileKnobCollection@@UEAAPEAXI@Z @ 0x14014FD90 (--_GInterfaceProfileKnobCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KALLOCATOR<1130524235,1>::operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x43626E4Bu);
}
