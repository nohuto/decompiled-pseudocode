/*
 * XREFs of ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143EF0
 * Callers:
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014427C (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadNicAutoPowerSaverTimeoutKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int IntegerData; // ebx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+88h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+90h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ParameterValue = 0LL;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.Flags = 0;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x29u,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        v2,
        a1);
    *((_DWORD *)a1->SelectiveSuspend + 2) = 3000;
  }
  else
  {
    IntegerData = 3;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &NicAutoPowerSaverTimeoutStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    *((_DWORD *)a1->SelectiveSuspend + 2) = 1000 * IntegerData;
  }
}
