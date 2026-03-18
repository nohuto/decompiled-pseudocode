/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140263F20
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406C8678 (EtwpCovSampCaptureKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140C36E58 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
