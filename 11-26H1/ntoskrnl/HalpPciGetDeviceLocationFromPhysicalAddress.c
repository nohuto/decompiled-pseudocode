/*
 * XREFs of HalpPciGetDeviceLocationFromPhysicalAddress @ 0x14045DC20
 * Callers:
 *     <none>
 * Callees:
 *     HalpPciIsAddressWithinMcfg @ 0x14045DC70 (HalpPciIsAddressWithinMcfg.c)
 */

__int64 __fastcall HalpPciGetDeviceLocationFromPhysicalAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax
  _BYTE *v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  result = HalpPciIsAddressWithinMcfg(a1, a2, a3, &v8);
  if ( (_BYTE)result )
  {
    v7 = v8 >> 5;
    *v6 = v8 & 0x1F;
    *a5 = v7 & 7;
  }
  return result;
}
