/*
 * XREFs of KiInitializeThreadCycleTable @ 0x140BFA0D8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x140464DA0 (KeGetProcessorNodeNumber.c)
 *     KeGetThreadWorkloadClassCount @ 0x14050EDE8 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiInitializeThreadCycleTable(__int64 a1)
{
  int ThreadWorkloadClassCount; // eax
  __int64 v3; // rax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  LOBYTE(v5) = 3;
  DWORD2(v5) = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  ThreadWorkloadClassCount = KeGetThreadWorkloadClassCount();
  v3 = ExAllocatePool3(64LL, (unsigned int)(112 * ThreadWorkloadClassCount), 1666475339LL, &v5, 1);
  if ( !v3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 34480) = v3;
  return 0LL;
}
