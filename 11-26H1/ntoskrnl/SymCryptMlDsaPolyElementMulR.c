/*
 * XREFs of SymCryptMlDsaPolyElementMulR @ 0x140573454
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsakeyComputeT @ 0x1405747F8 (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementMulR(_DWORD *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v1 = 256LL;
  do
  {
    v2 = ((2365951 * (unsigned __int64)(unsigned int)*a1) >> 32)
       - ((8380417 * (unsigned __int64)(unsigned int)(2145647103 * *a1)) >> 32);
    result = (unsigned int)v2 + (HIDWORD(v2) & 0x7FE001);
    *a1++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
