/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x14060B45C
 * Callers:
 *     PpmCheckProcessorInit @ 0x14060A660 (PpmCheckProcessorInit.c)
 *     PpmWpsPepProcessorInit @ 0x140613050 (PpmWpsPepProcessorInit.c)
 *     PoInitializePrcb @ 0x140BFDDE8 (PoInitializePrcb.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x140523F64 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x14060B710 (PpmHeteroInitializeFeedbackClass.c)
 *     PpmHeteroAmdProcessorInit @ 0x140BFE098 (PpmHeteroAmdProcessorInit.c)
 *     PpmHeteroIntelProcessorInit @ 0x140BFE118 (PpmHeteroIntelProcessorInit.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  unsigned int v9; // edx
  bool v10; // zf
  __int16 v11; // dx
  int v12; // eax

  if ( PpmHeteroHgsEnabled || (_BYTE)a2 )
  {
    if ( (_BYTE)a2 )
    {
      v2 = *(_BYTE *)(a1 + 141);
      if ( v2 == 2 )
      {
        PpmHeteroIntelProcessorInit(a1, a2, a1);
      }
      else if ( v2 == 1 )
      {
        PpmHeteroAmdProcessorInit(a1, a2, a1);
      }
    }
    else
    {
      PpmHeteroHgsProcessorThreadFeedbackInit();
      if ( PpmHeteroHgsVendor == 2 )
      {
        _RAX = 6LL;
        __asm { cpuid }
        v9 = WORD1(_RDX);
        v10 = PpmHeteroHgsThreadEnabled == 0;
        *(_WORD *)(v3 + 35422) = v9;
        if ( v10 )
          v11 = 8 * (v9 + 2);
        else
          v11 = ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 15) & 0xFFF8)
              + v9 * ((PpmHeteroHgsCapabilityBits * *(_WORD *)(PpmHeteroCapability + 4) + 7) & 0xFFF8);
        *(_WORD *)(v3 + 35418) = v11;
      }
      v12 = PpmHeteroInitializeFeedbackClass(v3);
      if ( v12 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v12, 0LL, 0LL);
    }
  }
}
