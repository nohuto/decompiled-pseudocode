/*
 * XREFs of ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B56B0
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14016AD60 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     memcpy_s @ 0x140091064 (memcpy_s.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *v2; // rsi
  unsigned int v3; // edi
  _SINGLE_LIST_ENTRY *Next; // rax
  KIRQL v5; // dl
  unsigned int SetMiniport; // eax
  __int64 v8; // [rsp+30h] [rbp-D8h]
  KIRQL NewIrql[12]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v10[65]; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v11[52]; // [rsp+158h] [rbp+50h] BYREF

  v2 = 0LL;
  NewIrql[0] = 0;
  memset(&v10[1], 0, 248);
  v3 = 0;
  memset(v11, 0, 196);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      83,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Next = a1->WOLPatternList.Next;
  while ( Next )
  {
    v2 = Next;
    if ( HIDWORD(Next[7].Next) == 2 )
      break;
    Next = Next->Next;
    v2 = 0LL;
  }
  v5 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( !v2 )
  {
    v11[0] = 12845440;
    v11[3] = 2;
    LOWORD(v11[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v11[4] + 2, 0x80uLL, off_14011C2A8, MagicPacketStr.Length);
    memset(&v10[1], 0, 0xF8uLL);
    v10[23] |= 8u;
    *(_QWORD *)&v10[27] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v10[43]);
    v10[23] |= 0x100000u;
    *(_QWORD *)&v10[11] = v11;
    v10[1] = 15466902;
    v10[9] = -50265846;
    *(_QWORD *)&v10[2] = 1LL;
    v10[13] = 196;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)&v10[1], 0, 0LL);
    v3 = SetMiniport;
    if ( SetMiniport )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      LODWORD(v8) = SetMiniport;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x54u,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x55u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v3);
  return v3;
}
