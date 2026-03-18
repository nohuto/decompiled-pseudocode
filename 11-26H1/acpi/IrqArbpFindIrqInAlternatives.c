/*
 * XREFs of IrqArbpFindIrqInAlternatives @ 0x1400BE628
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1400CFE80 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbpFindIrqInAlternatives(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int i; // eax
  __int64 v6; // r8
  unsigned __int64 v7; // rcx

  for ( i = 0; i < *(_DWORD *)(a2 + 48); ++i )
  {
    v6 = *(_QWORD *)(a2 + 56);
    v7 = (unsigned __int64)i << 6;
    if ( *(_QWORD *)(v7 + v6) <= a3 && *(_QWORD *)(v7 + v6 + 8) >= a3 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
