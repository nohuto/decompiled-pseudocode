/*
 * XREFs of ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C5960
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z @ 0x1801C6ECC (-MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,float &,float &,float &,float &,float &,float &,long &,long &,int &,long &,long &,float &,float &>(
        unsigned int *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12,
        float *a13,
        float *a14)
{
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
      (ISMTracing *)(unsigned int)*a8,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14);
  }
}
