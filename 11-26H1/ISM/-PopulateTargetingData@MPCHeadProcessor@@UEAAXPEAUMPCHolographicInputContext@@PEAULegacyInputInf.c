/*
 * XREFs of ?PopulateTargetingData@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x18007BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadProcessor::PopulateTargetingData(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 43);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 44);
  *((_DWORD *)a3 + 33) = *((_DWORD *)a2 + 45);
  *((_DWORD *)a3 + 34) = *((_DWORD *)a2 + 46);
  *((_DWORD *)a3 + 35) = *((_DWORD *)a2 + 47);
}
