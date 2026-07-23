/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140AC8998
 * Callers:
 *     PnpGetSystemPdoList @ 0x140AC8550 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x140AC8980 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
