/*
 * XREFs of PopIdleWakeNotifyWakeSource @ 0x140610904
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1403EC374 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404481A0 (KeGetCurrentProcessorNumberEx.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404EA3F0 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x1406107E8 (PopIdleWakeFindOrAllocateWakeSource.c)
 */

int *__fastcall PopIdleWakeNotifyWakeSource(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v6; // rbx
  const wchar_t *v10; // r8
  ULONG CurrentProcessorNumber; // eax
  int v12; // ecx
  int *result; // rax

  v6 = *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
  if ( *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor && a1 == PpmDripsStateIndex && a2 >= 0 )
  {
    if ( a2 == 129 && *(_BYTE *)a3 == 3 )
    {
      if ( !unk_140F12A00
        || MEMORY[0xFFFFF78000000014] < unk_140F12A00
        || (v10 = &unk_140F12A20, (unsigned __int64)(unk_140F12A00 + 20000000LL) < MEMORY[0xFFFFF78000000014]) )
      {
        v10 = L"Unknown";
      }
      RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a3 + 2), 0x80uLL, v10);
    }
    PopIdleWakeStopActiveIntervalAccounting((unsigned int *)v6, a4);
    *(_QWORD *)(v6 + 40) = PopIdleWakeFindOrAllocateWakeSource(v6, a2, a3);
    *(_QWORD *)(v6 + 48) = a5;
    *(_QWORD *)(v6 + 8) = a5;
    *(_QWORD *)(v6 + 56) = a5 - a4;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    *(_DWORD *)v6 |= 0x10u;
    *(_DWORD *)(v6 + 64) = CurrentProcessorNumber;
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 408LL);
  }
  else
  {
    v12 = -1;
  }
  result = a6;
  *a6 = v12;
  return result;
}
