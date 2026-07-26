/*
 * XREFs of ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142B34
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006D430 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1400B5FC0 (-ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *BitMapHeader; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_BITMAP BitMapHeader_8; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v11[65]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE v12[272]; // [rsp+168h] [rbp+60h] BYREF

  memset((char *)&v11[1] + 1, 0, 0xF7uLL);
  memset(v12, 0, 268);
  AoAc = a1->AoAc;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      145,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  if ( ndisDirectedMacForNapsState )
  {
    BitMapHeader = 0LL;
    BitMapHeader_8 = 0LL;
    ndisInitializeDirectedWolPattern((struct _DIRECT_WOL_PATTERN *)v12, v2, &BitMapHeader_8, &BitMapHeader);
    IfBlock = a1->IfBlock;
    v6 = BitMapHeader;
    *(_DWORD *)BitMapHeader = *(_DWORD *)IfBlock->ifPhysAddress.Address;
    *((_WORD *)v6 + 2) = *(_WORD *)&IfBlock->ifPhysAddress.Address[4];
    RtlSetBits(&BitMapHeader_8, 0, 6u);
    memset(&v11[1], 0, 0xF8uLL);
    v11[23] |= 8u;
    *(_QWORD *)&v11[27] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v11[43]);
    v11[23] |= 0x400u;
    *(_QWORD *)&v11[11] = v12;
    v11[1] = 15466902;
    v11[9] = -50265846;
    *(_QWORD *)&v11[2] = 1LL;
    v11[13] = 268;
    KeInitializeEvent((PRKEVENT)&v11[29], NotificationEvent, 0);
    v7 = ndisMInvokeOidRequest(a1, (struct _NDIS_OID_REQUEST *)&v11[1]);
    if ( v7 == 259 )
    {
      ndisWaitForKernelObject(&v11[29]);
      v7 = v11[21];
    }
    if ( v7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v7;
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x93u,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v8);
    }
    else
    {
      *((_BYTE *)AoAc + 1080) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x94u,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1,
        v7);
    return v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0x92u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      0);
  return 0LL;
}
