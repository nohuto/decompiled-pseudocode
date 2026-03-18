/*
 * XREFs of ComputeColorSpaceXForm @ 0x14014076C
 * Callers:
 *     pDCIAdjClr @ 0x14013DCBC (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x14013FA7C (MulFD6.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140140584 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x140141E5C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // edi
  int v6; // r11d
  int v7; // r12d
  int v8; // r10d
  int v10; // r8d
  int v11; // r9d
  int v12; // ebx
  int v13; // eax
  int v14; // r14d
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // r14d
  int v29; // r13d
  int v30; // ebx
  int v31; // esi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 result; // rax
  int v35; // [rsp+20h] [rbp-89h]
  int v36; // [rsp+20h] [rbp-89h]
  int v37; // [rsp+24h] [rbp-85h]
  int v38; // [rsp+28h] [rbp-81h]
  int v39; // [rsp+28h] [rbp-81h]
  int v40; // [rsp+2Ch] [rbp-7Dh]
  int v41; // [rsp+30h] [rbp-79h]
  int v42; // [rsp+34h] [rbp-75h]
  int v43; // [rsp+38h] [rbp-71h]
  int v44; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v45; // [rsp+40h] [rbp-69h]
  int v46; // [rsp+44h] [rbp-65h]
  int v47; // [rsp+48h] [rbp-61h]
  int v48; // [rsp+4Ch] [rbp-5Dh]
  int v49; // [rsp+50h] [rbp-59h]
  int v50; // [rsp+54h] [rbp-55h]
  unsigned __int64 v51; // [rsp+58h] [rbp-51h]
  __int128 v52; // [rsp+68h] [rbp-41h] BYREF
  __int128 v53; // [rsp+78h] [rbp-31h]
  int v54; // [rsp+88h] [rbp-21h]
  __int64 v55; // [rsp+90h] [rbp-19h]
  int v56; // [rsp+98h] [rbp-11h] BYREF
  int v57; // [rsp+9Ch] [rbp-Dh]
  int v58; // [rsp+A0h] [rbp-9h]
  int v59; // [rsp+A4h] [rbp-5h]
  int v60; // [rsp+A8h] [rbp-1h]
  int v61; // [rsp+ACh] [rbp+3h]
  int v62; // [rsp+B0h] [rbp+7h]
  int v63; // [rsp+B4h] [rbp+Bh]
  int v64; // [rsp+B8h] [rbp+Fh]
  int v65; // [rsp+BCh] [rbp+13h]

  v4 = *a2;
  v6 = a2[1];
  v7 = 0;
  v8 = a2[3];
  v10 = a2[2];
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[8];
  v55 = a1;
  v38 = v4;
  v35 = v6;
  v41 = v10;
  v40 = v8;
  v37 = v11;
  v42 = v12;
  if ( a4 >= 0 )
  {
    if ( --a4 < 0 )
      a4 = 5;
    v14 = 100 * StdIlluminant[2 * a4];
    a2[6] = v14;
    v15 = 100 * StdIlluminant[2 * a4 + 1];
    a2[7] = v15;
  }
  else
  {
    v14 = a2[6];
    v15 = a2[7];
  }
  v57 = v13;
  v58 = v4;
  v16 = v8 - v12;
  v45 = v15;
  v44 = v14;
  v17 = v12 - v6;
  v56 = 65539;
  v18 = v6 - v8;
  v61 = v17;
  v59 = v16;
  v60 = v10;
  v62 = v11;
  v63 = v6 - v8;
  v19 = MulDivFD6Pairs(&v56);
  v57 = MulFD6(v15, v19);
  LOWORD(v56) = 4;
  v60 = -v15;
  v62 = v41;
  v61 = v41 - v37;
  v63 = v42;
  v58 = v14;
  v64 = -v37;
  v65 = v40;
  v20 = MulDivFD6Pairs(&v56);
  v59 = v17;
  v21 = v20;
  v61 = v37 - v38;
  v64 = v37;
  v62 = -v38;
  v65 = v35;
  v22 = MulDivFD6Pairs(&v56);
  v59 = v18;
  v23 = v22;
  v61 = v38 - v41;
  v63 = v40;
  v62 = v38;
  v64 = -v41;
  v24 = MulDivFD6Pairs(&v56);
  v47 = MulFD6(v38, v21);
  LODWORD(v52) = v47;
  v43 = MulFD6(v41, v23);
  DWORD1(v52) = v43;
  v46 = MulFD6(v37, v24);
  DWORD2(v52) = v46;
  v50 = MulFD6(v35, v21);
  HIDWORD(v52) = v50;
  *(_DWORD *)(a3 + 48) = v50;
  v48 = MulFD6(v40, v23);
  LODWORD(v53) = v48;
  *(_DWORD *)(a3 + 52) = v48;
  v49 = MulFD6(v42, v24);
  DWORD1(v53) = v49;
  *(_DWORD *)(a3 + 56) = v49;
  v36 = MulFD6(1000000 - v35 - v38, v21);
  DWORD2(v53) = v36;
  v39 = MulFD6(1000000 - v40 - v41, v23);
  HIDWORD(v53) = v39;
  v25 = MulFD6(1000000 - v42 - v37, v24);
  v26 = v50 + v49 + v48;
  v54 = v25;
  v27 = v47 + v46 + v43;
  v28 = v25 + v39 + v36;
  v51 = __PAIR64__(v26, v27);
  if ( a4 < 0 )
  {
    *(_DWORD *)a3 = v47;
    *(_DWORD *)(a3 + 4) = v43;
    *(_DWORD *)(a3 + 8) = v46;
    *(_DWORD *)(a3 + 12) = v50;
    *(_DWORD *)(a3 + 16) = v48;
    *(_DWORD *)(a3 + 20) = v49;
    *(_DWORD *)(a3 + 24) = v36;
    *(_DWORD *)(a3 + 28) = v39;
    *(_DWORD *)(a3 + 32) = v25;
    ComputeInverseMatrix3x3(a3, &v52);
    v29 = v54;
  }
  else
  {
    v29 = v25;
  }
  *(_DWORD *)(a3 + 76) = v26;
  if ( v26 != 1000000 )
  {
    if ( v26 )
    {
      LODWORD(v51) = DivFD6(v27, v26);
      v27 = v51;
      v28 = DivFD6(v28, v26);
    }
    else
    {
      v28 = 0;
      LODWORD(v51) = 0;
      v27 = 0;
    }
    v26 = 1000000;
    HIDWORD(v51) = 1000000;
  }
  if ( *(_BYTE *)(v55 + 33) )
  {
    v31 = 0;
  }
  else
  {
    v30 = v27 + 2 * (v26 + v28 + 4 * v26) + v26 + v28 + 4 * v26;
    v31 = DivFD6(4 * v27, v30);
    v7 = DivFD6(9 * v26, v30);
  }
  v32 = v52;
  v33 = v53;
  *(_DWORD *)(a3 + 68) = v44;
  result = v45;
  *(_OWORD *)a3 = v32;
  *(_DWORD *)(a3 + 60) = v31;
  *(_QWORD *)(a3 + 36) = v51;
  *(_OWORD *)(a3 + 16) = v33;
  *(_DWORD *)(a3 + 44) = v28;
  *(_DWORD *)(a3 + 32) = v29;
  *(_DWORD *)(a3 + 64) = v7;
  *(_DWORD *)(a3 + 72) = v45;
  return result;
}
