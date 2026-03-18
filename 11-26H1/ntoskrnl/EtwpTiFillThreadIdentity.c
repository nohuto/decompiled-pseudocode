/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x1404A21B8
 * Callers:
 *     EtwTimLogProhibitLowILImageMap @ 0x14082AFF8 (EtwTimLogProhibitLowILImageMap.c)
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
