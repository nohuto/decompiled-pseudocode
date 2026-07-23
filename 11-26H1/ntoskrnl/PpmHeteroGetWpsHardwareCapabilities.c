/*
 * XREFs of PpmHeteroGetWpsHardwareCapabilities @ 0x140516E88
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroReadWpsConfigurationFromPlatform @ 0x14060E690 (PpmHeteroReadWpsConfigurationFromPlatform.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 */

_DWORD *__fastcall PpmHeteroGetWpsHardwareCapabilities(
        unsigned int a1,
        int a2,
        _BYTE *a3,
        _BYTE *a4,
        _DWORD *a5,
        _BYTE *a6,
        _DWORD *a7)
{
  __int64 Prcb; // rax
  int v12; // ebx
  __int64 v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rax
  _DWORD *result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // dl
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  char v27; // al

  Prcb = KeGetPrcb(a1);
  v12 = 0;
  v13 = Prcb;
  if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
  {
    v14 = *(_DWORD *)(PpmHeteroCapabilitySimulation
                    + 4LL * (a2 + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * a1)
                    + 48);
    *a3 = v14;
    LODWORD(v15) = v14 >> 8;
LABEL_4:
    *a4 = v15;
    goto LABEL_5;
  }
  if ( PpmHeteroHgsVendor == 2 )
  {
    v17 = PpmHeteroHgsTableEntry;
    v15 = PpmHeteroHgsCapabilityBits * a2 + (unsigned int)*(unsigned __int16 *)(Prcb + 35418);
    *a3 = *(_BYTE *)(v15 + PpmHeteroHgsTableEntry + 1);
    LOBYTE(v15) = *(_BYTE *)((unsigned int)v15 + v17);
    goto LABEL_4;
  }
  if ( PpmHeteroHgsVendor == 1 )
  {
    v18 = PpmHeteroHgsTableEntry;
    v19 = (unsigned int)(4 * PpmHeteroHgsCapabilityBits * a2) + (unsigned __int64)*(unsigned __int16 *)(Prcb + 35418);
    *a3 = *(_BYTE *)(PpmHeteroHgsTableEntry + v19);
    *a4 = *(_BYTE *)(v18 + v19 + 4);
    if ( !(unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
    {
      *a5 = 0;
      result = a6;
      *a6 = 0;
      return result;
    }
    if ( PpmHeteroWpsParkingTableEntry )
    {
      v20 = *(unsigned __int16 *)(v13 + 35450);
      v12 = *(unsigned __int16 *)(PpmHeteroWpsParkingTableEntry + v20 + 2);
      v21 = *(_BYTE *)(PpmHeteroWpsParkingTableEntry + v20 + 1);
      v22 = *(unsigned __int8 *)(PpmHeteroWpsParkingTableEntry + v20);
    }
    else
    {
      v21 = 0;
      v22 = 0;
    }
    *a5 = v22;
    *a6 = v21;
LABEL_6:
    result = a7;
    *a7 = v12;
    return result;
  }
  if ( PpmHeteroHgsVendor != 3 )
  {
    *a3 = 1;
    *a4 = 1;
LABEL_5:
    *a5 = 0;
    *a6 = 0;
    result = (_DWORD *)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline();
    if ( !(_DWORD)result )
      return result;
    goto LABEL_6;
  }
  v23 = PpmHeteroHgsTableEntry;
  v24 = *(unsigned __int16 *)(Prcb + 35418);
  v25 = *(unsigned __int16 *)(Prcb + 35450);
  v26 = PpmHeteroWpsParkingTableEntry;
  *a3 = *(_BYTE *)(PpmHeteroHgsTableEntry + v24);
  v27 = *(_BYTE *)(v23 + v24 + 1);
  LODWORD(v23) = *(_DWORD *)(v26 + v25);
  *a4 = v27;
  *a5 = v23;
  *a6 = *(_BYTE *)(v26 + v25 + 8);
  result = (_DWORD *)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    result = a7;
    *a7 = *(_DWORD *)(v26 + v25 + 4);
  }
  return result;
}
