/*
 * XREFs of HalpDpPostReplaceInitialization @ 0x140BEE0F0
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140BEDED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalpGetCpuInfo @ 0x1404C55D0 (HalpGetCpuInfo.c)
 *     HalpRestartProfiling @ 0x1404F3650 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x140510840 (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x140513164 (HalpInterruptReinitializeThisProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140C0A7E0 (HalpMcaResumeProcessorConfig.c)
 */

__int64 __fastcall HalpDpPostReplaceInitialization(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  __int64 v7; // rdx
  __int64 v8; // r8
  signed __int32 v9; // ecx
  char CpuInfo; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int8 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v16 = 0;
  HalpInterruptReinitializeThisProcessor();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
  }
  __writemsr(0x10u, *a2);
  HalpMcaResumeProcessorConfig(1LL);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL, v7, v8);
  v9 = _InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < v9 )
    _mm_pause();
  HalpMcUpdateMicrocode();
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v16);
  LOBYTE(v12) = CpuInfo != 0 ? v16 : 0;
  if ( (_BYTE)v12 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType == 15 )
    {
      v12 = 3221291039LL;
      v13 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      v11 = HIDWORD(v13);
      __writemsr(0xC001001F, v13);
    }
    if ( KeGetCurrentPrcb()->CpuType == 18 )
    {
      v12 = 3221295145LL;
      v14 = __readmsr(0xC0011029) | 0x80000000;
      v11 = HIDWORD(v14);
      __writemsr(0xC0011029, v14);
    }
  }
  _InterlockedAdd(a1 + 16, 1u);
  while ( a1[16] < v2 )
    _mm_pause();
  HalpRestartProfiling(v12, v11);
  return HalpInterruptEnableNmi();
}
