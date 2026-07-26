/*
 * XREFs of NdisFIndicateStatus @ 0x1400560D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140050670 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisIsStatusIndicationCloneable @ 0x14009E400 (NdisIsStatusIndicationCloneable.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  char v2; // al
  KIRQL v5; // al
  char *v6; // rdi
  KIRQL v7; // bp
  __int64 i; // rcx
  _OWORD *Pool2; // rax
  __int64 v10; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  _QWORD Parameter[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = *((_BYTE *)NdisFilterHandle + 288);
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = StatusIndication;
  if ( v2
    || KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFIndicateStatusWrapper,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    memset(&Event, 0, sizeof(Event));
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    v6 = (char *)NdisFilterHandle + 248;
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v7 = v5;
    for ( i = *((_QWORD *)NdisFilterHandle + 31); i; i = *(_QWORD *)(i + 80) )
      v6 = (char *)(i + 80);
    if ( v5 < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)v6 = StatusIndication;
      StatusIndication->NdisReserved[1] = &Event;
      StatusIndication->NdisReserved[0] = 0LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(66LL, StatusIndication->StatusBufferSize + 112LL, 538985550LL);
      *(_QWORD *)v6 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *(_OWORD *)&StatusIndication->Header.Type;
        Pool2[1] = *(_OWORD *)&StatusIndication->PortNumber;
        Pool2[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        Pool2[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        Pool2[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        Pool2[5] = *(_OWORD *)StatusIndication->NdisReserved;
        Pool2[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)v6 + 48LL) = *(_QWORD *)v6 + 112LL;
        memmove(*(void **)(*(_QWORD *)v6 + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v10 = *(_QWORD *)v6;
        *(_QWORD *)(v10 + 80) = 0LL;
        *(_QWORD *)(v10 + 88) = 0LL;
        ndisReferenceRefNoCheck((PKSPIN_LOCK)NdisFilterHandle + 39, 1u);
LABEL_10:
        *((_BYTE *)NdisFilterHandle + 288) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
        if ( v7 < 2u )
          ndisWaitForKernelObject(&Event);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Du,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 75);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x2Eu,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      ++*((_DWORD *)NdisFilterHandle + 76);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
