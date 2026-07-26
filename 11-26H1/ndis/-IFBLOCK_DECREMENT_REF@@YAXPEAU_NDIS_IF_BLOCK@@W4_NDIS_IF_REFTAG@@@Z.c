/*
 * XREFs of ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x14001C190 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x1400604A0 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x140076DD0 (ndisIfDetachMiniportBlock.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x140089BB0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ndisIfUpdateExternalInterface @ 0x1400CE2B0 (ndisIfUpdateExternalInterface.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D1780 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiQueuedTimestampingChangeNotification @ 0x1400D1990 (ndisNsiQueuedTimestampingChangeNotification.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D1D10 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D23D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D26C0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1400142A0 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x14005F4F0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1400707C0 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  bool v3; // zf
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *v9; // rcx
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rcx
  struct _KEVENT *v11; // rcx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  struct _KEVENT *PendingDeletionComplete; // rcx

  NdisDereferenceWithTag((ULONG_PTR)a1->RefCountTracker, a2);
  v3 = a1->Ref-- == 1;
  if ( v3 )
  {
    ndisIfDeleteStackEntries(a1);
    Flink = a1->Link.Flink;
    if ( Flink->Blink != &a1->Link )
      goto LABEL_22;
    Blink = a1->Link.Blink;
    if ( Blink->Flink != &a1->Link )
      goto LABEL_22;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v6 = a1->ProviderLink.Flink;
    if ( v6->Blink != &a1->ProviderLink
      || (v7 = a1->ProviderLink.Blink, v7->Flink != &a1->ProviderLink)
      || (v7->Flink = v6, v6->Blink = v7, v8 = a1->NetworkLink.Flink, v8->Blink != &a1->NetworkLink)
      || (v9 = a1->NetworkLink.Blink, v9->Flink != &a1->NetworkLink) )
    {
LABEL_22:
      __fastfail(3u);
    }
    v9->Flink = v8;
    v8->Blink = v9;
    Network = a1->Network;
    v3 = (*((_DWORD *)Network + 19))-- == 1;
    if ( v3 )
    {
      v11 = (struct _KEVENT *)*((_QWORD *)Network + 76);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    ndisIfFreeIfIndex(a1->ifIndex);
    RefCountTracker = a1->RefCountTracker;
    --ndisInterfaceCount;
    NdisFreeRefCount((ULONG_PTR)RefCountTracker);
    ifL2NetworkInfo = a1->ifL2NetworkInfo;
    a1->RefCountTracker = 0LL;
    if ( ifL2NetworkInfo )
    {
      ExFreePoolWithTag(ifL2NetworkInfo, 0);
      a1->ifL2NetworkInfo = 0LL;
    }
    ifRcvAddressTable = a1->ifRcvAddressTable;
    if ( ifRcvAddressTable )
    {
      ExFreePoolWithTag(ifRcvAddressTable, 0);
      a1->ifRcvAddressTable = 0LL;
      *(_QWORD *)&a1->ifRcvAddressCount = 0LL;
    }
    AsyncEvent = a1->AsyncEvent;
    if ( AsyncEvent )
      KeSetEvent(AsyncEvent, 0, 0);
    if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    {
      PendingDeletionComplete = a1->PendingDeletionComplete;
      if ( PendingDeletionComplete )
        KeSetEvent(PendingDeletionComplete, 0, 0);
    }
    ExFreePoolWithTag(a1, 0);
  }
}
