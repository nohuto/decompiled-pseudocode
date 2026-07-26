/*
 * XREFs of ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400E10E0
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400692F0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisIovReadSwitchConfiguration(
        NDIS_HANDLE ConfigurationHandle,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2)
{
  bool v2; // cf
  unsigned int v5; // edx
  PNDIS_CONFIGURATION_PARAMETER v6; // rdx
  unsigned __int16 Length; // ax
  int Status; // [rsp+48h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+50h] [rbp+20h] BYREF

  v2 = *((_BYTE *)a2 + 1) == 0;
  Status = 0;
  ParameterValue = 0LL;
  if ( v2 || *((_WORD *)a2 + 1) < 0x224u )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchFlagsStr, NdisParameterInteger);
    v5 = Status;
    if ( !Status )
    {
      *((_DWORD *)a2 + 1) = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchTypeStr, NdisParameterInteger);
      v5 = Status;
      if ( !Status )
      {
        *((_DWORD *)a2 + 2) = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchIdStr, NdisParameterInteger);
        v5 = Status;
        if ( !Status )
        {
          *((_DWORD *)a2 + 3) = ParameterValue->ParameterData.IntegerData;
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchNameStr, NdisParameterString);
          v5 = Status;
          if ( !Status )
          {
            v6 = ParameterValue;
            Length = ParameterValue->ParameterData.StringData.Length;
            if ( Length <= 0x200u )
            {
              *((_WORD *)a2 + 8) = Length;
              memmove((char *)a2 + 18, v6->ParameterData.StringData.Buffer, v6->ParameterData.StringData.Length);
              NdisReadConfiguration(
                &Status,
                &ParameterValue,
                ConfigurationHandle,
                &NicSwitchNumVFsStr,
                NdisParameterInteger);
              v5 = Status;
              if ( !Status )
                *((_DWORD *)a2 + 133) = ParameterValue->ParameterData.IntegerData;
            }
            else
            {
              return (unsigned int)-1073741811;
            }
          }
        }
      }
    }
  }
  return v5;
}
