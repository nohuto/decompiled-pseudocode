/*
 * XREFs of SymCryptMlDsaPkEncode @ 0x1405721EC
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsakeyGetValue @ 0x1405607C0 (SymCryptMlDsakeyGetValue.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaVectorEncode @ 0x1405735E4 (SymCryptMlDsaVectorEncode.c)
 *     SymCryptMlDsaVectorINTT @ 0x1405736F0 (SymCryptMlDsaVectorINTT.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaPkEncode(__int64 a1, _OWORD *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rsi
  void *v9; // rbx

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( a3 == *(_DWORD *)(v5 + 48) )
  {
    v7 = SymCryptMlDsaTemporariesAllocateAndInitialize(v5, 1, 0, 0, 0);
    v8 = (unsigned int *)v7;
    if ( v7 )
    {
      v9 = **(void ***)(v7 + 272);
      *a2 = *(_OWORD *)(a1 + 86);
      a2[1] = *(_OWORD *)(a1 + 102);
      memmove(v9, *(const void **)(a1 + 192), *(unsigned int *)(*(_QWORD *)(a1 + 192) + 4LL));
      SymCryptMlDsaVectorINTT(v9);
      SymCryptMlDsaVectorEncode(v9, 10LL, 0LL, a2 + 2);
      SymCryptWipe((__int64)v8, *v8);
      SymCryptCallbackFree(v8);
    }
    else
    {
      return 32783;
    }
  }
  else
  {
    return 32782;
  }
  return v4;
}
