/*
 * XREFs of ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142EB8
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C6C20 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-D8h]
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v8[65]; // [rsp+54h] [rbp-B4h] BYREF

  memset((char *)&v8[1] + 1, 0, 0xF7uLL);
  AoAc = a1->AoAc;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      149,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  v7 = 131073;
  memset(&v8[1], 0, 0xF8uLL);
  v8[23] |= 8u;
  *(_QWORD *)&v8[27] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v8[43]);
  v8[23] |= 0x400u;
  *(_QWORD *)&v8[11] = &v7;
  v8[1] = 15466902;
  v8[9] = -50265845;
  *(_QWORD *)&v8[2] = 1LL;
  v8[13] = 4;
  KeInitializeEvent((PRKEVENT)&v8[29], NotificationEvent, 0);
  v4 = ndisMInvokeOidRequest(a1, (struct _NDIS_OID_REQUEST *)&v8[1]);
  if ( v4 == 259 )
  {
    ndisWaitForKernelObject(&v8[29]);
    v4 = v8[21];
  }
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    LODWORD(v6) = v4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x96u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v6);
  }
  else
  {
    *((_BYTE *)AoAc + 1080) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x97u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v4);
  return v4;
}
