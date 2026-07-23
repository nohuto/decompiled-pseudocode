/*
 * XREFs of HalpMcUpdateMicrocode @ 0x14050A2B0
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x140595EF0 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x140787C50 (HalpLoadMicrocodeSerialized.c)
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     PrExtApplyPatch @ 0x1405322A8 (PrExtApplyPatch.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 HalpMcUpdateMicrocode()
{
  __int64 result; // rax
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  result = PrExtApplyPatch(
             HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread,
             *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16],
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
