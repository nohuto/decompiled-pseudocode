/*
 * XREFs of MiInitializeSlowPte @ 0x1406F74D4
 * Callers:
 *     MiSlowRotateCopy @ 0x1406F7544 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033C7D0 (MiMakeProtectionPfnCompatible.c)
 */

unsigned __int64 __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2, int ProtectionPfnCompatible)
{
  __int64 v3; // r10
  unsigned __int64 result; // rax

  v3 = a2;
  if ( a2 <= qword_140E2D7A0 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * a2 - 0x220000000000LL);
  result = MiMakeValidPte((unsigned __int64)a1, v3, ProtectionPfnCompatible | 0xA0000000);
  *a1 = result;
  return result;
}
