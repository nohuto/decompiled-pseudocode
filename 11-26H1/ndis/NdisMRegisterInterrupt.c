/*
 * XREFs of NdisMRegisterInterrupt @ 0x1400DC840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1400929A8 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterrupt(
        PNDIS_MINIPORT_INTERRUPT Interrupt,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InterruptVector,
        UINT InterruptLevel,
        BOOLEAN RequestIsr,
        BOOLEAN SharedInterrupt,
        NDIS_INTERRUPT_MODE InterruptMode)
{
  union _LARGE_INTEGER v7; // r14
  unsigned __int8 Class; // r15
  int v11; // edx
  NDIS_STATUS v12; // ebx
  BOOLEAN v13; // r12
  void (__fastcall *v14)(void *); // rcx
  __int64 v15; // rcx
  KAFFINITY Affinity; // rcx
  LONG HighPart; // r13d
  _BOOL8 v18; // rdx
  _DEVICE_OBJECT *v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  char v22; // r12
  __int64 v24; // [rsp+38h] [rbp-61h]
  __int64 v25; // [rsp+40h] [rbp-59h]
  union _LARGE_INTEGER v26; // [rsp+58h] [rbp-41h] BYREF
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+68h] [rbp-31h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v28; // [rsp+F0h] [rbp+57h] BYREF

  v7.QuadPart = InterruptLevel;
  v28 = 0LL;
  v26.QuadPart = 0LL;
  Class = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)MiniportAdapterHandle,
      v7.LowPart);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u )
  {
    v12 = -1071448020;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
    *((_QWORD *)MiniportAdapterHandle + 14) = 0LL;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  v13 = SharedInterrupt;
  Interrupt->Reserved = (void *)*((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 14) = Interrupt;
  Interrupt->DpcCount = 0;
  Interrupt->IsDeregistered = 0;
  Interrupt->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Interrupt->MiniportIsr = *(void (__fastcall **)(unsigned __int8 *, unsigned __int8 *, void *))(*((_QWORD *)MiniportAdapterHandle
                                                                                                 + 470)
                                                                                               + 168LL);
  v14 = *(void (__fastcall **)(void *))(*((_QWORD *)MiniportAdapterHandle + 470) + 152LL);
  Interrupt->IsrRequested = RequestIsr;
  Interrupt->MiniportDpc = v14;
  Interrupt->SharedInterrupt = v13;
  if ( !v13 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x4000000u;
  KeInitializeEvent(&Interrupt->DpcsCompletedEvent, SynchronizationEvent, 0);
  KeInitializeDpc(&Interrupt->InterruptDpc, (PKDEFERRED_ROUTINE)ndis5InterruptDpc, Interrupt);
  KeSetImportanceDpc(&Interrupt->InterruptDpc, MediumImportance);
  *((_QWORD *)MiniportAdapterHandle + 430) = MiniportAdapterHandle;
  *((_QWORD *)MiniportAdapterHandle + 429) = ndis5QueuedMiniportDpcWorkItem;
  *((_QWORD *)MiniportAdapterHandle + 427) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)MiniportAdapterHandle + 30, 0xFFFFFFDF);
  v12 = ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 2, v7, &v26, &v28);
  if ( v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = v7.LowPart;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
        (char)MiniportAdapterHandle,
        v24);
    }
    if ( (byte_14011D041 & 1) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v15,
        &RegisterInterruptFailed,
        (const GUID *)((char *)MiniportAdapterHandle + 4008),
        (__int64)MiniportAdapterHandle + 4008,
        *((_DWORD *)MiniportAdapterHandle + 1014),
        *((_QWORD *)MiniportAdapterHandle + 503),
        v12,
        1,
        0);
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( v28 )
  {
    Affinity = v28->u.Interrupt.Affinity;
    Class = v28->u.Connection.Class;
    HighPart = v28->u.Generic.Start.HighPart;
    v18 = v28->Flags != 0;
    v19 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x80000000;
    Parameters.FullySpecified.PhysicalDeviceObject = v19;
    Parameters.FullySpecified.ProcessorEnableMask = Affinity;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMIsr;
    Parameters.Version = 1;
    Parameters.FullySpecified.InterruptObject = &Interrupt->InterruptObject;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)Interrupt;
    Parameters.FullySpecified.Vector = HighPart;
    Parameters.FullySpecified.Irql = Class;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = Class;
    Parameters.FullySpecified.InterruptMode = v18;
    Parameters.FullySpecified.ShareVector = v13;
    v20 = IoConnectInterruptEx(&Parameters);
    v22 = v20;
    if ( v20 < 0 )
    {
      v12 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = HighPart;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
          Class,
          v24);
      }
      if ( (byte_14011D041 & 1) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v21,
          &RegisterInterruptFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          (__int64)MiniportAdapterHandle + 4008,
          *((_DWORD *)MiniportAdapterHandle + 1014),
          *((_QWORD *)MiniportAdapterHandle + 503),
          v22,
          2,
          Class);
      Interrupt->InterruptObject = 0LL;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v12;
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0xDu,
      (struct _GUID *)&WPP_b57355dc9ebc301c1304e623da4026ea_Traceguids,
      (char)MiniportAdapterHandle,
      Class,
      v25);
  }
  return v12;
}
