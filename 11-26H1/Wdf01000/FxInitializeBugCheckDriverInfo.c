/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1400AC170
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x140096534 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14006D2A0 (RtlStringCopyWorkerA.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  _QWORD *Pool2; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8

  CallbackRecord.Entry = 0LL;
  *(_QWORD *)&dword_1400C9028 = 0LL;
  *(_OWORD *)&CallbackRecord.CallbackRoutine = 0LL;
  qword_1400C9030 = 0LL;
  *(_OWORD *)&CallbackRecord.Checksum = 0LL;
  if ( !unk_1400C9091 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 560LL, 1917089862LL);
    qword_1400C9030 = Pool2;
    if ( Pool2 )
    {
      dword_1400C902C = 10;
      *Pool2 = 0LL;
      *((_DWORD *)qword_1400C9030 + 2) = 1;
      *((_DWORD *)qword_1400C9030 + 3) = 35;
      *((_DWORD *)qword_1400C9030 + 4) = 0;
      if ( (int)RtlStringCopyWorkerA((char *)qword_1400C9030 + 20, v1, v2, "Wdf01000") < 0 )
        *((_BYTE *)qword_1400C9030 + 20) = 0;
      ++dword_1400C9028;
      CallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &CallbackRecord,
        FxpLibraryBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"Wdf01000");
    }
  }
}
