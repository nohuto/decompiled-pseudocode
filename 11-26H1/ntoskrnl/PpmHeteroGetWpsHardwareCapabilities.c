/*
 * XREFs of PpmHeteroGetWpsHardwareCapabilities @ 0x1404D8A58
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 */

_BYTE *__fastcall PpmHeteroGetWpsHardwareCapabilities(
        unsigned int a1,
        int a2,
        _BYTE *a3,
        _BYTE *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 Prcb; // rax
  int v11; // r10d
  __int64 v12; // rcx
  char v13; // r9
  _BYTE *result; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  char v19; // r8
  __int64 v20; // rcx

  Prcb = KeGetPrcb(a1);
  v11 = 0;
  if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
  {
    v15 = *(_DWORD *)(PpmHeteroCapabilitySimulation
                    + 4LL * (a2 + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * a1)
                    + 24);
    *a3 = v15;
    LODWORD(Prcb) = v15 >> 8;
  }
  else
  {
    switch ( PpmHeteroHgsVendor )
    {
      case 2:
        v12 = PpmHeteroHgsTableEntry;
        Prcb = PpmHeteroHgsCapabilityBits * a2 + (unsigned int)*(unsigned __int16 *)(Prcb + 35418);
        *a3 = *(_BYTE *)(Prcb + PpmHeteroHgsTableEntry + 1);
        LOBYTE(Prcb) = *(_BYTE *)((unsigned int)Prcb + v12);
        break;
      case 1:
        v16 = PpmHeteroHgsTableEntry;
        v17 = (unsigned int)(4 * PpmHeteroHgsCapabilityBits * a2)
            + (unsigned __int64)*(unsigned __int16 *)(Prcb + 35418);
        *a3 = *(_BYTE *)(PpmHeteroHgsTableEntry + v17);
        LOBYTE(Prcb) = *(_BYTE *)(v16 + v17 + 4);
        break;
      case 3:
        v18 = *(unsigned __int16 *)(Prcb + 35418);
        v19 = *(_BYTE *)(PpmHeteroHgsTableEntry + v18 + 1);
        v20 = *(unsigned __int16 *)(Prcb + 35450);
        *a3 = *(_BYTE *)(PpmHeteroHgsTableEntry + v18);
        v13 = *(_BYTE *)(PpmHeteroWpsParkingTableEntry + v20 + 8);
        v11 = *(_DWORD *)(PpmHeteroWpsParkingTableEntry + v20);
        LOBYTE(Prcb) = v19;
        goto LABEL_5;
      default:
        *a3 = 1;
        LOBYTE(Prcb) = 1;
        break;
    }
  }
  v13 = 0;
LABEL_5:
  *a4 = Prcb;
  *a5 = v11;
  result = a6;
  *a6 = v13;
  return result;
}
