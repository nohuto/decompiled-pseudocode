/*
 * XREFs of SymCryptKeccakPermute @ 0x140578070
 * Callers:
 *     SymCryptKeccakAppend @ 0x140577C8C (SymCryptKeccakAppend.c)
 *     SymCryptKeccakAppendLanes @ 0x140577D90 (SymCryptKeccakAppendLanes.c)
 *     SymCryptKeccakApplyPadding @ 0x140577E1C (SymCryptKeccakApplyPadding.c)
 *     SymCryptKeccakExtract @ 0x140577E84 (SymCryptKeccakExtract.c)
 *     SymCryptKeccakExtractLanes @ 0x140577FC0 (SymCryptKeccakExtractLanes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptKeccakPermute(__int64 *a1)
{
  __int64 v1; // r11
  __int64 v2; // r8
  __int64 v3; // r12
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // r11
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // rt0
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // r13
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 result; // rax
  __int64 v55; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+0h] [rbp-F8h]
  __int64 v57; // [rsp+0h] [rbp-F8h]
  __int64 v58; // [rsp+8h] [rbp-F0h]
  __int64 v59; // [rsp+10h] [rbp-E8h]
  __int64 v60; // [rsp+10h] [rbp-E8h]
  __int64 v61; // [rsp+18h] [rbp-E0h]
  __int64 v62; // [rsp+18h] [rbp-E0h]
  __int64 v63; // [rsp+20h] [rbp-D8h]
  __int64 v64; // [rsp+20h] [rbp-D8h]
  __int64 v65; // [rsp+28h] [rbp-D0h]
  __int64 v66; // [rsp+28h] [rbp-D0h]
  __int64 v67; // [rsp+30h] [rbp-C8h]
  __int64 v68; // [rsp+30h] [rbp-C8h]
  __int64 v69; // [rsp+38h] [rbp-C0h]
  __int64 v70; // [rsp+38h] [rbp-C0h]
  __int64 v71; // [rsp+40h] [rbp-B8h]
  __int64 v72; // [rsp+40h] [rbp-B8h]
  __int64 v73; // [rsp+48h] [rbp-B0h]
  __int64 v74; // [rsp+48h] [rbp-B0h]
  __int64 v75; // [rsp+50h] [rbp-A8h]
  __int64 v76; // [rsp+50h] [rbp-A8h]
  __int64 v77; // [rsp+58h] [rbp-A0h]
  __int64 v78; // [rsp+60h] [rbp-98h]
  __int64 v79; // [rsp+68h] [rbp-90h]
  __int64 v80; // [rsp+70h] [rbp-88h]
  __int64 v81; // [rsp+78h] [rbp-80h]
  __int64 v82; // [rsp+80h] [rbp-78h]
  __int64 v83; // [rsp+80h] [rbp-78h]
  __int64 v84; // [rsp+88h] [rbp-70h]
  __int64 v85; // [rsp+90h] [rbp-68h]
  _QWORD *v86; // [rsp+98h] [rbp-60h]
  __int64 v87; // [rsp+A0h] [rbp-58h]
  __int64 v88; // [rsp+A8h] [rbp-50h]
  __int64 v90; // [rsp+108h] [rbp+10h]
  __int64 v91; // [rsp+108h] [rbp+10h]
  __int64 v92; // [rsp+110h] [rbp+18h]
  __int64 v93; // [rsp+110h] [rbp+18h]
  __int64 v94; // [rsp+110h] [rbp+18h]
  __int64 v95; // [rsp+118h] [rbp+20h]

  v1 = a1[5];
  v2 = a1[22];
  v3 = a1[2];
  v4 = a1[23];
  v5 = a1[18];
  v6 = a1[20];
  v7 = *a1;
  v8 = a1[21];
  v9 = a1[11];
  v10 = a1[6];
  v11 = a1[1];
  v12 = a1[24];
  v59 = a1[15];
  v61 = a1[10];
  v67 = a1[17];
  v69 = a1[12];
  v77 = a1[7];
  v79 = a1[13];
  v71 = a1[8];
  v80 = a1[3];
  v13 = a1[19];
  v75 = a1[14];
  v73 = a1[9];
  v14 = a1[16];
  v81 = a1[4];
  v86 = &unk_140E0A6C0;
  v63 = v1;
  v92 = v2;
  v78 = v3;
  v58 = v4;
  v90 = v5;
  v55 = v13;
  while ( 1 )
  {
    v15 = v61 ^ v7 ^ v6 ^ v59 ^ v1;
    v16 = v77 ^ v69 ^ v67 ^ v3 ^ v2;
    v17 = v71 ^ v80 ^ v79 ^ v5 ^ v4;
    v18 = v11 ^ v10 ^ v9 ^ v14 ^ v8;
    v19 = v75 ^ v81 ^ v73 ^ v13 ^ v12;
    v20 = v19 ^ __ROL8__(v18, 1);
    v64 = v20 ^ v63;
    v62 = v20 ^ v61;
    v21 = v20 ^ v6;
    v60 = v20 ^ v59;
    v22 = v16 ^ __ROL8__(v19, 1);
    v72 = v22 ^ v71;
    v23 = v20 ^ v7;
    v24 = v15 ^ __ROL8__(v16, 1);
    v82 = v21;
    v25 = v24 ^ v14;
    v26 = v24 ^ v9;
    v27 = v17 ^ __ROL8__(v15, 1);
    v74 = v27 ^ v73;
    v28 = v24 ^ v10;
    v56 = v27 ^ v55;
    v29 = v24 ^ v8;
    v30 = v27 ^ v12;
    v31 = __ROL8__(v24 ^ v11, 1);
    v32 = v18 ^ __ROL8__(v17, 1);
    v70 = v32 ^ v69;
    v33 = v26;
    v68 = v32 ^ v67;
    v34 = v25;
    v93 = v32 ^ v92;
    v35 = v32 ^ v77;
    v36 = __ROL8__(v32 ^ v78, 62);
    v37 = v27 ^ v75;
    v88 = v36;
    v38 = __ROL8__(v22 ^ v80, 28);
    v39 = __ROL8__(v27 ^ v81, 27);
    v91 = __ROL8__(v22 ^ v90, 21);
    v95 = __ROL8__(v30, 14);
    v94 = __ROL8__(v93, 61);
    v57 = __ROL8__(v56, 8);
    v83 = __ROL8__(v82, 18);
    v84 = __ROL8__(v37, 39);
    v40 = __ROL8__(v22 ^ v58, 56);
    v85 = __ROL8__(v28, 44);
    v65 = __ROL8__(v62, 3);
    v41 = __ROL8__(v34, 45);
    v42 = __ROL8__(v70, 43);
    v43 = __ROL8__(v74, 20);
    v78 = v42 ^ v95 & ~v91;
    v44 = __ROL8__(v22 ^ v79, 25);
    v45 = __ROL8__(v35, 6);
    v80 = v91 ^ v23 & ~v95;
    v76 = v44;
    v81 = v95 ^ v85 & ~v23;
    v46 = __ROL8__(v64, 36);
    v87 = v85 ^ v91 & ~v42;
    v47 = __ROL8__(v72, 55);
    v77 = v65 ^ v94 & ~v41;
    v48 = __ROL8__(v33, 10);
    v49 = __ROL8__(v60, 41);
    v50 = __ROL8__(v68, 15);
    v71 = v41 ^ v38 & ~v94;
    v51 = __ROL8__(v29, 2);
    v73 = v94 ^ v43 & ~v38;
    v63 = v38 ^ v65 & ~v43;
    v66 = v43 ^ v41 & ~v65;
    v52 = v76;
    v69 = v76 ^ v83 & ~v57;
    v79 = v57 ^ v31 & ~v83;
    v75 = v83 ^ v45 & ~v31;
    v61 = v31 ^ v52 & ~v45;
    v9 = v45 ^ v57 & ~v52;
    v67 = v48 ^ v40 & ~v50;
    v5 = v50 ^ v39 & ~v40;
    v90 = v5;
    v13 = v40 ^ v46 & ~v39;
    v55 = v13;
    v4 = v49 ^ v88 & ~v51;
    v58 = v4;
    v59 = v39 ^ v48 & ~v46;
    v14 = v46 ^ v50 & ~v48;
    v2 = v84 ^ v51 & ~v49;
    v92 = v2;
    v53 = v51 ^ v47 & ~v88;
    v6 = v88 ^ v84 & ~v47;
    v8 = v47 ^ v49 & ~v84;
    v7 = v23 ^ *v86++ ^ v42 & ~v85;
    v3 = v78;
    v10 = v66;
    v1 = v63;
    if ( (__int64)v86 >= (__int64)&NtBuildNumber )
      break;
    v11 = v87;
    v12 = v53;
  }
  a1[15] = v59;
  a1[10] = v61;
  a1[5] = v63;
  a1[16] = v14;
  a1[6] = v66;
  a1[1] = v87;
  a1[13] = v79;
  a1[19] = v13;
  a1[17] = v67;
  a1[14] = v75;
  a1[12] = v69;
  a1[18] = v5;
  a1[9] = v73;
  result = v81;
  a1[7] = v77;
  a1[8] = v71;
  a1[4] = v81;
  a1[20] = v6;
  *a1 = v7;
  a1[21] = v8;
  a1[11] = v9;
  a1[22] = v2;
  a1[2] = v78;
  a1[23] = v4;
  a1[3] = v80;
  a1[24] = v53;
  return result;
}
