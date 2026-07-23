/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x140A1A56C
 * Callers:
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1407BB8E4 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1409B4C30 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpProcessCustomDeviceEvent @ 0x140A1A510 (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3FCBC (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140A1A800 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140A1A8A4 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, _QWORD *Object, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  char v9; // r13
  _QWORD **v10; // rdi
  _QWORD *v11; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  _OWORD *v15; // rdx
  int v16; // ebx
  int v17; // r14d
  unsigned int v18; // r14d
  GUID v20; // xmm0
  void *v21; // r15
  PVOID v22; // r14
  _QWORD *v23; // r13
  int v24; // ebx
  void *v25; // r12
  unsigned __int64 v26; // rax
  struct _KTHREAD *v27; // rcx
  int v28; // [rsp+20h] [rbp-49h] BYREF
  int v29; // [rsp+24h] [rbp-45h]
  PVOID Objecta; // [rsp+28h] [rbp-41h]
  int v31; // [rsp+30h] [rbp-39h]
  _QWORD *i; // [rsp+38h] [rbp-31h]
  PVOID P; // [rsp+40h] [rbp-29h]
  _QWORD *v34; // [rsp+48h] [rbp-21h]
  __int64 v35; // [rsp+50h] [rbp-19h]
  _OWORD v36[2]; // [rsp+58h] [rbp-11h] BYREF

  v4 = Object;
  Objecta = Object;
  v34 = a4;
  v29 = -1;
  v28 = 0;
  memset(v36, 0, sizeof(v36));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v7 = *(_QWORD *)(v4[39] + 40LL);
  v35 = v7;
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v20 = *Source1;
    LODWORD(v36[0]) = 2097153;
    *(GUID *)((char *)v36 + 4) = v20;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = 1;
    v8 = (_QWORD *)(v7 + 472);
    v10 = (_QWORD **)(v7 + 480);
  }
  else
  {
    v8 = (_QWORD *)(v7 + 472);
    v9 = 0;
    v10 = (_QWORD **)(v7 + 472);
  }
  v11 = *v10;
  for ( i = v8; ; v8 = i )
  {
    if ( v11 == v8 )
    {
      v18 = 0;
      goto LABEL_22;
    }
    P = v11;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v11 + 5) == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    {
      SessionIdFromPDO = v29;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v4);
      v29 = SessionIdFromPDO;
    }
    ++*((_WORD *)v11 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v11 + 5) == SessionIdFromPDO) && !*((_BYTE *)v11 + 58) )
      break;
    ExReleaseResourceLite((PERESOURCE)v11[9]);
    KeLeaveCriticalRegion();
LABEL_18:
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v9 )
      v11 = (_QWORD *)v11[1];
    else
      v11 = (_QWORD *)*v11;
    PnpDereferenceNotify(P);
  }
  if ( a3 )
  {
    *(_QWORD *)(a3 + 24) = v11[10];
    v15 = (_OWORD *)a3;
  }
  else
  {
    *((_QWORD *)&v36[1] + 1) = v11[10];
    v15 = v36;
  }
  v16 = PnpNotifyDriverCallback(v11, v15, &v28);
  ExReleaseResourceLite((PERESOURCE)v11[9]);
  KeLeaveCriticalRegion();
  v17 = v28;
  if ( v16 < 0 )
    v17 = 0;
  v31 = v17;
  v28 = v17;
  if ( v17 >= 0
    || Source1 != &GUID_TARGET_DEVICE_QUERY_REMOVE
    && RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) != 16 )
  {
    v4 = Objecta;
    goto LABEL_18;
  }
  if ( v34 )
    *v34 = v11[6];
  v21 = v11;
  *(GUID *)((char *)v36 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  v22 = Objecta;
  v23 = (_QWORD *)(v35 + 472);
  do
  {
    v24 = -1;
    v25 = v11;
    v26 = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v11 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v26) )
      v24 = IopGetSessionIdFromPDO(v22);
    ++*((_WORD *)v11 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
    if ( (v24 == -1 || *((_DWORD *)v11 + 5) == v24) && !*((_BYTE *)v11 + 58) )
    {
      *((_QWORD *)&v36[1] + 1) = v11[10];
      PnpNotifyDriverCallback(v11, v36, 0LL);
    }
    ExReleaseResourceLite((PERESOURCE)v11[9]);
    KeLeaveCriticalRegion();
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    v11 = (_QWORD *)v11[1];
    PnpDereferenceNotify(v25);
    if ( v25 == v21 )
      PnpDereferenceNotify(v21);
  }
  while ( v11 != v23 );
  v18 = v31;
LABEL_22:
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v18;
}
