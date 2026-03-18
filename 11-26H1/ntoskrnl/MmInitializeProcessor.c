/*
 * XREFs of MmInitializeProcessor @ 0x140C0013C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     KeGetProcessorNodeNumber @ 0x14046B620 (KeGetProcessorNodeNumber.c)
 *     MiAllocatePrcb @ 0x14070DEAC (MiAllocatePrcb.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  *(_DWORD *)(a1 + 34644) = *(unsigned __int8 *)(56320 * ProcessorNodeNumber + qword_140E37CD0 + 14056);
  *(_DWORD *)(a1 + 34640) = __rdtsc() >> 4;
  MiInitializePageColorBase(0LL, 3, ProcessorNodeNumber + 1, (__int64)v7);
  v7[0] = a1 + 34640;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(v5 + 1), (__int64)v7, 15, 8LL) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  result = 1LL;
  v5[41] = *(_QWORD *)(384 * ProcessorNodeNumber + qword_140E2D6B8 + 376);
  *(_QWORD *)(a1 + 34872) = v5;
  return result;
}
