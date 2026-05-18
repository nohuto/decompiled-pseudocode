/*
 * XREFs of sub_180091B00 @ 0x180091B00
 * Callers:
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180079330 @ 0x180079330 (sub_180079330.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_18004E1AC @ 0x18004E1AC (sub_18004E1AC.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_18005DA34 @ 0x18005DA34 (sub_18005DA34.c)
 *     sub_180080CFC @ 0x180080CFC (sub_180080CFC.c)
 *     sub_180080E34 @ 0x180080E34 (sub_180080E34.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180091B00(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // bl
  __int64 v20; // rsi
  __int64 result; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 *v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // r9
  __int64 *v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int128 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  _BYTE v51[20]; // [rsp+98h] [rbp-68h]
  char v52; // [rsp+ACh] [rbp-54h]
  int v53; // [rsp+ADh] [rbp-53h]
  int v54; // [rsp+B4h] [rbp-4Ch]
  unsigned int v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C4h] [rbp-3Ch]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  __int64 v63; // [rsp+108h] [rbp+8h]
  __int64 v64; // [rsp+110h] [rbp+10h] BYREF
  __int64 v65; // [rsp+120h] [rbp+20h] BYREF
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int64 v67; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v68[3]; // [rsp+140h] [rbp+40h] BYREF
  char v69; // [rsp+14Ch] [rbp+4Ch] BYREF

  v46 = *(_QWORD *)(a2 + 18688);
  v5 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v5 = 0;
  v6 = 0;
  if ( (*(_DWORD *)(v46 + 560) & 2) == 0 )
    v6 = v5;
  v56 = v6;
  v7 = sub_18005DA34(*(_QWORD *)(a1 + 56));
  v8 = sub_18005DA34(*(_QWORD *)(a1 + 56));
  v9 = sub_18005DA34(*(_QWORD *)(a1 + 56));
  v10 = sub_18005DA34(*(_QWORD *)(a1 + 56));
  v55 = v10;
  v11 = v7;
  v12 = 1LL << v7;
  v57 = v12;
  if ( a3 )
  {
    v68[0] = v8;
    v68[1] = v9;
    v68[2] = v10;
    v41 = (__int64 *)v68;
    v13 = (__int64 *)&v69;
  }
  else
  {
    v43 = __PAIR64__(v9, v8);
    v41 = &v43;
    v13 = &v44;
  }
  v42 = v13;
  v14 = sub_18004E1AC(v11, (_DWORD **)&v41);
  v15 = 0LL;
  v16 = 1LL << v8;
  v17 = 1LL << v9;
  v43 = 1LL << v9;
  do
  {
    v18 = v12 | v15;
    v19 = a3 && _bittest64(&v18, v55);
    v20 = v18 & v16;
    result = v18 & v17;
    if ( !v19 || !v20 && !result )
    {
      sub_18005D458(*(_QWORD *)(a1 + 56), &v41, v18, v14 & ~v18, 1);
      *(_QWORD *)&v49 = 0LL;
      BYTE8(v49) = 0;
      *(_OWORD *)&v51[4] = 0LL;
      v54 = 3;
      LODWORD(v47) = 0;
      HIDWORD(v47) = 2 - v19;
      v48 = v56 & (unsigned int)-(v20 != 0);
      v53 = 16843009;
      HIDWORD(v49) = 2;
      v50 = 0x200000002LL;
      *(_DWORD *)v51 = 7;
      v52 = 1;
      sub_180042444(v46, &v44);
      sub_180081920(v44, (__int64)&v47, 0LL);
      v22 = sub_180012C40(&v58, &v44);
      sub_180080CFC(v23, v22);
      if ( !v19 )
      {
        HIDWORD(v47) = 1;
        v24 = sub_180042444(v46, &v59);
        sub_180011F5C(&v44, v24);
        if ( v60 )
          sub_180010EC8(v60);
        sub_180081920(v44, (__int64)&v47, 0LL);
        v25 = sub_180012C40(&v61, &v44);
        sub_180013540((__int64 *)(v26 + 64), v25);
        v27 = v25[1];
        if ( v27 )
          sub_180010EC8(v27);
        HIBYTE(v53) = 0;
        v28 = sub_180042444(v46, &v62);
        sub_180011F5C(&v44, v28);
        if ( v63 )
          sub_180010EC8(v63);
        sub_180081920(v44, (__int64)&v47, 0LL);
        v29 = sub_180012C40(&v64, &v44);
        sub_180013540((__int64 *)(v30 + 80), v29);
        v31 = v29[1];
        if ( v31 )
          sub_180010EC8(v31);
        HIDWORD(v47) = 2;
        v32 = sub_180042444(v46, &v65);
        sub_180011F5C(&v44, v32);
        if ( v66 )
          sub_180010EC8(v66);
        sub_180081920(v44, (__int64)&v47, 0LL);
        v33 = sub_180012C40(&v67, &v44);
        sub_180013540((__int64 *)(v34 + 96), v33);
        v35 = v33[1];
        if ( v35 )
          sub_180010EC8(v35);
      }
      LODWORD(v47) = 0;
      v50 = 0LL;
      *(_QWORD *)v51 = 0LL;
      v49 = 0LL;
      if ( v20 )
      {
        v48 = *(_QWORD *)(a1 + 112);
        sub_1800812CC((__int64)v41, (__int64)&v47);
      }
      else
      {
        v48 = *(_QWORD *)(a1 + 120);
        sub_1800812CC((__int64)v41, (__int64)&v47);
        v36 = v41;
        v37 = sub_180011CC4(&v47, byte_1800F9DE0);
        sub_180080E34(v36, 5, (__int64)v37);
      }
      v38 = *(_QWORD **)(a1 + 136);
      if ( v38 == *(_QWORD **)(a1 + 144) )
      {
        result = (__int64)sub_180054534((__int64 *)(a1 + 128), *(_QWORD *)(a1 + 136), &v41);
      }
      else
      {
        result = (__int64)sub_180013084(v38, &v41);
        *(_QWORD *)(v39 + 8) += 16LL;
      }
      if ( v45 )
        result = sub_180010EC8(v45);
      if ( v42 )
        result = sub_180010EC8((__int64)v42);
      v17 = v43;
    }
    v15 = v14 & ((~v14 | v15) + 1);
    v12 = v57;
  }
  while ( v15 );
  return result;
}
