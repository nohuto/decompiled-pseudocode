/*
 * XREFs of RaidUnitCompleteIrpRequest @ 0x140021CC0
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x14002AAB0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidCheckPerProcessorCompletions @ 0x14002ACE0 (RaidCheckPerProcessorCompletions.c)
 *     RaidpAdapterDpcRoutine @ 0x14002FA70 (RaidpAdapterDpcRoutine.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     StorpTelemetryCollectPerfData @ 0x140021FA0 (StorpTelemetryCollectPerfData.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     StorpTelemetryCollectErrorData @ 0x140025890 (StorpTelemetryCollectErrorData.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     RaUnitAttributedIoComplete @ 0x1400995E8 (RaUnitAttributedIoComplete.c)
 *     RaUnitAttributedIoDequeued @ 0x1400996B8 (RaUnitAttributedIoDequeued.c)
 *     StorEtwIOIrpRequestServiceTimeEventData @ 0x1400B0A6C (StorEtwIOIrpRequestServiceTimeEventData.c)
 *     StorEtwLogoIrpRequestServiceTimeEventData @ 0x1400B0CE8 (StorEtwLogoIrpRequestServiceTimeEventData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitCompleteIrpRequest(PIRP Irp, unsigned int a2, __int64 a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rbx
  __int64 DeviceExtension; // rdi
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 result; // rax
  unsigned __int8 MajorFunction; // al
  char v13; // al
  int v14; // r9d
  unsigned int Length; // r15d
  int Status; // edx
  int v17; // ecx
  __int64 v18; // r15
  KIRQL v19; // r9
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 *v22; // r8
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rdx
  __int64 *v26; // rax
  unsigned __int8 v27; // bl
  __int64 v28; // rsi
  unsigned __int64 v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v37; // [rsp+68h] [rbp-1h]
  unsigned __int64 QpcTimeStamp; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v40; // [rsp+88h] [rbp+1Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v37 = &v36;
  v36 = (__int64)&v36;
  v5 = a2;
  v39[0] = 0LL;
  QpcTimeStamp = 0LL;
  DeviceExtension = (__int64)CurrentStackLocation->DeviceObject->DeviceExtension;
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173441 & 1) != 0 )
      StorEtwIOIrpRequestServiceTimeEventData(Irp, 0LL, 0LL, a4);
    if ( *(_DWORD *)(DeviceExtension + 1940) && (byte_140173443 & 2) != 0 )
      StorEtwLogoIrpRequestServiceTimeEventData(Irp, 0LL, 0LL, a4);
    if ( (CurrentStackLocation->MajorFunction == 3 || CurrentStackLocation->MajorFunction == 4) && byte_140173441 < 0 )
    {
      v40 = 0LL;
      IoGetActivityIdIrp(Irp, &v40);
      if ( byte_140173441 < 0 )
      {
        Status = Irp->IoStatus.Status;
        v17 = Status >> 31;
        LOBYTE(v17) = ((Status >> 31) & 3) + 1;
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v17,
          Status,
          (unsigned int)&v40,
          (_DWORD)Irp,
          Status,
          v17,
          (Status >> 31) & 2,
          0,
          0,
          0,
          (char)Irp);
      }
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 2372) )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      v13 = 42;
    }
    else if ( MajorFunction == 3 )
    {
      v13 = 40;
    }
    else if ( MajorFunction == 9 )
    {
      v13 = 53;
    }
    else
    {
      v13 = 0;
    }
    StorpTelemetryCollectPerfData(0, 0, DeviceExtension, (_DWORD)Irp, v13);
  }
  if ( g_StorpTraceLoggingErrorDataEnabled && Irp->IoStatus.Status < 0 )
    StorpTelemetryCollectErrorData(DeviceExtension, Irp, 0LL, 0LL);
  if ( (*(_BYTE *)(DeviceExtension + 506) & 2) != 0 )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(DeviceExtension + 2232));
  }
  if ( *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 12LL) )
  {
    QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v18 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(DeviceExtension + 32) + 16LL), QpcTimeStamp);
    if ( (int)IoGetIoAttributionHandle(Irp, v39) >= 0 )
      RaUnitAttributedIoComplete(DeviceExtension, (_DWORD)Irp, v39[0], QpcTimeStamp, v18);
  }
  if ( (qword_140172448 & 0x2000) != 0 )
  {
    v14 = Irp->IoStatus.Status;
    QpcTimeStamp = 0LL;
    DbgLogRequest(
      *(_QWORD *)(DeviceExtension + 24),
      50,
      (_DWORD)Irp,
      v14,
      CurrentStackLocation->MajorFunction,
      0LL,
      0LL);
  }
  if ( (int)v5 < 0 )
  {
    Length = 0;
    if ( CurrentStackLocation->MajorFunction == 3 || CurrentStackLocation->MajorFunction == 4 )
      Length = CurrentStackLocation->Parameters.Read.Length;
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(DeviceExtension + 32) + 24LL));
    --*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 4LL);
    *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 8LL) -= Length;
    while ( 1 )
    {
      v20 = *(_QWORD *)(DeviceExtension + 32);
      v21 = *(__int64 **)(v20 + 48);
      v22 = (__int64 *)(v20 + 48);
      if ( v21 == (__int64 *)(v20 + 48) || *(int *)(v20 + 4) >= 8 || *(int *)(v20 + 8) >= 0x40000 )
        break;
      if ( (__int64 *)v21[1] != v22 )
        goto LABEL_80;
      v23 = *v21;
      if ( *(__int64 **)(*v21 + 8) != v21 )
        goto LABEL_80;
      *v22 = v23;
      *(_QWORD *)(v23 + 8) = v22;
      v24 = 0;
      v25 = v21[2];
      if ( *(_BYTE *)v25 == 3 || *(_BYTE *)v25 == 4 )
        v24 = *(_DWORD *)(v25 + 8);
      ++*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 4LL);
      *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 8LL) += v24;
      v26 = v37;
      if ( (__int64 *)*v37 != &v36 )
LABEL_80:
        __fastfail(3u);
      v21[1] = (__int64)v37;
      *v21 = (__int64)&v36;
      *v26 = (__int64)v21;
      v37 = v21;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 24), v19);
  }
  IofCompleteRequest(Irp, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) & 1) != 0 )
  {
    LODWORD(v5) = v5 & 0x7FFFFFFF;
    if ( _InterlockedExchangeAdd(
           (volatile signed __int32 *)((v5 << 6) + *(_QWORD *)(DeviceExtension + 40) + 4),
           0xFFFFFFFE) == 2
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(DeviceExtension + 32), 0xFFFFFFFC) == 4 )
    {
      v27 = (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) >> 1) & 3;
      if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(DeviceExtension + 32), 1, 0) )
      {
        v28 = *(_QWORD *)(DeviceExtension + 24);
        if ( (v27 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(DeviceExtension) )
        {
          PoFxIdleComponent(**(_QWORD **)(DeviceExtension + 1872), 0LL, 0LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(DeviceExtension + 1864));
        }
        if ( v27 >= 2u && *(_QWORD *)(v28 + 5024) )
          RaidAdapterPoFxIdleComponent(v28, 0LL, 0LL);
        v29 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v30 = *(_DWORD *)(v29 + *(_QWORD *)(DeviceExtension + 40));
        while ( (v30 & 1) == 0 )
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)(v29 + *(_QWORD *)(DeviceExtension + 40)),
                  v30 - 2,
                  v30);
          if ( v31 == v30 )
            goto LABEL_19;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
      }
    }
  }
  else
  {
    v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v9 = *(_DWORD *)(v8 + *(_QWORD *)(DeviceExtension + 40) + 4);
    while ( (v9 & 1) == 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(
             (volatile signed __int32 *)(v8 + *(_QWORD *)(DeviceExtension + 40) + 4),
             v9 - 2,
             v9);
      if ( v10 == v9 )
        goto LABEL_19;
    }
    _InterlockedAdd(*(volatile signed __int32 **)(DeviceExtension + 32), 0xFFFFFFFC);
  }
LABEL_19:
  if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) & 0x100) != 0
    && !(unsigned __int8)RaUnitCheckForwardIoOutstanding(DeviceExtension) )
  {
    RaidStartNextIoPacket(DeviceExtension, 0, 1);
  }
  while ( 1 )
  {
    result = v36;
    if ( (__int64 *)v36 == &v36 )
      return result;
    if ( *(__int64 **)(v36 + 8) != &v36 )
      goto LABEL_80;
    v32 = *(_QWORD *)v36;
    if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 )
      goto LABEL_80;
    v36 = *(_QWORD *)v36;
    *(_QWORD *)(v32 + 8) = &v36;
    v33 = result - 168;
    if ( (int)IoGetIoAttributionHandle(result - 168, v39) >= 0 )
      RaUnitAttributedIoDequeued(v34, v33, v39[0]);
    RaidUnitSubmitIrpRequest(DeviceExtension, v33, 1LL, v35);
  }
}
