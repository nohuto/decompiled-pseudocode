/*
 * XREFs of ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400099A0 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140009DF0 (-ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 * Callees:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140029030 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140029CB0 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x14003CDB0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned int Number; // ebp
  unsigned int v7; // edi
  struct _NET_BUFFER_LIST *v8; // r14
  int PcwDatapathCycleMask; // eax
  wchar_t *Buffer; // rcx
  KIRQL v12; // r15
  _SLIST_HEADER *v13; // r12
  unsigned int v14; // r15d
  struct _NET_BUFFER_LIST *v15; // rdi
  bool v16; // zf
  struct _NET_BUFFER_LIST *v17; // rbp
  struct _NET_BUFFER *FirstNetBuffer; // rbx
  unsigned int v19; // ebp
  _SLIST_HEADER *Alignment; // rax
  unsigned int v21; // edx
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  unsigned int TimestampFlags; // eax
  LARGE_INTEGER *v25; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v27; // rax
  char v28; // dl
  LARGE_INTEGER *v29; // rbx
  char v30; // r12
  wchar_t *v31; // rbx
  char *v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int8 v34[4]; // [rsp+40h] [rbp-68h] BYREF
  int v35; // [rsp+44h] [rbp-64h]
  int v36; // [rsp+48h] [rbp-60h]
  wchar_t *v37; // [rsp+50h] [rbp-58h]
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+58h] [rbp-50h]
  struct _NET_BUFFER_LIST *v39; // [rsp+60h] [rbp-48h]
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // [rsp+68h] [rbp-40h]
  unsigned __int8 v41; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v42; // [rsp+C0h] [rbp+18h]

  v42 = a3;
  Number = -1;
  v7 = a3;
  v8 = a2;
  DriverHandle = a1->DriverHandle;
  v37 = 0LL;
  v35 = 0;
  v36 = -1;
  if ( a1->PcwDatapathEventMask || a1->PcwDatapathCycleMask )
  {
    PcwDatapathCycleMask = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    v35 = PcwDatapathCycleMask;
    v37 = Buffer;
    if ( !Buffer )
      v37 = a1->Reserved4.Buffer;
  }
  v12 = 2;
  SendNetBufferListsHandler = a1->DriverHandle->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  if ( a1->MiniportMediaType
    || (!a1->LoopbackOpens || a1->NumOpens <= 1u && !a1->ReceiveFilters) && (a4 & 2) == 0 && (a1->Flags & 0x4000) == 0 )
  {
LABEL_29:
    if ( a5 || !a1->SelectiveSuspend )
      goto LABEL_37;
    Alignment = (_SLIST_HEADER *)v8;
    v21 = 0;
    if ( v8 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        ++v21;
      }
      while ( Alignment );
    }
    if ( (a1->Flags & 0x80u) == 0
       ? ndisWdmSetBusyAsync((__int64)a1, v21, 0x34u, (__int64)v8, v7)
       : ndisWdfSetBusyAsync((__int64)a1, v21, 0x34u, (__int64)v8, v7) )
    {
LABEL_37:
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(v8, 0LL, a1->NblTracker, NdisNblTrackerEvent_SentToMiniport, a4 & 1);
      if ( byte_14011F740 )
      {
        CompContext = a1->PktMonEdge.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
            PktMonClientNblLogNdis(&a1->PktMonEdge, v8, a3, 2LL);
        }
      }
      TimestampFlags = a1->TimestampFlags;
      if ( (TimestampFlags & 2) != 0 )
      {
        v25 = (LARGE_INTEGER *)v8;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( v8 )
        {
          do
          {
            v25[44] = PerformanceCounter;
            v25 = (LARGE_INTEGER *)v25->QuadPart;
          }
          while ( v25 );
        }
      }
      else if ( (TimestampFlags & 4) != 0 )
      {
        v27.QuadPart = 0LL;
        v28 = 0;
        v29 = (LARGE_INTEGER *)v8;
        if ( v8 )
        {
          do
          {
            if ( (v29[16].LowPart & 0x10000) != 0 )
            {
              if ( !v28 )
              {
                v27 = KeQueryPerformanceCounter(0LL);
                v28 = 1;
              }
              v29[44] = v27;
            }
            v29 = (LARGE_INTEGER *)v29->QuadPart;
          }
          while ( v29 );
        }
      }
      v30 = v35;
      if ( (v35 & 0x80) != 0 )
      {
        if ( (a4 & 1) == 0 )
          v12 = KfRaiseIrql(2u);
        Number = KeGetPcr()->Prcb.Number;
        v31 = v37;
        *(_QWORD *)((char *)v37 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 360) = __rdtsc();
      }
      else
      {
        v31 = v37;
      }
      if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
        (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 8))(
          a1->MiniportAdapterContext,
          v8,
          v7,
          a4,
          a1,
          a1->VerifierContext,
          SendNetBufferListsHandler);
      else
        SendNetBufferListsHandler(a1->MiniportAdapterContext, v8, v7, a4);
      if ( v30 < 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        v32 = (char *)v31 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
        v33 = __rdtsc();
        *((_QWORD *)v32 + 20) += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - *((_QWORD *)v32 + 45);
        *((_QWORD *)v32 + 45) = 0LL;
        if ( v12 != 2 )
          KeLowerIrql(v12);
      }
    }
    return;
  }
  v13 = 0LL;
  v34[0] = 0;
  v14 = 0;
  v41 = 0;
  v15 = a2;
  do
  {
    v16 = (v15->Flags & 0x800) == 0;
    v17 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
    v39 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
    if ( !v16 )
    {
      v41 = 0;
LABEL_25:
      v13 = (_SLIST_HEADER *)v15;
      goto LABEL_26;
    }
    FirstNetBuffer = v15->FirstNetBuffer;
    v19 = v42;
    do
    {
      ndisMIsLoopbackNetBuffer(a1, FirstNetBuffer, v15, v34, &v41);
      if ( v34[0] == 1 )
      {
        v34[0] = 0;
        ndisDoLoopbackNetBufferList(a1, FirstNetBuffer, v15, v19, a4);
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    v17 = v39;
    if ( v41 != 1 )
      goto LABEL_25;
    v41 = 0;
    if ( v8 == v15 )
      v8 = v39;
    else
      v13->Alignment = (unsigned __int64)v39;
    v15->Link.Alignment = 0LL;
    v15->Status = 0;
    if ( (a4 & 1) != 0 )
      v14 |= 1u;
    ndisMSendNetBufferListsCompleteInternal(a1, v15, v14, 0);
LABEL_26:
    v15 = v17;
  }
  while ( v17 );
  if ( v8 )
  {
    v7 = v42;
    v12 = 2;
    Number = v36;
    goto LABEL_29;
  }
}
