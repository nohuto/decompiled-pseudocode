/*
 * XREFs of ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140092B40 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A0AA0 (-ndisMReset@@YAHPEAX@Z.c)
 *     NdisIMQueueMiniportCallback @ 0x1400A2180 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1400A2490 (NdisIMRevertBack.c)
 *     ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400C8020 (-ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400CA960 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400DA990 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1400DC554 (ndisMDpc.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DD4F0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FF70 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A0E2C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r14
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *CurrentThread; // rcx
  struct _NDIS_PACKET *ReturnPacketsQueue; // rdx
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // rsi
  unsigned int v7; // eax
  __int64 v8; // rax
  struct _NDIS_PACKET *v9; // rdi
  int v10; // eax
  int v11; // ecx
  _SINGLE_LIST_ENTRY *v12; // rcx
  _SINGLE_LIST_ENTRY *v13; // r14
  _SINGLE_LIST_ENTRY *v14; // rsi
  _SINGLE_LIST_ENTRY *v15; // rcx
  int v16; // edi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *HookAdapterHandle; // rdx
  __int64 v19; // rcx
  _SINGLE_LIST_ENTRY *v20; // rcx
  _SINGLE_LIST_ENTRY *v21; // rcx
  _SINGLE_LIST_ENTRY *v22; // rcx
  struct _GUID *v23; // [rsp+20h] [rbp-79h]
  __int64 v24; // [rsp+30h] [rbp-69h]
  unsigned __int8 v25[16]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v26; // [rsp+50h] [rbp-49h] BYREF
  __int128 v27; // [rsp+60h] [rbp-39h]
  __int128 v28; // [rsp+70h] [rbp-29h]
  __int128 v29; // [rsp+80h] [rbp-19h]
  __int128 v30; // [rsp+90h] [rbp-9h]
  __int128 v31; // [rsp+A0h] [rbp+7h]
  __int128 v32; // [rsp+B0h] [rbp+17h]

  v25[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      50,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  while ( 1 )
  {
    v2 = 0;
    if ( a1->WorkQueue[1].Next && (a1->Flags & 0x80300000) == 0 )
    {
      Next = a1->WorkQueue[1].Next;
      if ( Next )
      {
        a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
        Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
        a1->SingleWorkItems[1].Next = Next;
      }
      a1->DeferredSendHandler(a1);
      v2 = 1;
    }
    if ( a1->WorkQueue[4].Next )
    {
      v22 = a1->WorkQueue[0].Next;
      if ( v22 )
      {
        a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v22->Next;
        v22->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v22;
        ndisMDoOidRequest(a1);
      }
      goto LABEL_63;
    }
    CurrentThread = a1->WorkQueue[2].Next;
    if ( CurrentThread )
    {
      a1->WorkQueue[2] = (_SINGLE_LIST_ENTRY)CurrentThread->Next;
      CurrentThread->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[2];
      a1->SingleWorkItems[2].Next = CurrentThread;
      ReturnPacketsQueue = a1->ReturnPacketsQueue;
      MiniportReturnPacketHandler = a1->MiniportReturnPacketHandler;
      if ( ReturnPacketsQueue )
      {
        do
        {
          v7 = *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4];
          if ( v7 >= ndisPacketStackSize )
            v8 = 16LL;
          else
            v8 = (__int64)ReturnPacketsQueue + 48 * (v7 - (unsigned __int64)ndisPacketStackSize);
          v9 = *(struct _NDIS_PACKET **)v8;
          *(_QWORD *)v8 = 0LL;
          v10 = ReturnPacketsQueue[-1].Reserved[1];
          v11 = *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4] - 1;
          *(_DWORD *)&ReturnPacketsQueue[-1].ProtocolReserved[4] = v11;
          if ( (v10 & 1) != 0 && v11 == -1 )
            NDIS_FREE_XFER_DATA_PACKET(ReturnPacketsQueue);
          else
            ((void (__fastcall *)(void *))MiniportReturnPacketHandler)(a1->MiniportAdapterContext);
          if ( (a1->Flags & 0x8000) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
          ReturnPacketsQueue = v9;
        }
        while ( v9 );
      }
      a1->ReturnPacketsQueue = 0LL;
    }
    if ( (a1->Flags & 0x80000000) != 0 )
      break;
    v12 = a1->WorkQueue[6].Next;
    if ( v12 )
    {
      a1->WorkQueue[6] = (_SINGLE_LIST_ENTRY)v12->Next;
      v13 = v12[2].Next;
      v14 = v12[3].Next;
      ExFreePoolWithTag(v12, 0);
      if ( v14 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        ((void (__fastcall *)(void *, _SINGLE_LIST_ENTRY *))v14)(a1->MiniportAdapterContext, v13);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      v2 = 1;
    }
    if ( !a1->WorkQueue[3].Next )
      goto LABEL_46;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        12,
        52,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1);
    if ( (byte_14011D043 & 1) != 0 )
    {
      LODWORD(v24) = 1;
      LODWORD(v23) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)v12,
        (__int64)&NotifyMiniportAction,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v23,
        a1->NetLuid.Value,
        v24);
    }
    v15 = a1->WorkQueue[3].Next;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    if ( v15 )
    {
      a1->WorkQueue[3] = (_SINGLE_LIST_ENTRY)v15->Next;
      LODWORD(v15[1].Next) = 4;
      v15->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[4];
      a1->WorkQueue[4].Next = v15;
    }
    if ( (a1->PnPFlags & 0x80000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFEFFFFF);
      v16 = -2147418111;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x200000u);
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFEFFFFF);
      ndisMSwapOpenHandlers(a1, 1u);
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      DriverHandle = a1->DriverHandle;
      HookAdapterHandle = a1->HookAdapterHandle;
      *(_QWORD *)&v26 = 7340440LL;
      *((_QWORD *)&v26 + 1) = a1;
      v27 = 0LL;
      DWORD1(v27) = 1073807364;
      v28 = 0LL;
      v29 = 0uLL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      (*((void (__fastcall **)(_QWORD, NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *, struct _NDIS_MINIPORT_BLOCK *, __int128 *))g_MiniportHookDrivers
       + 16 * (__int64)(int)DriverHandle->HookType
       + 8))(
        *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)(int)DriverHandle->HookType + 3),
        HookAdapterHandle,
        a1,
        &v26);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          17,
          71,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
      if ( (byte_14011D041 & 4) != 0 )
      {
        LODWORD(v24) = 65537;
        LODWORD(v23) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v19,
          (__int64)&CallMiniportReset,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v23,
          a1->NetLuid.Value,
          v24);
      }
      v16 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
              v25,
              a1->MiniportAdapterContext);
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      CurrentThread = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      a1->MiniportThread = CurrentThread;
      if ( v16 == 259 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            12,
            53,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a1);
        if ( (byte_14011D043 & 1) != 0 )
        {
          LODWORD(v24) = 2;
LABEL_60:
          LODWORD(v23) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            (__int64)CurrentThread,
            (__int64)&NotifyMiniportAction,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v23,
            a1->NetLuid.Value,
            v24);
          goto LABEL_63;
        }
        goto LABEL_63;
      }
    }
    if ( (unsigned int)ndisMResetCompleteStage1(a1, v16, v25[0]) )
    {
      v25[0] = 0;
LABEL_45:
      ndisMResetCompleteStage2(a1);
LABEL_46:
      v20 = a1->WorkQueue[0].Next;
      if ( v20 )
      {
        a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v20->Next;
        v20->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v20;
        ndisMDoOidRequest(a1);
        v2 = 1;
      }
      v21 = a1->WorkQueue[1].Next;
      if ( v21 )
      {
        a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v21->Next;
        v21->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
        a1->SingleWorkItems[1].Next = v21;
        a1->DeferredSendHandler(a1);
      }
      else if ( !v2 )
      {
        goto LABEL_63;
      }
    }
    else if ( !v25[0] || v16 )
    {
      goto LABEL_45;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      51,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  if ( (byte_14011D043 & 1) != 0 )
  {
    LODWORD(v24) = 0;
    goto LABEL_60;
  }
LABEL_63:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      54,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
}
