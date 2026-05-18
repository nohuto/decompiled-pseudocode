/*
 * XREFs of sub_180080354 @ 0x180080354
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180043168 @ 0x180043168 (sub_180043168.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 *     sub_18007F6E8 @ 0x18007F6E8 (sub_18007F6E8.c)
 *     sub_18007F854 @ 0x18007F854 (sub_18007F854.c)
 *     sub_18007FC0C @ 0x18007FC0C (sub_18007FC0C.c)
 *     sub_18007FC80 @ 0x18007FC80 (sub_18007FC80.c)
 *     sub_18007FCF4 @ 0x18007FCF4 (sub_18007FCF4.c)
 *     sub_18007FD68 @ 0x18007FD68 (sub_18007FD68.c)
 *     sub_18007FDDC @ 0x18007FDDC (sub_18007FDDC.c)
 *     sub_18007FFA8 @ 0x18007FFA8 (sub_18007FFA8.c)
 *     sub_180080B64 @ 0x180080B64 (sub_180080B64.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_180083E10 @ 0x180083E10 (sub_180083E10.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 *     sub_180084D48 @ 0x180084D48 (sub_180084D48.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180080354(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v4; // rax
  unsigned int v5; // r15d
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // r9d
  int v11; // ecx
  char v12; // al
  unsigned int v13; // eax
  char v14; // cl
  __int64 *v15; // rax
  __int64 *v16; // r12
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 *v19; // r12
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 *v22; // r12
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 result; // rax
  __int64 *v37; // rax
  char v38; // si
  __int64 v39; // rcx
  __int64 *v40; // rax
  char v41; // di
  __int64 v42; // rcx
  char v43; // di
  __int64 *v44; // rax
  char v45; // bl
  __int64 v46; // rcx
  char v47; // bl
  __int64 *v48; // rax
  char v49; // di
  __int64 v50; // rcx
  char v51; // di
  __int64 v52; // r12
  void (__fastcall *v53)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *); // r15
  __int64 *v54; // r14
  __int64 *v55; // rsi
  __int64 *v56; // rdi
  __int64 *v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+84h] [rbp-7Ch]
  __int64 v71; // [rsp+8Ch] [rbp-74h]
  int v72; // [rsp+94h] [rbp-6Ch]
  char v73; // [rsp+98h] [rbp-68h]
  __int128 v74; // [rsp+9Ch] [rbp-64h]
  __int128 v75; // [rsp+ACh] [rbp-54h]
  int v76; // [rsp+BCh] [rbp-44h]
  char v77; // [rsp+C0h] [rbp-40h]
  int v78; // [rsp+C4h] [rbp-3Ch]
  __int64 v79; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h] BYREF
  __int64 v87; // [rsp+110h] [rbp+10h]
  _QWORD v88[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v89[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v90; // [rsp+148h] [rbp+48h] BYREF
  __int64 v91; // [rsp+158h] [rbp+58h] BYREF
  __int64 v92[11]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v93; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v94; // [rsp+1D8h] [rbp+D8h]
  unsigned int v95; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v96; // [rsp+1E8h] [rbp+E8h]

  v94 = a2;
  v2 = a2;
  v93 = 0;
  sub_180029EF8(*a2 + 24, (__int64)a2);
  v4 = *v2;
  v5 = *(_DWORD *)(*v2 + 244);
  v95 = v5;
  v6 = *(_QWORD *)(v4 + 3984);
  v7 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v8 = sub_180042444(*(_QWORD *)(v4 + 3984), &v63);
    sub_180011F5C((_QWORD *)(a1 + 48), v8);
    if ( v64 )
      sub_180010EC8(v64);
    sub_180029310(*v7, 1, 0);
    v69 = 0;
    v70 = 2LL;
    v71 = v9;
    v72 = v9;
    v73 = 0;
    v74 = 0LL;
    v75 = 0LL;
    v76 = 65793;
    v77 = v10;
    v78 = 3;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(a1 + 124)) != 0 )
    {
      HIDWORD(v70) = *(_DWORD *)(a1 + 112);
      LODWORD(v70) = *(_DWORD *)(a1 + 116);
      LOBYTE(v76) = *(_BYTE *)(a1 + 125);
      v11 = *(_DWORD *)(a1 + 120);
      if ( v11 != v10 )
      {
        v12 = v10;
        if ( v11 != 3 )
          v12 = 0;
        BYTE1(v76) = v12;
      }
      v13 = v11 - 2;
      v14 = v10;
      if ( v13 > v10 )
        v14 = 0;
      BYTE2(v76) = v14;
    }
    sub_180081920(*v7, &v69, v9);
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      LODWORD(v70) = 1;
      v15 = sub_180042444(v6, &v63);
      v16 = (__int64 *)(a1 + 64);
      sub_180011F5C((_QWORD *)(a1 + 64), v15);
      if ( v64 )
        sub_180010EC8(v64);
      sub_180029310(*v16, 1, 0);
      sub_180081920(*v16, &v69, v17);
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
    {
      LODWORD(v70) = 1;
      v77 = 0;
      v18 = sub_180042444(v6, &v63);
      v19 = (__int64 *)(a1 + 80);
      sub_180011F5C((_QWORD *)(a1 + 80), v18);
      if ( v64 )
        sub_180010EC8(v64);
      sub_180029310(*v19, 1, 0);
      sub_180081920(*v19, &v69, v20);
    }
    if ( (*(_BYTE *)(a1 + 124) & 8) != 0 )
    {
      LODWORD(v70) = *(_DWORD *)(a1 + 116);
      v77 = 0;
      v21 = sub_180042444(v6, &v63);
      v22 = (__int64 *)(a1 + 96);
      sub_180011F5C((_QWORD *)(a1 + 96), v21);
      if ( v64 )
        sub_180010EC8(v64);
      sub_180029310(*v22, 1, 0);
      sub_180081920(*v22, &v69, v23);
    }
  }
  if ( !sub_180043168(*v7, v5) )
    sub_1800817A0(*v7, v2);
  v24 = *(_QWORD *)(a1 + 64);
  if ( v24 && !sub_180043168(v24, v5) )
    sub_1800817A0(*(_QWORD *)(a1 + 64), v2);
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 && !sub_180043168(v25, v5) )
    sub_1800817A0(*(_QWORD *)(a1 + 80), v2);
  v26 = *(_QWORD *)(a1 + 96);
  if ( v26 && !sub_180043168(v26, v5) )
    sub_1800817A0(*(_QWORD *)(a1 + 96), v2);
  sub_180080B64(a1, &v84, 1LL);
  v27 = v84;
  if ( v84 && !*(_QWORD *)(a1 + 176) )
  {
    sub_18007F854(v6, &v61);
    v28 = v61;
    v29 = v62;
    v61 = 0LL;
    v62 = 0LL;
    *(_QWORD *)(a1 + 176) = v28;
    v30 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v29;
    if ( v30 )
    {
      sub_180010EC8(v30);
      if ( v62 )
        sub_180010EC8(v62);
    }
    sub_18005DD64(*(_QWORD *)(a1 + 16), &v65);
    v31 = sub_180083E10(v27, v89);
    v32 = sub_18004EA04(v65, v31);
    v33 = *(_QWORD *)(a1 + 176);
    v34 = sub_18007FFA8((__int64)&v69, a1 + 128);
    sub_180084E40(v33, v34, v32);
    if ( v66 )
      sub_180010EC8(v66);
  }
  v35 = *(_QWORD *)(a1 + 176);
  if ( v35 && !(unsigned __int8)sub_180084D48(v35, v5) && v27 )
    sub_180084A60(*(_QWORD *)(a1 + 176), v2);
  v93 = v5;
  result = sub_180042544(a1 + 480, (__int64)&v93);
  if ( result == *(_QWORD *)(a1 + 480) || !*(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)*v2 + 192LL))(*v2, &v93);
    if ( (v93 & 0x20) != 0 )
    {
      v37 = (__int64 *)sub_180080B64(a1, &v67, 5LL);
      v38 = 1;
      v39 = *v37;
    }
    else
    {
      v62 = 0LL;
      v37 = &v61;
      v38 = 2;
      v39 = 0LL;
    }
    v63 = v39;
    v83 = v37[1];
    v64 = v83;
    *v37 = 0LL;
    v37[1] = 0LL;
    if ( (v38 & 2) != 0 )
    {
      v38 &= ~2u;
      if ( v62 )
        sub_180010EC8(v62);
    }
    if ( (v38 & 1) != 0 )
    {
      v38 &= ~1u;
      if ( v68 )
        sub_180010EC8(v68);
    }
    if ( (v93 & 0x10) != 0 )
    {
      v40 = (__int64 *)sub_180080B64(a1, &v79, 4LL);
      v41 = 4;
      v42 = *v40;
    }
    else
    {
      v62 = 0LL;
      v40 = &v61;
      v41 = 8;
      v42 = 0LL;
    }
    v43 = v38 | v41;
    v88[0] = v42;
    v82 = v40[1];
    v88[1] = v82;
    *v40 = 0LL;
    v40[1] = 0LL;
    if ( (v43 & 8) != 0 )
    {
      v43 &= ~8u;
      if ( v62 )
        sub_180010EC8(v62);
    }
    if ( (v43 & 4) != 0 )
    {
      v43 &= ~4u;
      if ( v80 )
        sub_180010EC8(v80);
    }
    if ( (v93 & 8) != 0 )
    {
      v44 = (__int64 *)sub_180080B64(a1, &v67, 3LL);
      v45 = 16;
      v46 = *v44;
    }
    else
    {
      v62 = 0LL;
      v44 = &v61;
      v45 = 32;
      v46 = 0LL;
    }
    v47 = v43 | v45;
    v79 = v46;
    v81 = v44[1];
    v80 = v81;
    *v44 = 0LL;
    v44[1] = 0LL;
    if ( (v47 & 0x20) != 0 )
    {
      v47 &= ~0x20u;
      if ( v62 )
        sub_180010EC8(v62);
    }
    if ( (v47 & 0x10) != 0 )
    {
      v47 &= ~0x10u;
      if ( v68 )
        sub_180010EC8(v68);
    }
    if ( (v93 & 4) != 0 )
    {
      v48 = (__int64 *)sub_180080B64(a1, &v86, 2LL);
      v49 = 64;
      v50 = *v48;
    }
    else
    {
      v62 = 0LL;
      v48 = &v61;
      v49 = 0x80;
      v50 = 0LL;
    }
    v51 = v47 | v49;
    v67 = v50;
    v96 = v48[1];
    v68 = v96;
    *v48 = 0LL;
    v48[1] = 0LL;
    if ( v51 < 0 )
    {
      v51 &= ~0x80u;
      if ( v62 )
        sub_180010EC8(v62);
    }
    if ( (v51 & 0x40) != 0 && v87 )
      sub_180010EC8(v87);
    sub_18007F6E8(*v2, &v65);
    v52 = v65;
    v53 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v65 + 40LL);
    v54 = sub_18007FC80(&v86, v88);
    v55 = sub_18007FC0C(&v90, &v79);
    v56 = sub_18007FCF4(&v91, &v67);
    v57 = sub_18007FD68(v92, &v63);
    v58 = sub_18007FDDC(v89, &v84);
    v53(v52, v58, v57, v56, v55, v54);
    v59 = sub_180051E20((__int64 *)(a1 + 480), (__int64)v89, &v95);
    result = (__int64)sub_180013540((__int64 *)(*(_QWORD *)v59 + 40LL), &v65);
    if ( v66 )
      result = sub_180010EC8(v66);
    if ( v96 )
      result = sub_180010EC8(v96);
    if ( v81 )
      result = sub_180010EC8(v81);
    if ( v82 )
      result = sub_180010EC8(v82);
    if ( v83 )
      result = sub_180010EC8(v83);
    v2 = v94;
  }
  if ( v85 )
    result = sub_180010EC8(v85);
  v60 = v2[1];
  if ( v60 )
    return sub_180010EC8(v60);
  return result;
}
