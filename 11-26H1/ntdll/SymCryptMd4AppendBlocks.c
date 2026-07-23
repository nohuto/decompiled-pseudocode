/*
 * XREFs of SymCryptMd4AppendBlocks @ 0x18015E1F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMd4AppendBlocks(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // r11d
  int v7; // r10d
  int *v8; // r14
  int v9; // r15d
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // r8d
  int v19; // r12d
  int v20; // r9d
  int v21; // ecx
  int v22; // r11d
  int v23; // esi
  int v24; // edx
  int v25; // r13d
  int v26; // r8d
  int v27; // r14d
  int v28; // r9d
  int v29; // r10d
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  int v33; // r10d
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  int v37; // r10d
  int v38; // edx
  int v39; // r11d
  int v40; // ebx
  int v41; // edi
  int v42; // r8d
  int v43; // r9d
  int v44; // r10d
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  int v48; // r10d
  int v49; // edx
  int v50; // r8d
  int v51; // r9d
  int v52; // r10d
  int v53; // edx
  int v54; // r8d
  int v55; // r11d
  int v56; // r9d
  int v57; // r10d
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  bool v61; // zf
  int v63; // [rsp+0h] [rbp-A9h]
  int v64; // [rsp+4h] [rbp-A5h]
  int v65; // [rsp+8h] [rbp-A1h]
  int v66; // [rsp+Ch] [rbp-9Dh]
  int v67; // [rsp+10h] [rbp-99h]
  int v68; // [rsp+14h] [rbp-95h]
  int v69; // [rsp+18h] [rbp-91h]
  int v70; // [rsp+1Ch] [rbp-8Dh]
  int v71; // [rsp+20h] [rbp-89h]
  int v72; // [rsp+24h] [rbp-85h]
  int v73; // [rsp+28h] [rbp-81h]
  int v74; // [rsp+2Ch] [rbp-7Dh]
  int v75; // [rsp+30h] [rbp-79h]
  int v76; // [rsp+34h] [rbp-75h]
  int v77; // [rsp+38h] [rbp-71h]
  __int64 v78; // [rsp+40h] [rbp-69h]
  unsigned __int64 v79; // [rsp+48h] [rbp-61h]
  unsigned __int64 v81; // [rsp+58h] [rbp-51h]

  v4 = *a1;
  v5 = a1[3];
  v6 = a1[2];
  v7 = a1[1];
  if ( a3 >= 0x40 )
  {
    v71 = *a1;
    v8 = (int *)(a2 + 8);
    v79 = a3 >> 6;
    v72 = a1[3];
    v73 = a1[2];
    v81 = -64LL * (a3 >> 6) + a3;
    v74 = a1[1];
    v78 = a2 + 8;
    do
    {
      v9 = v8[6];
      v63 = *(v8 - 2);
      v64 = *v8;
      v66 = *(v8 - 1);
      v10 = __ROL4__(v4 + v63 + (v5 ^ v7 & (v5 ^ v6)), 3);
      v68 = v8[1];
      v11 = __ROL4__(v5 + v66 + (v6 ^ v10 & (v6 ^ v7)), 7);
      v77 = v8[2];
      v12 = __ROL4__(v6 + *v8 + (v7 ^ v11 & (v7 ^ v10)), 11);
      v13 = __ROL4__(v7 + v68 + (v10 ^ v12 & (v10 ^ v11)), 19);
      v67 = v8[3];
      v14 = __ROL4__(v10 + v77 + (v11 ^ v13 & (v11 ^ v12)), 3);
      v65 = v8[4];
      v15 = __ROL4__(v11 + v67 + (v12 ^ v14 & (v13 ^ v12)), 7);
      v16 = __ROL4__(v65 + v12 + (v13 ^ v15 & (v13 ^ v14)), 11);
      v70 = v8[5];
      v17 = __ROL4__(v13 + v70 + (v14 ^ v16 & (v14 ^ v15)), 19);
      v18 = __ROL4__(v14 + v9 + (v15 ^ v17 & (v15 ^ v16)), 3);
      v19 = v8[8];
      v75 = v8[7];
      v20 = __ROL4__(v15 + v75 + (v16 ^ v18 & (v16 ^ v17)), 7);
      v21 = __ROL4__(v16 + v19 + (v17 ^ v20 & (v17 ^ v18)), 11);
      v69 = v8[9];
      v22 = __ROL4__(v17 + v69 + (v18 ^ v21 & (v18 ^ v20)), 19);
      v23 = v8[10];
      v24 = __ROL4__(v18 + v23 + (v20 ^ v22 & (v20 ^ v21)), 3);
      v25 = v8[11];
      v26 = __ROL4__(v20 + v25 + (v21 ^ v24 & (v21 ^ v22)), 7);
      v27 = v8[12];
      v28 = __ROL4__(v21 + v27 + (v22 ^ v26 & (v22 ^ v24)), 11);
      v76 = *(_DWORD *)(v78 + 52);
      v29 = __ROL4__(v22 + v76 + (v24 ^ v28 & (v24 ^ v26)), 19);
      v30 = __ROL4__(v63 + (v28 & v29 | v26 & (v28 | v29)) + 1518500249 + v24, 3);
      v31 = __ROL4__(v77 + (v29 & v30 | v28 & (v29 | v30)) + 1518500249 + v26, 5);
      v32 = __ROL4__(v9 + (v30 & v31 | v29 & (v30 | v31)) + 1518500249 + v28, 9);
      v33 = __ROL4__(v23 + (v31 & v32 | v30 & (v31 | v32)) + 1518500249 + v29, 13);
      v34 = __ROL4__(v30 + (v32 & v33 | v31 & (v32 | v33)) + v66 + 1518500249, 3);
      v35 = __ROL4__(v31 + (v33 & v34 | v32 & (v33 | v34)) + v67 + 1518500249, 5);
      v36 = __ROL4__(v75 + (v34 & v35 | v33 & (v34 | v35)) + 1518500249 + v32, 9);
      v37 = __ROL4__(v25 + (v35 & v36 | v34 & (v35 | v36)) + 1518500249 + v33, 13);
      v38 = __ROL4__(v34 + (v36 & v37 | v35 & (v36 | v37)) + v64 + 1518500249, 3);
      v39 = __ROL4__(v35 + (v37 & v38 | v36 & (v37 | v38)) + v65 + 1518500249, 5);
      v40 = __ROL4__(v19 + v36 + 1518500249 + (v38 & v39 | v37 & (v38 | v39)), 9);
      v41 = __ROL4__(v27 + v37 + (v39 & v40 | v38 & (v39 | v40)) + 1518500249, 13);
      v42 = __ROL4__(v38 + (v40 & v41 | v39 & (v40 | v41)) + v68 + 1518500249, 3);
      v43 = __ROL4__(v39 + (v41 & v42 | v40 & (v41 | v42)) + v70 + 1518500249, 5);
      v44 = __ROL4__(v40 + (v42 & v43 | v41 & (v42 | v43)) + v69 + 1518500249, 9);
      v45 = __ROL4__(v41 + (v43 & v44 | v42 & (v43 | v44)) + v76 + 1518500249, 13);
      v46 = __ROL4__(v42 + (v43 ^ v44 ^ v45) + v63 + 1859775393, 3);
      v47 = __ROL4__(v9 + (v44 ^ v45 ^ v46) + 1859775393 + v43, 9);
      v48 = __ROL4__(v44 + (v45 ^ v46 ^ v47) + v77 + 1859775393, 11);
      v49 = __ROL4__(v23 + (v46 ^ v47 ^ v48) + 1859775393 + v45, 15);
      v50 = __ROL4__(v46 + (v47 ^ v48 ^ v49) + v64 + 1859775393, 3);
      v51 = __ROL4__(v19 + (v48 ^ v49 ^ v50) + 1859775393 + v47, 9);
      v52 = __ROL4__(v48 + (v51 ^ v49 ^ v50) + v65 + 1859775393, 11);
      v53 = __ROL4__(v27 + (v51 ^ v52 ^ v50) + 1859775393 + v49, 15);
      v54 = __ROL4__(v50 + (v51 ^ v52 ^ v53) + v66 + 1859775393, 3);
      v55 = __ROL4__(v75 + (v52 ^ v53 ^ v54) + v51 + 1859775393, 9);
      v56 = __ROL4__(v67 + (v53 ^ v54 ^ v55) + v52 + 1859775393, 11);
      v57 = __ROL4__(v25 + (v54 ^ v55 ^ v56) + v53 + 1859775393, 15);
      v58 = __ROL4__(v68 + (v55 ^ v56 ^ v57) + 1859775393 + v54, 3);
      v8 = (int *)(v78 + 64);
      v78 += 64LL;
      v71 += v58;
      v4 = v71;
      v59 = __ROL4__(v69 + (v56 ^ v57 ^ v58) + v55 + 1859775393, 9);
      v5 = v59 + v72;
      *a1 = v71;
      a1[3] = v59 + v72;
      v60 = __ROL4__(v70 + (v57 ^ v58 ^ v59) + v56 + 1859775393, 11);
      v6 = v60 + v73;
      v72 += v59;
      a1[2] = v60 + v73;
      v73 += v60;
      v7 = v74 + __ROL4__(v76 + (v58 ^ v59 ^ v60) + v57 + 1859775393, 15);
      v61 = v79-- == 1;
      a1[1] = v7;
      v74 = v7;
    }
    while ( !v61 );
    a3 = v81;
  }
  *a4 = a3;
  return 0LL;
}
