/*
 * XREFs of ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400CF53C (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 *     ndisNsiChangeNetworkInfo @ 0x1400D30C4 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D3970 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D3EE0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COMPARTMENTBLOCK_DECREMENT_REF(struct _NDIS_IF_COMPARTMENT_BLOCK *a1)
{
  struct _KEVENT *v1; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 11, 0xFFFFFFFF) == 1 )
  {
    v1 = (struct _KEVENT *)*((_QWORD *)a1 + 214);
    if ( v1 )
      KeSetEvent(v1, 0, 0);
  }
}
