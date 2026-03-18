/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x140B026F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpPsProvCaptureState @ 0x14082FE4C (EtwpPsProvCaptureState.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  BOOLEAN v12; // al
  int v13; // ecx
  __int64 v14; // r9
  int *v15; // r10
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  int v20; // ebx
  BOOLEAN v21; // al
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  BOOLEAN v25; // al
  int v26; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-3Ch]
  int v28; // [rsp+38h] [rbp-38h]
  int v29; // [rsp+3Ch] [rbp-34h]
  int v30; // [rsp+40h] [rbp-30h]
  int v31; // [rsp+44h] [rbp-2Ch]

  KeWaitForSingleObject(&EtwpSecurityLock.Header.WaitListHead.Blink, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v23 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v24 = v23 | 0x2000000;
      v26 = 100663808;
      if ( !EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x60uLL) )
        v24 = v23;
      v25 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x1FA0uLL);
      v22 = v24 | 0x4000000;
      if ( !v25 )
        v22 = v24;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v26 = (int)CallbackContext;
        v27 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_20:
        v14 = 1LL;
        goto LABEL_13;
      }
      v26 = 545783808;
      v20 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x420uLL) != 0 ? 0x20080000 : 0;
      v21 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v22 = v20 | 0x20800000;
      if ( !v21 )
        v22 = v20;
    }
    v27 = v22;
    goto LABEL_20;
  }
  v9 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart)
    || EtwEventEnabled(EtwpPsProvRegHandle, &EnableProcessTracingCallbacks) )
  {
    v9 = 1;
  }
  v10 = v9 | 2;
  if ( !EtwEventEnabled(EtwpPsProvRegHandle, &ThreadStart) )
    v10 = v9;
  v26 = 524295;
  v11 = v10 | 4;
  if ( !EtwEventEnabled(EtwpPsProvRegHandle, &ImageLoad) )
    v11 = v10;
  v12 = EtwEventEnabled(EtwpPsProvRegHandle, &JobStart);
  v13 = v11 | 0x80000;
  v28 = 536879104;
  if ( !v12 )
    v13 = v11;
  v27 = v13;
  v29 = EtwProviderEnabled(EtwpPsProvRegHandle, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v30 = 1073741826;
  v31 = EtwProviderEnabled(EtwpPsProvRegHandle, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState((__int64 *)&PsProvGuid, MatchAnyKeyword);
  v14 = 3LL;
LABEL_13:
  v15 = &v26;
  do
  {
    v16 = EtwpHostSiloState;
    v17 = (unsigned int)v15[1];
    v18 = *v15 & ~v15[1];
    v15 += 2;
    *(_DWORD *)(EtwpHostSiloState + 4 * (v17 >> 29) + 4812) |= v17 & 0x1FFFFFFF;
    *(_DWORD *)(v16 + 4 * ((unsigned __int64)v18 >> 29) + 4812) &= ~(v18 & 0x1FFFFFFF);
    --v14;
  }
  while ( v14 );
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.Header.WaitListHead.Blink, 0);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    Pool2->Parameter = Pool2;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
