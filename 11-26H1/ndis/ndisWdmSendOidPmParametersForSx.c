/*
 * XREFs of ndisWdmSendOidPmParametersForSx @ 0x1400ABAB4
 * Callers:
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140178170 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ndisMSendPmParametersOidForSx @ 0x140049450 (ndisMSendPmParametersOidForSx.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForSx(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _GUID *v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  char v9[16]; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 1136);
  v3 = *(_QWORD *)(a1 + 1128);
  *(_OWORD *)v9 = *(_OWORD *)(a1 + 1120);
  v10 = v1;
  *(_DWORD *)&v9[12] = HIDWORD(v3) & 0xFFFFFFFE;
  v5 = ndisMSendPmParametersOidForSx((struct _NDIS_MINIPORT_BLOCK *)a1, v9);
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x78u,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        a1,
        *(_DWORD *)&v9[4]);
    if ( (byte_14011D042 & 0x40) != 0 )
    {
      LODWORD(v8) = 65537;
      LODWORD(v7) = *(_DWORD *)(a1 + 4056);
      McTemplateK0jqxd_EtwWriteTransfer(
        v4,
        (__int64)&PowerPolicyError,
        a1 + 4008,
        a1 + 4008,
        (__int64)v7,
        *(_QWORD *)(a1 + 4024),
        v8);
    }
  }
  else if ( *(_DWORD *)&v9[4] )
  {
    *(_DWORD *)(a1 + 124) |= 0x400u;
  }
  return v5;
}
