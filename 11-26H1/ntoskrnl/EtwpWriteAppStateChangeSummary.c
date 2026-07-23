/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1409D0688
 * Callers:
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  __int64 ProcessServerSilo; // r14
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdx
  char v14; // r8
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // r10d
  __int64 v33; // r8
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  char *v36; // [rsp+38h] [rbp-C8h] BYREF
  _BOOL8 v37; // [rsp+40h] [rbp-C0h] BYREF
  _BOOL8 v38; // [rsp+48h] [rbp-B8h] BYREF
  _BOOL8 v39; // [rsp+50h] [rbp-B0h] BYREF
  _BOOL8 v40; // [rsp+58h] [rbp-A8h] BYREF
  _BOOL8 v41; // [rsp+60h] [rbp-A0h] BYREF
  _BOOL8 v42; // [rsp+68h] [rbp-98h] BYREF
  _BOOL8 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v56; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v59; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v62[2]; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+130h] [rbp+30h] BYREF
  _BOOL8 *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  _BOOL8 *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  _BOOL8 *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  _BOOL8 *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  _BOOL8 *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  _BOOL8 *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  _BOOL8 *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  __int64 *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  __int64 *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  __int64 *v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+1E8h] [rbp+E8h]
  __int64 *v84; // [rsp+1F0h] [rbp+F0h]
  __int64 v85; // [rsp+1F8h] [rbp+F8h]
  __int64 *v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]
  __int64 *v88; // [rsp+210h] [rbp+110h]
  __int64 v89; // [rsp+218h] [rbp+118h]
  __int64 *v90; // [rsp+220h] [rbp+120h]
  __int64 v91; // [rsp+228h] [rbp+128h]
  __int64 *v92; // [rsp+230h] [rbp+130h]
  __int64 v93; // [rsp+238h] [rbp+138h]
  __int64 *v94; // [rsp+240h] [rbp+140h]
  __int64 v95; // [rsp+248h] [rbp+148h]
  __int64 *v96; // [rsp+250h] [rbp+150h]
  __int64 v97; // [rsp+258h] [rbp+158h]
  __int64 *v98; // [rsp+260h] [rbp+160h]
  __int64 v99; // [rsp+268h] [rbp+168h]
  __int64 *v100; // [rsp+270h] [rbp+170h]
  __int64 v101; // [rsp+278h] [rbp+178h]
  __int64 *v102; // [rsp+280h] [rbp+180h]
  __int64 v103; // [rsp+288h] [rbp+188h]
  __int64 *v104; // [rsp+290h] [rbp+190h]
  __int64 v105; // [rsp+298h] [rbp+198h]
  __int64 *v106; // [rsp+2A0h] [rbp+1A0h]
  __int64 v107; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v108; // [rsp+2B0h] [rbp+1B0h]
  __int64 v109; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v110; // [rsp+2C0h] [rbp+1C0h]
  __int64 v111; // [rsp+2C8h] [rbp+1C8h]
  _DWORD *v112; // [rsp+2D0h] [rbp+1D0h]
  __int64 v113; // [rsp+2D8h] [rbp+1D8h]
  __int64 v114; // [rsp+2E0h] [rbp+1E0h]
  _DWORD v115[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  char v116[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v117[16]; // [rsp+300h] [rbp+200h] BYREF
  __int64 *v118; // [rsp+310h] [rbp+210h]
  __int64 v119; // [rsp+318h] [rbp+218h]
  char **v120; // [rsp+320h] [rbp+220h]
  __int64 v121; // [rsp+328h] [rbp+228h]
  _DWORD *v122; // [rsp+330h] [rbp+230h]
  __int64 v123; // [rsp+338h] [rbp+238h]
  __int64 v124; // [rsp+340h] [rbp+240h]
  _DWORD v125[2]; // [rsp+348h] [rbp+248h] BYREF
  _OWORD *v126; // [rsp+350h] [rbp+250h]
  __int64 v127; // [rsp+358h] [rbp+258h]
  __int64 *v128; // [rsp+360h] [rbp+260h]
  __int64 v129; // [rsp+368h] [rbp+268h]

  v36 = a2;
  v35 = a4;
  memset(v62, 0, 29);
  if ( dword_140E08F40 && (qword_140E08F50 & 0x200000000000LL) != 0 )
  {
    v8 = *(_QWORD *)&v62[0];
    if ( (qword_140E08F58 & 0x200000000000LL) == qword_140E08F58 )
      v8 = 1LL;
    *(_QWORD *)&v62[0] = v8;
  }
  else
  {
    v8 = *(_QWORD *)&v62[0];
  }
  v9 = *(unsigned int *)(a1 + 1364);
  if ( (((_DWORD)v9 + 1073741515) & 0xFFFFFFFB) == 0 )
    *(_QWORD *)&v62[0] = v8 | 0x100;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
  {
    v11 = PspNullGuid;
  }
  else
  {
    v11 = (__int64 *)(ProcessServerSilo + 1488);
    if ( ProcessServerSilo == -1488 )
      goto LABEL_9;
  }
  *(_OWORD *)((char *)v62 + 13) = *(_OWORD *)v11;
LABEL_9:
  v12 = *(_QWORD *)(a1 + 848);
  v13 = &EmptyUnicodeString;
  if ( v12 )
    v13 = *(__int64 **)(a1 + 848);
  if ( (unsigned int)dword_140E08F40 > 5 && (qword_140E08F50 & 0x400000000000LL) != 0 )
  {
    LODWORD(v12) = 0;
    if ( (qword_140E08F58 & 0x400000000000LL) == qword_140E08F58 )
    {
      v65 = 8LL;
      v67 = 8LL;
      v69 = 8LL;
      v14 = *v36;
      v15 = *v36 == 0;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v37 = v15;
      v77 = 8LL;
      v64 = &v37;
      v79 = 8LL;
      v38 = v14 == 1;
      v81 = 8LL;
      v66 = &v38;
      v39 = v14 == 2;
      v68 = &v39;
      v40 = v14 == 3;
      v70 = &v40;
      v41 = v14 == 4;
      v72 = &v41;
      v42 = v14 == 5;
      v74 = &v42;
      v43 = v14 == 6;
      v76 = &v43;
      v44 = *(_QWORD *)(v36 + 41);
      v78 = &v44;
      v45 = *(_QWORD *)(v36 + 49);
      v80 = &v45;
      v16 = 0LL;
      if ( a3 )
        LOBYTE(v16) = (*(_BYTE *)(a1 + 1531) & 7) != 0;
      v46 = v16;
      v82 = &v46;
      v17 = 0LL;
      v83 = 8LL;
      if ( a3 )
        LOBYTE(v17) = (*(_BYTE *)(a1 + 1531) & 0x38) != 0;
      v47 = v17;
      v84 = &v47;
      v18 = 0LL;
      v85 = 8LL;
      if ( a3 )
        v18 = *a3;
      v48 = v18;
      v86 = &v48;
      v19 = 0LL;
      v87 = 8LL;
      if ( a3 )
        v19 = *(_QWORD *)(a3 + 1);
      v49 = v19;
      v88 = &v49;
      v20 = 0LL;
      v89 = 8LL;
      if ( a3 )
        v20 = *(_QWORD *)(a3 + 3);
      v50 = v20;
      v90 = &v50;
      v21 = 0LL;
      v91 = 8LL;
      if ( a3 )
        v21 = a3[7];
      v51 = v21;
      v92 = &v51;
      v22 = 0LL;
      v93 = 8LL;
      if ( a3 )
        v22 = a3[9];
      v52 = v22;
      v94 = &v52;
      v23 = 0LL;
      v95 = 8LL;
      if ( a3 )
        v23 = a3[8];
      v53 = v23;
      v96 = &v53;
      v24 = 0LL;
      v97 = 8LL;
      if ( a3 )
        v24 = a3[10];
      v54 = v24;
      v98 = &v54;
      v25 = 0LL;
      v99 = 8LL;
      if ( a3 )
        v25 = *(_QWORD *)(a3 + 5);
      v55 = v25;
      v100 = &v55;
      v101 = 8LL;
      if ( a3 )
        v26 = v9 >> 31;
      else
        v26 = 0LL;
      v56 = v26;
      v102 = (__int64 *)&v56;
      v27 = 0LL;
      v103 = 8LL;
      if ( a3 )
        LOBYTE(v27) = (_DWORD)v9 == 0;
      v57 = v27;
      v104 = &v57;
      v28 = 0LL;
      v105 = 8LL;
      if ( a3 )
        LOBYTE(v28) = (_DWORD)v9 == 1;
      v58 = v28;
      v106 = &v58;
      v107 = 8LL;
      if ( a3 )
        v29 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 1531) >> 6) & 1;
      else
        v29 = 0LL;
      v59 = v29;
      v108 = &v59;
      v109 = 8LL;
      if ( v14 == 3 )
        v30 = *(unsigned int *)(a1 + 1192);
      else
        v30 = 0LL;
      v60 = v30;
      v110 = &v60;
      v112 = v115;
      v114 = v13[1];
      v115[0] = *(unsigned __int16 *)v13;
      v111 = 8LL;
      v113 = 2LL;
      v115[1] = 0;
      tlgCreate1Sz_wchar_t((__int64)v116, (const WCHAR *)(v35 + 24));
      tlgCreate1Sz_wchar_t((__int64)v117, (const WCHAR *)(v31 + 280));
      v119 = 4LL;
      v121 = 4LL;
      v123 = 2LL;
      LODWORD(v35) = *a5;
      v118 = &v35;
      LODWORD(v36) = a5[1];
      v120 = &v36;
      v122 = v125;
      v124 = *((_QWORD *)a6 + 1);
      v125[0] = *a6;
      v126 = v62;
      v128 = &v61;
      v125[1] = v32;
      v127 = 29LL;
      v61 = 50331648LL;
      v129 = 8LL;
      LODWORD(v12) = tlgWriteAgg((__int64)&dword_140E08F40, (unsigned __int8 *)&byte_140054C75, v33, 0x24u, &v63);
    }
  }
  return v12;
}
