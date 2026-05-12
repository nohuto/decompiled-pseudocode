/*
 * XREFs of sub_1400B7798 @ 0x1400B7798
 * Callers:
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400AA17C @ 0x1400AA17C (sub_1400AA17C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_1400B7798(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // r15
  __int64 v4; // rcx
  __int16 v5; // si
  __int16 v6; // r14
  __int128 *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int32 v10; // r12d
  __int32 v11; // r13d
  unsigned __int32 v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rax
  __int16 v24; // [rsp+E8h] [rbp-80h] BYREF
  __int16 v25; // [rsp+ECh] [rbp-7Ch] BYREF
  __int32 v26; // [rsp+F0h] [rbp-78h]
  __int32 v27; // [rsp+F4h] [rbp-74h]
  __int32 v28; // [rsp+F8h] [rbp-70h]
  __int32 v29; // [rsp+FCh] [rbp-6Ch]
  __int32 v30; // [rsp+100h] [rbp-68h]
  int v31; // [rsp+104h] [rbp-64h] BYREF
  int v32; // [rsp+108h] [rbp-60h] BYREF
  int v33; // [rsp+10Ch] [rbp-5Ch] BYREF
  int v34; // [rsp+110h] [rbp-58h] BYREF
  int v35; // [rsp+114h] [rbp-54h] BYREF
  int v36; // [rsp+118h] [rbp-50h] BYREF
  int v37; // [rsp+11Ch] [rbp-4Ch] BYREF
  __int32 v38; // [rsp+120h] [rbp-48h] BYREF
  __int32 v39; // [rsp+124h] [rbp-44h] BYREF
  unsigned __int32 v40; // [rsp+128h] [rbp-40h] BYREF
  __int32 v41; // [rsp+12Ch] [rbp-3Ch] BYREF
  __int32 v42; // [rsp+130h] [rbp-38h] BYREF
  __int32 v43; // [rsp+134h] [rbp-34h] BYREF
  __int32 v44; // [rsp+138h] [rbp-30h] BYREF
  __int32 v45; // [rsp+13Ch] [rbp-2Ch] BYREF
  __int64 v46; // [rsp+140h] [rbp-28h]
  __int64 v47; // [rsp+148h] [rbp-20h]
  __int64 v48; // [rsp+150h] [rbp-18h] BYREF
  unsigned __int64 v49; // [rsp+158h] [rbp-10h] BYREF
  __int64 v50; // [rsp+160h] [rbp-8h] BYREF
  __int64 v51; // [rsp+168h] [rbp+0h] BYREF
  __int128 v52; // [rsp+170h] [rbp+8h] BYREF
  __int128 v53; // [rsp+180h] [rbp+18h] BYREF
  __int128 v54; // [rsp+190h] [rbp+28h] BYREF
  __int128 v55; // [rsp+1A0h] [rbp+38h]
  __int128 v56; // [rsp+1B0h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1C8h] [rbp+60h] BYREF
  __int64 *v58; // [rsp+1E8h] [rbp+80h]
  __int64 v59; // [rsp+1F0h] [rbp+88h]
  __int128 *v60; // [rsp+1F8h] [rbp+90h]
  __int64 v61; // [rsp+200h] [rbp+98h]
  int *v62; // [rsp+208h] [rbp+A0h]
  __int64 v63; // [rsp+210h] [rbp+A8h]
  char v64[16]; // [rsp+218h] [rbp+B0h] BYREF
  __int16 *v65; // [rsp+228h] [rbp+C0h]
  __int64 v66; // [rsp+230h] [rbp+C8h]
  __int16 *v67; // [rsp+238h] [rbp+D0h]
  __int64 v68; // [rsp+240h] [rbp+D8h]
  __int128 *v69; // [rsp+248h] [rbp+E0h]
  int v70; // [rsp+250h] [rbp+E8h]
  int v71; // [rsp+254h] [rbp+ECh]
  int *v72; // [rsp+258h] [rbp+F0h]
  int v73; // [rsp+260h] [rbp+F8h]
  int v74; // [rsp+264h] [rbp+FCh]
  __int64 *v75; // [rsp+268h] [rbp+100h]
  int v76; // [rsp+270h] [rbp+108h]
  int v77; // [rsp+274h] [rbp+10Ch]
  int *v78; // [rsp+278h] [rbp+110h]
  __int64 v79; // [rsp+280h] [rbp+118h]
  int *v80; // [rsp+288h] [rbp+120h]
  __int64 v81; // [rsp+290h] [rbp+128h]
  int *v82; // [rsp+298h] [rbp+130h]
  __int64 v83; // [rsp+2A0h] [rbp+138h]
  int *v84; // [rsp+2A8h] [rbp+140h]
  __int64 v85; // [rsp+2B0h] [rbp+148h]
  int *v86; // [rsp+2B8h] [rbp+150h]
  __int64 v87; // [rsp+2C0h] [rbp+158h]
  int *v88; // [rsp+2C8h] [rbp+160h]
  __int64 v89; // [rsp+2D0h] [rbp+168h]
  __int32 *v90; // [rsp+2D8h] [rbp+170h]
  __int64 v91; // [rsp+2E0h] [rbp+178h]
  __int32 *v92; // [rsp+2E8h] [rbp+180h]
  __int64 v93; // [rsp+2F0h] [rbp+188h]
  unsigned __int32 *v94; // [rsp+2F8h] [rbp+190h]
  __int64 v95; // [rsp+300h] [rbp+198h]
  unsigned __int64 *v96; // [rsp+308h] [rbp+1A0h]
  __int64 v97; // [rsp+310h] [rbp+1A8h]
  __int64 *v98; // [rsp+318h] [rbp+1B0h]
  __int64 v99; // [rsp+320h] [rbp+1B8h]
  __int64 *v100; // [rsp+328h] [rbp+1C0h]
  __int64 v101; // [rsp+330h] [rbp+1C8h]
  __int32 *v102; // [rsp+338h] [rbp+1D0h]
  __int64 v103; // [rsp+340h] [rbp+1D8h]
  __int32 *v104; // [rsp+348h] [rbp+1E0h]
  __int64 v105; // [rsp+350h] [rbp+1E8h]
  __int32 *v106; // [rsp+358h] [rbp+1F0h]
  __int64 v107; // [rsp+360h] [rbp+1F8h]
  __int32 *v108; // [rsp+368h] [rbp+200h]
  __int64 v109; // [rsp+370h] [rbp+208h]
  __int32 *v110; // [rsp+378h] [rbp+210h]
  __int64 v111; // [rsp+380h] [rbp+218h]
  __int64 v112; // [rsp+388h] [rbp+220h] BYREF
  char v113; // [rsp+390h] [rbp+228h]
  __int128 v114; // [rsp+398h] [rbp+230h] BYREF
  int v115; // [rsp+3A8h] [rbp+240h]
  char v116; // [rsp+3ACh] [rbp+244h]
  int v117[4]; // [rsp+3B0h] [rbp+248h] BYREF
  __int128 v118; // [rsp+3C0h] [rbp+258h]
  __int64 v119; // [rsp+3D0h] [rbp+268h]
  char v120; // [rsp+3D8h] [rbp+270h]

  LOBYTE(v1) = 0;
  v2 = 0LL;
  v115 = 0;
  v116 = 0;
  v4 = *(_QWORD *)(a1 + 6224);
  v119 = 0LL;
  v5 = 0;
  v120 = 0;
  v6 = 0;
  v112 = 0LL;
  v113 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v114 = 0LL;
  *(_OWORD *)v117 = 0LL;
  v118 = 0LL;
  if ( v4 )
  {
    v7 = &v54;
    v8 = 0LL;
    v9 = 6LL;
    do
    {
      v8 += 8LL;
      *(_QWORD *)v7 = _InterlockedExchange64((volatile __int64 *)(v4 + v8 + 168), 0LL);
      v7 = (__int128 *)((char *)v7 + 8);
      --v9;
    }
    while ( v9 );
    v10 = _InterlockedExchange((volatile __int32 *)(v4 + 224), 0);
    v11 = _InterlockedExchange((volatile __int32 *)(v4 + 228), 0);
    v12 = _InterlockedExchange((volatile __int32 *)(v4 + 232), 0);
    v13 = _InterlockedExchange64((volatile __int64 *)(v4 + 240), 0LL);
    v30 = _InterlockedExchange((volatile __int32 *)(v4 + 264), 0);
    v29 = _InterlockedExchange((volatile __int32 *)(v4 + 268), 0);
    v28 = _InterlockedExchange((volatile __int32 *)(v4 + 272), 0);
    v27 = _InterlockedExchange((volatile __int32 *)(v4 + 276), 0);
    v26 = _InterlockedExchange((volatile __int32 *)(v4 + 280), 0);
    v47 = _InterlockedExchange64((volatile __int64 *)(v4 + 248), 0LL);
    v46 = _InterlockedExchange64((volatile __int64 *)(v4 + 256), -1LL);
    if ( v12 )
      v2 = v13 / v12;
    v14 = *(_QWORD *)(a1 + 16);
    v53 = *(_OWORD *)(a1 + 5064);
    LOBYTE(v1) = sub_1400403EC(v14, (__int64)&v52);
    v15 = *(_QWORD *)(a1 + 6000);
    if ( v15 )
    {
      *(_OWORD *)v117 = *(_OWORD *)(v15 + 24);
      v118 = *(_OWORD *)(v15 + 40);
      v119 = *(_QWORD *)(v15 + 56);
      v112 = *(_QWORD *)(v15 + 64);
      v114 = *(_OWORD *)(v15 + 4);
      v1 = *(_DWORD *)(v15 + 20);
      v115 = v1;
      v5 = *(_WORD *)v15;
      v6 = *(_WORD *)(v15 + 2);
    }
    v16 = 0xD6BF94D5E57A42BDuLL;
    if ( (unsigned int)dword_140168178 > 5 )
    {
      LOBYTE(v1) = sub_14003F840(v15, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v58 = &v48;
        v48 = 0x1000000LL;
        v60 = &v53;
        v31 = *(_DWORD *)(a1 + 56);
        v62 = &v31;
        v59 = 8LL;
        v61 = 16LL;
        v63 = 4LL;
        sub_140037B0C((__int64)v64, *((const int **)&v52 + 1));
        v24 = v5;
        v65 = &v24;
        v66 = 2LL;
        v67 = &v25;
        v21 = v20;
        v25 = v6;
        v68 = 2LL;
        do
          ++v21;
        while ( *((_BYTE *)&v114 + v21) != (_BYTE)v18 );
        v71 = v18;
        v70 = v21 + 1;
        v69 = &v114;
        v22 = v20;
        do
          ++v22;
        while ( *((_BYTE *)v117 + v22) != (_BYTE)v18 );
        v74 = v18;
        v73 = v22 + 1;
        v72 = v117;
        do
          ++v20;
        while ( *((_BYTE *)&v112 + v20) != (_BYTE)v18 );
        v77 = v18;
        v75 = &v112;
        v76 = v20 + 1;
        v79 = 4LL;
        v78 = &v32;
        v32 = (unsigned __int64)(((unsigned __int64)v54 * (unsigned __int128)v19) >> 64) >> 23;
        v81 = 4LL;
        v80 = &v33;
        v33 = (unsigned __int64)((*((unsigned __int64 *)&v54 + 1) * (unsigned __int128)v19) >> 64) >> 23;
        v83 = 4LL;
        v82 = &v34;
        v34 = (unsigned __int64)(((unsigned __int64)v55 * (unsigned __int128)v19) >> 64) >> 23;
        v85 = 4LL;
        v84 = &v35;
        v35 = (unsigned __int64)((*((unsigned __int64 *)&v55 + 1) * (unsigned __int128)v19) >> 64) >> 23;
        v87 = 4LL;
        v86 = &v36;
        v36 = (unsigned __int64)(((unsigned __int64)v56 * (unsigned __int128)v19) >> 64) >> 23;
        v89 = 4LL;
        v88 = &v37;
        v90 = &v38;
        v92 = &v39;
        v94 = &v40;
        v96 = &v49;
        v50 = v47;
        v98 = &v50;
        v51 = v46;
        v100 = &v51;
        v41 = v30;
        v102 = &v41;
        v42 = v29;
        v37 = (unsigned __int64)((*((unsigned __int64 *)&v56 + 1) * (unsigned __int128)v19) >> 64) >> 23;
        v38 = v10;
        v91 = 4LL;
        v39 = v11;
        v93 = 4LL;
        v40 = v12;
        v95 = 4LL;
        v49 = v2;
        v97 = 8LL;
        v99 = 8LL;
        v101 = 8LL;
        v103 = 4LL;
        v104 = &v42;
        v43 = v28;
        v106 = &v43;
        v44 = v27;
        v108 = &v44;
        v45 = v26;
        v110 = &v45;
        v105 = 4LL;
        v107 = 4LL;
        v109 = 4LL;
        v111 = 4LL;
        LOBYTE(v1) = sub_140037A5C((__int64)v117, (unsigned __int8 *)dword_140159488, v17, v18, 0x1Cu, &v57);
        v16 = 0xD6BF94D5E57A42BDuLL;
      }
    }
    if ( (byte_1401694F8 & 4) != 0 )
      LOBYTE(v1) = sub_1400AA17C(
                     *((_QWORD *)&v54 + 1) / 0x989680uLL,
                     (unsigned __int64)v54 / 0x989680,
                     (unsigned __int64)v55 / 0x989680,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v53,
                     *((const wchar_t **)&v52 + 1),
                     (const char *)&v114,
                     v5,
                     v6,
                     (const char *)v117,
                     (const char *)&v112,
                     (unsigned __int64)v54 / 0x989680,
                     *((_QWORD *)&v54 + 1) / 0x989680uLL,
                     (unsigned __int64)v55 / 0x989680,
                     *((_QWORD *)&v55 + 1) / 0x989680uLL,
                     (unsigned __int64)(((unsigned __int64)v56 * (unsigned __int128)v16) >> 64) >> 23,
                     (unsigned __int64)((*((unsigned __int64 *)&v56 + 1) * (unsigned __int128)v16) >> 64) >> 23,
                     v10,
                     v11,
                     v12,
                     v2,
                     v47,
                     v46,
                     v30,
                     v29,
                     v28,
                     v27,
                     v26);
  }
  return v1;
}
