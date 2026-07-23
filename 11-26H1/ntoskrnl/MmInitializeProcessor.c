/*
 * XREFs of MmInitializeProcessor @ 0x140C0634C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     KeGetProcessorNodeNumber @ 0x140464DA0 (KeGetProcessorNodeNumber.c)
 *     MiAllocatePrcb @ 0x140712B5C (MiAllocatePrcb.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  bool v1; // zf
  __int64 ProcessorNodeNumber; // rbx
  __int64 Prcb; // rax
  _QWORD *v5; // rbp
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 36) == 0;
  v7[1] = 0LL;
  if ( !v1 )
    *(_QWORD *)(a1 + 36848) = -1LL;
  ProcessorNodeNumber = (unsigned __int16)KeGetProcessorNodeNumber(a1);
  Prcb = MiAllocatePrcb(ProcessorNodeNumber);
  v5 = (_QWORD *)Prcb;
  if ( !Prcb )
    return 0LL;
  *(_DWORD *)(Prcb + 320) = 0;
  *(_DWORD *)(a1 + 34644) = *(unsigned __int8 *)(56320 * ProcessorNodeNumber + qword_140E37E50 + 14056);
  *(_DWORD *)(a1 + 34640) = __rdtsc() >> 4;
  MiInitializePageColorBase(0LL, 3, ProcessorNodeNumber + 1, (__int64)v7);
  v7[0] = a1 + 34640;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(v5 + 1), (__int64)v7, 15, 8LL) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  result = 1LL;
  v5[41] = *(_QWORD *)(384 * ProcessorNodeNumber + qword_140E2D838 + 376);
  *(_QWORD *)(a1 + 34872) = v5;
  return result;
}
