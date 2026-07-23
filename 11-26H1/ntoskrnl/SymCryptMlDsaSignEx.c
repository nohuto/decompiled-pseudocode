/*
 * XREFs of SymCryptMlDsaSignEx @ 0x14055FD94
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 * Callees:
 *     SymCryptMlDsaExpandMask @ 0x140571A18 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaMakeHint @ 0x140571DEC (SymCryptMlDsaMakeHint.c)
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140571EAC (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaPolyElementMulR @ 0x140572660 (SymCryptMlDsaPolyElementMulR.c)
 *     SymCryptMlDsaPolyElementNTT @ 0x1405726AC (SymCryptMlDsaPolyElementNTT.c)
 *     SymCryptMlDsaSampleInBall @ 0x140572AE0 (SymCryptMlDsaSampleInBall.c)
 *     SymCryptMlDsaSigEncode @ 0x140572CC0 (SymCryptMlDsaSigEncode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaTemporariesFree @ 0x140573388 (SymCryptMlDsaTemporariesFree.c)
 *     SymCryptMlDsaVectorAdd @ 0x1405734F4 (SymCryptMlDsaVectorAdd.c)
 *     SymCryptMlDsaVectorEncode @ 0x1405735E4 (SymCryptMlDsaVectorEncode.c)
 *     SymCryptMlDsaVectorHighBits @ 0x14057365C (SymCryptMlDsaVectorHighBits.c)
 *     SymCryptMlDsaVectorINTT @ 0x1405736F0 (SymCryptMlDsaVectorINTT.c)
 *     SymCryptMlDsaVectorInfinityNorm @ 0x140573730 (SymCryptMlDsaVectorInfinityNorm.c)
 *     SymCryptMlDsaVectorLowBits @ 0x1405737CC (SymCryptMlDsaVectorLowBits.c)
 *     SymCryptMlDsaVectorPolyElementMontMul @ 0x1405738E0 (SymCryptMlDsaVectorPolyElementMontMul.c)
 *     SymCryptMlDsaVectorSub @ 0x1405739F4 (SymCryptMlDsaVectorSub.c)
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140573CA4 (SymCryptShake256Init.c)
 *     SymCryptShake256Result @ 0x140573CC4 (SymCryptShake256Result.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMlDsaSignEx(
        _QWORD *a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        void *a11)
{
  _QWORD *v11; // r13
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // r14
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int16 v23; // dx
  unsigned __int8 *v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rbx
  unsigned __int8 j; // bl
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned int v32; // edi
  unsigned int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned __int16 v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  int v40[2]; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  unsigned __int16 v45; // [rsp+6Ch] [rbp-94h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 i; // [rsp+80h] [rbp-80h]
  bool v49; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v50[3]; // [rsp+91h] [rbp-6Fh] BYREF
  unsigned int v51[3]; // [rsp+94h] [rbp-6Ch] BYREF
  _OWORD v52[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v53[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v54[64]; // [rsp+120h] [rbp+20h] BYREF

  v11 = a1;
  v13 = a1[1];
  v14 = *(unsigned __int8 *)(v13 + 22) * *(unsigned __int8 *)(v13 + 24);
  v50[0] = a5;
  v49 = a6 != 0;
  v44 = v14;
  v15 = 32 * *(_DWORD *)(v13 + 36) * (unsigned int)*(unsigned __int8 *)(v13 + 20);
  v16 = SymCryptMlDsaTemporariesAllocateAndInitialize(
          v13,
          2,
          3,
          1,
          32 * *(_DWORD *)(v13 + 36) * (unsigned int)*(unsigned __int8 *)(v13 + 20));
  v17 = v16;
  if ( v16 )
  {
    v19 = v16 + 32;
    SymCryptShake256Init(v16 + 32);
    if ( (a10 & 1) != 0 )
    {
      v20 = a2[1];
      v52[0] = *a2;
      v21 = a2[2];
      v52[1] = v20;
      v22 = a2[3];
      v52[2] = v21;
      v52[3] = v22;
    }
    else
    {
      SymCryptShake128Append(v19, (char *)v11 + 118, 64LL);
      SymCryptShake128Append(v19, &v49, 1LL);
      SymCryptShake128Append(v19, v50, 1LL);
      SymCryptShake128Append(v19, a4, a5);
      SymCryptShake128Append(v19, a6, a7);
      SymCryptShake128Append(v19, a2, a3);
      SymCryptShake256Result(v19, v52);
    }
    SymCryptShake128Append(v19, (char *)v11 + 54, 32LL);
    SymCryptShake128Append(v19, a8, a9);
    SymCryptShake128Append(v19, v52, 64LL);
    SymCryptShake256Result(v19, v54);
    v23 = 0;
    v37 = 0;
    v24 = **(unsigned __int8 ***)(v17 + 272);
    v25 = *(__int64 **)(v17 + 280);
    v26 = *v25;
    v38 = v25[2];
    v47 = *(_QWORD *)(v17 + 296);
    *(_QWORD *)v40 = v25[1];
    v43 = *v25;
    v45 = 814 * *(unsigned __int8 *)(v13 + 21);
    if ( v45 )
    {
      for ( i = (unsigned int)v15; ; v15 = i )
      {
        SymCryptMlDsaExpandMask(v13, v19, (unsigned int)v54, 64, v23, v26);
        SymCryptMlDsaMatrixVectorMontMul(v11[23], v26, v24, **(_QWORD **)(v17 + 288));
        for ( j = 0; j < *v24; ++j )
          SymCryptMlDsaPolyElementMulR(&v24[1024 * (unsigned __int64)j + 8]);
        SymCryptMlDsaVectorINTT(v24);
        v28 = *(_QWORD *)(*(_QWORD *)(v17 + 272) + 8LL);
        SymCryptMlDsaVectorHighBits(v13, v24, v28);
        SymCryptMlDsaVectorEncode(v28, *(unsigned int *)(v13 + 36), 0LL, v47);
        SymCryptShake128Append(v19, v52, 64LL);
        SymCryptShake128Append(v19, v47, v15);
        SymCryptShake256Extract(v19, v53, *(unsigned int *)(v13 + 40));
        v29 = **(_QWORD **)(v17 + 288);
        v41 = v29;
        v18 = SymCryptMlDsaSampleInBall(v13, v53, *(unsigned int *)(v13 + 40), v29);
        if ( v18 )
          break;
        SymCryptMlDsaPolyElementNTT(v29);
        SymCryptMlDsaPolyElementMulR(v29);
        v30 = *(_QWORD *)(*(_QWORD *)(v17 + 272) + 8LL);
        SymCryptMlDsaVectorPolyElementMontMul(a1[25], v29, v38);
        SymCryptMlDsaVectorPolyElementMontMul(a1[26], v29, v30);
        SymCryptMlDsaVectorINTT(v38);
        SymCryptMlDsaVectorINTT(v30);
        SymCryptMlDsaVectorINTT(v43);
        SymCryptMlDsaVectorAdd(v43, v38, *(_QWORD *)v40);
        SymCryptMlDsaVectorSub(v24, v30, v24);
        v31 = *(_QWORD *)(*(_QWORD *)(v17 + 272) + 8LL);
        SymCryptMlDsaVectorLowBits(v13, v24, v31);
        v32 = SymCryptMlDsaVectorInfinityNorm(*(_QWORD *)v40);
        v33 = SymCryptMlDsaVectorInfinityNorm(v31);
        if ( v32 < (1 << *(_BYTE *)(v13 + 26)) - v44 && v33 < *(_DWORD *)(v13 + 32) - v44 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(v17 + 272) + 8LL);
          SymCryptMlDsaVectorPolyElementMontMul(a1[27], v41, v34);
          SymCryptMlDsaVectorINTT(v34);
          if ( (unsigned int)SymCryptMlDsaVectorInfinityNorm(v34) < *(_DWORD *)(v13 + 32) )
          {
            SymCryptMlDsaVectorAdd(v34, v24, v34);
            v51[0] = 0;
            SymCryptMlDsaMakeHint(v13, (_DWORD)v24, v34, v34, (__int64)v51);
            if ( v51[0] <= *(unsigned __int8 *)(v13 + 25) )
            {
              v35 = *(_QWORD *)(*(_QWORD *)(v17 + 272) + 8LL);
              if ( !v35 )
                goto LABEL_19;
              SymCryptMlDsaSigEncode(v13, (int)v53, *(_DWORD *)(v13 + 40), v40[0], v35, a11);
              break;
            }
          }
        }
        v23 = *(unsigned __int8 *)(v13 + 21) + v37;
        v37 = v23;
        if ( v23 >= v45 )
          goto LABEL_19;
        v11 = a1;
        v26 = v43;
      }
    }
    else
    {
LABEL_19:
      v18 = 32776;
    }
    SymCryptMlDsaTemporariesFree(v17);
  }
  else
  {
    return 32783;
  }
  return v18;
}
