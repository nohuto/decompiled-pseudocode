/*
 * XREFs of ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10
 * Callers:
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14001A8F0 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14001D000 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009734C (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1400974A0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D1780 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1400D22B8 (ndisNsiEnumerateAllIfRcvAddressesInOneInterface.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D23D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D26C0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x140152A60 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIfQueryObject @ 0x140152DB0 (ndisIfQueryObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1401544F0 (ndisNsiGetInterfaceRosInformation.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned __int8 a3)
{
  __int64 v4; // rbx
  KIRQL v5; // al
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // r8
  KIRQL v7; // si
  __int64 v8; // r9
  unsigned __int8 j; // cl
  _BYTE *v10; // rdx
  char v11; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v15; // r14
  unsigned int v16; // edx
  int v17; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx

  v4 = a3;
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  MpRefCountTracker = a1->MpRefCountTracker;
  v7 = v5;
  if ( MpRefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)2 && MpRefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)3 )
  {
    if ( (unsigned __int64)MpRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)MpRefCountTracker, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)MpRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, 0xFFuLL);
      *(_BYTE *)MpRefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *((_BYTE *)MpRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)MpRefCountTracker, (unsigned int)v4);
      if ( *((_BYTE *)MpRefCountTracker + 1) )
      {
        if ( *((_BYTE *)MpRefCountTracker + 1) == 1 )
        {
          v15 = MpRefCountTracker + 16 * v4;
          v16 = *((_DWORD *)v15 + 16);
          v17 = (unsigned __int16)v16 >> 1;
          if ( v16 >> 17 < 0x3FFE && v17 == (v16 >> 17) + 1 )
          {
            for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1);
                  i;
                  i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1) )
            {
              *((_QWORD *)v15 + 1) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
            *((_DWORD *)v15 + 16) &= 0x10001u;
          }
          else
          {
            if ( v17 == 0 && (v16 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)a1->MpRefCountTracker, v4);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
          }
        }
      }
      else
      {
        v8 = *((_QWORD *)MpRefCountTracker + 1);
        if ( v8 )
        {
          for ( j = 0; j < *((_BYTE *)MpRefCountTracker + 3); ++j )
          {
            v10 = (_BYTE *)(v8 + 2LL * j);
            if ( *v10 == (_BYTE)v4 )
            {
              v11 = v10[1];
              if ( v11 )
              {
                v10[1] = v11 - 1;
                goto LABEL_17;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)MpRefCountTracker + 4, v4) )
          ndisReportRefcountImbalance((ULONG_PTR)MpRefCountTracker, v4);
      }
    }
  }
LABEL_17:
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v7);
}
