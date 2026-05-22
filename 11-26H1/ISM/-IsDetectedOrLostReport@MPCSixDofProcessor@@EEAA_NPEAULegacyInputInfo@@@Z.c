/*
 * XREFs of ?IsDetectedOrLostReport@MPCSixDofProcessor@@EEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C0A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsDetectedOrLostReport(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)a2 + 17) != 5 )
    return *((_DWORD *)a2 + 17) == 1;
  return result;
}
