/*
 * XREFs of HUBPSM20_CheckingForOverCurrentOnResume @ 0x140012530
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x140035484 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBPSM20_CheckingForOverCurrentOnResume(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rcx

  v2 = *(__int64 **)(a1 + 960);
  v3 = 3061;
  v4 = *v2;
  if ( (*(_DWORD *)(*v2 + 44) & 0x40) != 0 )
  {
    if ( (v2[23] & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(v4, a2, 3061LL);
      v3 = 3065;
LABEL_6:
      *((_DWORD *)v2 + 356) = 4;
      return v3;
    }
    if ( (*((_WORD *)v2 + 93) & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(v4, a2, 3061LL);
      v3 = 3069;
      goto LABEL_6;
    }
  }
  return v3;
}
