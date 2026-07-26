/*
 * XREFs of ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138320
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 */

NDIS_STATUS __fastcall ndisLWMInitializeHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS result; // eax
  NDIS_STATUS v3; // ebx
  char v4[4]; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+44h] [rbp-24h]
  __int64 v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+54h] [rbp-14h]
  __int64 v9; // [rsp+58h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  v5 = 1835678;
  v6 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v8 = 0;
  result = NdisMSetMiniportAttributes(a1, (PNDIS_MINIPORT_ADAPTER_ATTRIBUTES)&v5);
  v3 = result;
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      1,
      11,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v4 = v3;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      *(_DWORD *)v4);
  }
  return v3;
}
