/*
 * XREFs of SymCryptMlDsaVerifyEx @ 0x14055DDF0
 * Callers:
 *     SymCryptMlDsaVerify @ 0x14055DD70 (SymCryptMlDsaVerify.c)
 * Callees:
 *     SymCryptEqual @ 0x140568374 (SymCryptEqual.c)
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140572CA0 (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaMontMul @ 0x140572D60 (SymCryptMlDsaMontMul.c)
 *     SymCryptMlDsaPolyElementMulR @ 0x140573454 (SymCryptMlDsaPolyElementMulR.c)
 *     SymCryptMlDsaPolyElementNTT @ 0x1405734A0 (SymCryptMlDsaPolyElementNTT.c)
 *     SymCryptMlDsaSampleInBall @ 0x14057389C (SymCryptMlDsaSampleInBall.c)
 *     SymCryptMlDsaSigDecode @ 0x1405739D4 (SymCryptMlDsaSigDecode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573FA0 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaTemporariesFree @ 0x140574124 (SymCryptMlDsaTemporariesFree.c)
 *     SymCryptMlDsaUseHint @ 0x14057414C (SymCryptMlDsaUseHint.c)
 *     SymCryptMlDsaVectorEncode @ 0x140574380 (SymCryptMlDsaVectorEncode.c)
 *     SymCryptMlDsaVectorINTT @ 0x14057448C (SymCryptMlDsaVectorINTT.c)
 *     SymCryptMlDsaVectorInfinityNorm @ 0x1405744CC (SymCryptMlDsaVectorInfinityNorm.c)
 *     SymCryptMlDsaVectorNTT @ 0x14057463C (SymCryptMlDsaVectorNTT.c)
 *     SymCryptMlDsaVectorPolyElementMontMul @ 0x14057467C (SymCryptMlDsaVectorPolyElementMontMul.c)
 *     SymCryptMlDsaVectorSub @ 0x140574790 (SymCryptMlDsaVectorSub.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 *     SymCryptShake256Result @ 0x140574A60 (SymCryptShake256Result.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMlDsaVerifyEx(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // r12
  _OWORD *v11; // r15
  __int64 v12; // rsi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // ebx
  __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdi
  __int64 *v20; // rax
  unsigned __int8 i; // r14
  unsigned __int8 *v22; // rcx
  unsigned __int8 v23; // r14
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  unsigned __int8 *v26; // r12
  __int64 v27; // r13
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  char v31; // al
  int v32; // ecx
  __int64 v34; // [rsp+30h] [rbp-D0h]
  unsigned int v35; // [rsp+44h] [rbp-BCh]
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  bool v48; // [rsp+B0h] [rbp-50h] BYREF
  char v49[15]; // [rsp+B1h] [rbp-4Fh] BYREF
  _OWORD v50[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v51[64]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v52[64]; // [rsp+140h] [rbp+40h] BYREF
  int v53; // [rsp+228h] [rbp+128h]

  v53 = a10 & 1;
  v10 = a1;
  v11 = a2;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(unsigned __int8 *)(v12 + 22) * *(unsigned __int8 *)(v12 + 24);
  v49[0] = a5;
  v48 = a6 != 0;
  v35 = 32 * *(_DWORD *)(v12 + 36) * *(unsigned __int8 *)(v12 + 20);
  v14 = SymCryptMlDsaTemporariesAllocateAndInitialize(v12, 4, 1, 2, v35);
  v42 = v14;
  v15 = v14;
  if ( v14 )
  {
    v17 = *(__int64 **)(v14 + 272);
    v18 = v17[3];
    v39 = v17[1];
    v34 = *v17;
    v38 = v17[2];
    v44 = *v17;
    v19 = **(unsigned __int8 ***)(v15 + 280);
    v20 = *(__int64 **)(v15 + 288);
    v43 = v18;
    v40 = v20[1];
    v45 = *(_QWORD *)(v15 + 296);
    v37 = *v20;
    v16 = SymCryptMlDsaSigDecode(v12, a8, a9, v51, *(unsigned int *)(v12 + 40), v19, v34);
    if ( !v16 )
    {
      if ( (unsigned int)SymCryptMlDsaVectorInfinityNorm(v19) < (1 << *(_BYTE *)(v12 + 26)) - v13 )
      {
        SymCryptMlDsaSampleInBall(v12, v51, *(unsigned int *)(v12 + 40), v37);
        SymCryptMlDsaVectorNTT(v19);
        for ( i = 0; i < *v19; ++i )
          SymCryptMlDsaPolyElementMulR(&v19[1024 * (unsigned __int64)i + 8]);
        SymCryptMlDsaMatrixVectorMontMul(*(_QWORD *)(v10 + 184), v19, v39, v40);
        v22 = *(unsigned __int8 **)(v10 + 192);
        v23 = 0;
        if ( *v22 )
        {
          v24 = v10;
          do
          {
            v25 = ((unsigned __int64)v23 << 10) + v38 + 8;
            v26 = &v22[-v38];
            v27 = 256LL;
            do
            {
              *(_DWORD *)v25 = SymCryptMlDsaMontMul(*(unsigned int *)&v26[v25], 4214781LL);
              v25 += 4LL;
              --v27;
            }
            while ( v27 );
            v22 = *(unsigned __int8 **)(v24 + 192);
            ++v23;
          }
          while ( v23 < *v22 );
          v16 = 0;
          v11 = a2;
          v15 = v42;
          v10 = a1;
        }
        SymCryptMlDsaPolyElementNTT(v37);
        SymCryptMlDsaPolyElementMulR(v37);
        SymCryptMlDsaVectorPolyElementMontMul(v38, v37, v38);
        SymCryptMlDsaVectorSub(v39, v38, v43);
        SymCryptMlDsaVectorINTT(v43);
        SymCryptMlDsaUseHint(v12, v44, v43);
        SymCryptMlDsaVectorEncode(v43, *(unsigned int *)(v12 + 36), 0LL, v45);
        SymCryptShake256Init(v15 + 32);
        if ( v53 )
        {
          v28 = v11[1];
          v50[0] = *v11;
          v29 = v11[2];
          v50[1] = v28;
          v30 = v11[3];
          v50[2] = v29;
          v50[3] = v30;
        }
        else
        {
          SymCryptShake128Append(v15 + 32, v10 + 118, 64LL);
          SymCryptShake128Append(v15 + 32, &v48, 1LL);
          SymCryptShake128Append(v15 + 32, v49, 1LL);
          SymCryptShake128Append(v15 + 32, a4, a5);
          SymCryptShake128Append(v15 + 32, a6, a7);
          SymCryptShake128Append(v15 + 32, v11, a3);
          SymCryptShake256Result(v15 + 32, v50);
        }
        SymCryptShake128Append(v15 + 32, v50, 64LL);
        SymCryptShake128Append(v15 + 32, v45, v35);
        SymCryptShake256Extract(v15 + 32, v52, *(unsigned int *)(v12 + 40));
        v31 = SymCryptEqual(v52, v51, *(unsigned int *)(v12 + 40));
        v32 = v16;
        if ( !v31 )
          v32 = 32784;
        v16 = v32;
      }
      else
      {
        v16 = 32784;
      }
    }
    SymCryptMlDsaTemporariesFree(v15);
  }
  else
  {
    return 32783;
  }
  return v16;
}
