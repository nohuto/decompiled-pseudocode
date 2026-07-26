/*
 * XREFs of ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400692F0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     NdisOpenConfigurationKeyByName @ 0x140060880 (NdisOpenConfigurationKeyByName.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0A04 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0EE8 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400E10E0 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140148D50 (-ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  PVOID v3; // rsi
  PVOID v4; // r14
  char v5; // r15
  const struct _GUID *v6; // rdx
  struct _GUID *v7; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  unsigned int v10; // eax
  PVOID v11; // rcx
  struct _NDIS_VPORT_BLOCK *v12; // r12
  NDIS_STATUS SwitchConfiguration; // eax
  unsigned int MaxNumVFs; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v15; // r9
  __int64 v16; // r9
  int v17; // eax
  int v18; // r8d
  PVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  int Status[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID SubKeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[248]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v27[4]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v28[140]; // [rsp+190h] [rbp+90h] BYREF

  v2 = 0;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = 0LL;
  memset(v28, 0, 552);
  v4 = 0LL;
  memset(v26, 0, sizeof(v26));
  v5 = 0;
  v20 = 0LL;
  memset(v27, 0, 12);
  P = 0LL;
  *(_QWORD *)Status = 0LL;
  v6 = &WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v6,
      26,
      10,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(a1->TopNicSwitchCurrentCapabilities) )
  {
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
        if ( !NicSwitchCurrentCapabilities
          || NicSwitchCurrentCapabilities->Header.Revision < 2u
          || NicSwitchCurrentCapabilities->Header.Size < 0x74u
          || !NicSwitchCurrentCapabilities->MaxNumSwitches )
        {
          v2 = -1073741637;
          goto LABEL_36;
        }
        v10 = ndisIovInitializeNicSwitch(
                a1,
                (struct _NDIS_NIC_SWITCH_PARAMETERS *)v28,
                (struct _NDIS_NIC_SWITCH_BLOCK **)&v20,
                (struct _NDIS_PF_BLOCK **)&P,
                (struct _NDIS_VPORT_BLOCK **)Status);
        v11 = v20;
        v2 = v10;
        v12 = *(struct _NDIS_VPORT_BLOCK **)Status;
        if ( !v10 )
        {
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = a1;
          ConfigObject.Flags = 0;
          SwitchConfiguration = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v3 = ConfigurationHandle;
          v2 = SwitchConfiguration;
          Status[0] = SwitchConfiguration;
          if ( !SwitchConfiguration )
          {
            NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v2 = Status[0];
            v4 = SubKeyHandle;
            if ( Status[0] )
              goto LABEL_24;
            v28[0] = 36176512;
            SwitchConfiguration = ndisIovReadSwitchConfiguration(
                                    SubKeyHandle,
                                    (struct _NDIS_NIC_SWITCH_PARAMETERS *)v28);
            v2 = SwitchConfiguration;
            if ( !SwitchConfiguration )
            {
              if ( v28[2] != 1 || v28[3] )
              {
                v2 = -1073676267;
                goto LABEL_24;
              }
              MaxNumVFs = v28[133];
              v15 = a1->NicSwitchCurrentCapabilities;
              if ( v28[133] > v15->MaxNumVFs )
                MaxNumVFs = v15->MaxNumVFs;
              v28[133] = MaxNumVFs;
              v28[134] = v15->MaxNumVPorts;
              v28[135] = v15->NdisReserved7;
              v28[137] = ndisIovGetNumberOfQueuesForDefaultVPort(a1);
              v17 = *(_DWORD *)(v16 + 52);
              memset(&v26[112], 0, 136);
              v28[136] = v17 - v18;
              *(_QWORD *)&v26[104] = &ndisIntReqGeneric;
              memset(v26, 0, 104);
              *(_DWORD *)&v26[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
              EtwActivityIdControl(3u, (LPGUID)&v26[168]);
              *(_DWORD *)v26 = 15466902;
              *(_QWORD *)&v26[40] = v28;
              *(_QWORD *)&v26[4] = 12LL;
              *(_DWORD *)&v26[32] = 66103;
              *(_QWORD *)&v26[52] = 552LL;
              *(_DWORD *)&v26[48] = 552;
              SwitchConfiguration = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0, 0LL);
              v2 = SwitchConfiguration;
              if ( !SwitchConfiguration )
              {
                v5 = 1;
                SwitchConfiguration = ndisIovFinalizeNicSwitch(
                                        a1,
                                        (struct _NDIS_NIC_SWITCH_PARAMETERS *)v28,
                                        (struct _NDIS_NIC_SWITCH_BLOCK *)v20,
                                        (struct _NDIS_PF_BLOCK *)P,
                                        v12);
                v2 = SwitchConfiguration;
              }
            }
          }
          v11 = v20;
          if ( !SwitchConfiguration )
          {
LABEL_31:
            if ( v4 )
              NdisCloseConfiguration(v4);
            if ( v3 )
              NdisCloseConfiguration(v3);
            v7 = (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids;
            goto LABEL_36;
          }
        }
        if ( !v5 )
        {
LABEL_25:
          if ( v12 )
          {
            ExFreePoolWithTag(v12, 0);
            v11 = v20;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            v11 = v20;
          }
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          goto LABEL_31;
        }
        v27[0] = 786816;
        v27[2] = 0;
        memset(v26, 0, 104);
        *(_QWORD *)&v26[104] = &ndisIntReqGeneric;
        memset(&v26[112], 0, 136);
        *(_DWORD *)&v26[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
        EtwActivityIdControl(3u, (LPGUID)&v26[168]);
        *(_DWORD *)v26 = 15466902;
        *(_QWORD *)&v26[40] = v27;
        *(_DWORD *)&v26[32] = 66105;
        *(_DWORD *)&v26[48] = 12;
        *(_QWORD *)&v26[4] = 1LL;
        ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v26, 0, 0LL);
LABEL_24:
        v11 = v20;
        goto LABEL_25;
      }
    }
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0x1Au, 0xBu, v7, (char)a1, v2);
  return v2;
}
