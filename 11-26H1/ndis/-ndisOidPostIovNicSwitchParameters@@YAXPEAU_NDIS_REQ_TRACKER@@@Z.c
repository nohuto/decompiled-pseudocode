/*
 * XREFs of ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     NdisOpenConfigurationKeyByName @ 0x140060880 (NdisOpenConfigurationKeyByName.c)
 *     NdisWriteConfiguration @ 0x140067100 (NdisWriteConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  int v5; // eax
  __int64 v6; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _LIST_ENTRY *v8; // r14
  NDIS_STATUS v9; // eax
  PVOID v10; // rdi
  PVOID v11; // rsi
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  char v16[8]; // [rsp+28h] [rbp-A1h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-89h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-71h] BYREF
  __int128 v19; // [rsp+70h] [rbp-59h]
  _BYTE v20[112]; // [rsp+B0h] [rbp-19h] BYREF
  int Status; // [rsp+130h] [rbp+67h] BYREF
  PVOID ConfigurationHandle; // [rsp+138h] [rbp+6Fh] BYREF
  PVOID SubKeyHandle; // [rsp+140h] [rbp+77h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  v3 = ndisCaptureIovOidContext((__int64)v20, a1);
  v19 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x21u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 )
  {
    if ( (_BYTE)v19 )
    {
      v5 = *((_DWORD *)a1 + 10);
      if ( !v5 || v5 == -1071448016 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v6 + 12));
        v8 = SwitchBySwitchId;
        if ( SwitchBySwitchId )
        {
          if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
          {
            LODWORD(SwitchBySwitchId[39].Blink) = *(_DWORD *)(v6 + 532);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v16 = *(_DWORD *)(v6 + 532);
              WPP_RECORDER_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x1Au,
                0x22u,
                (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
                *(_QWORD *)v16);
            }
          }
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v4;
          ConfigObject.Flags = 0;
          v9 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v10 = ConfigurationHandle;
          Status = v9;
          if ( !v9 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v11 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v6 + 4) & 0x10000) != 0 )
            {
              v12 = 4LL;
              v13 = (_OWORD *)((char *)&v8[7].Flink + 4);
              v14 = (_OWORD *)(v6 + 16);
              do
              {
                *v13 = *v14;
                v13[1] = v14[1];
                v13[2] = v14[2];
                v13[3] = v14[3];
                v13[4] = v14[4];
                v13[5] = v14[5];
                v13[6] = v14[6];
                v13 += 8;
                v15 = v14[7];
                v14 += 8;
                *(v13 - 1) = v15;
                --v12;
              }
              while ( v12 );
              *(_DWORD *)v13 = *(_DWORD *)v14;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v6 + 18);
              ParameterValue.ParameterData.StringData.Length = *(_WORD *)(v6 + 16);
              ParameterValue.ParameterData.StringData.MaximumLength = *(_WORD *)(v6 + 16) + 2;
              NdisWriteConfiguration(&Status, v11, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v11 )
              NdisCloseConfiguration(v11);
          }
          if ( v10 )
            NdisCloseConfiguration(v10);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x23u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
