/*
 * XREFs of HashpVerifyMldsaSignature @ 0x1408B2230
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     SymCryptMlDsaVerify @ 0x140560288 (SymCryptMlDsaVerify.c)
 *     SymCryptMlDsakeyAllocate @ 0x1405606F0 (SymCryptMlDsakeyAllocate.c)
 *     SymCryptMlDsakeyFree @ 0x140560798 (SymCryptMlDsakeyFree.c)
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 */

__int64 __fastcall HashpVerifyMldsaSignature(
        int a1,
        const void *a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi

  v7 = a3;
  v10 = a1 - 12801;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return (unsigned int)-1073740760;
      v13 = 3LL;
    }
    else
    {
      v13 = 2LL;
    }
  }
  else
  {
    v13 = 1LL;
  }
  v14 = SymCryptMlDsakeyAllocate(v13);
  v15 = v14;
  if ( v14 )
  {
    if ( (unsigned int)SymCryptMlDsakeySetValue(a2, v7, 3, 0, v14) )
      v12 = -1073740760;
    else
      v12 = (unsigned int)SymCryptMlDsaVerify(v15, a4, a5, 0, 0LL, a6, a7, 0) != 0 ? 0xC0000428 : 0;
    SymCryptMlDsakeyFree(v15);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
