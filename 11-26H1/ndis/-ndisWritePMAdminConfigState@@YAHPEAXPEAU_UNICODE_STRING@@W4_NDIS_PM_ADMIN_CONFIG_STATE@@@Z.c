/*
 * XREFs of ?ndisWritePMAdminConfigState@@YAHPEAXPEAU_UNICODE_STRING@@W4_NDIS_PM_ADMIN_CONFIG_STATE@@@Z @ 0x1400B9610
 * Callers:
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B55F0 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B93A4 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 * Callees:
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisWritePMAdminConfigState(
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        enum _NDIS_PM_ADMIN_CONFIG_STATE a3)
{
  wchar_t *v3; // rax
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF

  *(_QWORD *)&ParameterValue.ParameterType = 2LL;
  Status = 0;
  *(_QWORD *)&ParameterValue.ParameterData.IntegerData = 262146LL;
  v3 = L"1";
  if ( a3 != NdisPMAdminConfigEnabled )
    v3 = (wchar_t *)L"0";
  ParameterValue.ParameterData.StringData.Buffer = v3;
  NdisWriteConfiguration(&Status, ConfigurationHandle, Keyword, &ParameterValue);
  return (unsigned int)Status;
}
