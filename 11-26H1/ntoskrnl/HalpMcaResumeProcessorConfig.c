/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140C109F0
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpMcaSetProcessorConfig @ 0x140BEF1B8 (HalpMcaSetProcessorConfig.c)
 *     HalpIsCmciImplemented @ 0x140BF0724 (HalpIsCmciImplemented.c)
 */

char __fastcall HalpMcaResumeProcessorConfig(int a1)
{
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[976]; // [rsp+20h] [rbp-3E8h] BYREF

  memset_0(v8, 0, 0x3CCuLL);
  LOBYTE(Pcr) = HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v4 = *(_QWORD *)(i + 172);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          HalpMcaSetProcessorConfig((__int64)HalpMceErrorSource, *(_QWORD *)(i + 172));
          LOBYTE(Pcr) = HalpIsCmciImplemented();
          if ( (_BYTE)Pcr )
            LOBYTE(Pcr) = HalpCmciInitProcessor((__int64)HalpCmcErrorSource, v4, v5, v6);
        }
      }
      else
      {
        memset_0(v8, 0, 0x3CCuLL);
        PshedGetErrorSourceInfo(0LL, v8);
        LOBYTE(Pcr) = HalpMcaSetProcessorConfig((__int64)v8, v4);
      }
    }
  }
  return (char)Pcr;
}
