/*
 * XREFs of SymCryptRsaCoreVerifyInput @ 0x14055EA90
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptRsakeySizeofModulus @ 0x14055ABB8 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055C28C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x14055C34C (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x14055C3B4 (SymCryptIntSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055C9A8 (SymCryptSizeofIntFromDigits.c)
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
