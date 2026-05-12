/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x14003E550
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryLogUnitPerfDataMeasures(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 *v10; // r10
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  __int16 v19; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v34[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v35[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v36[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  char *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  int *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  int *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  int *v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  int *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  int *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  __int64 *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  __int64 *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  const wchar_t *v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  __int16 *v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  PVOID v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+208h] [rbp+108h]
  int v63; // [rsp+20Ch] [rbp+10Ch]
  _BYTE v64[16]; // [rsp+210h] [rbp+110h] BYREF
  const wchar_t *v65; // [rsp+220h] [rbp+120h]
  __int64 v66; // [rsp+228h] [rbp+128h]
  const wchar_t *v67; // [rsp+230h] [rbp+130h]
  __int64 v68; // [rsp+238h] [rbp+138h]
  unsigned __int64 *v69; // [rsp+240h] [rbp+140h]
  __int64 v70; // [rsp+248h] [rbp+148h]
  __int16 *v71; // [rsp+250h] [rbp+150h]
  __int64 v72; // [rsp+258h] [rbp+158h]
  unsigned __int64 v73; // [rsp+260h] [rbp+160h]
  int v74; // [rsp+268h] [rbp+168h]
  int v75; // [rsp+26Ch] [rbp+16Ch]

  if ( (unsigned int)dword_140172178 > 5 && (qword_140172188 & 0x400000000000LL) != 0 )
  {
    result = qword_140172190 & 0x400000000000LL;
    if ( (qword_140172190 & 0x400000000000LL) == qword_140172190 )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v32[5] = 16LL;
      v32[7] = 16LL;
      v32[4] = v2 + 5128;
      v32[6] = a1 + 2104;
      v21 = *(_DWORD *)(v2 + 56);
      v32[8] = (__int64)&v21;
      v15 = *(_BYTE *)(a1 + 104);
      v32[10] = (__int64)&v15;
      v16 = *(_BYTE *)(a1 + 105);
      v32[12] = (__int64)&v16;
      v17 = *(_BYTE *)(a1 + 106);
      v32[14] = (__int64)&v17;
      v32[9] = 4LL;
      v32[11] = 1LL;
      v32[13] = 1LL;
      v32[15] = 1LL;
      tlgCreate1Sz_wchar_t(v33, *(_QWORD *)(v2 + 4784));
      tlgCreate1Sz_char(v34, v3 + 168);
      tlgCreate1Sz_char(v35, v4 + 177);
      tlgCreate1Sz_char(v36, v5 + 242);
      v37 = &v27;
      v18 = *(_BYTE *)(v6 + 8);
      v39 = &v18;
      v28 = *(_QWORD *)(v6 + 360);
      v41 = &v28;
      v22 = v7[225];
      v43 = &v22;
      v23 = v7[226];
      v45 = &v23;
      v24 = *(_DWORD *)(v6 + 376);
      v47 = &v24;
      v25 = v7[614];
      v49 = &v25;
      v26 = v7[616];
      v51 = &v26;
      v8 = *(_QWORD *)(v6 + 384);
      v27 = *(_QWORD *)&g_SystemUptime_s;
      v38 = 8LL;
      v40 = 1LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v9 = *(_QWORD *)(v6 + 16);
      v29 = v8;
      v53 = &v29;
      v30 = *(_QWORD *)(v6 + 392);
      v55 = &v30;
      v57 = L"Read, Write";
      v59 = &v19;
      v61 = qword_140173030;
      v19 = WORD1(TelemetryPerfContext);
      v62 = 8 * WORD1(TelemetryPerfContext);
      v54 = 8LL;
      v56 = 8LL;
      v58 = 24LL;
      v60 = 2LL;
      v63 = 0;
      tlgCreate1Sz_wchar_t(v64, v9);
      v66 = 26LL;
      v67 = L"64ms, 256ms, 1024ms, 5120ms, 5120+ms";
      v65 = L"Flush, Unmap";
      v11 = *v10;
      v68 = 74LL;
      v69 = &v31;
      v31 = v11 / 0x2710;
      v70 = 8LL;
      v72 = 2LL;
      v71 = &v20;
      v12 = v10[46];
      v20 = 3 * qword_1401730B0;
      v73 = v12;
      v74 = 8 * (unsigned __int16)(3 * qword_1401730B0);
      v75 = 0;
      return tlgWriteTransfer_EtwWriteTransfer(
               3 * (int)qword_1401730B0,
               (int)&dword_140161887,
               v13,
               v14,
               0x1Fu,
               (__int64)v32);
    }
  }
  return result;
}
