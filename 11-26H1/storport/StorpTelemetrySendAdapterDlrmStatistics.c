/*
 * XREFs of StorpTelemetrySendAdapterDlrmStatistics @ 0x1400BFFBC
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzshhssqqqqqqqqqxxxqqqqqqx_EtwWriteTransfer @ 0x1400B2898 (McTemplateK0qjzshhssqqqqqqqqqxxxqqqqqqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetrySendAdapterDlrmStatistics(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // r12
  __int64 v4; // rcx
  __int16 v5; // r14
  __int16 v6; // r15
  __int128 *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rbx
  __int32 v11; // r13d
  unsigned __int32 v12; // esi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int16 *v16; // r11
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int16 v25; // [rsp+F8h] [rbp-80h] BYREF
  __int16 v26; // [rsp+FCh] [rbp-7Ch] BYREF
  __int32 v27; // [rsp+100h] [rbp-78h]
  __int32 v28; // [rsp+104h] [rbp-74h]
  __int32 v29; // [rsp+108h] [rbp-70h]
  __int32 v30; // [rsp+10Ch] [rbp-6Ch]
  __int32 v31; // [rsp+110h] [rbp-68h]
  __int32 v32; // [rsp+114h] [rbp-64h]
  __int32 v33; // [rsp+118h] [rbp-60h]
  int v34; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v35; // [rsp+120h] [rbp-58h] BYREF
  int v36; // [rsp+124h] [rbp-54h] BYREF
  int v37; // [rsp+128h] [rbp-50h] BYREF
  int v38; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v39; // [rsp+130h] [rbp-48h] BYREF
  int v40; // [rsp+134h] [rbp-44h] BYREF
  __int32 v41; // [rsp+138h] [rbp-40h] BYREF
  __int32 v42; // [rsp+13Ch] [rbp-3Ch] BYREF
  unsigned __int32 v43; // [rsp+140h] [rbp-38h] BYREF
  __int32 v44; // [rsp+144h] [rbp-34h] BYREF
  __int32 v45; // [rsp+148h] [rbp-30h] BYREF
  __int32 v46; // [rsp+14Ch] [rbp-2Ch] BYREF
  __int32 v47; // [rsp+150h] [rbp-28h] BYREF
  __int32 v48; // [rsp+154h] [rbp-24h] BYREF
  __int32 v49; // [rsp+158h] [rbp-20h] BYREF
  __int64 v50; // [rsp+160h] [rbp-18h]
  __int64 v51; // [rsp+168h] [rbp-10h]
  __int64 v52; // [rsp+170h] [rbp-8h]
  __int128 v53; // [rsp+178h] [rbp+0h] BYREF
  __int128 v54; // [rsp+188h] [rbp+10h]
  __int128 v55; // [rsp+198h] [rbp+20h]
  __int64 v56; // [rsp+1A8h] [rbp+30h] BYREF
  unsigned __int64 v57; // [rsp+1B0h] [rbp+38h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+40h] BYREF
  __int64 v59; // [rsp+1C0h] [rbp+48h] BYREF
  __int64 v60; // [rsp+1C8h] [rbp+50h] BYREF
  __int128 v61; // [rsp+1D0h] [rbp+58h] BYREF
  __int128 v62; // [rsp+1E0h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1F8h] [rbp+80h] BYREF
  __int64 *v64; // [rsp+218h] [rbp+A0h]
  __int64 v65; // [rsp+220h] [rbp+A8h]
  __int128 *v66; // [rsp+228h] [rbp+B0h]
  __int64 v67; // [rsp+230h] [rbp+B8h]
  int *v68; // [rsp+238h] [rbp+C0h]
  __int64 v69; // [rsp+240h] [rbp+C8h]
  char v70[16]; // [rsp+248h] [rbp+D0h] BYREF
  __int16 *v71; // [rsp+258h] [rbp+E0h]
  __int64 v72; // [rsp+260h] [rbp+E8h]
  __int16 *v73; // [rsp+268h] [rbp+F0h]
  __int64 v74; // [rsp+270h] [rbp+F8h]
  __int128 *v75; // [rsp+278h] [rbp+100h]
  int v76; // [rsp+280h] [rbp+108h]
  int v77; // [rsp+284h] [rbp+10Ch]
  int *v78; // [rsp+288h] [rbp+110h]
  int v79; // [rsp+290h] [rbp+118h]
  int v80; // [rsp+294h] [rbp+11Ch]
  __int64 *v81; // [rsp+298h] [rbp+120h]
  int v82; // [rsp+2A0h] [rbp+128h]
  int v83; // [rsp+2A4h] [rbp+12Ch]
  int *v84; // [rsp+2A8h] [rbp+130h]
  __int64 v85; // [rsp+2B0h] [rbp+138h]
  int *v86; // [rsp+2B8h] [rbp+140h]
  __int64 v87; // [rsp+2C0h] [rbp+148h]
  int *v88; // [rsp+2C8h] [rbp+150h]
  __int64 v89; // [rsp+2D0h] [rbp+158h]
  int *v90; // [rsp+2D8h] [rbp+160h]
  __int64 v91; // [rsp+2E0h] [rbp+168h]
  int *v92; // [rsp+2E8h] [rbp+170h]
  __int64 v93; // [rsp+2F0h] [rbp+178h]
  int *v94; // [rsp+2F8h] [rbp+180h]
  __int64 v95; // [rsp+300h] [rbp+188h]
  __int32 *v96; // [rsp+308h] [rbp+190h]
  __int64 v97; // [rsp+310h] [rbp+198h]
  __int32 *v98; // [rsp+318h] [rbp+1A0h]
  __int64 v99; // [rsp+320h] [rbp+1A8h]
  unsigned __int32 *v100; // [rsp+328h] [rbp+1B0h]
  __int64 v101; // [rsp+330h] [rbp+1B8h]
  unsigned __int64 *v102; // [rsp+338h] [rbp+1C0h]
  __int64 v103; // [rsp+340h] [rbp+1C8h]
  __int64 *v104; // [rsp+348h] [rbp+1D0h]
  __int64 v105; // [rsp+350h] [rbp+1D8h]
  __int64 *v106; // [rsp+358h] [rbp+1E0h]
  __int64 v107; // [rsp+360h] [rbp+1E8h]
  __int32 *v108; // [rsp+368h] [rbp+1F0h]
  __int64 v109; // [rsp+370h] [rbp+1F8h]
  __int32 *v110; // [rsp+378h] [rbp+200h]
  __int64 v111; // [rsp+380h] [rbp+208h]
  __int32 *v112; // [rsp+388h] [rbp+210h]
  __int64 v113; // [rsp+390h] [rbp+218h]
  __int32 *v114; // [rsp+398h] [rbp+220h]
  __int64 v115; // [rsp+3A0h] [rbp+228h]
  __int32 *v116; // [rsp+3A8h] [rbp+230h]
  __int64 v117; // [rsp+3B0h] [rbp+238h]
  __int32 *v118; // [rsp+3B8h] [rbp+240h]
  __int64 v119; // [rsp+3C0h] [rbp+248h]
  __int64 *v120; // [rsp+3C8h] [rbp+250h]
  __int64 v121; // [rsp+3D0h] [rbp+258h]
  __int64 v122; // [rsp+3D8h] [rbp+260h] BYREF
  char v123; // [rsp+3E0h] [rbp+268h]
  __int128 v124; // [rsp+3E8h] [rbp+270h] BYREF
  int v125; // [rsp+3F8h] [rbp+280h]
  char v126; // [rsp+3FCh] [rbp+284h]
  int v127[4]; // [rsp+400h] [rbp+288h] BYREF
  __int128 v128; // [rsp+410h] [rbp+298h]
  __int64 v129; // [rsp+420h] [rbp+2A8h]
  char v130; // [rsp+428h] [rbp+2B0h]

  LOBYTE(v1) = 0;
  v2 = 0LL;
  v125 = 0;
  v126 = 0;
  v4 = *(_QWORD *)(a1 + 6288);
  v129 = 0LL;
  v5 = 0;
  v130 = 0;
  v6 = 0;
  v122 = 0LL;
  v123 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  v124 = 0LL;
  *(_OWORD *)v127 = 0LL;
  v128 = 0LL;
  if ( v4 )
  {
    v7 = &v53;
    v8 = v4;
    v9 = 6LL;
    do
    {
      v8 += 8LL;
      *(_QWORD *)v7 = _InterlockedExchange64((volatile __int64 *)(v8 + 168), 0LL);
      v7 = (__int128 *)((char *)v7 + 8);
      --v9;
    }
    while ( v9 );
    v10 = -1LL;
    v11 = _InterlockedExchange((volatile __int32 *)(v4 + 224), 0);
    v33 = _InterlockedExchange((volatile __int32 *)(v4 + 228), 0);
    v12 = _InterlockedExchange((volatile __int32 *)(v4 + 232), 0);
    v13 = _InterlockedExchange64((volatile __int64 *)(v4 + 240), 0LL);
    v32 = _InterlockedExchange((volatile __int32 *)(v4 + 264), 0);
    v31 = _InterlockedExchange((volatile __int32 *)(v4 + 268), 0);
    v30 = _InterlockedExchange((volatile __int32 *)(v4 + 272), 0);
    v29 = _InterlockedExchange((volatile __int32 *)(v4 + 276), 0);
    v28 = _InterlockedExchange((volatile __int32 *)(v4 + 280), 0);
    v52 = _InterlockedExchange64((volatile __int64 *)(v4 + 248), 0LL);
    v51 = _InterlockedExchange64((volatile __int64 *)(v4 + 256), -1LL);
    v27 = _InterlockedExchange((volatile __int32 *)(v4 + 284), 0);
    v50 = _InterlockedExchange64((volatile __int64 *)(v4 + 296), 0LL);
    if ( v12 )
      v2 = v13 / v12;
    v14 = *(_QWORD *)(a1 + 16);
    v62 = *(_OWORD *)(a1 + 5128);
    LOBYTE(v1) = RaidDriverGetName(v14, (__int64)&v61);
    v16 = *(__int16 **)(a1 + 6064);
    if ( v16 )
    {
      *(_OWORD *)v127 = *(_OWORD *)(v16 + 12);
      v128 = *(_OWORD *)(v16 + 20);
      v129 = *((_QWORD *)v16 + 7);
      v122 = *((_QWORD *)v16 + 8);
      v124 = *(_OWORD *)(v16 + 2);
      v1 = *((_DWORD *)v16 + 5);
      v125 = v1;
      v5 = *v16;
      v6 = v16[1];
    }
    v17 = 0xD6BF94D5E57A42BDuLL;
    if ( (unsigned int)dword_140172178 > 5 && (LOBYTE(v1) = tlgKeywordOn(v15, 0x400000000000LL), (_BYTE)v1) )
    {
      v64 = &v56;
      v56 = 0x1000000LL;
      v66 = &v62;
      v34 = *(_DWORD *)(a1 + 56);
      v68 = &v34;
      v65 = 8LL;
      v67 = 16LL;
      v69 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v70, *((const wchar_t **)&v61 + 1));
      v25 = v5;
      v71 = &v25;
      v72 = 2LL;
      v73 = &v26;
      v21 = -1LL;
      v26 = v6;
      v74 = 2LL;
      do
        ++v21;
      while ( *((_BYTE *)&v124 + v21) != (_BYTE)v19 );
      v77 = v19;
      v75 = &v124;
      v76 = v21 + 1;
      v22 = -1LL;
      do
        ++v22;
      while ( *((_BYTE *)v127 + v22) != (_BYTE)v19 );
      v80 = v19;
      v79 = v22 + 1;
      v78 = v127;
      do
        ++v10;
      while ( *((_BYTE *)&v122 + v10) != (_BYTE)v19 );
      v83 = v19;
      v81 = &v122;
      v82 = v10 + 1;
      v85 = 4LL;
      v84 = &v35;
      v35 = (unsigned __int64)(((unsigned __int64)v53 * (unsigned __int128)v20) >> 64) >> 23;
      v87 = 4LL;
      v86 = &v36;
      v36 = (unsigned __int64)((*((unsigned __int64 *)&v53 + 1) * (unsigned __int128)v20) >> 64) >> 23;
      v89 = 4LL;
      v88 = &v37;
      v37 = (unsigned __int64)(((unsigned __int64)v54 * (unsigned __int128)v20) >> 64) >> 23;
      v91 = 4LL;
      v90 = &v38;
      v38 = (unsigned __int64)((*((unsigned __int64 *)&v54 + 1) * (unsigned __int128)v20) >> 64) >> 23;
      v93 = 4LL;
      v92 = &v39;
      v39 = (unsigned __int64)(((unsigned __int64)v55 * (unsigned __int128)v20) >> 64) >> 23;
      v95 = 4LL;
      v94 = &v40;
      v96 = &v41;
      v42 = v33;
      v98 = &v42;
      v100 = &v43;
      v102 = &v57;
      v58 = v52;
      v104 = &v58;
      v59 = v51;
      v106 = &v59;
      v44 = v32;
      v108 = &v44;
      v45 = v31;
      v40 = (unsigned __int64)((*((unsigned __int64 *)&v55 + 1) * (unsigned __int128)v20) >> 64) >> 23;
      v41 = v11;
      v97 = 4LL;
      v99 = 4LL;
      v43 = v12;
      v101 = 4LL;
      v57 = v2;
      v103 = 8LL;
      v105 = 8LL;
      v107 = 8LL;
      v109 = 4LL;
      v23 = v50;
      v110 = &v45;
      v46 = v30;
      v112 = &v46;
      v47 = v29;
      v114 = &v47;
      v48 = v28;
      v116 = &v48;
      v49 = v27;
      v118 = &v49;
      v111 = 4LL;
      v60 = (unsigned int)((unsigned __int64)(((unsigned __int64)v50 * (unsigned __int128)v20) >> 64) >> 23);
      v120 = &v60;
      v113 = 4LL;
      v115 = 4LL;
      v117 = 4LL;
      v119 = 4LL;
      v121 = 8LL;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)v127,
                     (unsigned __int8 *)dword_140163641,
                     v18,
                     v19,
                     0x1Eu,
                     &v63);
      v17 = 0xD6BF94D5E57A42BDuLL;
    }
    else
    {
      v23 = v50;
    }
    if ( (byte_140173448 & 4) != 0 )
      LOBYTE(v1) = McTemplateK0qjzshhssqqqqqqqqqxxxqqqqqqx_EtwWriteTransfer(
                     *((_QWORD *)&v53 + 1) / 0x989680uLL,
                     (unsigned __int64)v53 / 0x989680,
                     (unsigned int)((unsigned __int64)(((unsigned __int64)v23 * (unsigned __int128)v17) >> 64) >> 23),
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v62,
                     *((const wchar_t **)&v61 + 1),
                     (const char *)&v124,
                     v5,
                     v6,
                     (const char *)v127,
                     (const char *)&v122,
                     (unsigned __int64)v53 / 0x989680,
                     *((_QWORD *)&v53 + 1) / 0x989680uLL,
                     (unsigned __int64)(((unsigned __int64)v54 * (unsigned __int128)v17) >> 64) >> 23,
                     (unsigned __int64)((*((unsigned __int64 *)&v54 + 1) * (unsigned __int128)v17) >> 64) >> 23,
                     (unsigned __int64)(((unsigned __int64)v55 * (unsigned __int128)v17) >> 64) >> 23,
                     (unsigned __int64)((*((unsigned __int64 *)&v55 + 1) * (unsigned __int128)v17) >> 64) >> 23,
                     v11,
                     v33,
                     v12,
                     v2,
                     v52,
                     v51,
                     v32,
                     v31,
                     v30,
                     v29,
                     v28,
                     v27,
                     (unsigned __int64)(((unsigned __int64)v23 * (unsigned __int128)v17) >> 64) >> 23);
  }
  return v1;
}
