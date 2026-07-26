/*
 * XREFs of ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085090
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // ebx
  int v5; // esi
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // esi
  int v11; // esi
  unsigned int v12; // esi
  int v13; // esi
  unsigned int v14; // eax
  int v15; // esi
  unsigned int v16; // esi
  int v17; // esi
  unsigned int v18; // eax
  unsigned int Value; // ecx
  int Status; // [rsp+58h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  Status = 0;
  ParameterValue = 0LL;
  v5 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &WakeOnPatternStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v5) = ParameterValue->ParameterData.IntegerData != 0;
    ++v5;
  }
  v6 = a2->PMAdminConfig.Value & 0xFFFFFFFC;
  Status = 0;
  ParameterValue = 0LL;
  a2->PMAdminConfig.Value = v5 | v6;
  v7 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &WakeOnMagicPacketStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v7) = ParameterValue->ParameterData.IntegerData != 0;
    ++v7;
  }
  v8 = a2->PMAdminConfig.Value & 0xFFFFFFF3;
  Status = 0;
  ParameterValue = 0LL;
  a2->PMAdminConfig.Value = v8 | (4 * v7);
  v9 = 0;
  NdisReadConfiguration(
    &Status,
    &ParameterValue,
    ConfigurationHandle,
    &DeviceSleepOnDisconnectStr,
    NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v9) = ParameterValue->ParameterData.IntegerData != 0;
    ++v9;
  }
  v10 = a2->PMAdminConfig.Value & 0xFFFFFFCF | (16 * v9);
  Status = 0;
  a2->PMAdminConfig.Value = v10;
  ParameterValue = 0LL;
  v11 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &PMARPOffloadStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v11) = ParameterValue->ParameterData.IntegerData != 0;
    ++v11;
  }
  v12 = a2->PMAdminConfig.Value & 0xFFFFFF3F | (v11 << 6);
  Status = 0;
  a2->PMAdminConfig.Value = v12;
  ParameterValue = 0LL;
  v13 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &PMNSOffloadStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v13) = ParameterValue->ParameterData.IntegerData != 0;
    ++v13;
  }
  v14 = (v13 << 8) | a2->PMAdminConfig.Value & 0xFFFFFCFF;
  Status = 0;
  a2->PMAdminConfig.Value = v14;
  ParameterValue = 0LL;
  v15 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &PMWiFiRekeyOffloadStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v15) = ParameterValue->ParameterData.IntegerData != 0;
    ++v15;
  }
  v16 = a2->PMAdminConfig.Value & 0xFFFFF3FF | (v15 << 10);
  Status = 0;
  a2->PMAdminConfig.Value = v16;
  ParameterValue = 0LL;
  v17 = 0;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SelectiveSuspendStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v17) = ParameterValue->ParameterData.IntegerData != 0;
    ++v17;
  }
  v18 = (v17 << 12) | a2->PMAdminConfig.Value & 0xFFFFCFFF;
  Status = 0;
  a2->PMAdminConfig.Value = v18;
  ParameterValue = 0LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicAutoPowerSaverStr, NdisParameterInteger);
  if ( !Status )
  {
    LOBYTE(v2) = ParameterValue->ParameterData.IntegerData != 0;
    ++v2;
  }
  a2->PMAdminConfig.Value = (v2 << 14) | a2->PMAdminConfig.Value & 0xFFFF3FFF;
  if ( (a2->Flags & 0x80u) != 0 && (a2->Flags & 0x100) == 0 )
    a2->PMAdminConfig.Value = a2->PMAdminConfig.Value & 0xFFFFCFFF | 0x2000;
  Value = a2->PMAdminConfig.Value;
  if ( (Value & 0xC000) != 0 )
    a2->PMAdminConfig.Value = Value ^ ((unsigned __int16)Value ^ (unsigned __int16)(Value >> 2)) & 0x3000;
}
