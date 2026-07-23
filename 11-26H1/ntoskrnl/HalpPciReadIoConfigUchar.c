/*
 * XREFs of HalpPciReadIoConfigUchar @ 0x14058E8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadIoConfigUchar(unsigned int *a1, _BYTE *a2, unsigned __int8 a3)
{
  unsigned int v3; // eax

  v3 = *a1 ^ (a3 ^ (unsigned __int8)*a1) & 0xFC;
  *a1 = v3;
  __outdword(0xCF8u, v3);
  LOBYTE(v3) = __inbyte((a3 & 3) + 3324);
  *a2 = v3;
  return 1LL;
}
