/*
 * XREFs of ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1400142A0 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     NdisAllocateRefCount @ 0x14001C0C0 (NdisAllocateRefCount.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140138920 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163D10 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(struct _NDIS_IF_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // ebx
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  const struct _GUID *v5; // rcx
  _IF_COUNTED_STRING_LH *p_ifDescr; // rdi
  bool v7; // r13
  struct NDIS_REFCOUNT_HANDLE__ *RefCount; // rbp
  KIRQL v9; // al
  KIRQL v10; // r15
  unsigned __int16 Length; // cx
  unsigned __int16 v13; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  char v15[4]; // [rsp+38h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  void *p_ifAdminStatus; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = &WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      a2);
  p_ifDescr = &a1->ifDescr;
  if ( a1->ifDescr.Length )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)a1->ifDescr.String);
    v7 = RtlCompareUnicodeString(&DestinationString, v3->pAdapterInstanceName, 1u) != 0;
  }
  else
  {
    v7 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(v5) = 30;
  RefCount = (struct NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(v5, a2);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v10 = v9;
  if ( a1->MiniportAvailable )
  {
    v2 = -1073741823;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
    NdisDereferenceWithTag((ULONG_PTR)RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
    goto LABEL_7;
  }
  if ( v7 )
  {
    memset(&a1->ifDescr, 0, sizeof(a1->ifDescr));
    Length = v3->pAdapterInstanceName->Length;
    v13 = 512;
    if ( Length > 0x200u )
    {
      p_ifDescr->Length = 512;
LABEL_15:
      memmove(a1->ifDescr.String, v3->pAdapterInstanceName->Buffer, v13);
      goto LABEL_16;
    }
    p_ifDescr->Length = Length;
    v13 = Length;
    if ( Length )
      goto LABEL_15;
  }
LABEL_16:
  RefCountTracker = a1->RefCountTracker;
  a1->ifAdminStatus = v3->AdminStatus;
  *(_QWORD *)&a1->ifOperStatus = 2LL;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0xCu);
  ++a1->Ref;
  a1->LastMiniportFatalErrorReason = NdisMEvent_Unknown;
  KeAcquireSpinLockAtDpcLevel(&SpinLock);
  a1->MiniportAvailable = 1;
  a1->MiniportLinkReference = 1;
  a1->Miniport = v3;
  a1->MpRefCountTracker = RefCount;
  v3->IfBlock = a1;
  v3->IfBlockAvailable = 1;
  KeReleaseSpinLockFromDpcLevel(&SpinLock);
  v3->IfIndex = a1->ifIndex;
  v3->NetLuid.Value = a1->NetLuid.Value;
  v3->OperStatus = a1->ifOperStatus;
  v3->OperStatusFlags = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
  if ( v7 )
  {
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&a1->NetLuid, 0x204u, 0x208u, (unsigned __int8 *)&a1->ifDescr);
    v17 = 2LL;
    p_ifAdminStatus = &a1->ifDescr;
    v19 = 516;
    v20 = 4;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v17, 1LL);
  }
  v17 = 0LL;
  p_ifAdminStatus = &a1->ifAdminStatus;
  v19 = 4;
  v20 = 16;
  ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v17, 0LL);
  ndisNsiSyncMiniportOperStatusNotification(v3);
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)v3,
      *(_DWORD *)v15,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v2;
}
