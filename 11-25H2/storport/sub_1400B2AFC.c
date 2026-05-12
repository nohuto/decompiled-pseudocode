/*
 * XREFs of sub_1400B2AFC @ 0x1400B2AFC
 * Callers:
 *     sub_1400B8E7C @ 0x1400B8E7C (sub_1400B8E7C.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_140038378 @ 0x140038378 (sub_140038378.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400B2AFC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r11d
  int v9; // edx
  __int16 *v10; // rax
  __int16 v11; // cx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+31h] [rbp-CFh] BYREF
  char v31; // [rsp+32h] [rbp-CEh] BYREF
  char v32; // [rsp+33h] [rbp-CDh] BYREF
  char v33; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+3Ch] [rbp-C4h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  char *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  char v58[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v59[16]; // [rsp+100h] [rbp+0h] BYREF
  char v60[16]; // [rsp+110h] [rbp+10h] BYREF
  char v61[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int16 *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  _DWORD *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  _QWORD *v68; // [rsp+160h] [rbp+60h]
  _DWORD v69[2]; // [rsp+168h] [rbp+68h] BYREF
  int *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  int *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  __int64 *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  _DWORD *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int64 v78; // [rsp+1B0h] [rbp+B0h]
  _DWORD v79[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  __int64 v82; // [rsp+1D0h] [rbp+D0h]
  _DWORD v83[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  __int64 v86; // [rsp+1F0h] [rbp+F0h]
  _DWORD v87[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  int *v88; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  int *v90; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  _DWORD *v92; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  __int64 v94; // [rsp+230h] [rbp+130h]
  _DWORD v95[2]; // [rsp+238h] [rbp+138h] BYREF
  char *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  _DWORD *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  _QWORD *v100; // [rsp+260h] [rbp+160h]
  _DWORD v101[2]; // [rsp+268h] [rbp+168h] BYREF
  int *v102; // [rsp+270h] [rbp+170h]
  __int64 v103; // [rsp+278h] [rbp+178h]
  int *v104; // [rsp+280h] [rbp+180h]
  __int64 v105; // [rsp+288h] [rbp+188h]
  int *v106; // [rsp+290h] [rbp+190h]
  __int64 v107; // [rsp+298h] [rbp+198h]
  _DWORD *v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  __int64 v110; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v111[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char *v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]

  ++dword_140168DC0;
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(a1, 0x800000000000LL) )
  {
    v2 = *(_QWORD *)(v1 + 24);
    v47 = 16LL;
    v49 = 16LL;
    v46 = v2 + 5064;
    v48 = v1 + 2104;
    v35 = *(_DWORD *)(v2 + 56);
    v50 = &v35;
    v29 = *(_BYTE *)(v1 + 104);
    v52 = &v29;
    v30 = *(_BYTE *)(v1 + 105);
    v54 = &v30;
    v31 = *(_BYTE *)(v1 + 106);
    v56 = &v31;
    v51 = 4LL;
    v53 = 1LL;
    v55 = 1LL;
    v57 = 1LL;
    sub_140037B0C((__int64)v58, *(const int **)(v2 + 4720));
    sub_140038378((__int64)v59, (_BYTE *)(v3 + 168));
    sub_140038378((__int64)v60, (_BYTE *)(v4 + 177));
    sub_140038378((__int64)v61, (_BYTE *)(v5 + 242));
    v62 = &v43;
    v9 = -1;
    v10 = *(__int16 **)v7;
    v43 = *(_QWORD *)&qword_140168DC8;
    v63 = 8LL;
    v11 = *v10;
    v64 = &v34;
    v34 = v11;
    v12 = *(_QWORD **)(v7 + 8);
    v66 = v69;
    v69[0] = *(unsigned __int16 *)(v7 + 64);
    v65 = 2LL;
    v67 = 2LL;
    v68 = v12;
    v69[1] = v8;
    v13 = v12[1];
    if ( v13 >= 0 || (v13 & 0x4000000000000000LL) == 0 )
      LODWORD(v13) = -1;
    v36 = v13;
    v70 = &v36;
    v71 = 4LL;
    v14 = v12[2];
    if ( v14 >= 0 || (v14 & 0x4000000000000000LL) == 0 )
      LODWORD(v14) = -1;
    v37 = v14;
    v72 = &v37;
    v73 = 4LL;
    v15 = v12[9];
    if ( v15 < 0 && (v15 & 0x4000000000000000LL) != 0 )
      v16 = (unsigned __int16)v15;
    else
      v16 = -1LL;
    v44 = v16;
    v17 = *(_QWORD *)(v7 + 32);
    v74 = &v44;
    v76 = v79;
    v78 = *(_QWORD *)(v7 + 16);
    v79[0] = *(unsigned __int16 *)(v7 + 66);
    v80 = v83;
    v82 = *(_QWORD *)(v7 + 24);
    v83[0] = *(unsigned __int16 *)(v7 + 68);
    v84 = v87;
    v87[0] = *(unsigned __int16 *)(v7 + 70);
    v75 = 8LL;
    v77 = 2LL;
    v79[1] = v8;
    v81 = 2LL;
    v83[1] = v8;
    v85 = 2LL;
    v86 = v17;
    v87[1] = v8;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 >= 0 || (v18 & 0x4000000000000000LL) == 0 )
      LODWORD(v18) = -1;
    v38 = v18;
    v88 = &v38;
    v89 = 4LL;
    v19 = *(_QWORD *)(v17 + 16);
    if ( v19 >= 0 || (v19 & 0x4000000000000000LL) == 0 )
      LODWORD(v19) = -1;
    v20 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = -1;
    v39 = v19;
    v90 = &v39;
    v92 = v95;
    v95[0] = *(unsigned __int16 *)(v7 + 72);
    v91 = 4LL;
    v93 = 2LL;
    v94 = v20;
    v95[1] = v8;
    v21 = *(_QWORD *)(v20 + 8);
    if ( v21 >= 0 || (v21 & 0x4000000000000000LL) == 0 )
      LOBYTE(v21) = -1;
    v22 = *(_QWORD **)(v7 + 48);
    v32 = v21;
    v96 = &v32;
    v98 = v101;
    v101[0] = *(unsigned __int16 *)(v7 + 74);
    v97 = 1LL;
    v99 = 2LL;
    v100 = v22;
    v101[1] = v8;
    v23 = v22[1];
    if ( v23 < 0 && (v23 & 0x4000000000000000LL) != 0 )
      v24 = (unsigned __int8)v23;
    else
      v24 = -1;
    v40 = v24;
    v102 = &v40;
    v103 = 4LL;
    v25 = v22[2];
    if ( v25 >= 0 || (v25 & 0x4000000000000000LL) == 0 )
      LODWORD(v25) = -1;
    v41 = v25;
    v104 = &v41;
    v105 = 4LL;
    v26 = v22[3];
    if ( v26 < 0 && (v26 & 0x4000000000000000LL) != 0 )
      v9 = v22[3];
    v27 = *(_QWORD *)(v7 + 56);
    v106 = &v42;
    v108 = v111;
    v111[0] = *(unsigned __int16 *)(v7 + 76);
    v42 = v9;
    v107 = 4LL;
    v109 = 2LL;
    v110 = v27;
    v111[1] = v8;
    v28 = *(_QWORD *)(v27 + 8);
    if ( v28 < 0 && (v28 & 0x4000000000000000LL) != 0 )
      LOBYTE(v6) = *(_QWORD *)(v27 + 8);
    v33 = v6;
    v112 = &v33;
    v113 = 1LL;
    sub_140037A5C(v27, (unsigned __int8 *)dword_14015A910, v6, v7, 0x26u, &v45);
  }
}
