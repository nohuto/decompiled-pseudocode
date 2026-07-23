/*
 * XREFs of SymCryptRsaPkcs1Sign @ 0x140561078
 * Callers:
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptRsakeySizeofModulus @ 0x14055D0CC (SymCryptRsakeySizeofModulus.c)
 *     SymCryptRsaPkcs1ApplySignaturePadding @ 0x14055E2CC (SymCryptRsaPkcs1ApplySignaturePadding.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreDecCrtScratchSpace @ 0x140560CA4 (SymCryptRsaCoreDecCrtScratchSpace.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsaPkcs1Sign(
        __int64 a1,
        const void *a2,
        size_t a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10)
{
  unsigned __int64 v12; // rbp
  const void *v13; // r15
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi

  v12 = (unsigned int)SymCryptRsakeySizeofModulus(a1);
  if ( a4 )
  {
    v13 = (const void *)*((_QWORD *)a4 + 1);
    v14 = *a4;
  }
  else
  {
    v13 = 0LL;
    v14 = 0;
  }
  if ( (*(_DWORD *)a1 & 0x1000) != 0 && *(_BYTE *)(a1 + 8) )
  {
    *a10 = v12;
    if ( a8 )
    {
      v16 = (unsigned int)SymCryptRsaCoreDecCrtScratchSpace((_DWORD *)a1);
      v17 = SymCryptCallbackAlloc(v16 + v12);
      v18 = v17;
      if ( v17 )
      {
        v15 = SymCryptRsaPkcs1ApplySignaturePadding(a2, a3, v13, v14, a6, (_WORD *)(v16 + v17), v12);
        if ( !v15 )
        {
          v15 = SymCryptRsaCoreDecCrt(a1, (int)v18 + (int)v16, v12, 2, a6, a8, a9, v18, v16);
          if ( !v15 && a7 == 1 )
            v15 = 32779;
        }
        SymCryptWipe(v18, v16 + v12);
        SymCryptCallbackFree(v18);
      }
      else
      {
        return 32783;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 32782;
  }
  return v15;
}
