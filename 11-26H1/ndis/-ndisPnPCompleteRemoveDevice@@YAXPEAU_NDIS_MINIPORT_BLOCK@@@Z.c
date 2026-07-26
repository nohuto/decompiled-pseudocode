/*
 * XREFs of ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140139D70
 * Callers:
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141944 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB30 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140169AD0 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  enum _NET_IF_ADMIN_STATUS v2; // edi
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  unsigned int *v4; // rcx
  NTSTATUS v5; // eax
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      97,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  v2 = NET_IF_ADMIN_STATUS_UP;
  if ( (ndisIsMiniportStarted(a1) || (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL)
    && a1->OldPnPDeviceState == NdisPnPDeviceStarted
    && (a1->PnPFlags & 0x4000) == 0 )
  {
    v2 = NET_IF_ADMIN_STATUS_DOWN;
  }
  VpciInterfaceDereference = a1->VpciInterfaceDereference;
  if ( VpciInterfaceDereference )
    VpciInterfaceDereference(a1->VpciInterfaceContext);
  ndisMInvokeRemoveDevice(a1);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>(v4) & 0x100) != 0 )
  {
    v5 = IoDeleteSymbolicLink(&a1->FdoName);
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v7 = v5;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0x62u,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)a1,
          *(_DWORD *)v7);
      }
    }
  }
  IoDeleteSymbolicLink(&a1->ExportName.__ptr_.__value_->_UNICODE_STRING);
  if ( a1->DevinterfaceNetSymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->DevinterfaceNetSymbolicLinkName);
    a1->DevinterfaceNetSymbolicLinkName.Buffer = 0LL;
  }
  IfBlock = a1->IfBlock;
  a1->AdminStatus = v2;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation(IfBlock, a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      99,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
}
