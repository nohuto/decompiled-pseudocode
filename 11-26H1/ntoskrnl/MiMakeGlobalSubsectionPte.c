/*
 * XREFs of MiMakeGlobalSubsectionPte @ 0x1404B5EA4
 * Callers:
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1404B5EF8 (MiMakeSubsectionPte.c)
 */

unsigned __int64 __fastcall MiMakeGlobalSubsectionPte(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9

  result = MiMakeDemandZeroPte((*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
  if ( *(_DWORD *)(v2 + 36) )
  {
    if ( (unsigned int)((v3 - *(_QWORD *)(v2 + 8)) >> 3) << 24 < ((*(_DWORD *)(v2 + 32) >> 20) | (*(_DWORD *)(v2 + 40) << 9)) )
      return MiMakeSubsectionPte(v2);
  }
  return result;
}
