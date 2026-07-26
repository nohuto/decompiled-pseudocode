/*
 * XREFs of NdisCoCreateVc @ 0x1400D5DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  NDIS_HANDLE *v5; // rsi
  char v7; // r12
  _QWORD *v8; // r15
  NDIS_STATUS v9; // ebp
  _DWORD *v10; // rbx
  int v11; // r13d
  __int64 Pool2; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdi
  LARGE_INTEGER *v16; // r9
  LARGE_INTEGER v17; // rcx
  __int64 v18; // rax
  _QWORD *QuadPart; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  NDIS_HANDLE *v30; // r12
  NDIS_HANDLE *v31; // r13
  __int64 (__fastcall **v32)(_QWORD, _QWORD, _QWORD); // rax
  NDIS_HANDLE v33; // rcx
  NDIS_HANDLE v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  NDIS_HANDLE v38; // rcx
  KSPIN_LOCK *v39; // r8
  int v40; // edx
  void (__fastcall *v41)(_QWORD); // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // dl
  bool v48; // cf
  void (__fastcall *v49)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v50)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (*v51)(int, void *, struct _NDIS_PACKET *); // rdx
  void (*v52)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v53)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  void (__fastcall *v54)(void *, struct _NDIS_PACKET **, unsigned int); // r15
  KIRQL NewIrql; // [rsp+40h] [rbp-68h]
  int v57; // [rsp+44h] [rbp-64h]
  LARGE_INTEGER *v58; // [rsp+48h] [rbp-60h]
  char Increment; // [rsp+B0h] [rbp+8h]
  LARGE_INTEGER Incrementa; // [rsp+B0h] [rbp+8h]
  char v61; // [rsp+B8h] [rbp+10h]

  v5 = (NDIS_HANDLE *)NdisAfHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      19,
      10,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  }
  v58 = (LARGE_INTEGER *)*((_QWORD *)NdisBindingHandle + 2);
  if ( v5 && ((_DWORD)v5[1] & 1) != 0 )
  {
    v7 = 1;
    v61 = 1;
  }
  else
  {
    v7 = 0;
    v61 = 0;
    if ( !v5 )
    {
LABEL_8:
      Increment = 0;
      goto LABEL_9;
    }
  }
  Increment = 1;
  if ( NdisBindingHandle != v5[46] )
    goto LABEL_8;
LABEL_9:
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  v57 = v11;
  if ( v8 && !v11 )
  {
    v9 = -1073741823;
    goto LABEL_112;
  }
  Pool2 = ExAllocatePool2(64LL, 344LL, 1868776526LL);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_112;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *((_QWORD *)v10 + 20) = v10 + 38;
  *((_QWORD *)v10 + 19) = v10 + 38;
  *((_QWORD *)v10 + 5) = v10 + 8;
  *((_QWORD *)v10 + 4) = v10 + 8;
  *((_QWORD *)v10 + 7) = v10 + 12;
  *((_QWORD *)v10 + 6) = v10 + 12;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        12,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    v15 = v8[9];
    *((_QWORD *)v10 + 25) = v8[25];
LABEL_26:
    v16 = v58;
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      19,
      11,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  }
  v14 = ExAllocatePool2(64LL, 144LL, 1868776526LL);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_112;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 8));
  v16 = v58;
  *(_QWORD *)(v15 + 120) = v58;
  if ( !v7 )
  {
    v9 = (*((__int64 (__fastcall **)(LARGE_INTEGER, _DWORD *, _DWORD *))NdisBindingHandle + 130))(v58[3], v10, v10 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag((PVOID)v15, 0);
      goto LABEL_112;
    }
    *((_BYTE *)v10 + 336) = 1;
    goto LABEL_26;
  }
LABEL_27:
  v48 = LOBYTE(v16[4].LowPart) < 6u;
  v17 = v16[470];
  *((_QWORD *)v10 + 26) = *(_QWORD *)(v17.QuadPart + 280);
  if ( v48 )
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(v17.QuadPart + 536);
  *((_QWORD *)v10 + 30) = v18;
  if ( !v7 )
  {
    QuadPart = (_QWORD *)v16[470].QuadPart;
    *((_QWORD *)v10 + 27) = QuadPart[64];
    *((_QWORD *)v10 + 28) = QuadPart[65];
    *((_QWORD *)v10 + 29) = QuadPart[66];
  }
  *((_QWORD *)v10 + 24) = v16;
  *((_QWORD *)v10 + 9) = v15;
  *((_QWORD *)v10 + 1) = v15 + 4;
  *((_QWORD *)v10 + 8) = v5;
  *v10 = 1;
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        13,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    *((_QWORD *)v10 + 3) = ProtocolVcContext;
    *((_QWORD *)v10 + 10) = NdisBindingHandle;
    *(_QWORD *)(v15 + 40) = v10;
    v42 = *((_QWORD *)v10 + 3);
    v10[22] = 1;
    *(_QWORD *)(v15 + 24) = v42;
    *(_QWORD *)(v15 + 16) = NdisBindingHandle;
    v43 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v43 + 56) < 6u )
    {
      v44 = 0LL;
      *(_QWORD *)(v15 + 48) = *(_QWORD *)(v43 + 304);
      v45 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      *(_QWORD *)(v15 + 64) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 64) = *(_QWORD *)(v43 + 216);
      v44 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v45 = 0LL;
      *(_QWORD *)(v15 + 48) = 0LL;
    }
    *(_QWORD *)(v15 + 72) = v44;
    *(_QWORD *)(v15 + 56) = v45;
    *((_QWORD *)v10 + 21) = *((_QWORD *)NdisBindingHandle + 134);
    v46 = *((_QWORD *)NdisBindingHandle + 135);
    *((_QWORD *)v10 + 18) = ProtocolVcContext;
    *((_QWORD *)v10 + 22) = v46;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)NdisBindingHandle + 70,
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
LABEL_90:
    if ( v9 )
      goto LABEL_112;
    goto LABEL_91;
  }
  v20 = *((_DWORD *)v5 + 99);
  *((_QWORD *)v10 + 10) = v5[46];
  *((_QWORD *)v10 + 17) = v5[5];
  v21 = *(__int64 *)((char *)v5 + (-(__int64)(v20 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 328);
  v22 = *(__int64 *)((char *)v5 + (-(__int64)(v20 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 352);
  *((_QWORD *)v10 + 14) = *(NDIS_HANDLE *)((char *)v5 + (-(__int64)(v20 < 6) & 0xFFFFFFFFFFFFFF68uLL) + 288);
  *((_QWORD *)v10 + 15) = v21;
  *((_QWORD *)v10 + 16) = v22;
  if ( *((_DWORD *)v5 + 98) >= 6u )
    v23 = v5[4];
  else
    v23 = v5[3];
  *((_QWORD *)v10 + 21) = v23[12];
  *((_QWORD *)v10 + 22) = v23[13];
  *((_QWORD *)v10 + 23) = v23[14];
  if ( v8 )
    *(_DWORD *)(v15 + 4) |= 0x10u;
  if ( v11 )
  {
    if ( Increment )
    {
      if ( v8 )
      {
        *(_QWORD *)(v15 + 40) = v8;
        *((_DWORD *)v8 + 22) = 0;
      }
      else
      {
        *(_QWORD *)(v15 + 16) = v5[46];
        v27 = *((_QWORD *)v5[46] + 3);
        if ( *(_BYTE *)(v27 + 56) < 6u )
        {
          v29 = 0LL;
          *(_QWORD *)(v15 + 56) = *(_QWORD *)(v27 + 312);
          v28 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
          *(_QWORD *)(v15 + 64) = 0LL;
        }
        else
        {
          *(_QWORD *)(v15 + 64) = *(_QWORD *)(v27 + 216);
          v28 = 0LL;
          v29 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
          *(_QWORD *)(v15 + 56) = 0LL;
        }
        *(_QWORD *)(v15 + 72) = v29;
        *(_QWORD *)(v15 + 48) = v28;
      }
      *(_QWORD *)(v15 + 32) = v10;
    }
    else
    {
      *(_QWORD *)(v15 + 16) = v5[46];
      v35 = *((_QWORD *)v5[46] + 3);
      if ( *(_BYTE *)(v35 + 56) < 6u )
      {
        v37 = 0LL;
        *(_QWORD *)(v15 + 56) = *(_QWORD *)(v35 + 312);
        v36 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
        *(_QWORD *)(v15 + 64) = 0LL;
      }
      else
      {
        *(_QWORD *)(v15 + 64) = *(_QWORD *)(v35 + 216);
        v36 = 0LL;
        v37 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      *(_QWORD *)(v15 + 72) = v37;
      *(_QWORD *)(v15 + 48) = v36;
      *(_QWORD *)(v15 + 40) = v10;
      if ( v8 )
      {
        *(_QWORD *)(v15 + 32) = v8;
        *((_DWORD *)v8 + 22) = 1;
        goto LABEL_54;
      }
    }
    v10[22] = 1;
    goto LABEL_54;
  }
  *(_QWORD *)(v15 + 16) = v5[46];
  v24 = *((_QWORD *)v5[46] + 3);
  if ( *(_BYTE *)(v24 + 56) < 6u )
  {
    v26 = 0LL;
    *(_QWORD *)(v15 + 56) = *(_QWORD *)(v24 + 312);
    v25 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
    *(_QWORD *)(v15 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)(v15 + 64) = *(_QWORD *)(v24 + 216);
    v25 = 0LL;
    v26 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
    *(_QWORD *)(v15 + 56) = 0LL;
  }
  *(_QWORD *)(v15 + 72) = v26;
  *(_QWORD *)(v15 + 48) = v25;
  v10[22] = 1;
  if ( Increment )
    *(_QWORD *)(v15 + 40) = v10;
  else
    *(_QWORD *)(v15 + 32) = v10;
LABEL_54:
  v30 = (NDIS_HANDLE *)(v10 + 36);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 2);
  v31 = (NDIS_HANDLE *)(v10 + 6);
  v32 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v5[46];
  if ( NdisBindingHandle == v32 )
  {
    v33 = v5[6];
    *v31 = ProtocolVcContext;
    if ( *((_DWORD *)v5 + 98) >= 6u )
      v34 = v5[4];
    else
      v34 = v5[3];
    v9 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v34 + 1))(v33, v10, v10 + 36);
    if ( v61 )
      *((_QWORD *)v10 + 25) = *v30;
  }
  else
  {
    v38 = v5[47];
    *v30 = ProtocolVcContext;
    v9 = ((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v32)[132](v38, v10, v10 + 6);
  }
  if ( v9 )
  {
LABEL_71:
    if ( !v8 )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( !v8 || v57 && !Increment )
  {
    *(_QWORD *)(v15 + 24) = *v31;
    goto LABEL_71;
  }
LABEL_72:
  *(_DWORD *)(v15 + 4) &= ~0x10u;
LABEL_73:
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 2, NewIrql);
  if ( v9 )
  {
    if ( !v8 )
    {
      if ( !v61 )
      {
        v41 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 27);
        if ( v41 )
          v41(*((_QWORD *)v10 + 25));
      }
      ExFreePoolWithTag((PVOID)v15, 0);
    }
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_90;
  }
  v39 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
  if ( Increment )
  {
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 70, (PLIST_ENTRY)v10 + 2, v39);
    v48 = *((_DWORD *)v5 + 98) < 6u;
    *((_QWORD *)v10 + 13) = *v30;
    *((_QWORD *)v10 + 12) = (*(_QWORD **)((char *)v5 + (-(__int64)v48 & 0xFFFFFFFFFFFFFFF8uLL) + 32))[2];
    if ( !v61 )
      ExInterlockedInsertHeadList((PLIST_ENTRY)v5[5] + 70, (PLIST_ENTRY)(v10 + 38), (PKSPIN_LOCK)v5[5] + 29);
  }
  else
  {
    *((_QWORD *)v10 + 13) = *((_QWORD *)v10 + 3);
    *((_QWORD *)v10 + 12) = *((_QWORD *)v5[46] + 133);
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 70, (PLIST_ENTRY)(v10 + 38), v39);
    ExInterlockedInsertHeadList((PLIST_ENTRY)v5[46] + 70, (PLIST_ENTRY)v10 + 2, (PKSPIN_LOCK)v5[46] + 29);
  }
LABEL_91:
  v47 = *(_BYTE *)(*((_QWORD *)v10 + 24) + 32LL);
  if ( v5 )
    v48 = *(_BYTE *)(*((_QWORD *)v5[46] + 3) + 56LL) < 6u;
  else
    v48 = *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) < 6u;
  if ( v48 )
  {
    if ( v47 < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          19,
          17,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v49 = 0LL;
      v50 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
      v51 = ndisMCoSendCompleteToNdisPacket;
      v52 = 0LL;
      v54 = ndisCoSendPacketsToNdisPackets;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          19,
          16,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v49 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      v50 = 0LL;
      v51 = 0LL;
      v54 = ndisCoSendPacketsToNetBufferLists;
      v52 = ndisMCoSendNetBufferListsCompleteToNdisPackets;
    }
    Incrementa.QuadPart = (LONGLONG)v54;
    v53 = 0LL;
  }
  else
  {
    if ( v47 < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          19,
          15,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v49 = 0LL;
      v50 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
      v51 = (void (*)(int, void *, struct _NDIS_PACKET *))ndisMCoSendCompleteToNetBufferLists;
      v52 = 0LL;
      v53 = ndisCoSendNetBufferListsToNdisPacket;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          19,
          14,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v49 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
      v50 = 0LL;
      v51 = 0LL;
      v52 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisMCoSendNetBufferListsCompleteToNetBufferLists;
      v53 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisCoSendNetBufferListsToNetBufferLists;
    }
    Incrementa.QuadPart = 0LL;
  }
  *((_QWORD *)v10 + 31) = v53;
  *((_QWORD *)v10 + 32) = v52;
  *((LARGE_INTEGER *)v10 + 33) = Incrementa;
  *((_QWORD *)v10 + 34) = v51;
  *((_QWORD *)v10 + 35) = v50;
  *((_QWORD *)v10 + 36) = v49;
  *((LARGE_INTEGER *)v10 + 39) = ExInterlockedAddLargeInteger(v58 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_112:
  *NdisVcHandle = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      (char)v10,
      v9);
  return v9;
}
