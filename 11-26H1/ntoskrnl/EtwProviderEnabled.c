/*
 * XREFs of EtwProviderEnabled @ 0x140257D70
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140259188 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14091C1B8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     EtwTiLogAllocExecVm @ 0x1409F0530 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140A2B640 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A3853C (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x140A84C80 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x140A88B10 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAD018 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogMapExecView @ 0x140ACA21C (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140AECBD8 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF673C (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140B04420 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140B2DA80 (EtwTiLogDriverObjectUnLoad.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
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
