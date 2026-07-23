/*
 * XREFs of SymCryptCrtGenerateInverses @ 0x140564AF0
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 * Callees:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140564940 (SymCryptCrtGenerateForTwoCoprimes.c)
 */

__int64 __fastcall SymCryptCrtGenerateInverses(
        int a1,
        struct _KTIMER **a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a1 == 2 )
    SymCryptCrtGenerateForTwoCoprimes(*a2, a2[1], a3, *a4, a4[1], a5, a6);
  else
    return 32782;
  return v6;
}
