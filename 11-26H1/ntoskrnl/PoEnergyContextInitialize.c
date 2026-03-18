/*
 * XREFs of PoEnergyContextInitialize @ 0x140AF3EE8
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  a1[56] = 0LL;
  result = PopEtGlobals;
  a1[55] = 0LL;
  if ( result )
  {
    result += 792LL;
    a1[57] = result;
  }
  return result;
}
