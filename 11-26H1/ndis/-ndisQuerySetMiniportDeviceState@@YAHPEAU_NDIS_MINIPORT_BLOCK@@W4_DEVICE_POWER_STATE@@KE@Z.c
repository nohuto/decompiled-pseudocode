/*
 * XREFs of ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x14004CD50
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004C550 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140177D10 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     McTemplateK0jqxqqt_EtwWriteTransfer @ 0x1400ABBCC (McTemplateK0jqxqqt_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZDLd @ 0x1400ABC84 (WPP_RECORDER_SF_qZDLd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _DEVICE_POWER_STATE a2,
        int a3,
        char a4)
{
  int v7; // edx
  unsigned int SetMiniport; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edi
  int v15; // [rsp+20h] [rbp-E0h]
  char v16[8]; // [rsp+30h] [rbp-D0h]
  enum _DEVICE_POWER_STATE v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[248]; // [rsp+60h] [rbp-A0h] BYREF

  v17 = a2;
  memset(&v18[1], 0, 0xF7uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      52,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) == 0 )
  {
    memset(&v18[112], 0, 136);
    *(_QWORD *)&v18[104] = &ndisIntReqGeneric;
    memset(v18, 0, 104);
    *(_DWORD *)&v18[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v18[168]);
    *(_DWORD *)v18 = 15466902;
    *(_DWORD *)&v18[8] = 0;
    *(_DWORD *)&v18[32] = a3;
    *(_DWORD *)&v18[48] = 4;
    *(_DWORD *)&v18[4] = a4 != 0;
    *(_QWORD *)&v18[40] = &v17;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v18, 0, 0LL, 0LL);
    v14 = SetMiniport;
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZDLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          v12,
          v13,
          v15,
          (char)a1,
          (__int64)a1->pAdapterInstanceName,
          a3,
          a4,
          SetMiniport);
      if ( (byte_14011D041 & 8) != 0 )
        McTemplateK0jqxqqt_EtwWriteTransfer(
          v11,
          v10,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v14,
          a3,
          a4);
    }
    if ( a4 && v14 != -1073741637 && v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v16 = v14;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x37u,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1,
        *(_QWORD *)v16);
    }
    return v14;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        53,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
    }
    return 0LL;
  }
}
