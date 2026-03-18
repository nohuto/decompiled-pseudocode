/*
 * XREFs of HalpMcUpdateMicrocode @ 0x140510840
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x140593770 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x140785120 (HalpLoadMicrocodeSerialized.c)
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BEE0F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     PrExtApplyPatch @ 0x14052FDA8 (PrExtApplyPatch.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 HalpMcUpdateMicrocode()
{
  __int64 result; // rax
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  result = PrExtApplyPatch(
             HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink,
             *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52],
             (unsigned int)MicrocodeRecordType);
  if ( (_DWORD)result == -1073741762 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    v6 = (unsigned int)_RAX;
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v7 = __readmsr(0x8Bu);
      LODWORD(v8) = v7;
      goto LABEL_6;
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
    {
      v8 = __readmsr(0x8Bu) >> 32;
LABEL_6:
      KeBugCheckEx(0x17Eu, v6, 0LL, (unsigned int)v8, KeGetCurrentPrcb()->Number);
    }
    return 3221226080LL;
  }
  return result;
}
