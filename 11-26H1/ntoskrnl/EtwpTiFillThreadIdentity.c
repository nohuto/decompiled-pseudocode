/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14049BCE8
 * Callers:
 *     EtwTimLogProhibitLowILImageMap @ 0x140831238 (EtwTimLogProhibitLowILImageMap.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409D3A08 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogAllocExecVm @ 0x1409F0530 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140A2B640 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x140A84C80 (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAD018 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogMapExecView @ 0x140ACA21C (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B27C0C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 1296;
  a1[2] = a2 + 1216;
  result = 2LL;
  a1[3] = 8LL;
  return result;
}
