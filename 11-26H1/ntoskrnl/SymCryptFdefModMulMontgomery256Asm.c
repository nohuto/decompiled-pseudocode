/*
 * XREFs of SymCryptFdefModMulMontgomery256Asm @ 0x1405711F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModMulMontgomery256Asm(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // r11
  unsigned __int128 v6; // rax
  unsigned __int128 v7; // kr00_16
  unsigned __int128 v8; // kr10_16
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // kr30_8
  unsigned __int128 v13; // kr50_16
  unsigned __int128 v14; // kr70_16
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // krA0_8
  unsigned __int128 v19; // krC0_16
  unsigned __int64 v20; // r12
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // kr110_8
  unsigned __int64 v26; // r12
  __int64 v27; // r15
  unsigned __int64 v28; // r13
  __int64 v29; // r15
  unsigned __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r8
  unsigned __int64 *v33; // rcx
  unsigned __int128 v34; // kr190_16
  __int64 v35; // rsi
  unsigned __int128 v36; // kr1F0_16
  __int64 v37; // rdi
  unsigned __int128 v38; // kr250_16
  unsigned __int64 v39; // r12
  __int64 v40; // rbp
  unsigned __int64 v41; // r13
  __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // r13
  unsigned __int64 v46; // rbx
  unsigned __int128 v47; // rax
  __int64 v48; // kr2E0_8
  bool v49; // cf
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // r13
  _BOOL8 v52; // rtt
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r15
  __int64 v55; // rtt
  unsigned __int64 v56; // rbp
  unsigned __int128 v57; // kr300_16
  unsigned __int128 v58; // kr20_16

  v5 = *a2;
  v6 = *a2 * (unsigned __int128)*a3;
  v7 = v5 * (unsigned __int128)a3[1] + *((unsigned __int64 *)&v6 + 1);
  v8 = v5 * (unsigned __int128)a3[2] + *((unsigned __int64 *)&v7 + 1);
  v10 = (v5 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v8 + 1)) >> 64;
  v9 = v5 * a3[3] + *((_QWORD *)&v8 + 1);
  v11 = a2[1];
  v12 = v11 * *a3 + v7;
  v13 = ((v11 * (unsigned __int128)*a3 + (unsigned __int64)v7) >> 64)
      + v11 * (unsigned __int128)a3[1]
      + (unsigned __int64)v8;
  v14 = *((unsigned __int64 *)&v13 + 1) + v11 * (unsigned __int128)a3[2] + v9;
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v14 + 1) + v11 * (unsigned __int128)a3[3] + v10) >> 64;
  v15 = *((_QWORD *)&v14 + 1) + v11 * a3[3] + v10;
  v16 = *((_QWORD *)&v6 + 1);
  v17 = a2[2];
  v18 = v17 * *a3 + v13;
  v19 = ((v17 * (unsigned __int128)*a3 + (unsigned __int64)v13) >> 64)
      + v17 * (unsigned __int128)a3[1]
      + (unsigned __int64)v14;
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v19 + 1) + v17 * (unsigned __int128)a3[2] + v15) >> 64;
  v20 = *((_QWORD *)&v19 + 1) + v17 * a3[2] + v15;
  v21 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v6 + 1) + v17 * (unsigned __int128)a3[3] + v16) >> 64;
  v22 = v21 + v17 * a3[3] + v16;
  v23 = *((_QWORD *)&v6 + 1);
  v24 = a2[3];
  v25 = v24 * *a3 + v19;
  *((_QWORD *)&v6 + 1) = (((v24 * (unsigned __int128)*a3 + (unsigned __int64)v19) >> 64)
                        + v24 * (unsigned __int128)a3[1]
                        + v20) >> 64;
  v26 = ((v24 * (unsigned __int128)*a3 + (unsigned __int64)v19) >> 64) + v24 * a3[1] + v20;
  v27 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v6 + 1) + v24 * (unsigned __int128)a3[2] + v22) >> 64;
  v28 = v27 + v24 * a3[2] + v22;
  v29 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v6 + 1) + v24 * (unsigned __int128)a3[3] + v23) >> 64;
  v30 = v29 + v24 * a3[3] + v23;
  v31 = *((_QWORD *)&v6 + 1);
  v32 = *(_QWORD *)(a1 + 24);
  v33 = (unsigned __int64 *)(a1 + 128);
  v34 = (unsigned __int64)(((_QWORD)v6 != 0LL) + (((unsigned __int64)(v32 * v6) * (unsigned __int128)*v33) >> 64))
      + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[1]
      + v12;
  v35 = (((*((unsigned __int64 *)&v34 + 1) + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[2] + v18) >> 64)
       + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[3]
       + v25) >> 64;
  v36 = (unsigned __int64)(((_QWORD)v34 != 0LL) + (((unsigned __int64)(v32 * v34) * (unsigned __int128)*v33) >> 64))
      + (unsigned __int64)(v32 * v34) * (unsigned __int128)v33[1]
      + *((_QWORD *)&v34 + 1)
      + v32 * (_QWORD)v6 * v33[2]
      + v18;
  v37 = (((*((unsigned __int64 *)&v36 + 1)
         + (unsigned __int64)(v32 * v34) * (unsigned __int128)v33[2]
         + (unsigned __int64)(((*((unsigned __int64 *)&v34 + 1)
                              + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[2]
                              + v18) >> 64)
                            + v32 * v6 * v33[3]
                            + v25)) >> 64)
       + (unsigned __int64)(v32 * v34) * (unsigned __int128)v33[3]
       + v26) >> 64;
  v38 = (unsigned __int64)(((_QWORD)v36 != 0LL) + (((unsigned __int64)(v32 * v36) * (unsigned __int128)*v33) >> 64))
      + (unsigned __int64)(v32 * v36) * (unsigned __int128)v33[1]
      + (unsigned __int64)(*((_QWORD *)&v36 + 1)
                         + v32 * v34 * v33[2]
                         + ((*((unsigned __int64 *)&v34 + 1)
                           + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[2]
                           + v18) >> 64)
                         + v32 * v6 * v33[3]
                         + v25);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v38 + 1)
                        + (unsigned __int64)(v32 * v36) * (unsigned __int128)v33[2]
                        + (unsigned __int64)(((*((unsigned __int64 *)&v36 + 1)
                                             + (unsigned __int64)(v32 * v34) * (unsigned __int128)v33[2]
                                             + (unsigned __int64)(((*((unsigned __int64 *)&v34 + 1)
                                                                  + (unsigned __int64)(v32 * v6)
                                                                  * (unsigned __int128)v33[2]
                                                                  + v18) >> 64)
                                                                + v32 * v6 * v33[3]
                                                                + v25)) >> 64)
                                           + v32 * v34 * v33[3]
                                           + v26)) >> 64;
  v39 = *((_QWORD *)&v38 + 1)
      + v32 * v36 * v33[2]
      + ((*((unsigned __int64 *)&v36 + 1)
        + (unsigned __int64)(v32 * v34) * (unsigned __int128)v33[2]
        + (unsigned __int64)(((*((unsigned __int64 *)&v34 + 1)
                             + (unsigned __int64)(v32 * v6) * (unsigned __int128)v33[2]
                             + v18) >> 64)
                           + v32 * v6 * v33[3]
                           + v25)) >> 64)
      + v32 * v34 * v33[3]
      + v26;
  v40 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v6 + 1)
                        + (unsigned __int64)(v32 * v36) * (unsigned __int128)v33[3]
                        + v28) >> 64;
  v41 = v40 + v32 * v36 * v33[3] + v28;
  v42 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = ((unsigned __int64)(((_QWORD)v38 != 0LL)
                                           + (((unsigned __int64)(v32 * v38) * (unsigned __int128)*v33) >> 64))
                        + (unsigned __int64)(v32 * v38) * (unsigned __int128)v33[1]
                        + v39) >> 64;
  v43 = ((_QWORD)v38 != 0LL)
      + (((unsigned __int64)(v32 * v38) * (unsigned __int128)*v33) >> 64)
      + v32 * v38 * v33[1]
      + v39;
  v44 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = (*((unsigned __int64 *)&v6 + 1)
                        + (unsigned __int64)(v32 * v38) * (unsigned __int128)v33[2]
                        + v41) >> 64;
  v45 = v44 + v32 * v38 * v33[2] + v41;
  v46 = *((_QWORD *)&v6 + 1);
  v47 = (unsigned __int64)(v32 * v38) * (unsigned __int128)v33[3];
  v48 = v46 + v47 + v30;
  *((_QWORD *)&v47 + 1) = (v46 + v47 + v30) >> 64;
  v49 = __CFADD__(v35, v43);
  v50 = v35 + v43;
  v52 = v49;
  v49 = __CFADD__(v49, v45);
  v51 = v52 + v45;
  v49 |= __CFADD__(v37, v51);
  v51 += v37;
  v53 = v42 + v49 + v48;
  v55 = __CFADD__(v49, v48) | (unsigned __int8)__CFADD__(v42, v49 + v48);
  v49 = __CFADD__(v55, v31);
  v54 = v55 + v31;
  v49 |= __CFADD__(*((_QWORD *)&v47 + 1), v54);
  v54 += *((_QWORD *)&v47 + 1);
  v56 = v53 - ((__PAIR128__(v51, v50) < *(_OWORD *)v33) + v33[2]);
  v57 = v54 - (unsigned __int128)((v53 < (__PAIR128__(v51, v50) < *(_OWORD *)v33) + v33[2]) + v33[3]);
  if ( -(__int64)v49 == *((_QWORD *)&v57 + 1) )
  {
    v58 = __PAIR128__(v51, v50) - *(_OWORD *)v33;
    v51 = *((_QWORD *)&v58 + 1);
    v50 = v58;
    v53 = v56;
    v54 = v57;
  }
  *a4 = v50;
  a4[1] = v51;
  a4[2] = v53;
  a4[3] = v54;
  return v47;
}
