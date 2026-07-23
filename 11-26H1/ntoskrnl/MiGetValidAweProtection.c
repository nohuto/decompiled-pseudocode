/*
 * XREFs of MiGetValidAweProtection @ 0x1404DCCEC
 * Callers:
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetValidAweProtection(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx

  if ( (a2 & 1) == 0 )
    return 24LL;
  v3 = (*(_DWORD *)(a1 + 48) >> 5) & 0x1F;
  result = (a2 & 0x800) != 0LL ? 4 : 1;
  if ( v3 >> 3 == 3 && (v3 & 7) != 0 )
    return (unsigned int)result | 0x18;
  if ( v3 >> 3 == 1 )
    return (unsigned int)result | 8;
  return result;
}
