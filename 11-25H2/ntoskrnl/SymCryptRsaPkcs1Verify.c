/*
 * XREFs of SymCryptRsaPkcs1Verify @ 0x140522E18
 * Callers:
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140527360 (SymCryptRsaSignVerifyPct.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptRsakeySizeofModulus @ 0x14051FAE4 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptRsaPkcs1VerifySignaturePadding @ 0x140520EA4 (SymCryptRsaPkcs1VerifySignaturePadding.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x140522BB0 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsaPkcs1Verify(
        _DWORD *a1,
        const void *a2,
        size_t a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rax
  _WORD *v16; // rsi
  __int64 v17; // r15

  v11 = SymCryptRsakeySizeofModulus((__int64)a1);
  v12 = v11;
  if ( (*a1 & 0x1000) != 0 && a5 <= v11 )
  {
    if ( a6 == 1 )
    {
      return 32779;
    }
    else
    {
      if ( (unsigned int)SymCryptRsaCoreEncScratchSpace((__int64)a1) <= (unsigned __int64)v11 )
        v14 = v12;
      else
        v14 = (unsigned int)SymCryptRsaCoreEncScratchSpace((__int64)a1);
      v15 = SymCryptCallbackAlloc(v14 + v12);
      v16 = (_WORD *)v15;
      if ( v15 )
      {
        v17 = v14 + v15;
        v13 = SymCryptRsaCoreEnc((__int64)a1, a4, a5, 2, a9, v14 + v15, v12, v15, v14);
        if ( !v13 )
          v13 = SymCryptRsaPkcs1VerifySignaturePadding(a2, a3, a7, a8, v17, v12, a9, v16);
        SymCryptWipe((__int64)v16, v14 + v12);
        SymCryptCallbackFree(v16);
      }
      else
      {
        return 32783;
      }
    }
  }
  else
  {
    return 32782;
  }
  return v13;
}
