/*
 * XREFs of SymCryptMlDsaKeyGenerateEx @ 0x14055FB34
 * Callers:
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 * Callees:
 *     SymCryptMlDsaExpandA @ 0x140571968 (SymCryptMlDsaExpandA.c)
 *     SymCryptMlDsaExpandS @ 0x140571B18 (SymCryptMlDsaExpandS.c)
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaTemporariesFree @ 0x140573388 (SymCryptMlDsaTemporariesFree.c)
 *     SymCryptMlDsaVectorNTT @ 0x1405738A0 (SymCryptMlDsaVectorNTT.c)
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake256 @ 0x140573C10 (SymCryptShake256.c)
 *     SymCryptShake256Init @ 0x140573CA4 (SymCryptShake256Init.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaKeyGenerateEx(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // r14
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7 = SymCryptMlDsaTemporariesAllocateAndInitialize(v3, 1, 0, 1, *(_DWORD *)(v3 + 48));
  if ( v7 )
  {
    memmove((void *)(a1 + 22), a2, a3);
    SymCryptShake256Init(v7 + 32);
    SymCryptShake128Append(v7 + 32, a1 + 22, a3);
    SymCryptShake128Append(v7 + 32, v3 + 20, 1LL);
    SymCryptShake128Append(v7 + 32, v3 + 21, 1LL);
    SymCryptShake256Extract(v7 + 32, a1 + 86, 32LL);
    SymCryptShake256Extract(v7 + 32, &v10, 64LL);
    SymCryptShake256Extract(v7 + 32, a1 + 54, 32LL);
    v8 = SymCryptMlDsaExpandA((void *)(a1 + 86), 0x20uLL);
    if ( !v8 )
    {
      v8 = SymCryptMlDsaExpandS(
             *(_QWORD *)(a1 + 8),
             (unsigned int)&v10,
             64,
             *(_QWORD *)(a1 + 200),
             *(_QWORD *)(a1 + 208));
      if ( !v8 )
      {
        SymCryptMlDsaVectorNTT(*(_QWORD *)(a1 + 200));
        SymCryptMlDsaVectorNTT(*(_QWORD *)(a1 + 208));
        SymCryptMlDsakeyComputeT(
          *(_QWORD *)(a1 + 184),
          *(_QWORD *)(a1 + 200),
          *(_QWORD *)(a1 + 208),
          *(_QWORD *)(a1 + 216),
          *(_QWORD *)(a1 + 192),
          **(_QWORD **)(v7 + 272),
          **(_QWORD **)(v7 + 288));
        SymCryptMlDsaVectorNTT(*(_QWORD *)(a1 + 216));
        SymCryptMlDsaVectorNTT(*(_QWORD *)(a1 + 192));
        v8 = SymCryptMlDsaPkEncode(a1, *(_QWORD *)(v7 + 296), *(unsigned int *)(v3 + 48));
        if ( !v8 )
        {
          SymCryptShake256(*(_QWORD *)(v7 + 296), *(unsigned int *)(v3 + 48), a1 + 118, 64LL);
          *(_WORD *)(a1 + 20) = 257;
        }
      }
    }
    SymCryptMlDsaTemporariesFree(v7);
  }
  else
  {
    return 32783;
  }
  return v8;
}
