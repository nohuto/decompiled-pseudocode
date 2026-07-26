/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x140045A40
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x14000A230 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140044940 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400454E0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140045DE0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140046620 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     WPP_RECORDER_SF_DDL @ 0x14006C500 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        struct _IRP *a4)
{
  unsigned int v8; // esi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  int v16; // edi
  int v17; // edx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v20; // rdx
  unsigned int v21; // eax
  char v22[8]; // [rsp+38h] [rbp-30h]

  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, 16);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement(AoAc, *((unsigned int *)a3 + 4));
  v14 = *((_DWORD *)AoAc + 16);
  if ( v14 == 4 || v14 == 3 )
  {
    *((_DWORD *)AoAc + 16) = 0;
    ndisAoAcActiveRefSubtract(AoAc, 0LL);
    if ( KeCancelTimer((PKTIMER)((char *)AoAc + 72)) )
      ndisDereferenceMiniport(a1, 2u);
  }
  v15 = 0x346DC5D63886594BLL;
  if ( *((_BYTE *)AoAc + 452) )
  {
    v13 = *((_QWORD *)AoAc + 55);
    *((_BYTE *)AoAc + 452) = 0;
    v12 = (MEMORY[0xFFFFF78000000008] - v13) / 0x2710uLL;
    if ( v12 > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = (MEMORY[0xFFFFF78000000008] - v13) / 0x2710uLL;
  }
  if ( *((_BYTE *)AoAc + 464) )
  {
    *((_BYTE *)AoAc + 464) = 0;
    v13 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)AoAc + 57);
    v12 = v13 / 10000;
    if ( v13 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = v13 / 10000;
  }
  v16 = *((_DWORD *)AoAc + 13);
  if ( (byte_14011D043 & 4) != 0 )
    McTemplateK0xqqq_EtwWriteTransfer(
      v13,
      &NicActiveAcquired,
      &a1->InterfaceGuid,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)AoAc + 13));
  if ( !*((_DWORD *)AoAc + 94) || *((_DWORD *)AoAc + 95) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
  }
  else
  {
    if ( *((_DWORD *)AoAc + 13) == 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LqZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        v15,
        0x11u,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        *((_DWORD *)a3 + 4),
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v20 = (_LIST_ENTRY *)*((_QWORD *)AoAc + 5);
    if ( v20->Flink != (_LIST_ENTRY *)((char *)AoAc + 32) )
      __fastfail(3u);
    a4->Tail.Overlay.ListEntry.Blink = v20;
    p_ListEntry->Flink = (_LIST_ENTRY *)((char *)AoAc + 32);
    v20->Flink = p_ListEntry;
    *((_QWORD *)AoAc + 5) = p_ListEntry;
    ++*((_DWORD *)AoAc + 12);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
    v21 = ndisRequestNicActive(a1, RunAsynchronous);
    v8 = v21;
    if ( v21 != 259 )
    {
      if ( v21 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x12u,
          (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
          v21,
          a1);
      ndisAoAcCompleteQueuedIrps(a1, v8);
      v8 = 259;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = v8;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      0xEu,
      0x13u,
      (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
      (char)a1,
      v16,
      *(_QWORD *)v22);
  }
  return v8;
}
