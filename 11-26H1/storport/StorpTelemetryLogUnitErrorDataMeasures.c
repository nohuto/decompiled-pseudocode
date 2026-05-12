/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1400BBE58
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400C2424 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // r9
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  char v11; // [rsp+33h] [rbp-CDh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp-90h] BYREF
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  _BYTE v38[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v39[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v40[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v41[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  int *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  _QWORD *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  __int64 v60; // [rsp+1D0h] [rbp+D0h]
  _QWORD v61[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v62[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  __int64 v65; // [rsp+210h] [rbp+110h]
  _DWORD v66[2]; // [rsp+218h] [rbp+118h] BYREF
  int *v67; // [rsp+220h] [rbp+120h]
  __int64 v68; // [rsp+228h] [rbp+128h]
  int *v69; // [rsp+230h] [rbp+130h]
  __int64 v70; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(a1, 0x400000000000LL) )
  {
    v3 = *(_QWORD *)(v2 + 24);
    v24 = &v8;
    v8 = 5;
    v25 = 1LL;
    v27 = 16LL;
    v26 = v3 + 5128;
    v28 = v2 + 2104;
    v29 = 16LL;
    v12 = *(_DWORD *)(v3 + 56);
    v30 = &v12;
    v9 = *(_BYTE *)(v2 + 104);
    v32 = &v9;
    v10 = *(_BYTE *)(v2 + 105);
    v34 = &v10;
    v11 = *(_BYTE *)(v2 + 106);
    v36 = &v11;
    v31 = 4LL;
    v33 = 1LL;
    v35 = 1LL;
    v37 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v38, *(const wchar_t **)(v3 + 4784));
    tlgCreate1Sz_char((__int64)v39, (_BYTE *)(a1 + 168));
    tlgCreate1Sz_char((__int64)v40, (_BYTE *)(a1 + 177));
    tlgCreate1Sz_char((__int64)v41, (_BYTE *)(a1 + 242));
    v5 = v4[1];
    v42 = &v22;
    v13 = *(_DWORD *)(a1 + 2480);
    v44 = &v13;
    v14 = *(_DWORD *)(a1 + 2484);
    v46 = &v14;
    v15 = *(_DWORD *)(a1 + 2488);
    v48 = &v15;
    v16 = *(_DWORD *)(a1 + 2492);
    v50 = &v16;
    v17 = *(_DWORD *)(a1 + 2264);
    v52 = &v17;
    v22 = *(_QWORD *)&g_SystemUptime_s;
    v6 = *v4;
    v54 = &v18;
    v43 = 8LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v18 = v6;
    v55 = 4LL;
    v19 = v5;
    v56 = &v19;
    v58 = v61;
    v60 = a1 + 2496;
    v61[1] = v62;
    v61[3] = a1 + 2536;
    v62[0] = 40 * v6;
    v63 = v66;
    v65 = a1 + 2936;
    v66[0] = 40 * v5;
    v20 = *(_DWORD *)(a1 + 2288);
    v67 = &v20;
    v21 = *(_DWORD *)(a1 + 2284);
    v69 = &v21;
    v57 = 4LL;
    v59 = 2LL;
    v61[0] = 40LL;
    v61[2] = 2LL;
    v62[1] = 0;
    v64 = 2LL;
    v66[1] = 0;
    v68 = 4LL;
    v70 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v6, (unsigned __int8 *)dword_140163494, v7, (__int64)v4, 0x1Du, &v23);
  }
  *(_QWORD *)(a1 + 2284) = 0LL;
}
