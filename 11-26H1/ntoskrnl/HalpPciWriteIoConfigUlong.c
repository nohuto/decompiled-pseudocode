/*
 * XREFs of HalpPciWriteIoConfigUlong @ 0x14058E9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUlong(unsigned int *a1, unsigned int *a2, unsigned __int8 a3)
{
  unsigned int v3; // eax

  v3 = *a1 ^ (a3 ^ (unsigned __int8)*a1) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  __outdword(0xCFCu, *a2);
  return 4LL;
}
