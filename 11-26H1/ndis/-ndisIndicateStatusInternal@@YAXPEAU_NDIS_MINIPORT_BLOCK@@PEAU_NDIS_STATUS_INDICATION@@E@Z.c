/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BA50 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004E590 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x1400A25B0 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400AB8DC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006460 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F70 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400122F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400168D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019B70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qLq @ 0x140023120 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C230 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140055FF0 (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x140057320 (WPP_RECORDER_SF_qdq_ea_140057320.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140067B90 (WPP_RECORDER_SF_qLLL.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x140080A10 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140090530 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009F920 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009FD7C (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, _LIST_ENTRY *p_PortList)
{
  _LIST_ENTRY *Flink; // r15
  struct _NDIS_STATUS_INDICATION *v3; // rdi
  int Flink_high; // r14d
  KIRQL v6; // r12
  bool v7; // r13
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  unsigned int Flags; // r14d
  unsigned int v12; // r14d
  _NET_IF_MEDIA_CONNECT_STATE v13; // ecx
  bool v14; // zf
  bool v15; // cf
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // dl
  unsigned int StatusBufferSize; // r14d
  int v22; // r15d
  void *StatusBuffer; // rbx
  unsigned int PortNumber; // edi
  _LIST_ENTRY *v25; // rcx
  __int64 Pool2; // rax
  void (__fastcall *v27)(void *); // rbx
  int v28; // r14d
  struct _WORK_QUEUE_ITEM *v29; // rdi
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _BYTE *v31; // rdx
  int StatusCode; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NDIS_MINIPORT_BLOCK *v34; // rdi
  __int64 v35; // r8
  struct _NDIS_MINIPORT_BLOCK *v36; // rax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdi
  char v38; // r15
  KIRQL v39; // al
  struct _NDIS_M_DRIVER_BLOCK *v40; // r13
  char v41; // bl
  KIRQL v42; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r14
  KIRQL v44; // r12
  int v45; // ebx
  size_t v46; // r8
  KIRQL v47; // al
  char v48; // bl
  struct _NDIS_STATUS_INDICATION *v49; // r12
  int v50; // r15d
  size_t Size; // r14
  KIRQL v52; // al
  int v53; // ecx
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v55; // bl
  int v56; // r13d
  struct _NDIS_QOS_PARAMETERS *v57; // rdi
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *v59; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rdi
  __int64 v61; // rcx
  char v62; // bl
  __int64 v63; // rcx
  size_t v64; // rbx
  struct _NDIS_IF_BLOCK *v65; // rdi
  struct _NDIS_IF_BLOCK **v66; // rax
  struct _NDIS_IF_BLOCK **v67; // r14
  KIRQL v68; // bl
  KIRQL v69; // bl
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rdi
  unsigned int v72; // edx
  unsigned __int16 *v73; // rax
  unsigned int v74; // ecx
  __int128 v75; // xmm1
  int v76; // ecx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v79; // rax
  int v80; // eax
  __int64 v81; // r9
  struct _NDIS_QOS_PARAMETERS *v82; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  unsigned int PnPFlags; // eax
  __int64 v85; // [rsp+20h] [rbp-E0h]
  enum _NDIS_MP_REFTAG v86[8]; // [rsp+28h] [rbp-D8h]
  __int64 v87; // [rsp+30h] [rbp-D0h]
  __int64 v88; // [rsp+38h] [rbp-C8h]
  bool v89; // [rsp+50h] [rbp-B0h]
  bool v90; // [rsp+51h] [rbp-AFh]
  char v91; // [rsp+52h] [rbp-AEh]
  char v92; // [rsp+53h] [rbp-ADh]
  struct _NDIS_QOS_PARAMETERS *Src; // [rsp+58h] [rbp-A8h]
  unsigned int Blink; // [rsp+60h] [rbp-A0h]
  char v95; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v96; // [rsp+65h] [rbp-9Bh] BYREF
  char v97; // [rsp+66h] [rbp-9Ah]
  char v98; // [rsp+67h] [rbp-99h]
  char v99; // [rsp+68h] [rbp-98h]
  char v100[4]; // [rsp+6Ch] [rbp-94h]
  unsigned int v101; // [rsp+70h] [rbp-90h]
  char v102[8]; // [rsp+78h] [rbp-88h]
  int v103; // [rsp+80h] [rbp-80h]
  int v104; // [rsp+84h] [rbp-7Ch]
  struct _NDIS_STATUS_INDICATION *v105; // [rsp+88h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v106; // [rsp+90h] [rbp-70h]
  _LIST_ENTRY *v107; // [rsp+98h] [rbp-68h]
  __int128 v108; // [rsp+A0h] [rbp-60h]
  __int128 v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+D0h] [rbp-30h]
  struct _NDIS_STATUS_INDICATION v111; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_STATUS_INDICATION v112; // [rsp+150h] [rbp+50h] BYREF
  __int64 v113; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+1C8h] [rbp+C8h]
  __int128 v115; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1F0h] [rbp+F0h]

  Flink = p_PortList[3].Flink;
  v3 = (struct _NDIS_STATUS_INDICATION *)p_PortList;
  Flink_high = HIDWORD(p_PortList[1].Flink);
  Blink = (unsigned int)p_PortList[3].Blink;
  v6 = 2;
  v107 = p_PortList[2].Flink;
  *(_QWORD *)v102 = v107;
  v95 = 0;
  v113 = 0LL;
  v7 = 0;
  ifOperStatusFlags = 0;
  v89 = 0;
  v97 = 0;
  v98 = 0;
  v90 = 0;
  v117 = 0LL;
  v96 = 0;
  v105 = (struct _NDIS_STATUS_INDICATION *)p_PortList;
  v103 = Flink_high;
  *(_DWORD *)v100 = 0;
  Src = (struct _NDIS_QOS_PARAMETERS *)Flink;
  v92 = 0;
  LOBYTE(v101) = 0;
  memset(&v111, 0, sizeof(v111));
  v99 = 0;
  v91 = 0;
  memset(&v112, 0, sizeof(v112));
  v115 = 0LL;
  v116 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_PortList,
      24,
      56,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      Flink_high,
      (char)v107);
  if ( v107 == (_LIST_ENTRY *)&ndisIntReqWmi )
    goto LABEL_8;
  if ( v107 && LOBYTE(v107->Flink) != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        24,
        57,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1);
LABEL_8:
    *(_QWORD *)v102 = 0LL;
  }
  v8 = *(_OWORD *)&v3->PortNumber;
  *(_OWORD *)&v111.Header.Type = *(_OWORD *)&v3->Header.Type;
  *(_OWORD *)&v111.PortNumber = v8;
  v9 = *(_OWORD *)&v3->StatusBuffer;
  *(_OWORD *)&v111.DestinationHandle = *(_OWORD *)&v3->DestinationHandle;
  *(_OWORD *)&v111.StatusBuffer = v9;
  v10 = *(_OWORD *)v3->NdisReserved;
  *(_OWORD *)&v111.Guid.Data2 = *(_OWORD *)&v3->Guid.Data2;
  *(_OWORD *)v111.NdisReserved = v10;
  *(_OWORD *)&v111.NdisReserved[2] = *(_OWORD *)&v3->NdisReserved[2];
  if ( (unsigned int)(Flink_high - 1073807371) <= 1 )
    return;
  if ( Flink_high != 1073807383 )
  {
    if ( Flink_high == 1073807394 )
    {
      StatusBufferSize = v3->StatusBufferSize;
      v22 = -1073741811;
      StatusBuffer = v3->StatusBuffer;
      PortNumber = v3->PortNumber;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(p_PortList) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_PortList,
          23,
          42,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( StatusBuffer
        && StatusBufferSize >= 0x30
        && *((_BYTE *)StatusBuffer + 1)
        && *(_BYTE *)StatusBuffer == 0x80
        && *((_WORD *)StatusBuffer + 1) >= 0x30u )
      {
        if ( PortNumber )
        {
          p_PortList = &a1->PortList;
          v25 = a1->PortList.Flink;
          if ( v25 != &a1->PortList )
          {
            while ( HIDWORD(v25[1].Blink) != PortNumber )
            {
              if ( HIDWORD(v25[1].Blink) <= PortNumber )
              {
                v25 = v25->Flink;
                if ( v25 != p_PortList )
                  continue;
              }
              goto LABEL_54;
            }
            if ( LODWORD(v25[1].Flink) == 4 )
            {
              v22 = 0;
              LODWORD(v25[2].Blink) = *((_DWORD *)StatusBuffer + 1);
              v25[3].Flink = (_LIST_ENTRY *)*((_QWORD *)StatusBuffer + 1);
              v25[3].Blink = (_LIST_ENTRY *)*((_QWORD *)StatusBuffer + 2);
              LODWORD(v25[4].Flink) = *((_DWORD *)StatusBuffer + 6);
              HIDWORD(v25[4].Flink) = *((_DWORD *)StatusBuffer + 7);
              LODWORD(v25[4].Blink) = *((_DWORD *)StatusBuffer + 8);
              HIDWORD(v25[4].Blink) = *((_DWORD *)StatusBuffer + 9);
              LODWORD(v25[5].Flink) = *((_DWORD *)StatusBuffer + 10);
            }
          }
        }
        else
        {
          v22 = 0;
          if ( (a1->PnPFlags & 0x80u) != 0 )
          {
            a1->DefaultPortSendControlState = *((_DWORD *)StatusBuffer + 7);
            a1->DefaultPortRcvControlState = *((_DWORD *)StatusBuffer + 8);
            a1->DefaultPortSendAuthorizationState = *((_DWORD *)StatusBuffer + 9);
            a1->DefaultPortRcvAuthorizationState = *((_DWORD *)StatusBuffer + 10);
          }
        }
      }
LABEL_54:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v87) = v22;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x17u,
          0x2Bu,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v87);
      }
      if ( v22 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)p_PortList,
            0x18u,
            0x3Bu,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a1,
            34,
            *(_QWORD *)v102);
        return;
      }
      if ( v105->PortNumber )
        goto LABEL_84;
      v20 = ndisIfSetInterfaceState(a1, 1, 2u);
LABEL_82:
      v91 = v20;
      if ( v20 )
      {
        IfBlock = a1->IfBlock;
        LODWORD(v113) = 786816;
        v95 = 1;
        HIDWORD(v113) = IfBlock->ifOperStatus;
        ifOperStatusFlags = IfBlock->ifOperStatusFlags;
        v112.StatusBuffer = &v113;
        v112.Header = (_NDIS_OBJECT_HEADER)7340440;
        v112.SourceHandle = a1;
        v112.StatusCode = 1073807395;
        v112.StatusBufferSize = 12;
      }
      goto LABEL_84;
    }
    if ( Flink_high == 1073807379 )
    {
      a1->LinkStateIndicationFlags |= 2u;
      Pool2 = ExAllocatePool2(64LL, 252LL, 1903313998LL);
      v27 = (void (__fastcall *)(void *))Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)Pool2 = 16253334LL;
        *(_DWORD *)(Pool2 + 32) = 65799;
        *(_DWORD *)(Pool2 + 48) = 4;
        *(_QWORD *)(Pool2 + 40) = Pool2 + 248;
        *(_QWORD *)(Pool2 + 104) = &ndisIntReqGeneric;
        *(_DWORD *)(Pool2 + 88) |= 2u;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, 2u);
        v28 = -1073741823;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x18u,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)a1,
            v27);
        v29 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950LL);
        if ( v29 )
        {
          if ( (unsigned __int8)ndisReferenceMiniport(a1, 0x4Au) )
          {
            RtlGetCallersAddress((PVOID *)&v29[1].List.Flink, (PVOID *)&v29[1].List.Blink);
            v29[1].WorkerRoutine = v27;
            v29->WorkerRoutine = ndisProcessRequestAsync;
            v29[1].Parameter = a1;
            v29->Parameter = v29;
            v29->List.Flink = 0LL;
            ExQueueWorkItem(v29, (WORK_QUEUE_TYPE)40);
            v28 = 259;
          }
          else
          {
            ExFreePoolWithTag(v29, 0);
          }
        }
        else
        {
          v28 = -1073741670;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v88) = v28;
          WPP_RECORDER_SF_qqL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x19u,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)a1,
            (char)v27,
            v88);
        }
        v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        if ( v28 != 259 )
          ExFreePoolWithTag(v27, 0);
      }
      v99 = 1;
      goto LABEL_84;
    }
    if ( ((Flink_high - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      Offload = a1->Offload;
      v31 = v3->StatusBuffer;
      if ( Offload )
      {
        StatusCode = v3->StatusCode;
        if ( StatusCode == 1073872897 )
        {
          Offload->TopConnectionOffloadPaused = 1;
          goto LABEL_79;
        }
        if ( StatusCode == 1073872899
          && v3->StatusBufferSize >= 0x14
          && *v31 == 0x80
          && *((_WORD *)v31 + 1) >= 0x14u
          && v31[1] )
        {
          Offload->TopConnectionOffloadPaused = 0;
          v46 = *((unsigned __int16 *)v31 + 1);
          if ( *((unsigned __int16 *)v31 + 1) >= 0x14u )
            v46 = 20LL;
          memmove(&a1->Offload->TopTcpConnectionOffloadCapabilities, v31, v46);
          goto LABEL_79;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v86 = Flink_high;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x3Cu,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          *(_QWORD *)v86);
      }
      return;
    }
LABEL_79:
    if ( Flink_high != 1073807384 || (v3->Flags & 4) == 0 )
      goto LABEL_84;
    v90 = 1;
    *(_DWORD *)v100 = 1073807371;
    a1->MediaConnectState = MediaConnectStateConnected;
    v111.Flags |= 0x1000u;
    v20 = ndisIfSetInterfaceState(a1, 1, 2u);
    DWORD2(v115) = a1->MiniportMediaDuplexState;
    v116 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
    v117 = *(_QWORD *)&a1->MiniportPauseFunctions;
    v111.StatusBuffer = &v115;
    *(_QWORD *)&v115 = 0x100280180LL;
    v111.StatusCode = 1073807383;
    v111.StatusBufferSize = 40;
    goto LABEL_82;
  }
  Flags = v3->Flags;
  a1->LinkStateIndicationFlags |= 7u;
  v12 = Flags >> 3;
  LOBYTE(v12) = v12 & 1;
  v101 = v12;
  if ( Flink )
  {
    LOBYTE(v101) = v12;
    if ( Blink >= 0x28 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v87) = HIDWORD(Flink->Flink);
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x3Au,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1,
          v87);
      }
      if ( Blink == -2 )
      {
        Blink = 40;
        v3->StatusBufferSize = 40;
      }
      v13 = HIDWORD(Flink->Flink);
      if ( v13 == MediaConnectStateConnected )
      {
        v14 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v100 = 1073807371;
        v89 = v14;
        v90 = !v14;
      }
      else if ( v13 == MediaConnectStateDisconnected )
      {
        v14 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v100 = 1073807372;
        v89 = !v14;
        v90 = v14;
      }
      else
      {
        v89 = 1;
      }
      v15 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v13;
      a1->MediaDuplexState = (_NET_IF_MEDIA_DUPLEX_STATE)Flink->Blink;
      a1->RcvLinkSpeed = (unsigned __int64)Flink[1].Blink;
      a1->XmitLinkSpeed = (unsigned __int64)Flink[1].Flink;
      a1->PauseFunctions = (_NDIS_SUPPORTED_PAUSE_FUNCTIONS)Flink[2].Flink;
      if ( v15 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || (_LIST_ENTRY *)MaxXmitLinkSpeed < Flink[1].Flink )
          a1->MaxXmitLinkSpeed = (unsigned __int64)Flink[1].Flink;
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || (_LIST_ENTRY *)MaxRcvLinkSpeed < Flink[1].Blink )
          a1->MaxRcvLinkSpeed = (unsigned __int64)Flink[1].Blink;
        v18 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v18 == 0x40000000 || (_LIST_ENTRY *)v18 < Flink[1].Flink )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = (unsigned __int64)Flink[1].Flink;
        v19 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v19 == 0x40000000 || (_LIST_ENTRY *)v19 < Flink[1].Blink )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = (unsigned __int64)Flink[1].Blink;
      }
      a1->AutoNegotiationFlags = HIDWORD(Flink[2].Flink);
      LOBYTE(v101) = v12;
      v20 = ndisIfSetInterfaceState(a1, 1, 2u);
      goto LABEL_82;
    }
  }
LABEL_84:
  v104 = 0;
  a1->MiniportThread = 0LL;
  v34 = a1;
  KeReleaseSpinLock(&a1->Lock, v6);
  v36 = ndisReferenceTopMiniportByNameForNsi(
          a1,
          0x200000,
          v35,
          a1->MiniportMediaType == NdisMediumNative802_11,
          NSIREF_STATUS,
          MPREF_SI_NSI);
  v106 = v36;
  if ( !v36 )
    goto LABEL_115;
  if ( v36 == a1 )
  {
    BaseMiniport = a1->BaseMiniport;
    v38 = 0;
    v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v40 = ndisMiniDriverList;
    while ( 2 )
    {
      v41 = 0;
      if ( v40 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v39);
        v42 = KeAcquireSpinLockRaiseToDpc(&v40->Ref.SpinLock);
        MiniportQueue = v40->MiniportQueue;
        v44 = v42;
        do
        {
          v41 = 0;
          if ( !MiniportQueue )
            break;
          if ( MiniportQueue == BaseMiniport )
          {
            v38 = 1;
            if ( (unsigned __int8)ndisReferenceMiniport(BaseMiniport, 0x38u) )
              goto LABEL_112;
            if ( (BaseMiniport->Flags & 0x80200020) != 0 )
            {
              KeReleaseSpinLock(&v40->Ref.SpinLock, v44);
              v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              goto LABEL_99;
            }
            if ( (BaseMiniport->PnPFlags & 0x1084110) == 0
              && BaseMiniport->PnPDeviceState == NdisPnPDeviceStarted
              && BaseMiniport->CurrentDevicePowerState == PowerDeviceD0
              && (unsigned __int8)ndisReferenceMiniport(BaseMiniport, 0x38u) )
            {
LABEL_112:
              v41 = 1;
              KeReleaseSpinLock(&v40->Ref.SpinLock, v44);
              v47 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              KeReleaseSpinLock(&ndisMiniDriverListLock, v47);
              v34 = a1->BaseMiniport;
              goto LABEL_100;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( !v38 );
        KeReleaseSpinLock(&v40->Ref.SpinLock, v44);
        v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v40 = v40->NextDriver;
        if ( !v38 )
          continue;
      }
      break;
    }
LABEL_99:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v39);
    v34 = a1;
LABEL_100:
    v36 = v106;
    v14 = v41 == 0;
    v45 = v104;
    v7 = !v14;
  }
  else
  {
    v45 = -1073741823;
  }
  ndisDereferenceMiniportForNsi(v36, 1u, 0x39u);
  if ( !v45 )
  {
    v48 = v95;
  }
  else
  {
LABEL_115:
    v90 = 0;
    v48 = 0;
  }
  v49 = v105;
  ndisWriteWmiStatusIndication(v34, v34->pAdapterInstanceName, v105, v103, Src, Blink);
  v50 = *(_DWORD *)v100;
  if ( v90 )
    ndisWriteWmiStatusIndication(v34, v34->pAdapterInstanceName, v105, *(int *)v100, 0LL, 0);
  Size = 12LL;
  if ( v48 )
    ndisWriteWmiStatusIndication(v34, v34->pAdapterInstanceName, v105, 1073807395, &v113, 0xCu);
  v52 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v55 = v52;
  a1->MiniportThread = CurrentThread;
  if ( v7 )
    ndisDereferenceMiniport(v34, 0x38u);
  v56 = v103;
  if ( v103 == 1073807383 )
    v56 = v50;
  if ( v56 != 1073807384 )
  {
    if ( v56 > 1073872960 )
    {
      if ( v56 == 1073872978 )
      {
        if ( Blink >= 0xC )
        {
          v57 = Src;
          if ( Src->Header.Type == 0x80 && Src->Header.Size >= 0xCu )
          {
            if ( Src->Header.Revision )
            {
              TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
              if ( TopSriovCurrentCapabilities
                || (TopSriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL),
                    (a1->TopSriovCurrentCapabilities = TopSriovCurrentCapabilities) != 0LL) )
              {
                if ( Src->Header.Size < 0xCu )
                  Size = Src->Header.Size;
                memmove(TopSriovCurrentCapabilities, Src, Size);
              }
            }
          }
          goto LABEL_136;
        }
      }
      else
      {
        if ( v56 == 1073873056 || v56 == 1073873057 )
        {
          v57 = Src;
          ndisMIndicateQosParametersChange(a1, v56, Src, Blink);
          goto LABEL_136;
        }
        if ( (unsigned int)(v56 - 1074073600) <= 1 )
        {
          v57 = Src;
          ndisMIndicateHwTimestampCapabilitiesChange(a1, v56, Src, Blink, 1, &v96);
          if ( v56 != 1074073601 || !v96 )
            goto LABEL_136;
          v65 = ndisMReferenceIfBlock(a1, MPIFREF_TIMESTAMPING);
          if ( v65 )
          {
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v55);
            v66 = (struct _NDIS_IF_BLOCK **)ExAllocatePool2(64LL, 80LL, 1769423950LL);
            v67 = v66;
            if ( v66 )
            {
              *v66 = v65;
              v66[1] = (struct _NDIS_IF_BLOCK *)ndisNsiQueuedTimestampingChangeNotification;
              v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v65->RefCountTracker, 0xAu);
              ++v65->Ref;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v68);
              v67[4] = (struct _NDIS_IF_BLOCK *)ndisWorkItemHandler;
              v67[5] = (struct _NDIS_IF_BLOCK *)v67;
              v67[2] = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(v67 + 2), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
            }
            KeAcquireSpinLockRaiseToDpc(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            v69 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1->IfBlock, 0x1Au);
            KeReleaseSpinLock(&SpinLock, v69);
          }
        }
      }
      goto LABEL_135;
    }
    if ( v56 == 1073872960 )
    {
      v57 = Src;
      ndisMIndicateNicSwitchCapsChange(a1, 1073872960, Src, Blink, 1u);
      goto LABEL_136;
    }
    if ( v56 > 1073807395 )
    {
      v57 = Src;
      if ( v56 == 1073872902 )
      {
        v97 = 1;
        if ( Blink >= 0x70 && Src->Header.Type == 0xA7 && Src->Header.Size >= 0x70u && Src->Header.Revision )
        {
          a1->Offload->SupportsTopOffload = 1;
          ndisMergeOffloadCapsAndRegistry(a1, (struct _NDIS_OFFLOAD *)Src);
          v64 = 220LL;
          memset(&a1->Offload->TopCapabilities, 0, sizeof(a1->Offload->TopCapabilities));
          if ( Src->Header.Size < 0xDCu )
            v64 = Src->Header.Size;
          memmove(&a1->Offload->TopCapabilities, Src, v64);
        }
      }
      else if ( v56 == 1073872912 )
      {
        ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, Src, Blink, 1u);
      }
      goto LABEL_136;
    }
    if ( v56 == 1073807395 )
    {
      v89 = 1;
      if ( Blink >= 0xC )
      {
        v57 = Src;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v88) = Src->NumTrafficClasses;
          WPP_RECORDER_SF_qLL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)CurrentThread,
            0x18u,
            0x3Fu,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a1,
            Src->Flags,
            v88);
        }
        v63 = Src->Flags;
        if ( (_DWORD)v63 == 1 )
        {
          if ( (byte_14011D045 & 1) != 0 )
          {
            LODWORD(v88) = Src->NumTrafficClasses;
            LODWORD(v87) = 1;
            LODWORD(v85) = a1->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v63,
              &MiniportStatusIndicationOperStatusUp,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              v85,
              a1->NetLuid.Value,
              v87,
              v88);
          }
        }
        else if ( (byte_14011D045 & 1) != 0 )
        {
          LODWORD(v88) = Src->NumTrafficClasses;
          LODWORD(v87) = Src->Flags;
          LODWORD(v85) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            v63,
            &MiniportStatusIndicationOperStatusNotUp,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            v85,
            a1->NetLuid.Value,
            v87,
            v88);
        }
        goto LABEL_136;
      }
      goto LABEL_135;
    }
    goto LABEL_146;
  }
  if ( (v49->Flags & 4) == 0 )
  {
LABEL_146:
    v53 = v56 - 1073807371;
    if ( v56 != 1073807371 )
    {
      v61 = (unsigned int)(v56 - 1073807372);
      if ( v56 == 1073807372 )
      {
        ++a1->MediaSenseDisconnectCount;
        if ( (a1->Flags & 0x20000000) != 0 || a1->MediaSenseDisconnectCount == 1 )
        {
          v62 = 1;
          v92 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)CurrentThread,
              24,
              61,
              (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
              (char)a1,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
          if ( byte_14011D044 < 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v61,
              (unsigned int)&MiniportStatusIndicationDisconnect,
              (_DWORD)a1 + 4008,
              (_DWORD)a1 + 4008,
              a1->IfIndex,
              a1->NetLuid.Value,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
        }
        else
        {
          v62 = 0;
        }
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
        v14 = (_BYTE)v101 == 0;
        a1->MediaConnectState = MediaConnectStateDisconnected;
        if ( v14 )
        {
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000000u);
          if ( v62 )
            ndisSetMediaDisconnectTimer(a1);
        }
      }
      else if ( v56 == 1073807384 )
      {
        v89 = 1;
        if ( Blink >= 4 )
        {
          v57 = Src;
          if ( (byte_14011D045 & 1) != 0 )
          {
            LODWORD(v87) = Src->Header;
            LODWORD(v85) = a1->IfIndex;
            McTemplateK0jqxd_EtwWriteTransfer(
              v61,
              (__int64)&MiniportStatusIndicationNetworkChange,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              v85,
              a1->NetLuid.Value,
              v87);
          }
          goto LABEL_136;
        }
      }
      goto LABEL_135;
    }
    goto LABEL_128;
  }
  v56 = 1073807371;
LABEL_128:
  ++a1->MediaSenseConnectCount;
  if ( (a1->Flags & 0x20000000) == 0 )
  {
    v92 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)CurrentThread,
        24,
        62,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1,
        a1->Flags,
        a1->PnPFlags,
        a1->CurrentDevicePowerState);
    if ( byte_14011D044 < 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v53,
        (unsigned int)&MiniportStatusIndicationConnect,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->Flags,
        a1->PnPFlags,
        a1->CurrentDevicePowerState);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
  v14 = (_BYTE)v101 == 0;
  a1->MediaConnectState = MediaConnectStateConnected;
  if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000000u);
    ndisCancelMediaDisconnectTimer(a1);
  }
LABEL_135:
  v57 = Src;
LABEL_136:
  if ( v107 != (_LIST_ENTRY *)&ndisIntReqWmi )
  {
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v59 = *(_NDIS_OPEN_BLOCK **)v102;
      while ( v59 && v59 != OpenQueue )
      {
        MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_249:
        OpenQueue = MiniportNextOpen;
        v14 = MiniportNextOpen == 0LL;
        v57 = Src;
        if ( v14 )
          goto LABEL_250;
      }
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
        goto LABEL_202;
      if ( v97 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
      {
        if ( !v98 )
        {
          StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
          if ( StatusUnbindWorkItem )
          {
            ndisReferenceMiniportNoCheck(a1, 0x36u);
            v98 = 1;
            OpenQueue->StatusUnbindWorkItem = 0LL;
            *(_QWORD *)StatusUnbindWorkItem->WorkItem.WrapperReserved = 0LL;
            *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[16] = ndisWorkItemHandler;
            *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[24] = StatusUnbindWorkItem;
            ExQueueWorkItem(
              (PWORK_QUEUE_ITEM)StatusUnbindWorkItem->WorkItem.WrapperReserved,
              CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
          }
        }
        goto LABEL_202;
      }
      switch ( v56 )
      {
        case 1073938515:
          v72 = v49->StatusBufferSize;
          v73 = (unsigned __int16 *)v49->StatusBuffer;
          if ( v72 >= 0x34 )
          {
            v74 = v73[1];
            if ( v72 >= v74 )
            {
              v75 = *((_OWORD *)v73 + 1);
              v108 = *(_OWORD *)v73;
              v109 = v75;
              if ( v74 >= 0x3C )
              {
                v110 = *((_QWORD *)v73 + 6);
                v76 = v110;
              }
              else
              {
                v76 = *((_DWORD *)v73 + 12);
              }
              OpenQueue->PMCurrentParameters.EnabledWoLPacketPatterns &= DWORD2(v108);
              OpenQueue->PMCurrentParameters.EnabledProtocolOffloads &= HIDWORD(v109);
              if ( (unsigned int)(v76 - 2) > 2 )
                OpenQueue->PMCurrentParameters.WakeUpFlags &= ~1u;
            }
          }
          goto LABEL_229;
        case 1073938513:
          if ( v49->StatusBufferSize >= 4 )
          {
            p_WOLPatternList = &OpenQueue->WOLPatternList;
            Next = OpenQueue->WOLPatternList.Next;
            if ( Next )
            {
              while ( 1 )
              {
                v79 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)v49->StatusBuffer )
                  break;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v79 )
                  goto LABEL_202;
              }
LABEL_228:
              p_WOLPatternList->Next = v79;
              ExFreePoolWithTag(Next, 0);
              --LODWORD(v49->NdisReserved[2]);
              goto LABEL_229;
            }
          }
          break;
        case 1073938514:
          if ( v49->StatusBufferSize >= 4 )
          {
            p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
            Next = OpenQueue->PMProtocolOffloadList.Next;
            if ( Next )
            {
              while ( 1 )
              {
                v79 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)v49->StatusBuffer )
                  goto LABEL_228;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v79 )
                  goto LABEL_202;
              }
            }
          }
          break;
        default:
LABEL_229:
          ndisMReferenceOpen((__int64)OpenQueue, 7u);
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          if ( OpenQueue->StatusHandler )
          {
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags |= 0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            a1->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&a1->Lock);
            if ( OpenQueue->ProtocolHandle->MajorNdisVersion >= 6u )
            {
              if ( !v99 )
              {
                ndisInvokeStatus(OpenQueue, v49);
                if ( v49->StatusCode == 1073807384 && (v49->Flags & 4) != 0 )
                  ndisInvokeStatus(OpenQueue, &v111);
                if ( v91 )
                  ndisInvokeStatus(OpenQueue, &v112);
              }
            }
            else if ( !v89 && !v49->PortNumber )
            {
              v80 = v49->StatusCode;
              if ( v80 == 1073807383 || v80 == 1073807384 && (v49->Flags & 4) != 0 )
              {
                v81 = 0LL;
                v82 = 0LL;
              }
              else
              {
                v81 = Blink;
                v82 = v57;
              }
              OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v56, v82, v81);
              StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
              if ( StatusCompleteHandler )
                StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
            }
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags &= ~0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          }
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          ndisMDereferenceOpenLocked((__int64)OpenQueue, 7u);
          goto LABEL_248;
      }
LABEL_202:
      MiniportNextOpen = OpenQueue->MiniportNextOpen;
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_248:
      v59 = *(_NDIS_OPEN_BLOCK **)v102;
      goto LABEL_249;
    }
LABEL_250:
    if ( v56 == 1073938516 )
      ndisUpdateAndIndicatePMCapabilities(a1);
    if ( v92 && (v49->Flags & 2) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      if ( v56 == 1073807371 )
      {
        a1->PnPFlags = PnPFlags & 0xEFFFFFFF;
        ndisMRestoreOpenHandlers(a1, 2u);
        a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
        a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
      }
      else
      {
        a1->PnPFlags = PnPFlags | 0x10000000;
        ndisMSwapOpenHandlers(a1, 2u);
        a1->ReceivePathEnabled = 0;
        a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)CurrentThread,
      24,
      64,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      v56,
      (char)v49->DestinationHandle);
}
