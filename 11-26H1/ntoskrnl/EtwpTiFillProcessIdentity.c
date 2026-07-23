/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140259590
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140259188 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x140830640 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x140830A20 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x140831238 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1408320EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
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

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 464;
  a1[2] = a2 + 504;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 1656) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[4] = a3;
  a1[5] = 8LL;
  a1[6] = a2 + 1528;
  a1[7] = 1LL;
  a1[8] = a2 + 1529;
  a1[9] = 1LL;
  a1[10] = a2 + 1530;
  result = 6LL;
  a1[11] = 1LL;
  return result;
}
