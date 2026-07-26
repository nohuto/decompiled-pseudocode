/*
 * XREFs of ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140164990 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016E8D0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140058560 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        unsigned __int8 a3)
{
  int v6; // esi
  GUID *v7; // r9
  PVOID v8; // r15
  char *v9; // rdi
  int v10; // ecx
  NTSTATUS v11; // edi
  char v12[8]; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  PVOID Argument1; // [rsp+70h] [rbp+8h] BYREF

  Argument1 = 0LL;
  v6 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Eu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = &GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v7 = &GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->BindPaths->Paths[0].Length + a2->Name.Length + 4,
    v7,
    (struct tagWNODE_SINGLE_INSTANCE **)&Argument1);
  v8 = Argument1;
  if ( Argument1 )
  {
    v9 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v9, a2->Name.Buffer, a2->Name.Length);
    memmove(&v9[a2->Name.Length + 2], a1->BindPaths->Paths[0].Buffer, a1->BindPaths->Paths[0].Length);
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v8, 0LL);
    v11 = IoWMIWriteEvent(v8);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v12 = v11;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x6Fu,
          (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
          *(_QWORD *)v12);
      }
      if ( (byte_14011D041 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v10, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v11, 4, 0);
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x70u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      (char)a2,
      v13);
  }
}
