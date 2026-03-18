/*
 * XREFs of EtwProviderEnabled @ 0x1402563E0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1402579A8 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x140257F54 (EtwpLogMemNodeInfo.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1409294AC (EtwTiLogImpersonateClient.c)
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     EtwTiLogAllocExecVm @ 0x1409F3D60 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1409FF3B8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A2549C (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x140A7EE10 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x140A82CA0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAF3C8 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogMapExecView @ 0x140AC862C (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140AEA0E8 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF12D8 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF3D1C (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140B026F0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140B2BA00 (EtwTiLogDriverObjectUnLoad.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v4; // rax
  UCHAR v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v4 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v5 = *(_BYTE *)(v4 + 100);
      if ( (Level <= v5 || !v5)
        && ((*(_DWORD *)(v4 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v4 + 112)) != 0 && (Keyword & *(_QWORD *)(v4 + 120)) == *(_QWORD *)(v4 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_WORD *)(RegHandle + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, Level, Keyword) )
      return 1;
  }
  return result;
}
