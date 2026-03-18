/*
 * XREFs of PopFxUnregisterDevice @ 0x140B06628
 * Callers:
 *     PoFxUnregisterDevice @ 0x140B06270 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B06444 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PoFxActivateComponent @ 0x14037AAB0 (PoFxActivateComponent.c)
 *     PopFxComponentRelationsCleanup @ 0x140470E54 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140471064 (PopFxDeviceRelationsCleanup.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E7BC0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceDpm @ 0x1404EF894 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x1404F6604 (PopFxRemoveDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1404F8240 (PopFxAssignDeviceToDevNode.c)
 *     PopPlUnregisterDevice @ 0x140510374 (PopPlUnregisterDevice.c)
 *     PopPluginUnregisterDevice @ 0x140606088 (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140B06800 (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140B068E8 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 */

__int64 __fastcall PopFxUnregisterDevice(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // eax
  unsigned int i; // edi
  unsigned int v7; // edi
  struct _KEVENT *v8; // rdi
  unsigned int *v9; // rbp
  unsigned int v10; // edx
  unsigned int *v11; // r14
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // esi
  ULONG_PTR v15; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) == 0 )
  {
    v5 = *(_DWORD *)(BugCheckParameter2 + 868);
    for ( i = 0; i < v5; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2);
      v5 = *(_DWORD *)(BugCheckParameter2 + 868);
    }
    v7 = 0;
    if ( v5 )
    {
      do
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * v7++) + 104LL),
          Executive,
          0,
          0,
          0LL);
      while ( v7 < *(_DWORD *)(BugCheckParameter2 + 868) );
    }
  }
  v8 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v8 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2, a3, a4);
    PopDiagTraceFxDeviceUnregistration(v8, BugCheckParameter2);
    PopFxAssignDeviceToDevNode((__int64)v8, 0LL);
  }
  v9 = (unsigned int *)(BugCheckParameter2 + 868);
  v10 = 0;
  if ( *(_DWORD *)(BugCheckParameter2 + 868) )
  {
    do
    {
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * v10) + 96LL) > 0 )
        _InterlockedDecrement((_DWORD *)&stru_140F12420.SwapListEntry + 2);
      ++v10;
    }
    while ( v10 < *v9 );
    v11 = (unsigned int *)(BugCheckParameter2 + 868);
  }
  else
  {
    v11 = (unsigned int *)(BugCheckParameter2 + 868);
  }
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v12 = *(_DWORD *)(BugCheckParameter2 + 32);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v12 & 0xFFFFFBFF, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 0x400) != 0 )
    PopSystemIrpCompletion(
      0LL,
      v8[11].Header.WaitListHead.Blink,
      *((_QWORD *)&v8[11].Header.WaitListHead.Blink[12].Blink + 9 * SBYTE2(v8[11].Header.WaitListHead.Blink[4].Flink)));
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, 0x20u);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 1) == 0 )
  {
    PopFxDeviceRelationsCleanup(BugCheckParameter2);
    v14 = 0;
    if ( *v9 )
    {
      do
        PopFxComponentRelationsCleanup(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * v14++));
      while ( v14 < *v11 );
    }
  }
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v15 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v15 )
    PopPluginUnregisterDevice(v15, *(_QWORD *)(BugCheckParameter2 + 72));
  PopPlUnregisterDevice(BugCheckParameter2);
  if ( v8 )
    KeSetEvent(v8 + 4, 0, 0);
  result = *(unsigned int *)(BugCheckParameter2 + 864);
  if ( (result & 1) != 0 )
    return PopFxDestroyDeviceDpm((__int64)v8, BugCheckParameter2);
  return result;
}
