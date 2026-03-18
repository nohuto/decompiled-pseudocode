/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x14036CFCC
 * Callers:
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiGetSharedProtosAtDpc @ 0x14046A430 (MiGetSharedProtosAtDpc.c)
 *     MiCreatePerSessionProtos @ 0x1409CFA34 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A96E50 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    if ( a2 > *((_DWORD *)result + 16) )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)result + 16) )
        return result;
      result = (__int64 *)*result;
    }
  }
  return result;
}
