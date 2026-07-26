/*
 * XREFs of NdisIfFreeNetLuidIndex @ 0x140167E70
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dl @ 0x14006F350 (WPP_RECORDER_SF_dl_ea_14006F350.c)
 *     WPP_RECORDER_SF_dlL @ 0x140070230 (WPP_RECORDER_SF_dlL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ndisIfWriteRegistry @ 0x140146840 (ndisIfWriteRegistry.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisIfFreeNetLuidIndex(NET_IFTYPE ifType, UINT32 NetLuidIndex)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NDIS_STATUS v6; // ebx
  NTSTATUS v7; // eax
  __int64 i; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  UINT32 v15; // r9d
  __int64 v16; // rcx
  int v17; // eax
  int Timeout; // [rsp+20h] [rbp-28h]
  int Timeouta; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dl(*((_QWORD *)WPP_GLOBAL_Control + 8), *(__int64 *)&NetLuidIndex, v2, v3, Timeout);
  v7 = KeWaitForSingleObject(&Mutex, Executive, 0, 0, 0LL);
  if ( v7 )
    ndisBugCheckEx(0x24uLL, 1uLL, v7, 1uLL);
  if ( NetLuidIndex > 0x1000 )
  {
LABEL_9:
    v6 = -1073741811;
  }
  else
  {
    for ( i = qword_14011E9A0; (__int64 *)i != &qword_14011E9A0; i = *(_QWORD *)i )
    {
      if ( *(_WORD *)(i + 16) == ifType )
      {
        v9 = NetLuidIndex >> 3;
        if ( (int)v9 + 1 < (unsigned int)v9 || *(_DWORD *)(i + 40) < (unsigned int)(v9 + 1) )
          goto LABEL_9;
        v14 = (unsigned int)v9;
        v15 = NetLuidIndex & 7;
        *(_BYTE *)(*(_QWORD *)(i + 48) + (unsigned int)v9) = *(_BYTE *)(*(_QWORD *)(i + 48) + v9) & ~(1 << v15);
        v16 = *(_QWORD *)(i + 56);
        v17 = *(unsigned __int8 *)(v16 + (unsigned int)v9);
        if ( _bittest(&v17, v15) )
        {
          *(_BYTE *)(v16 + v14) = v17 & ~(1 << v15);
          v6 = ndisIfWriteRegistry(i);
        }
        break;
      }
    }
  }
  KeReleaseMutex(&Mutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dlL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12, Timeouta);
  return v6;
}
