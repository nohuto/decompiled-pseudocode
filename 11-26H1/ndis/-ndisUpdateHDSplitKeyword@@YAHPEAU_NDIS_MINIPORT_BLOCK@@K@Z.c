/*
 * XREFs of ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400C2D5C
 * Callers:
 *     ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF5A0 (-ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(struct _NDIS_MINIPORT_BLOCK *a1, ULONG a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  int Status; // [rsp+40h] [rbp-49h] BYREF
  PVOID ConfigurationHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v12[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]

  ConfigurationHandle = 0LL;
  v13 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCEu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = (wchar_t *)v12;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v5 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v5 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0xBu,
      0xCFu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2,
      v5);
  return v5;
}
