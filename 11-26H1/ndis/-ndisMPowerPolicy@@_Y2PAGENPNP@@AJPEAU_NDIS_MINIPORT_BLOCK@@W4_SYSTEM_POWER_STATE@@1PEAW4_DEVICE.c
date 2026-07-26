/*
 * XREFs of ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140178170
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082980 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140177D10 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x140052710 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1400ABAB4 (ndisWdmSendOidPmParametersForSx.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1401647C0 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisMPowerPolicy(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3,
        enum _DEVICE_POWER_STATE *a4,
        unsigned __int8 a5)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // esi
  unsigned int v6; // r12d
  __int64 v7; // rdi
  enum _DEVICE_POWER_STATE v10; // r14d
  struct _GUID *v11; // rdx
  __int64 EnabledWoLPacketPatterns; // rcx
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax
  int v14; // r9d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  int v16; // r9d
  unsigned int PnPFlags; // eax
  int v19; // edx
  __int64 v20; // rcx
  struct _GUID *v21; // [rsp+20h] [rbp-E0h]
  char v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  _BYTE v27[248]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v28[6]; // [rsp+150h] [rbp+50h] BYREF

  MinMagicPacketWakeUp = NdisDeviceStateUnspecified;
  v6 = 0;
  v7 = a2;
  memset(v28, 0, 20);
  v10 = PowerDeviceD3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x79u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      a2);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  if ( (_DWORD)v7 == 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 8), 4, 14, 122, v11, (char)a1);
    if ( byte_14011D043 < 0 )
    {
      LODWORD(v24) = 65537;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerShutdownMiniport,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v24);
    }
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        123,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    return 0LL;
  }
  if ( (_DWORD)v7 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 8), 4, 14, 124, v11, (char)a1);
    if ( byte_14011D043 < 0 )
    {
      LODWORD(v24) = 65538;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerWakeUpDevice,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v24);
    }
    if ( !a5 )
    {
      a1->PnPFlags &= ~0x800u;
      a1->TotalSystemSleepTimeMs += ndisGetTimeInterval(&a1->LastSystemSleepTime);
    }
    *a4 = PowerDeviceD0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        125,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    return 0LL;
  }
  if ( !a5 )
  {
    a1->PnPFlags |= 0x800u;
    a1->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (a1->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(a1) || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        14,
        126,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(v24) = 65537;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicySetD3,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v24);
    }
    *a4 = PowerDeviceD3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v22 = (char)a1;
    v14 = 127;
    goto LABEL_132;
  }
  CurrentDevicePowerState = a1->CurrentDevicePowerState;
  if ( CurrentDevicePowerState != PowerDeviceD1 && (unsigned int)(CurrentDevicePowerState - 3) > 1 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      if ( a3 == PowerSystemShutdown )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v14 = 129;
        goto LABEL_34;
      }
      if ( ndisAoAcCapable || ndisAoAcTest )
      {
        if ( !a5 )
        {
          a1->PnPFlags &= ~0x400u;
          ndisCancelWaitWake(a1);
        }
        *a4 = PowerDeviceD3;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v14 = 130;
LABEL_34:
        v22 = (char)a1;
LABEL_132:
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          14,
          v14,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          v22);
        return 0LL;
      }
    }
    if ( (a1->PnPFlags & 0x40) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = 0;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x83u,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1,
          v24);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v24) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerWakeNotEnabled,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v24);
      }
      goto LABEL_107;
    }
    LODWORD(v11) = a1->DeviceCaps.DeviceState[v7];
    if ( (int)v7 >= 5 && ((int)v7 > a1->DeviceCaps.SystemWake || (int)v11 > a1->DeviceCaps.DeviceWake) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          14,
          132,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v24) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerHibernateOrShutdown,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v24);
      }
      goto LABEL_107;
    }
    EnabledWoLPacketPatterns = a1->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (EnabledWoLPacketPatterns & 2) != 0 && a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
      MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
    if ( (EnabledWoLPacketPatterns & 0xFFFFFFFD) != 0
      && (MinPatternWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp) != NdisDeviceStateUnspecified )
    {
      if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp )
        MinMagicPacketWakeUp = a1->PMAdvertisedCapabilities.MinPatternWakeUp;
    }
    else if ( MinMagicPacketWakeUp == NdisDeviceStateUnspecified )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          14,
          133,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v24) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          (__int64)&PowerPolicyPatternNotEnabled,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v24);
      }
      goto LABEL_107;
    }
    EnabledWoLPacketPatterns = (unsigned int)a1->DeviceCaps.DeviceWake;
    if ( MinMagicPacketWakeUp <= (int)EnabledWoLPacketPatterns )
      EnabledWoLPacketPatterns = (unsigned int)MinMagicPacketWakeUp;
    if ( (int)v7 <= a1->DeviceCaps.SystemWake && (int)v11 <= (int)EnabledWoLPacketPatterns && (_DWORD)v11 )
    {
      EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
      if ( (_DWORD)EnabledWoLPacketPatterns )
      {
        EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
        if ( (_DWORD)EnabledWoLPacketPatterns )
        {
          EnabledWoLPacketPatterns = (unsigned int)(EnabledWoLPacketPatterns - 1);
          if ( (_DWORD)EnabledWoLPacketPatterns )
          {
            if ( (_DWORD)EnabledWoLPacketPatterns != 1 )
              goto LABEL_88;
            if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x2000) != 0 )
            {
LABEL_82:
              if ( (int)v11 > v10 )
              {
                v6 = -1073741823;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v24) = v7;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0xEu,
                    0x88u,
                    (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
                    (char)a1,
                    v24);
                }
                if ( (byte_14011D042 & 0x40) != 0 )
                {
                  LODWORD(v24) = 65540;
LABEL_87:
                  LODWORD(v21) = a1->IfIndex;
                  McTemplateK0jqxd_EtwWriteTransfer(
                    EnabledWoLPacketPatterns,
                    (__int64)&PowerPolicyError,
                    (__int64)&a1->InterfaceGuid,
                    (__int64)&a1->InterfaceGuid,
                    (__int64)v21,
                    a1->NetLuid.Value,
                    v24);
                  goto LABEL_92;
                }
              }
              goto LABEL_92;
            }
          }
          if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x1002) == 0x1002 )
          {
            v10 = PowerDeviceD2;
            goto LABEL_82;
          }
        }
        if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x801) == 0x801 )
        {
          v10 = PowerDeviceD1;
          goto LABEL_82;
        }
      }
      if ( (*((_DWORD *)&a1->DeviceCaps + 1) & 0x400) != 0 )
      {
        v10 = PowerDeviceD0;
        goto LABEL_82;
      }
LABEL_88:
      v6 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v7;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x87u,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1,
          v24);
      }
      if ( (byte_14011D042 & 0x40) != 0 )
      {
        LODWORD(v24) = 65539;
        goto LABEL_87;
      }
LABEL_92:
      if ( a5 || (ndisMInvokeDevicePowerNotify(a1, v10), !(unsigned int)ndisWdmSendOidPmParametersForSx((__int64)a1)) )
      {
        *a4 = v10;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x89u,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)a1,
            v7,
            v10);
        if ( (byte_14011D041 & 8) != 0 )
        {
          SLODWORD(v25) = *a4;
          LODWORD(v24) = v7;
          LODWORD(v21) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            EnabledWoLPacketPatterns,
            &PowerPolicyStates,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v21,
            a1->NetLuid.Value,
            v24,
            v25);
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v6;
        v23 = (char)a1;
        v16 = 138;
        goto LABEL_100;
      }
      goto LABEL_108;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        14,
        134,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    }
    if ( (byte_14011D042 & 0x40) != 0 )
    {
      LODWORD(v24) = 65538;
      LODWORD(v21) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        EnabledWoLPacketPatterns,
        (__int64)&PowerPolicyError,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v21,
        a1->NetLuid.Value,
        v24);
    }
    v6 = -1073741823;
LABEL_107:
    if ( a5 )
    {
LABEL_115:
      *a4 = PowerDeviceD3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x8Cu,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1,
          v7,
          4);
      if ( (byte_14011D041 & 8) != 0 )
      {
        SLODWORD(v25) = *a4;
        LODWORD(v24) = v7;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          EnabledWoLPacketPatterns,
          &PowerPolicyStates,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v24,
          v25);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v23 = (char)a1;
      v16 = 141;
LABEL_100:
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        14,
        v16,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        v23);
      return v6;
    }
LABEL_108:
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
    {
      memset(&v27[1], 0, 0xF7uLL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v19,
          14,
          139,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v24) = 65537;
        LODWORD(v21) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v20,
          (__int64)&PowerDisableWakeup,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v21,
          a1->NetLuid.Value,
          v24);
      }
      v28[0] = 1311360;
      memset(&v27[112], 0, 136);
      *(_QWORD *)&v27[104] = &ndisIntReqGeneric;
      memset(v27, 0, 104);
      *(_OWORD *)&v28[1] = 0LL;
      *(_DWORD *)&v27[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v27[168]);
      *(_DWORD *)v27 = 15466902;
      *(_DWORD *)&v27[32] = -50265847;
      *(_QWORD *)&v27[4] = 1LL;
      *(_QWORD *)&v27[40] = v28;
      *(_DWORD *)&v27[48] = 20;
      ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v27, 0, 0LL);
    }
    goto LABEL_115;
  }
  if ( !a5 )
  {
    a1->PnPFlags &= ~0x400u;
    ndisCancelWaitWake(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      14,
      128,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  }
  return 2147483663LL;
}
