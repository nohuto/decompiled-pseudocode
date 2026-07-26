/*
 * XREFs of NdisAllocateTimerObject @ 0x14005EE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateTimerObject(
        NDIS_HANDLE NdisHandle,
        PNDIS_TIMER_CHARACTERISTICS TimerCharacteristics,
        PNDIS_HANDLE pTimerObject)
{
  NDIS_STATUS v3; // edi
  __int64 Pool2; // rax
  __int64 v8; // rsi
  struct _KTIMER *v9; // rcx
  void *FunctionContext; // rax
  struct _KDPC *v11; // rcx
  KIRQL v12; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v14; // rdx

  v3 = 0;
  *pTimerObject = 0LL;
  if ( TimerCharacteristics->Header.Type != 0x97 || TimerCharacteristics->Header.Size < 0x18u )
    return -1073676283;
  Pool2 = ExAllocatePool2(64LL, 208LL, TimerCharacteristics->AllocationTag);
  v8 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 24) = NdisHandle;
  v9 = (struct _KTIMER *)(Pool2 + 32);
  *(_DWORD *)(Pool2 + 160) = TimerCharacteristics->AllocationTag;
  *(_QWORD *)(Pool2 + 168) = TimerCharacteristics->TimerFunction;
  FunctionContext = TimerCharacteristics->FunctionContext;
  *(_QWORD *)(v8 + 184) = FunctionContext;
  *(_QWORD *)(v8 + 176) = FunctionContext;
  KeInitializeTimer(v9);
  v11 = (struct _KDPC *)(v8 + 96);
  if ( *(_BYTE *)NdisHandle == 17 )
  {
    *(_QWORD *)(v8 + 192) = NdisHandle;
    KeInitializeDpc(v11, (PKDEFERRED_ROUTINE)ndisMTimerObjectDpc, (PVOID)v8);
  }
  else
  {
    KeInitializeDpc(v11, ndisNonMiniportTimerObjectDpc, (PVOID)v8);
    KeSetImportanceDpc((PRKDPC)(v8 + 96), LowImportance);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalTimerListLock);
  Flink = ndisGlobalTimerList.Flink;
  v14 = (_LIST_ENTRY *)(v8 + 8);
  if ( ndisGlobalTimerList.Flink->Blink != &ndisGlobalTimerList )
    __fastfail(3u);
  v14->Flink = ndisGlobalTimerList.Flink;
  *(_QWORD *)(v8 + 16) = &ndisGlobalTimerList;
  Flink->Blink = v14;
  ndisGlobalTimerList.Flink = (_LIST_ENTRY *)(v8 + 8);
  KeReleaseSpinLock(&ndisGlobalTimerListLock, v12);
  *pTimerObject = (PVOID)v8;
  return v3;
}
