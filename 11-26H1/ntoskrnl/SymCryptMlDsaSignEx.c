/*
 * XREFs of SymCryptMlDsaSignEx @ 0x14055D89C
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 * Callees:
 *     SymCryptMlDsaExpandMask @ 0x140572830 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaMakeHint @ 0x140572BE0 (SymCryptMlDsaMakeHint.c)
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140572CA0 (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaPolyElementMulR @ 0x140573454 (SymCryptMlDsaPolyElementMulR.c)
 *     SymCryptMlDsaPolyElementNTT @ 0x1405734A0 (SymCryptMlDsaPolyElementNTT.c)
 *     SymCryptMlDsaSampleInBall @ 0x14057389C (SymCryptMlDsaSampleInBall.c)
 *     SymCryptMlDsaSigEncode @ 0x140573A68 (SymCryptMlDsaSigEncode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573FA0 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaTemporariesFree @ 0x140574124 (SymCryptMlDsaTemporariesFree.c)
 *     SymCryptMlDsaVectorAdd @ 0x140574290 (SymCryptMlDsaVectorAdd.c)
 *     SymCryptMlDsaVectorEncode @ 0x140574380 (SymCryptMlDsaVectorEncode.c)
 *     SymCryptMlDsaVectorHighBits @ 0x1405743F8 (SymCryptMlDsaVectorHighBits.c)
 *     SymCryptMlDsaVectorINTT @ 0x14057448C (SymCryptMlDsaVectorINTT.c)
 *     SymCryptMlDsaVectorInfinityNorm @ 0x1405744CC (SymCryptMlDsaVectorInfinityNorm.c)
 *     SymCryptMlDsaVectorLowBits @ 0x140574568 (SymCryptMlDsaVectorLowBits.c)
 *     SymCryptMlDsaVectorPolyElementMontMul @ 0x14057467C (SymCryptMlDsaVectorPolyElementMontMul.c)
 *     SymCryptMlDsaVectorSub @ 0x140574790 (SymCryptMlDsaVectorSub.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 *     SymCryptShake256Result @ 0x140574A60 (SymCryptShake256Result.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  __int64 v11; // rsi
  unsigned int v13; // r15d
  int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int16 v23; // bx
  unsigned __int8 *v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rdi
  unsigned __int8 i; // bl
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // edi
  unsigned int v36; // r8d
  bool v37; // cf
  __int64 v38; // rbx
  unsigned int v39; // eax
  __int16 v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  int v46[2]; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  bool v52; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v53[3]; // [rsp+91h] [rbp-6Fh] BYREF
  unsigned int v54[3]; // [rsp+94h] [rbp-6Ch] BYREF
  _OWORD v55[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v56[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v57[64]; // [rsp+120h] [rbp+20h] BYREF
  int v58; // [rsp+208h] [rbp+108h]

  v11 = a1[1];
  v13 = 0;
  v58 = a10 & 1;
  v15 = *(unsigned __int8 *)(v11 + 22) * *(unsigned __int8 *)(v11 + 24);
  v53[0] = a5;
  v52 = a6 != 0;
  v50 = v15;
  v16 = 32 * *(_DWORD *)(v11 + 36) * *(unsigned __int8 *)(v11 + 20);
  v17 = SymCryptMlDsaTemporariesAllocateAndInitialize(v11, 2, 3, 1, v16);
  v18 = v17;
  if ( v17 )
  {
    v19 = v17 + 32;
    SymCryptShake256Init(v17 + 32);
    if ( v58 )
    {
      v20 = a2[1];
      v55[0] = *a2;
      v21 = a2[2];
      v55[1] = v20;
      v22 = a2[3];
      v55[2] = v21;
      v55[3] = v22;
    }
    else
    {
      SymCryptShake128Append(v19, (char *)a1 + 118, 64LL);
      SymCryptShake128Append(v19, &v52, 1LL);
      SymCryptShake128Append(v19, v53, 1LL);
      SymCryptShake128Append(v19, a4, a5);
      SymCryptShake128Append(v19, a6, a7);
      SymCryptShake128Append(v19, a2, a3);
      SymCryptShake256Result(v19, v55);
    }
    SymCryptShake128Append(v19, (char *)a1 + 54, 32LL);
    SymCryptShake128Append(v19, a8, a9);
    SymCryptShake128Append(v19, v55, 64LL);
    SymCryptShake256Result(v19, v57);
    v23 = 0;
    v24 = **(unsigned __int8 ***)(v18 + 272);
    v25 = *(__int64 **)(v18 + 280);
    v26 = *v25;
    v27 = v25[1];
    v43 = v25[2];
    v49 = *(_QWORD *)(v18 + 296);
    v28 = v16;
    v29 = a1;
    v51 = v28;
    v42 = v26;
    *(_QWORD *)v46 = v27;
    do
    {
      while ( 1 )
      {
        do
        {
          SymCryptMlDsaExpandMask(v11, v19, (unsigned int)v57, 64, v23, v26);
          v41 = *(unsigned __int8 *)(v11 + 21) + v23;
          SymCryptMlDsaMatrixVectorMontMul(v29[23], v42, v24, **(_QWORD **)(v18 + 288));
          for ( i = 0; i < *v24; ++i )
            SymCryptMlDsaPolyElementMulR(&v24[1024 * (unsigned __int64)i + 8]);
          SymCryptMlDsaVectorINTT(v24);
          v31 = *(_QWORD *)(*(_QWORD *)(v18 + 272) + 8LL);
          SymCryptMlDsaVectorHighBits(v11, v24, v31);
          SymCryptMlDsaVectorEncode(v31, *(unsigned int *)(v11 + 36), 0LL, v49);
          SymCryptShake128Append(v19, v55, 64LL);
          SymCryptShake128Append(v19, v49, v51);
          SymCryptShake256Extract(v19, v56, *(unsigned int *)(v11 + 40));
          v32 = **(_QWORD **)(v18 + 288);
          v45 = v32;
          SymCryptMlDsaSampleInBall(v11, v56, *(unsigned int *)(v11 + 40), v32);
          SymCryptMlDsaPolyElementNTT(v32);
          SymCryptMlDsaPolyElementMulR(v32);
          v33 = *(_QWORD *)(*(_QWORD *)(v18 + 272) + 8LL);
          SymCryptMlDsaVectorPolyElementMontMul(v29[25], v45, v43);
          SymCryptMlDsaVectorPolyElementMontMul(v29[26], v45, v33);
          SymCryptMlDsaVectorINTT(v43);
          SymCryptMlDsaVectorINTT(v33);
          SymCryptMlDsaVectorINTT(v42);
          SymCryptMlDsaVectorAdd(v42, v43, *(_QWORD *)v46);
          SymCryptMlDsaVectorSub(v24, v33, v24);
          v34 = *(_QWORD *)(*(_QWORD *)(v18 + 272) + 8LL);
          SymCryptMlDsaVectorLowBits(v11, v24, v34);
          v35 = SymCryptMlDsaVectorInfinityNorm(*(_QWORD *)v46);
          v36 = SymCryptMlDsaVectorInfinityNorm(v34);
          v37 = v35 < (1 << *(_BYTE *)(v11 + 26)) - v50;
          v29 = a1;
          v23 = v41;
          v26 = v42;
        }
        while ( !v37 || v36 >= *(_DWORD *)(v11 + 32) - v50 );
        v38 = *(_QWORD *)(*(_QWORD *)(v18 + 272) + 8LL);
        SymCryptMlDsaVectorPolyElementMontMul(a1[27], v45, v38);
        SymCryptMlDsaVectorINTT(v38);
        v39 = SymCryptMlDsaVectorInfinityNorm(v38);
        v26 = v42;
        if ( v39 < *(_DWORD *)(v11 + 32) )
          break;
        v23 = v41;
      }
      SymCryptMlDsaVectorAdd(v38, v24, v38);
      v54[0] = 0;
      SymCryptMlDsaMakeHint(v11, (_DWORD)v24, v38, v38, (__int64)v54);
      v23 = v41;
      v26 = v42;
    }
    while ( v54[0] > *(unsigned __int8 *)(v11 + 25) );
    SymCryptMlDsaSigEncode(v11, (int)v56, *(_DWORD *)(v11 + 40), v46[0], *(_QWORD *)(*(_QWORD *)(v18 + 272) + 8LL), a11);
    SymCryptMlDsaTemporariesFree(v18);
  }
  else
  {
    return 32783;
  }
  return v13;
}
