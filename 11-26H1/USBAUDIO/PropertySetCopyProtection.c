/*
 * XREFs of PropertySetCopyProtection @ 0x1400336F8
 * Callers:
 *     PropertyDrmAudioStream_SetContentId @ 0x140032280 (PropertyDrmAudioStream_SetContentId.c)
 * Callees:
 *     WalkConnectionsToTerminal @ 0x140033E50 (WalkConnectionsToTerminal.c)
 */

__int64 __fastcall PropertySetCopyProtection(PIRP Irp, __int64 a2)
{
  PKSFILTER FilterFromIrp; // rbx
  PKSPIN PinFromIrp; // rax
  __int64 v6; // r9
  PKSPIN v7; // r15
  ULONG v8; // edi
  ULONG ConnectionsCount; // esi
  const KSTOPOLOGY_CONNECTION *Connections; // rbp
  const KSTOPOLOGY_CONNECTION *v11; // rbx

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  PinFromIrp = KsGetPinFromIrp(Irp);
  v6 = 0LL;
  v7 = PinFromIrp;
  if ( FilterFromIrp )
  {
    v8 = 0;
    ConnectionsCount = FilterFromIrp->Descriptor->ConnectionsCount;
    Connections = FilterFromIrp->Descriptor->Connections;
    if ( ConnectionsCount )
    {
      v11 = FilterFromIrp->Descriptor->Connections;
      do
      {
        if ( v11->FromNode == -1 )
        {
          if ( v11->FromNodePin == v7->Id )
            LODWORD(v6) = WalkConnectionsToTerminal(Irp, &Connections[v8], a2, v6);
          if ( (int)v6 < 0 )
            break;
        }
        ++v8;
        ++v11;
      }
      while ( v8 < ConnectionsCount );
    }
  }
  return (unsigned int)v6;
}
