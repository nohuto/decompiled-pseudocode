/*
 * XREFs of PopIdleWakeSendDripsWakeSourceTelemetry @ 0x140B0C910
 * Callers:
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140B0C830 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopIdleWakeSendDripsWakeSourceTelemetry(__int64 a1, int *a2, char a3)
{
  unsigned __int16 *v3; // rdi
  int v4; // r14d
  __int64 v7; // rsi
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int128 *v15; // rax
  __int64 v16; // r8
  int *v17; // rdi
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v31; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  _DWORD *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  _DWORD v40[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  __int64 v43; // [rsp+128h] [rbp+20h]
  _DWORD v44[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  __int64 v47; // [rsp+148h] [rbp+40h]
  _DWORD v48[2]; // [rsp+150h] [rbp+48h] BYREF
  __int64 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  __int64 *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  __int64 *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int64 *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  __int64 v59; // [rsp+1A8h] [rbp+A0h]
  int v60; // [rsp+1B0h] [rbp+A8h]
  int v61; // [rsp+1B4h] [rbp+ACh]
  void *v62; // [rsp+1B8h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  __int64 v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  void *v66; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  __int64 v68; // [rsp+1E8h] [rbp+E0h]
  __int64 v69; // [rsp+1F0h] [rbp+E8h]
  int *v70; // [rsp+1F8h] [rbp+F0h]
  __int64 v71; // [rsp+200h] [rbp+F8h]
  __int64 *v72; // [rsp+208h] [rbp+100h]
  __int64 v73; // [rsp+210h] [rbp+108h]
  __int64 v74; // [rsp+218h] [rbp+110h]
  __int64 v75; // [rsp+220h] [rbp+118h]
  __int64 v76; // [rsp+228h] [rbp+120h]
  __int64 v77; // [rsp+230h] [rbp+128h]
  __int64 *v78; // [rsp+238h] [rbp+130h]
  __int64 v79; // [rsp+240h] [rbp+138h]
  __int64 v80; // [rsp+248h] [rbp+140h]
  __int64 v81; // [rsp+250h] [rbp+148h]
  __int64 v82; // [rsp+258h] [rbp+150h]
  __int64 v83; // [rsp+260h] [rbp+158h]
  __int64 *v84; // [rsp+268h] [rbp+160h]
  __int64 v85; // [rsp+270h] [rbp+168h]
  __int64 v86; // [rsp+278h] [rbp+170h]
  __int64 v87; // [rsp+280h] [rbp+178h]
  __int64 v88; // [rsp+288h] [rbp+180h]
  __int64 v89; // [rsp+290h] [rbp+188h]
  __int64 *v90; // [rsp+298h] [rbp+190h]
  __int64 v91; // [rsp+2A0h] [rbp+198h]
  __int64 v92; // [rsp+2A8h] [rbp+1A0h]
  __int64 v93; // [rsp+2B0h] [rbp+1A8h]
  __int64 v94; // [rsp+2B8h] [rbp+1B0h]
  __int64 v95; // [rsp+2C0h] [rbp+1B8h]

  v3 = 0LL;
  v31 = 0LL;
  v4 = a3 != 0;
  v7 = (-v4 & 0x178) + 8LL;
  DestinationString = 0LL;
  v30 = 0LL;
  if ( !*(int *)((char *)a2 + v7) )
    return;
  RtlInitUnicodeString(&DestinationString, &word_140B8A320);
  v8 = *a2;
  if ( *a2 == 128 )
  {
    v9 = a2[196];
    if ( v9 <= 3 )
    {
      if ( !v9 )
        goto LABEL_5;
    }
    else
    {
      v9 = 3;
    }
    v15 = &v30;
    v16 = v9;
    v17 = a2 + 198;
    do
    {
      *(_QWORD *)v15 = v17;
      v17 += 4;
      v15 = (__int128 *)((char *)v15 + 8);
      --v16;
    }
    while ( v16 );
    v3 = v31;
LABEL_5:
    if ( v9 >= 3 )
      goto LABEL_6;
    goto LABEL_4;
  }
  *(_QWORD *)&v30 = a2 + 192;
  v9 = 1;
LABEL_4:
  memset64((char *)&v30 + 8 * v9, (unsigned __int64)&DestinationString, 3 - v9);
  v3 = v31;
LABEL_6:
  if ( (unsigned int)dword_140E07560 > 5
    && (qword_140E07570 & 0x400000000000LL) != 0
    && (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
  {
    v21 = a1;
    v33 = &v21;
    v35 = &v19;
    v34 = 8LL;
    v19 = v8;
    v36 = 4LL;
    v10 = *(unsigned __int16 *)v30;
    v11 = *(_QWORD *)(v30 + 8);
    v37 = v40;
    v39 = v11;
    v40[0] = v10;
    v38 = 2LL;
    v40[1] = 0;
    v12 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8LL);
    v13 = (unsigned __int16)**((_WORD **)&v30 + 1);
    v41 = v44;
    v43 = v12;
    v44[0] = v13;
    v42 = 2LL;
    v44[1] = 0;
    LODWORD(v12) = *v3;
    v47 = *((_QWORD *)v3 + 1);
    LODWORD(v20) = *(int *)((char *)a2 + v7);
    v49 = &v20;
    v22 = *(_QWORD *)((char *)a2 + v7 + 8);
    v51 = &v22;
    v23 = *(_QWORD *)((char *)a2 + v7 + 16);
    v53 = &v23;
    v24 = *(_QWORD *)((char *)a2 + v7 + 24);
    v55 = &v24;
    v59 = (__int64)a2 + 850;
    v48[0] = v12;
    v14 = *((unsigned __int16 *)a2 + 424);
    v57 = a2 + 212;
    v45 = v48;
    v46 = 2LL;
    v48[1] = 0;
    v50 = 4LL;
    v62 = &PopIdleWakeIdleAccountingBucketLimitsMs;
    v52 = 8LL;
    v54 = 8LL;
    v64 = (__int64)a2 + v7 + 32;
    v66 = &PopIdleWakePeriodAccountingBucketLimitsMs;
    v56 = 8LL;
    v68 = (__int64)a2 + v7 + 68;
    v70 = &v18;
    v58 = 2LL;
    v60 = 10 * v14;
    v61 = 0;
    v63 = 80LL;
    v65 = 36LL;
    v67 = 96LL;
    v69 = 44LL;
    v18 = v4;
    v25 = *(_QWORD *)((char *)a2 + v7 + 112);
    v71 = 4LL;
    v72 = &v25;
    v73 = 8LL;
    v75 = 20LL;
    v74 = (__int64)a2 + v7 + 120;
    v77 = 40LL;
    v79 = 8LL;
    v76 = (__int64)a2 + v7 + 144;
    v26 = *(_QWORD *)((char *)a2 + v7 + 184);
    v78 = &v26;
    v81 = 20LL;
    v80 = (__int64)a2 + v7 + 192;
    v83 = 40LL;
    v82 = (__int64)a2 + v7 + 216;
    v27 = *(_QWORD *)((char *)a2 + v7 + 256);
    v84 = &v27;
    v85 = 8LL;
    v86 = (__int64)a2 + v7 + 264;
    v87 = 20LL;
    v88 = (__int64)a2 + v7 + 288;
    v28 = *(_QWORD *)((char *)a2 + v7 + 328);
    v90 = &v28;
    v89 = 40LL;
    v92 = (__int64)a2 + v7 + 336;
    v91 = 8LL;
    v94 = (__int64)a2 + v7 + 352;
    v93 = 12LL;
    v95 = 24LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07560,
      (unsigned __int8 *)byte_14004F5B1,
      0LL,
      0LL,
      0x21u,
      &v32);
  }
}
