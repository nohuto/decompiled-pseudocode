/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140C0A7E0
 * Callers:
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BEE0F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpMcaSetProcessorConfig @ 0x140BE91B8 (HalpMcaSetProcessorConfig.c)
 *     HalpIsCmciImplemented @ 0x140BEA724 (HalpIsCmciImplemented.c)
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
