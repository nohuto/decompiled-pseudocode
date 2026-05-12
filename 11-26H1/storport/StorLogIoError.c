/*
 * XREFs of StorLogIoError @ 0x1400976C8
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x140069ADC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1400A67C0 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall StorLogIoError(__int64 a1, int a2, int a3, int a4)
{
  char v4; // bl
  _WORD *ErrorLogEntry; // rax
  _WORD *v8; // rdi

  v4 = a2;
  ErrorLogEntry = IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset_0(ErrorLogEntry, 0, 0x40uLL);
    *(_WORD *)((char *)v8 + 49) = *(_WORD *)((char *)&a2 + 1);
    v8[1] = 24;
    *(_BYTE *)v8 = 15;
    *((_DWORD *)v8 + 4) = a4;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 48) = v4;
    *((_DWORD *)v8 + 3) = a3;
    *((_DWORD *)v8 + 13) = a3;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
