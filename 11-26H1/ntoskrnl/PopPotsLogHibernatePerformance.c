/*
 * XREFs of PopPotsLogHibernatePerformance @ 0x140AF7EC0
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopPotsLogHibernatePerformance(__int64 a1, char a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  bool v10; // di
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  _QWORD *v21; // r11
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v49; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v50; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v55; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v56; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v57; // [rsp+110h] [rbp+8h] BYREF
  __int64 v58; // [rsp+118h] [rbp+10h] BYREF
  __int64 v59; // [rsp+120h] [rbp+18h] BYREF
  __int64 v60; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int64 *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  __int64 *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  __int64 *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  __int64 *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  __int64 *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h]
  __int64 *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  __int64 *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  unsigned __int64 *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  unsigned __int64 *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  __int64 *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  unsigned __int64 *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  unsigned __int64 *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  unsigned __int64 *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  __int64 *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  unsigned __int64 *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  unsigned __int64 *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  __int64 v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  __int64 v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int64 *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  unsigned __int64 *v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  __int64 *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  __int64 *v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  unsigned __int64 *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  __int64 *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  __int64 *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  __int64 *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  _UNKNOWN *retaddr; // [rsp+3A0h] [rbp+298h] BYREF

  v2 = &retaddr;
  if ( PotsPowerTransitionsHandleRegistered )
  {
    v4 = *(_QWORD *)(a1 + 224);
    v5 = PopQpcFrequency;
    v42 = PpmConvertTime(*(_QWORD *)(a1 + 232), PopQpcFrequency, 0x3E8uLL);
    v33 = v6[56];
    v7 = v6[64];
    v34 = v6[39] / v4;
    v8 = v6[57];
    v9 = v7 - v6[14];
    v40 = v6[88] / v4;
    v36 = v6[19] / v4;
    v10 = (a2 & 8) != 0;
    v11 = v8 << 12;
    v39 = v6[87] / v4;
    v41 = v6[89] / v4;
    v12 = PpmConvertTime(v9, v5, 0x3E8uLL);
    v14 = *(_QWORD *)(v13 + 528) - *(_QWORD *)(v13 + 520);
    v31 = v12;
    v15 = PpmConvertTime(v14, v5, 0x3E8uLL);
    v17 = v16[66];
    v18 = v16[27];
    v32 = v15;
    if ( v17 )
      v19 = v18 - v17;
    else
      v19 = v18 - v16[64];
    v20 = PpmConvertTime(v19, v5, 0x3E8uLL);
    v22 = v21[29] - v21[36];
    v23 = v21[4] / v4;
    v24 = v21[5] / v4;
    v35 = v21[38] / v4;
    v37 = v21[20] / v4;
    v38 = v21[75] / v4;
    v43 = v21[90] / v4;
    v44 = v21[91] / v4;
    v25 = v21[92] / v4;
    LOBYTE(v2) = PpmConvertTime(v22, v5, 0x3E8uLL);
    if ( (unsigned int)dword_140E081E0 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E081E0, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v28 = *(_QWORD *)(v27 + 256);
        v62 = &v45;
        v46 = *(unsigned int *)(v27 + 264);
        v64 = &v46;
        v47 = *(unsigned int *)(v27 + 88);
        v66 = &v47;
        v48 = *(unsigned int *)(v27 + 92);
        v68 = &v48;
        v49 = v31;
        v70 = &v49;
        v72 = &v32;
        v74 = &v50;
        v51 = *(_QWORD *)(v27 + 432);
        v76 = &v51;
        v52 = *(_QWORD *)(v27 + 424);
        v78 = &v52;
        v53 = *(_QWORD *)(v27 + 416);
        v80 = &v53;
        v82 = &v33;
        v84 = &v34;
        v86 = &v35;
        v88 = &v54;
        v90 = &v36;
        v92 = &v37;
        v45 = v28;
        v63 = 8LL;
        v65 = 8LL;
        v67 = 8LL;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 8LL;
        v50 = v20;
        v75 = 8LL;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 8LL;
        v85 = 8LL;
        v87 = 8LL;
        v54 = v11;
        v89 = 8LL;
        v91 = 8LL;
        v93 = 8LL;
        v94 = &v38;
        v58 = v26;
        v96 = (__int64 *)&v55;
        v95 = 8LL;
        v98 = (__int64 *)&v56;
        v100 = &v39;
        v102 = &v40;
        v104 = &v41;
        v106 = v27 + 616;
        v108 = v27 + 656;
        v110 = &v42;
        v112 = &v43;
        v114 = &v44;
        v116 = (__int64 *)&v57;
        v118 = &v30;
        LODWORD(v31) = *(_DWORD *)(v27 + 408);
        v120 = &v31;
        v122 = &v58;
        v59 = *(unsigned int *)(v27 + 96);
        v124 = &v59;
        v126 = &v60;
        v55 = v23;
        v97 = 8LL;
        v56 = v24;
        v99 = 8LL;
        v101 = 8LL;
        v103 = 8LL;
        v105 = 8LL;
        v107 = 40LL;
        v109 = 40LL;
        v111 = 8LL;
        v113 = 8LL;
        v115 = 8LL;
        v57 = v25;
        v117 = 8LL;
        LOBYTE(v30) = v10;
        v119 = 1LL;
        v121 = 4LL;
        v123 = 8LL;
        v125 = 8LL;
        v60 = 0x1000000LL;
        v127 = 8LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E081E0,
                       (unsigned __int8 *)&word_140051626,
                       0LL,
                       0LL,
                       0x23u,
                       &v61);
      }
    }
  }
  return (char)v2;
}
