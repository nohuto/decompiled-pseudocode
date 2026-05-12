/*
 * XREFs of RaidAdapterLogIoError @ 0x140062D44
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 *     StorPortLogError @ 0x14007BB80 (StorPortLogError.c)
 * Callees:
 *     RaidScsiErrorToIoError @ 0x140095E24 (RaidScsiErrorToIoError.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall RaidAdapterLogIoError(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // bl
  _WORD *ErrorLogEntry; // rax
  _WORD *v8; // rdi
  int v9; // eax

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
    v9 = RaidScsiErrorToIoError(a3);
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 13) = v9;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
