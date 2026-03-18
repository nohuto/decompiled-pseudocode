/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140257DB0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1402579A8 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x14082A400 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14082A7E0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14082AFF8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x14082B320 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x14082BEAC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1409294AC (EtwTiLogImpersonateClient.c)
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     EtwTiLogAllocExecVm @ 0x1409F3D60 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A2BE60 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x140A7EE10 (EtwTiLogSetContextThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAF3C8 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogMapExecView @ 0x140AC862C (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF12D8 (EtwTiLogSuspendResumeProcess.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1C5EC (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B259AC (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
