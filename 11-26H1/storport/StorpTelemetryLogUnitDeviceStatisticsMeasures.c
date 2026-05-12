/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400BB660
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1400C1F84 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryLogUnitDeviceStatisticsMeasures(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r11d
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
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char v30; // [rsp+38h] [rbp-D0h] BYREF
  char v31; // [rsp+39h] [rbp-CFh] BYREF
  char v32; // [rsp+3Ah] [rbp-CEh] BYREF
  char v33; // [rsp+3Bh] [rbp-CDh] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+54h] [rbp-B4h] BYREF
  int v41; // [rsp+58h] [rbp-B0h] BYREF
  int v42; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  char *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  char *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  char *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  char v59[16]; // [rsp+F8h] [rbp-10h] BYREF
  char v60[16]; // [rsp+108h] [rbp+0h] BYREF
  char v61[16]; // [rsp+118h] [rbp+10h] BYREF
  char v62[16]; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  int *v65; // [rsp+148h] [rbp+40h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  _DWORD *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  _QWORD *v69; // [rsp+168h] [rbp+60h]
  _DWORD v70[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  int *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  __int64 *v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  _DWORD *v77; // [rsp+1A8h] [rbp+A0h]
  __int64 v78; // [rsp+1B0h] [rbp+A8h]
  __int64 v79; // [rsp+1B8h] [rbp+B0h]
  _DWORD v80[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD *v81; // [rsp+1C8h] [rbp+C0h]
  __int64 v82; // [rsp+1D0h] [rbp+C8h]
  __int64 v83; // [rsp+1D8h] [rbp+D0h]
  _DWORD v84[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+1F0h] [rbp+E8h]
  __int64 v87; // [rsp+1F8h] [rbp+F0h]
  _DWORD v88[2]; // [rsp+200h] [rbp+F8h] BYREF
  int *v89; // [rsp+208h] [rbp+100h]
  __int64 v90; // [rsp+210h] [rbp+108h]
  int *v91; // [rsp+218h] [rbp+110h]
  __int64 v92; // [rsp+220h] [rbp+118h]
  _DWORD *v93; // [rsp+228h] [rbp+120h]
  __int64 v94; // [rsp+230h] [rbp+128h]
  __int64 v95; // [rsp+238h] [rbp+130h]
  _DWORD v96[2]; // [rsp+240h] [rbp+138h] BYREF
  char *v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  _DWORD *v99; // [rsp+258h] [rbp+150h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  _QWORD *v101; // [rsp+268h] [rbp+160h]
  _DWORD v102[2]; // [rsp+270h] [rbp+168h] BYREF
  int *v103; // [rsp+278h] [rbp+170h]
  __int64 v104; // [rsp+280h] [rbp+178h]
  int *v105; // [rsp+288h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+188h]
  __int64 *v107; // [rsp+298h] [rbp+190h]
  __int64 v108; // [rsp+2A0h] [rbp+198h]
  _DWORD *v109; // [rsp+2A8h] [rbp+1A0h]
  __int64 v110; // [rsp+2B0h] [rbp+1A8h]
  __int64 v111; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v112[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  int *v113; // [rsp+2C8h] [rbp+1C0h]
  __int64 v114; // [rsp+2D0h] [rbp+1C8h]
  _UNKNOWN *retaddr; // [rsp+2F0h] [rbp+1E8h] BYREF

  v1 = &retaddr;
  if ( (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(v2 + 24);
      v48 = 16LL;
      v50 = 16LL;
      v47 = v3 + 5128;
      v49 = v2 + 2104;
      v36 = *(_DWORD *)(v3 + 56);
      v51 = &v36;
      v30 = *(_BYTE *)(v2 + 104);
      v53 = &v30;
      v31 = *(_BYTE *)(v2 + 105);
      v55 = &v31;
      v32 = *(_BYTE *)(v2 + 106);
      v57 = &v32;
      v52 = 4LL;
      v54 = 1LL;
      v56 = 1LL;
      v58 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v59, *(const wchar_t **)(v3 + 4784));
      tlgCreate1Sz_char((__int64)v60, (_BYTE *)(v4 + 168));
      tlgCreate1Sz_char((__int64)v61, (_BYTE *)(v5 + 177));
      tlgCreate1Sz_char((__int64)v62, (_BYTE *)(v6 + 242));
      v63 = &v44;
      v10 = *(__int16 **)v8;
      v44 = *(_QWORD *)&g_SystemUptime_s;
      v64 = 8LL;
      v11 = *v10;
      v65 = &v35;
      LOWORD(v35) = v11;
      v12 = *(_QWORD **)(v8 + 8);
      v67 = v70;
      v70[0] = *(unsigned __int16 *)(v8 + 64);
      v66 = 2LL;
      v68 = 2LL;
      v69 = v12;
      v70[1] = v9;
      v13 = v12[1];
      if ( v13 >= 0 || (v13 & 0x4000000000000000LL) == 0 )
        LODWORD(v13) = -1;
      v37 = v13;
      v71 = &v37;
      v72 = 4LL;
      v14 = v12[2];
      if ( v14 >= 0 || (v14 & 0x4000000000000000LL) == 0 )
        LODWORD(v14) = -1;
      v38 = v14;
      v73 = &v38;
      v74 = 4LL;
      v15 = v12[9];
      if ( v15 < 0 && (v15 & 0x4000000000000000LL) != 0 )
        v16 = (unsigned __int16)v15;
      else
        v16 = -1LL;
      v45 = v16;
      v17 = *(_QWORD *)(v8 + 32);
      v75 = &v45;
      v77 = v80;
      v79 = *(_QWORD *)(v8 + 16);
      v80[0] = *(unsigned __int16 *)(v8 + 66);
      v81 = v84;
      v83 = *(_QWORD *)(v8 + 24);
      v84[0] = *(unsigned __int16 *)(v8 + 68);
      v85 = v88;
      v88[0] = *(unsigned __int16 *)(v8 + 70);
      v76 = 8LL;
      v78 = 2LL;
      v80[1] = v9;
      v82 = 2LL;
      v84[1] = v9;
      v86 = 2LL;
      v87 = v17;
      v88[1] = v9;
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 >= 0 || (v18 & 0x4000000000000000LL) == 0 )
        LODWORD(v18) = -1;
      v39 = v18;
      v89 = &v39;
      v90 = 4LL;
      v19 = *(_QWORD *)(v17 + 16);
      if ( v19 >= 0 || (v19 & 0x4000000000000000LL) == 0 )
        LODWORD(v19) = -1;
      v20 = *(_QWORD *)(v8 + 40);
      v40 = v19;
      v91 = &v40;
      v93 = v96;
      v96[0] = *(unsigned __int16 *)(v8 + 72);
      v92 = 4LL;
      v94 = 2LL;
      v95 = v20;
      v96[1] = v9;
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 >= 0 || (v21 & 0x4000000000000000LL) == 0 )
        LOBYTE(v21) = -1;
      v22 = *(_QWORD **)(v8 + 48);
      v33 = v21;
      v97 = &v33;
      v99 = v102;
      v102[0] = *(unsigned __int16 *)(v8 + 74);
      v98 = 1LL;
      v100 = 2LL;
      v101 = v22;
      v102[1] = v9;
      v23 = v22[1];
      if ( v23 >= 0 || (v24 = (unsigned __int8)v23, (v23 & 0x4000000000000000LL) == 0) )
        v24 = -1;
      v41 = v24;
      v103 = &v41;
      v104 = 4LL;
      v25 = v22[2];
      if ( v25 >= 0 || (v25 & 0x4000000000000000LL) == 0 )
        LODWORD(v25) = -1;
      v42 = v25;
      v105 = &v42;
      v106 = 4LL;
      v26 = v22[3];
      if ( v26 >= 0 || (v26 & 0x4000000000000000LL) == 0 )
        LODWORD(v26) = -1;
      v27 = *(_QWORD *)(v8 + 56);
      LODWORD(v43) = v26;
      v107 = &v43;
      v109 = v112;
      v112[0] = *(unsigned __int16 *)(v8 + 76);
      v108 = 4LL;
      v110 = 2LL;
      v111 = v27;
      v112[1] = v9;
      v28 = *(_QWORD *)(v27 + 8);
      if ( v28 >= 0 || (v28 & 0x4000000000000000LL) == 0 )
        LOBYTE(v28) = -1;
      LOBYTE(v34) = v28;
      v114 = 1LL;
      v113 = &v34;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(v27, (unsigned __int8 *)dword_140161A57, v7, v8, 0x26u, &v46);
    }
  }
  return (char)v1;
}
