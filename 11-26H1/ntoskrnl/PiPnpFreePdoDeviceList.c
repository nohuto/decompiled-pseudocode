/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140AC6DA8
 * Callers:
 *     PnpGetSystemPdoList @ 0x140AC6960 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x140AC6D90 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObjectWithTag(P[i + 1], 0x6C706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
