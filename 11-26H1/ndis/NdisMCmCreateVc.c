/*
 * XREFs of NdisMCmCreateVc @ 0x1400D6CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisMCmCreateVc(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE MiniportVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _LIST_ENTRY *v11; // rbx
  _QWORD *v12; // rcx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned int v15; // edx
  __int64 v16; // r15
  _LIST_ENTRY *v17; // r8
  _LIST_ENTRY *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *Flink; // rax
  int v25; // edx
  void (__fastcall *v26)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v27)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (*v28)(int, void *, struct _NDIS_PACKET *); // rdx
  void (*v29)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v30)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  __int64 v31; // r13
  void (__fastcall *v32)(void *, struct _NDIS_PACKET **, unsigned int); // rbp
  __int64 v33; // r12
  __int64 v34; // r10
  __int64 v35; // r14
  __int64 v36; // r11
  __int64 v37; // rdi
  __int64 v38; // rsi
  void *v39; // rbx
  __int64 v40; // [rsp+30h] [rbp-68h]
  __int64 v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+40h] [rbp-58h]
  void *v43; // [rsp+50h] [rbp-48h]
  NDIS_STATUS v44; // [rsp+A0h] [rbp+8h]
  __int64 v45; // [rsp+A8h] [rbp+10h]

  if ( !NdisAfHandle )
    return -1073741823;
  *NdisVcHandle = 0LL;
  Pool2 = ExAllocatePool2(64LL, 144LL, 1868776526LL);
  v9 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
  v10 = ExAllocatePool2(64LL, 344LL, 1868776526LL);
  v43 = (void *)v10;
  v11 = (_LIST_ENTRY *)v10;
  if ( !v10 )
  {
    ExFreePoolWithTag(v9, 0);
    return -1073741670;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 16));
  v12 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 470);
  v11[12].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
  {
    v11[13].Flink = (_LIST_ENTRY *)v12[35];
    v11[15].Flink = 0LL;
  }
  else
  {
    v11[15].Flink = (_LIST_ENTRY *)v12[67];
  }
  v11[13].Blink = (_LIST_ENTRY *)v12[64];
  v11[14].Flink = (_LIST_ENTRY *)v12[65];
  v11[14].Blink = (_LIST_ENTRY *)v12[66];
  v13 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 46);
  v9[15] = MiniportAdapterHandle;
  v9[16] = MiniportVcContext;
  v11[12].Blink = (_LIST_ENTRY *)MiniportVcContext;
  v11[4].Blink = (_LIST_ENTRY *)v9;
  v11->Blink = (_LIST_ENTRY *)((char *)v9 + 4);
  v11[4].Flink = (_LIST_ENTRY *)NdisAfHandle;
  LODWORD(v11->Flink) = 1;
  v11[5].Flink = v13;
  v11[8].Blink = 0LL;
  v9[2] = v13;
  Blink = v13[1].Blink;
  if ( LOBYTE(Blink[3].Blink) < 6u )
  {
    v9[6] = Blink[19].Flink;
    v9[7] = v13[1].Blink[19].Blink;
  }
  else
  {
    v9[8] = Blink[13].Blink;
    v9[9] = v13[1].Blink[13].Flink;
  }
  v15 = *((_DWORD *)NdisAfHandle + 99);
  v16 = 288LL;
  v17 = *(_LIST_ENTRY **)((char *)NdisAfHandle + (-(__int64)(v15 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 328);
  v18 = *(_LIST_ENTRY **)((char *)NdisAfHandle + (-(__int64)(v15 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 352);
  v11[7].Flink = *(_LIST_ENTRY **)((char *)NdisAfHandle + (-(__int64)(v15 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 288);
  v11[7].Blink = v17;
  v11[8].Flink = v18;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
    v19 = (_QWORD *)*((_QWORD *)NdisAfHandle + 4);
  else
    v19 = (_QWORD *)*((_QWORD *)NdisAfHandle + 3);
  v11[10].Blink = (_LIST_ENTRY *)v19[12];
  v11[11].Flink = (_LIST_ENTRY *)v19[13];
  v11[11].Blink = (_LIST_ENTRY *)v19[14];
  v20 = *((_QWORD *)NdisAfHandle + 46);
  v21 = *((_QWORD *)NdisAfHandle + 47);
  v11[9].Flink = (_LIST_ENTRY *)MiniportVcContext;
  v9[11] = MiniportVcContext;
  v44 = (*(__int64 (__fastcall **)(__int64, _LIST_ENTRY *, _LIST_ENTRY **))(v20 + 1056))(v21, v11, &v11[1].Blink);
  if ( v44 )
  {
    ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag(v11, 0);
    v39 = 0LL;
  }
  else
  {
    v22 = *((_QWORD *)NdisAfHandle + 46);
    v23 = v11[1].Blink;
    v9[3] = v23;
    v11[6].Blink = v23;
    v11[6].Flink = *(_LIST_ENTRY **)(v22 + 1064);
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v22 + 1120), v11 + 2, (PKSPIN_LOCK)(v22 + 232));
    Flink = v11[12].Flink;
    v9[5] = v11;
    LOBYTE(v25) = Flink[2].Flink;
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
    {
      if ( (unsigned __int8)v25 < 6u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            19,
            25,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v26 = 0LL;
        v27 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
        v28 = ndisMCoSendCompleteToNdisPacket;
        v29 = 0LL;
        v32 = ndisCoSendPacketsToNdisPackets;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            19,
            24,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v26 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
        v27 = 0LL;
        v28 = 0LL;
        v32 = ndisCoSendPacketsToNetBufferLists;
        v29 = ndisMCoSendNetBufferListsCompleteToNdisPackets;
      }
      v35 = 248LL;
      v45 = (__int64)v11;
      v30 = 0LL;
      v40 = (__int64)v11;
      v41 = (__int64)v11;
      v31 = (__int64)v11;
      v42 = (__int64)v11;
      v33 = (__int64)v11;
      v38 = 256LL;
      v37 = 264LL;
      v36 = 272LL;
      v34 = 280LL;
    }
    else
    {
      if ( (unsigned __int8)v25 < 6u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            19,
            23,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v26 = 0LL;
        v27 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v28 = (void (*)(int, void *, struct _NDIS_PACKET *))ndisMCoSendCompleteToNetBufferLists;
        v29 = 0LL;
        v30 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            19,
            22,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v26 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v27 = 0LL;
        v28 = 0LL;
        v29 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v30 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisCoSendNetBufferListsToNetBufferLists;
      }
      v31 = 280LL;
      v32 = 0LL;
      v33 = 288LL;
      v16 = (__int64)v11;
      v45 = 248LL;
      v34 = (__int64)v11;
      v35 = (__int64)v11;
      v42 = 272LL;
      v41 = 264LL;
      v40 = 256LL;
      v36 = (__int64)v11;
      v37 = (__int64)v11;
      v38 = (__int64)v11;
    }
    *(_QWORD *)(v35 + v45) = v30;
    v39 = v43;
    *(_QWORD *)(v38 + v40) = v29;
    *(_QWORD *)(v37 + v41) = v32;
    *(_QWORD *)(v36 + v42) = v28;
    *(_QWORD *)(v34 + v31) = v27;
    *(_QWORD *)(v16 + v33) = v26;
  }
  *NdisVcHandle = v39;
  return v44;
}
