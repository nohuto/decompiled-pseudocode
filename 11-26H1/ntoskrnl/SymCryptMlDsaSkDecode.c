/*
 * XREFs of SymCryptMlDsaSkDecode @ 0x140572D4C
 * Callers:
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaExpandA @ 0x140571968 (SymCryptMlDsaExpandA.c)
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaVectorDecode @ 0x14057355C (SymCryptMlDsaVectorDecode.c)
 *     SymCryptMlDsaVectorNTT @ 0x1405738A0 (SymCryptMlDsaVectorNTT.c)
 *     SymCryptMlDsaVectorSetZero @ 0x1405739AC (SymCryptMlDsaVectorSetZero.c)
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 *     SymCryptShake256 @ 0x140573C10 (SymCryptShake256.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall SymCryptMlDsaSkDecode(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int *v9; // r14
  __int64 *v10; // rax
  _OWORD *v11; // r15
  __int64 v12; // r13
  unsigned int *v13; // r12
  __int64 v14; // rax
  _BYTE *v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD *v19; // rbx
  __int64 v20; // rdx
  char *v21; // rbx
  const void *v22; // rbx
  _OWORD Buf2[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+8h]

  v4 = *(_QWORD *)(a4 + 8);
  if ( a2 != *(_DWORD *)(v4 + 44) )
  {
    v7 = 32769;
LABEL_15:
    *(_QWORD *)(a4 + 54) = 0LL;
    *(_QWORD *)(a4 + 62) = 0LL;
    *(_QWORD *)(a4 + 70) = 0LL;
    *(_QWORD *)(a4 + 78) = 0LL;
    SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 200));
    SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 208));
    SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 216));
    return v7;
  }
  v8 = SymCryptMlDsaTemporariesAllocateAndInitialize(v4, 2, 0, 1, *(_DWORD *)(v4 + 48));
  v9 = (unsigned int *)v8;
  if ( !v8 )
  {
    v7 = 32783;
    goto LABEL_15;
  }
  v10 = *(__int64 **)(v8 + 272);
  v11 = (_OWORD *)*((_QWORD *)v9 + 37);
  v12 = *v10;
  v13 = (unsigned int *)v10[1];
  v14 = **((_QWORD **)v9 + 36);
  *(_WORD *)(a4 + 20) = 0;
  *(_QWORD *)(a4 + 22) = 0LL;
  *(_QWORD *)(a4 + 30) = 0LL;
  *(_QWORD *)(a4 + 38) = 0LL;
  *(_QWORD *)(a4 + 46) = 0LL;
  v15 = *(_BYTE **)(a4 + 184);
  v25 = v14;
  *(_OWORD *)(a4 + 86) = *a1;
  *(_OWORD *)(a4 + 102) = a1[1];
  *(_OWORD *)(a4 + 54) = a1[2];
  *(_OWORD *)(a4 + 70) = a1[3];
  v16 = a1[5];
  Buf2[0] = a1[4];
  v17 = a1[6];
  Buf2[1] = v16;
  v18 = a1[7];
  v19 = a1 + 8;
  Buf2[2] = v17;
  Buf2[3] = v18;
  v7 = SymCryptMlDsaExpandA((void *)(a4 + 86), 0x20uLL, v15);
  if ( !v7 )
  {
    v7 = SymCryptMlDsaVectorDecode(
           v19,
           *(unsigned __int8 *)(v4 + 23),
           *(unsigned __int8 *)(v4 + 22),
           *(_QWORD *)(a4 + 200));
    if ( !v7 )
    {
      v20 = *(unsigned __int8 *)(v4 + 23);
      v21 = (char *)v19 + ((unsigned __int64)(((unsigned int)v20 * **(unsigned __int8 **)(a4 + 200)) << 8) >> 3);
      v7 = SymCryptMlDsaVectorDecode(v21, v20, *(unsigned __int8 *)(v4 + 22), *(_QWORD *)(a4 + 208));
      if ( !v7 )
      {
        v7 = SymCryptMlDsaVectorDecode(
               &v21[(32 * *(unsigned __int8 *)(v4 + 23) * (unsigned __int64)**(unsigned __int8 **)(a4 + 208)) & 0x1FFFFFFFFFFFFFFFLL],
               13LL,
               4096LL,
               v13);
        if ( !v7 )
        {
          SymCryptMlDsaVectorNTT(*(_QWORD *)(a4 + 200));
          SymCryptMlDsaVectorNTT(*(_QWORD *)(a4 + 208));
          SymCryptMlDsakeyComputeT(
            *(_QWORD *)(a4 + 184),
            *(_QWORD *)(a4 + 200),
            *(_QWORD *)(a4 + 208),
            *(_QWORD *)(a4 + 216),
            *(_QWORD *)(a4 + 192),
            v12,
            v25);
          v22 = *(const void **)(a4 + 216);
          if ( memcmp(v22, v13, v13[1]) )
          {
LABEL_10:
            v7 = 32780;
            goto LABEL_14;
          }
          SymCryptMlDsaVectorNTT(v22);
          SymCryptMlDsaVectorNTT(*(_QWORD *)(a4 + 192));
          v7 = SymCryptMlDsaPkEncode(a4, v11, *(unsigned int *)(v4 + 48));
          if ( !v7 )
          {
            SymCryptShake256(v11, *(unsigned int *)(v4 + 48), a4 + 118, 64LL);
            if ( memcmp((const void *)(a4 + 118), Buf2, 0x40uLL) )
              goto LABEL_10;
            *(_BYTE *)(a4 + 21) = 1;
          }
        }
      }
    }
  }
LABEL_14:
  SymCryptWipe((__int64)v9, *v9);
  SymCryptCallbackFree(v9);
  if ( v7 )
    goto LABEL_15;
  return v7;
}
