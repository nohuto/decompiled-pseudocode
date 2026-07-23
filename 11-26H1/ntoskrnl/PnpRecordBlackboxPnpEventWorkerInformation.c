/*
 * XREFs of PnpRecordBlackboxPnpEventWorkerInformation @ 0x140A1B470
 * Callers:
 *     PnpRecordBlackbox @ 0x140A1B298 (PnpRecordBlackbox.c)
 * Callees:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxPnpEventWorkerInformation(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 Pool2; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 72LL;
    Pool2 = ExAllocatePool2(0x40uLL);
    v1 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 4) = 72;
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(Pool2 + 8) = 0;
      if ( *(_QWORD *)a1 )
        *(_DWORD *)(Pool2 + 12) = (v4 - **(_QWORD **)a1) / 0x2710uLL;
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 20);
      *(_QWORD *)(Pool2 + 40) = 0LL;
      *(_QWORD *)(Pool2 + 48) = *(_QWORD *)&PnpDeviceEventThread;
      *(_QWORD *)(Pool2 + 56) = *(_QWORD *)&PnpDeviceActionThread;
      *(_QWORD *)(Pool2 + 64) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
    }
  }
  InputBuffer[2] = 0LL;
  InputBuffer[3] = 9LL;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4B706E50u);
}
