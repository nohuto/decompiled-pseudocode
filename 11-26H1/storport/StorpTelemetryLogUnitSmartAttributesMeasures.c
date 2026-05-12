/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400BCB0C
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1400C3948 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesMeasures(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  bool v7; // al
  __int64 v8; // r9
  int *v9; // rcx
  char v10; // al
  _WORD *v11; // rcx
  __int64 v12; // r8
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  bool v16; // [rsp+33h] [rbp-CDh] BYREF
  char v17; // [rsp+34h] [rbp-CCh] BYREF
  char v18; // [rsp+35h] [rbp-CBh] BYREF
  char v19; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  char v52[16]; // [rsp+140h] [rbp+40h] BYREF
  char v53[16]; // [rsp+150h] [rbp+50h] BYREF
  char v54[16]; // [rsp+160h] [rbp+60h] BYREF
  char v55[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  bool *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  int *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  char *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  char *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  __int16 *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  __int16 *v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  int *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  __int16 *v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  char *v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  __int64 *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  __int64 *v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]
  __int64 *v80; // [rsp+240h] [rbp+140h]
  __int64 v81; // [rsp+248h] [rbp+148h]
  __int64 *v82; // [rsp+250h] [rbp+150h]
  __int64 v83; // [rsp+258h] [rbp+158h]
  __int64 *v84; // [rsp+260h] [rbp+160h]
  __int64 v85; // [rsp+268h] [rbp+168h]
  __int64 *v86; // [rsp+270h] [rbp+170h]
  __int64 v87; // [rsp+278h] [rbp+178h]
  __int64 *v88; // [rsp+280h] [rbp+180h]
  __int64 v89; // [rsp+288h] [rbp+188h]
  __int64 *v90; // [rsp+290h] [rbp+190h]
  __int64 v91; // [rsp+298h] [rbp+198h]
  __int64 *v92; // [rsp+2A0h] [rbp+1A0h]
  __int64 v93; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v94; // [rsp+2B0h] [rbp+1B0h]
  __int64 v95; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v96; // [rsp+2C0h] [rbp+1C0h]
  __int64 v97; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v98; // [rsp+2D0h] [rbp+1D0h]
  __int64 v99; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v100; // [rsp+2E0h] [rbp+1E0h]
  __int64 v101; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v102; // [rsp+2F0h] [rbp+1F0h]
  __int64 v103; // [rsp+2F8h] [rbp+1F8h] BYREF

  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v41 = 16LL;
      v43 = 16LL;
      v40 = v2 + 5128;
      v42 = v1 + 2104;
      v23 = *(_DWORD *)(v2 + 56);
      v44 = &v23;
      v13 = *(_BYTE *)(v1 + 104);
      v46 = &v13;
      v14 = *(_BYTE *)(v1 + 105);
      v48 = &v14;
      v15 = *(_BYTE *)(v1 + 106);
      v50 = &v15;
      v45 = 4LL;
      v47 = 1LL;
      v49 = 1LL;
      v51 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v52, *(const wchar_t **)(v2 + 4784));
      tlgCreate1Sz_char((__int64)v53, (_BYTE *)(v3 + 168));
      tlgCreate1Sz_char((__int64)v54, (_BYTE *)(v4 + 177));
      tlgCreate1Sz_char((__int64)v55, (_BYTE *)(v5 + 242));
      v56 = &v26;
      v7 = (*(_DWORD *)(v6 + 2120) & 0x20) != 0;
      v26 = *(_QWORD *)&g_SystemUptime_s;
      v9 = *(int **)v8;
      v16 = v7;
      v58 = &v16;
      v57 = 8LL;
      v59 = 1LL;
      v24 = *v9;
      v60 = &v24;
      v61 = 4LL;
      v17 = *((_BYTE *)v9 + 4);
      v62 = &v17;
      v63 = 1LL;
      v10 = *((_BYTE *)v9 + 5);
      v11 = *(_WORD **)(v8 + 8);
      v18 = v10;
      v64 = &v18;
      v65 = 1LL;
      v20 = *v11;
      v66 = &v20;
      v21 = *(_WORD *)(v8 + 16);
      v68 = &v21;
      v25 = *(_DWORD *)(v8 + 20);
      v67 = 2LL;
      v69 = 2LL;
      v71 = 4LL;
      v70 = &v25;
      v22 = *(_WORD *)(v8 + 24);
      v72 = &v22;
      v19 = *(_BYTE *)(v8 + 26);
      v74 = &v19;
      v27 = *(_QWORD *)(v8 + 32);
      v76 = &v27;
      v28 = *(_QWORD *)(v8 + 40);
      v78 = &v28;
      v29 = *(_QWORD *)(v8 + 48);
      v80 = &v29;
      v30 = *(_QWORD *)(v8 + 56);
      v82 = &v30;
      v31 = *(_QWORD *)(v8 + 64);
      v84 = &v31;
      v32 = *(_QWORD *)(v8 + 72);
      v86 = &v32;
      v33 = *(_QWORD *)(v8 + 80);
      v88 = &v33;
      v34 = *(_QWORD *)(v8 + 88);
      v90 = &v34;
      v35 = *(_QWORD *)(v8 + 96);
      v92 = &v35;
      v36 = *(_QWORD *)(v8 + 104);
      v94 = &v36;
      v37 = *(_QWORD *)(v8 + 112);
      v96 = &v37;
      v38 = *(_QWORD *)(v8 + 120);
      v98 = &v38;
      v100 = &v103;
      v73 = 2LL;
      v75 = 1LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 8LL;
      v97 = 8LL;
      v99 = 8LL;
      v101 = 2LL;
      v102 = v11;
      v103 = 512LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)v11, (unsigned __int8 *)dword_140161133, v12, v8, 0x24u, &v39);
    }
  }
}
