/*
 * XREFs of SymCryptMlDsakeySetValue @ 0x140560834
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     HashpVerifyMldsaSignature @ 0x1408B2230 (HashpVerifyMldsaSignature.c)
 * Callees:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 */

__int64 __fastcall SymCryptMlDsakeySetValue(const void *a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  int v10; // ebx
  int v11; // ebx

  if ( (a4 & 0xFFFFFEFF) != 0 )
    return 32782LL;
  if ( (a4 & 0x100) == 0 && (g_SymCryptFipsSelftestsPerformed & 0x200) == 0 )
  {
    SymCryptMlDsaSelftest();
    _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 0x200u);
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 32782LL;
      return SymCryptMlDsaPkDecode(a1, a2, a4, a5);
    }
    else
    {
      return SymCryptMlDsaSkDecode(a1, a2, a4, a5);
    }
  }
  else if ( a2 == 32 )
  {
    return SymCryptMlDsaKeyGenerateEx(a5, a1, 0x20uLL);
  }
  else
  {
    return 32769LL;
  }
}
