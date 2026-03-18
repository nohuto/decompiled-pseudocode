/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x1409DD2BC
 * Callers:
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1407B8884 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x140912B50 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpProcessCustomDeviceEvent @ 0x1409DD260 (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3DBDC (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1409DD548 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1409DD5EC (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x140A97EE8 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, _QWORD *Object, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  __int64 v7; // rbx
  char v8; // r13
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  _OWORD *v15; // rdx
  int v16; // ebx
  int v17; // r14d
  __int64 *v18; // rbx
  __int64 v19; // rbx
  unsigned int v20; // r14d
  GUID v22; // xmm0
  void *v23; // r15
  PVOID v24; // r14
  __int64 v25; // r13
  int v26; // ebx
  void *v27; // r12
  unsigned __int64 v28; // rax
  struct _KTHREAD *v29; // rcx
  int v30; // [rsp+20h] [rbp-49h] BYREF
  int v31; // [rsp+24h] [rbp-45h]
  PVOID Objecta; // [rsp+28h] [rbp-41h]
  int v33; // [rsp+30h] [rbp-39h]
  __int64 v34; // [rsp+38h] [rbp-31h]
  _QWORD *v35; // [rsp+40h] [rbp-29h]
  __int64 v36; // [rsp+48h] [rbp-21h]
  _OWORD v37[2]; // [rsp+50h] [rbp-19h] BYREF

  v4 = Object;
  Objecta = Object;
  v35 = a4;
  v31 = -1;
  v30 = 0;
  memset(v37, 0, sizeof(v37));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v7 = *(_QWORD *)(v4[39] + 40LL);
  v36 = v7;
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v22 = *Source1;
    LODWORD(v37[0]) = 2097153;
    *(GUID *)((char *)v37 + 4) = v22;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v8 = 1;
    v9 = (__int64 *)(v7 + 480);
    v10 = v7 + 472;
  }
  else
  {
    v8 = 0;
    v9 = (__int64 *)(v7 + 472);
    v10 = v7 + 472;
  }
  v11 = *v9;
  v34 = v10;
  while ( 1 )
  {
    if ( v11 == v10 )
    {
      v20 = 0;
      goto LABEL_22;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v11 + 20) == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    {
      SessionIdFromPDO = v31;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v4);
      v31 = SessionIdFromPDO;
    }
    ++*(_WORD *)(v11 + 56);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 72), 1u);
    if ( (SessionIdFromPDO == -1 || *(_DWORD *)(v11 + 20) == SessionIdFromPDO) && !*(_BYTE *)(v11 + 58) )
      break;
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
    KeLeaveCriticalRegion();
LABEL_18:
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    v18 = (__int64 *)(v11 + 8);
    if ( !v8 )
      v18 = (__int64 *)v11;
    v19 = *v18;
    PnpDereferenceNotify((PVOID)v11);
    v10 = v34;
    v11 = v19;
  }
  if ( a3 )
  {
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(v11 + 80);
    v15 = (_OWORD *)a3;
  }
  else
  {
    *((_QWORD *)&v37[1] + 1) = *(_QWORD *)(v11 + 80);
    v15 = v37;
  }
  v16 = PnpNotifyDriverCallback(v11, v15, &v30);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
  KeLeaveCriticalRegion();
  v17 = v30;
  if ( v16 < 0 )
    v17 = 0;
  v33 = v17;
  v30 = v17;
  if ( v17 >= 0
    || Source1 != &GUID_TARGET_DEVICE_QUERY_REMOVE
    && RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) != 16 )
  {
    v4 = Objecta;
    goto LABEL_18;
  }
  if ( v35 )
    *v35 = *(_QWORD *)(v11 + 48);
  v23 = (void *)v11;
  *(GUID *)((char *)v37 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  v24 = Objecta;
  v25 = v36 + 472;
  do
  {
    v26 = -1;
    v27 = (void *)v11;
    v28 = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v11 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(v28) )
      v26 = IopGetSessionIdFromPDO(v24);
    ++*(_WORD *)(v11 + 56);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 72), 1u);
    if ( (v26 == -1 || *(_DWORD *)(v11 + 20) == v26) && !*(_BYTE *)(v11 + 58) )
    {
      *((_QWORD *)&v37[1] + 1) = *(_QWORD *)(v11 + 80);
      PnpNotifyDriverCallback(v11, v37, 0LL);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
    KeLeaveCriticalRegion();
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    v11 = *(_QWORD *)(v11 + 8);
    PnpDereferenceNotify(v27);
    if ( v27 == v23 )
      PnpDereferenceNotify(v23);
  }
  while ( v11 != v25 );
  v20 = v33;
LABEL_22:
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v20;
}
