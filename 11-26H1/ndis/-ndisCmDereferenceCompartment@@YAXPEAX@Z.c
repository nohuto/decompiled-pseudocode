/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1400D2974
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140146684 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D092C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

void __fastcall ndisCmDereferenceCompartment(_DWORD *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
