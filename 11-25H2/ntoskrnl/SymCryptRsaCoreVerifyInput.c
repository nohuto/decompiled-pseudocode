/*
 * XREFs of SymCryptRsaCoreVerifyInput @ 0x140522BF8
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptRsakeySizeofModulus @ 0x14051FAE4 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptIntCreate @ 0x1405210C0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14052115C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x14052121C (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140521284 (SymCryptIntSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptRsaCoreVerifyInput(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v7; // ebx

  v7 = 0;
  if ( a3 > (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 32782;
  if ( a5 < (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 32782;
  if ( a3 == (unsigned int)SymCryptRsakeySizeofModulus(a1) )
  {
    SymCryptSizeofIntFromDigits();
    SymCryptIntCreate();
    v7 = SymCryptIntSetValue();
    if ( !v7 )
    {
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        return 32782;
    }
  }
  return v7;
}
