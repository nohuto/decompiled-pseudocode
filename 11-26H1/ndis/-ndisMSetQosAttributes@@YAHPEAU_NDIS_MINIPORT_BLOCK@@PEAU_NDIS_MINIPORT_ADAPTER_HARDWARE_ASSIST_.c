/*
 * XREFs of ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A1348
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400A30CC (WPP_RECORDER_SF_DDDD.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisMSetQosAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  unsigned int v3; // ebx
  _NDIS_QOS_CAPABILITIES *HardwareQosCapabilities; // rax
  size_t v6; // rsi
  int Revision; // edx
  _NDIS_QOS_CAPABILITIES *Pool2; // rax
  _NDIS_QOS_CAPABILITIES *v9; // rax
  _NDIS_QOS_CAPABILITIES *CurrentQosCapabilities; // rdx
  size_t Size; // r8
  _NDIS_QOS_CAPABILITIES *v12; // rdx
  _QWORD *v13; // rcx
  int v14; // r9d
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rcx
  char v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-30h]

  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x8Bu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2);
  HardwareQosCapabilities = a2->HardwareQosCapabilities;
  v6 = 20LL;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_25;
    v14 = 140;
    goto LABEL_24;
  }
  HardwareQosCapabilities = a2->CurrentQosCapabilities;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_25;
    v14 = 141;
LABEL_24:
    v18 = Revision;
    LOBYTE(Revision) = 5;
    WPP_RECORDER_SF_DDDD(
      v13[8],
      Revision,
      13,
      v14,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      v18,
      1,
      HardwareQosCapabilities->Header.Size,
      20);
LABEL_25:
    v3 = -1073741811;
    goto LABEL_26;
  }
  if ( a1->QosCurrentCapabilities || a1->QosHwCapabilities )
  {
    v3 = -1073676283;
    goto LABEL_30;
  }
  Pool2 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePool2(64LL, 20LL, 1936802894LL);
  a1->QosCurrentCapabilities = Pool2;
  if ( Pool2 )
  {
    v9 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePool2(64LL, 20LL, 1936802894LL);
    a1->QosHwCapabilities = v9;
    if ( v9 )
    {
      CurrentQosCapabilities = a2->CurrentQosCapabilities;
      Size = CurrentQosCapabilities->Header.Size;
      if ( CurrentQosCapabilities->Header.Size >= 0x14u )
        Size = 20LL;
      memmove(a1->QosCurrentCapabilities, CurrentQosCapabilities, Size);
      v12 = a2->HardwareQosCapabilities;
      if ( v12->Header.Size < 0x14u )
        v6 = v12->Header.Size;
      memmove(a1->QosHwCapabilities, v12, v6);
      goto LABEL_30;
    }
  }
  v3 = -1073741670;
LABEL_26:
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( QosCurrentCapabilities )
  {
    ExFreePoolWithTag(QosCurrentCapabilities, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  QosHwCapabilities = a1->QosHwCapabilities;
  if ( QosHwCapabilities )
  {
    ExFreePoolWithTag(QosHwCapabilities, 0);
    a1->QosHwCapabilities = 0LL;
  }
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x8Eu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      (char)a2,
      v19);
  }
  return v3;
}
