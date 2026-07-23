/*
 * XREFs of MiInitializeSlowPte @ 0x1406FC144
 * Callers:
 *     MiSlowRotateCopy @ 0x1406FC1B4 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 */

unsigned __int64 __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2, int ProtectionPfnCompatible)
{
  __int64 v3; // r10
  unsigned __int64 result; // rax

  v3 = a2;
  if ( a2 <= qword_140E2D920 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * a2 - 0x220000000000LL);
  result = MiMakeValidPte((unsigned __int64)a1, v3, ProtectionPfnCompatible | 0xA0000000);
  *a1 = result;
  return result;
}
