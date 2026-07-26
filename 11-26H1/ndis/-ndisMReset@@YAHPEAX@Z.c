/*
 * XREFs of ?ndisMReset@@YAHPEAX@Z @ 0x1400A0AA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140052A20 (NdisMIndicateStatusEx.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x1400A2AD0 (NdisMResetComplete.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisMReset(_SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int v3; // edi
  KIRQL v4; // dl
  KIRQL v5; // dl
  int v6; // edx
  __int64 v7; // rcx
  KIRQL v8; // r14
  KIRQL v9; // dl
  struct _GUID *v11; // [rsp+28h] [rbp-79h]
  __int64 v12; // [rsp+38h] [rbp-69h]
  KIRQL NewIrql; // [rsp+48h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+49h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  Next = a1[2].Next;
  NewIrql = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x48u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      Next);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  if ( (HIDWORD(Next[15].Next) & 0x80000) != 0 )
  {
    v3 = -2147418111;
LABEL_28:
    v9 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v9);
    goto LABEL_29;
  }
  v3 = -1073676275;
  if ( ((__int64)Next[15].Next & 0x40000) != 0 )
  {
    if ( ((__int64)Next[15].Next & 0x200000) != 0 )
      goto LABEL_28;
  }
  else if ( (unsigned int)ndisMQueueWorkItem((struct _NDIS_MINIPORT_BLOCK *)Next, 3, a1) )
  {
    goto LABEL_28;
  }
  v3 = -2147418111;
  if ( LOBYTE(Next[4].Next) >= 6u || !Next[470].Next[24].Next )
    goto LABEL_28;
  ndisMReferenceOpen((__int64)a1, 8u);
  Next[49].Next = a1;
  if ( ((__int64)Next[15].Next & 0x40000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&Next[15], 0x100000u);
    if ( !BYTE1(Next[11].Next) )
    {
      BYTE1(Next[11].Next) = 1;
      Next[233].Next = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      ndisMProcessDeferred((struct _NDIS_MINIPORT_BLOCK *)Next);
      BYTE1(Next[11].Next) = 0;
      Next[233].Next = 0LL;
    }
    v3 = 259;
    goto LABEL_28;
  }
  AddressingReset[0] = 0;
  _InterlockedOr((volatile signed __int32 *)&Next[15], 0x280000u);
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)Next, 1u);
  while ( LODWORD(Next[228].Next) )
  {
    v4 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v4);
    KeStallExecutionProcessor(1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  }
  if ( HIDWORD(Next[483].Next) != 1 )
  {
    BYTE2(Next[116].Next) &= ~1u;
    v3 = -1073741637;
    HIDWORD(Next[67].Next) = -1073741637;
    Next[49].Next = 0LL;
    _InterlockedAnd((volatile signed __int32 *)&Next[15], 0xFFD7FFFF);
    ndisMDereferenceOpenLocked((__int64)a1, 8u);
    goto LABEL_28;
  }
  v5 = NewIrql;
  Next[65].Next = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v5);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = Next;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx(Next, &StatusIndication);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      12,
      73,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)Next);
  }
  if ( (byte_14011D041 & 4) != 0 )
  {
    LODWORD(v12) = 65538;
    LODWORD(v11) = Next[507].Next;
    McTemplateK0jqxd_EtwWriteTransfer(
      v7,
      (__int64)&CallMiniportReset,
      (__int64)&Next[501],
      (__int64)&Next[501],
      (__int64)v11,
      (__int64)Next[503].Next,
      v12);
  }
  v8 = KfRaiseIrql(2u);
  v3 = ((__int64 (__fastcall *)(BOOLEAN *, _SINGLE_LIST_ENTRY *))Next[470].Next[24].Next)(AddressingReset, Next[3].Next);
  if ( v8 != 2 )
    KeLowerIrql(v8);
  if ( v3 != 259 )
  {
    NdisMResetComplete(Next, v3, AddressingReset[0]);
    v3 = 259;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x4Au,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      Next);
  return v3;
}
