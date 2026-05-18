/*
 * XREFs of sub_180045760 @ 0x180045760
 * Callers:
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007D08C @ 0x18007D08C (sub_18007D08C.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_180045760(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // ax
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // r9
  __int64 result; // rax
  __int64 v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+28h] [rbp-D8h]
  __m128i si128; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v56[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v57[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v58[5]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v59[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v60[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v61[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v62[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v63[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v64[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v65[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v66[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v67[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v68[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v69[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v70[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v71[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v72[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v73[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v74[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v75[64]; // [rsp+4B0h] [rbp+3B0h] BYREF

  v57[4] = a2;
  sub_18004DE2C(a1, &v53, 7LL);
  v3 = sub_1800181BC(v57, (__int64)&unk_1801CCAB8);
  sub_180043A88((__int64)v64, (__int64)v3);
  v4 = sub_1800181BC(v56, (__int64)&unk_1801CCAD8);
  sub_180043A88((__int64)v65, (__int64)v4);
  v5 = sub_1800181BC(v57, (__int64)&unk_1801CCAF8);
  sub_180043A88((__int64)v66, (__int64)v5);
  v6 = sub_1800181BC(v56, (__int64)&unk_1801CCB18);
  sub_180043A88((__int64)v67, (__int64)v6);
  v7 = sub_1800181BC(v57, (__int64)&unk_1801CCB38);
  sub_180043A88((__int64)v68, (__int64)v7);
  v8 = sub_1800181BC(v56, (__int64)&unk_1801CCB58);
  sub_180043A88((__int64)v69, (__int64)v8);
  v9 = sub_1800181BC(v57, (__int64)&unk_1801CCB78);
  sub_180043A88((__int64)v70, (__int64)v9);
  v10 = sub_1800181BC(v56, (__int64)&unk_1801CCB98);
  sub_180043A88((__int64)v71, (__int64)v10);
  v11 = sub_1800181BC(v57, (__int64)&unk_1801CCBB8);
  sub_180043A88((__int64)v72, (__int64)v11);
  v12 = sub_1800181BC(v56, (__int64)&unk_1801CCBD8);
  sub_180043A88((__int64)v73, (__int64)v12);
  v13 = sub_1800181BC(v57, (__int64)&unk_1801CCBF8);
  sub_180043A88((__int64)v74, (__int64)v13);
  v14 = sub_1800181BC(v56, (__int64)&unk_1801CCC58);
  sub_180043A88((__int64)v75, (__int64)v14);
  sub_18007BDCC(v53, v64, 12LL, 0LL);
  v15 = v53;
  v16 = sub_1800181BC(v56, (__int64)&unk_1801CCCB8);
  sub_180043A88((__int64)v59, (__int64)v16);
  sub_18007BE98(v15, v59, 1LL);
  sub_180043DE0((__int64)v59);
  v17 = v53;
  v18 = sub_1800181BC(v56, (__int64)&unk_1801CCC98);
  sub_180043A88((__int64)v59, (__int64)v18);
  sub_18007BE98(v17, v59, 1LL);
  sub_180043DE0((__int64)v59);
  v19 = v53;
  v20 = sub_1800181BC(v56, (__int64)&unk_1801CCC78);
  sub_180043A88((__int64)v59, (__int64)v20);
  sub_18007BE98(v19, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v21 = v53;
  v22 = sub_1800181BC(v56, (__int64)&unk_1801CCCD8);
  sub_180043A88((__int64)v59, (__int64)v22);
  sub_18007BE98(v21, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v23 = v53;
  v24 = sub_1800181BC(v56, (__int64)&unk_1801CCCF8);
  sub_180043A88((__int64)v59, (__int64)v24);
  sub_18007BE98(v23, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v25 = v53;
  v26 = sub_1800181BC(v56, (__int64)&unk_1801CCD18);
  sub_180043A88((__int64)v59, (__int64)v26);
  sub_18007BE98(v25, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v27 = v53;
  v28 = sub_1800181BC(v56, (__int64)&unk_1801CCC18);
  sub_180043A88((__int64)v59, (__int64)v28);
  sub_18007BE98(v27, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v29 = v53;
  v30 = sub_1800181BC(v56, (__int64)&unk_1801CCC38);
  sub_180043A88((__int64)v59, (__int64)v30);
  sub_18007BE98(v29, v59, 0LL);
  sub_180043DE0((__int64)v59);
  v31 = sub_18007C6B8(v53, &unk_1801CCC78);
  *(_DWORD *)sub_18007B8E4(v53, v31) = 0;
  v32 = sub_18007C6B8(v53, &unk_1801CCC98);
  *(_DWORD *)sub_18007B8E4(v53, v32) = 0;
  v33 = sub_18007C6B8(v53, &unk_1801CCCB8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191720);
  sub_18007D08C(v53, v33, &si128);
  v34 = sub_18007C6B8(v53, &unk_1801CCCD8);
  *(_DWORD *)sub_18007B8E4(v53, v34) = 0;
  v35 = sub_18007C6B8(v53, &unk_1801CCCF8);
  *(_DWORD *)sub_18007B8E4(v53, v35) = 0;
  v36 = sub_18007C6B8(v53, &unk_1801CCC38);
  *(_DWORD *)sub_18007B8E4(v53, v36) = 0;
  v37 = v53;
  v38 = sub_1800181BC(v56, (__int64)&unk_1801CCD58);
  sub_180043A88((__int64)v60, (__int64)v38);
  v39 = (unsigned __int16)sub_18007BE98(v37, v60, 0LL);
  sub_180043DE0((__int64)v60);
  v40 = v53;
  v41 = sub_1800181BC(v57, (__int64)&unk_1801CCD78);
  sub_180043A88((__int64)v61, (__int64)v41);
  v42 = (unsigned __int16)sub_18007BE98(v40, v61, 0LL);
  sub_180043DE0((__int64)v61);
  v43 = v53;
  v44 = sub_1800181BC(v58, (__int64)&unk_1801CCD98);
  sub_180043A88((__int64)v62, (__int64)v44);
  v45 = (unsigned __int16)sub_18007BE98(v43, v62, 0LL);
  sub_180043DE0((__int64)v62);
  v46 = v53;
  v47 = sub_1800181BC(v59, (__int64)&unk_1801CCD38);
  sub_180043A88((__int64)v63, (__int64)v47);
  v48 = (unsigned __int16)sub_18007BE98(v46, v63, 0LL);
  sub_180043DE0((__int64)v63);
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v53 + 2 * v39 + 128) + *(_QWORD *)(v53 + 56) + 40)
            + 32) = 0;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v53 + 2 * v42 + 128) + *(_QWORD *)(v53 + 56) + 40)
            + 32) = 2;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v53 + 2 * v45 + 128) + *(_QWORD *)(v53 + 56) + 40)
            + 32) = 13;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v53 + 2 * v48 + 128) + *(_QWORD *)(v53 + 56) + 40)
            + 32) = 12;
  sub_18007C50C(v53);
  v49 = sub_180012C40(&si128, &v53);
  sub_18005E244(v50, v49);
  result = sub_18000BFA4((__int64)v64, 64LL, 12LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v54 )
    result = sub_180010EC8(v54);
  v52 = *(_QWORD *)(a2 + 8);
  if ( v52 )
    return sub_180010EC8(v52);
  return result;
}
