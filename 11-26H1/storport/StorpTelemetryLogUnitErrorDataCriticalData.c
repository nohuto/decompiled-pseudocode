/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400BBB48
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400C2424 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  unsigned __int16 *v6; // r10
  int v7; // edx
  _DWORD *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-A0h] BYREF
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  _BYTE v39[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v40[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v41[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v42[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v61; // [rsp+1C0h] [rbp+C0h]
  _QWORD v62[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD v63[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v66; // [rsp+200h] [rbp+100h]
  _DWORD v67[2]; // [rsp+208h] [rbp+108h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v25 = &v11;
      v11 = 5;
      v26 = 1LL;
      v28 = 16LL;
      v27 = v2 + 5128;
      v29 = v1 + 2104;
      v30 = 16LL;
      v15 = *(_DWORD *)(v2 + 56);
      v31 = &v15;
      v12 = *(_BYTE *)(v1 + 104);
      v33 = &v12;
      v13 = *(_BYTE *)(v1 + 105);
      v35 = &v13;
      v14 = *(_BYTE *)(v1 + 106);
      v37 = &v14;
      v32 = 4LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v39, *(const wchar_t **)(v2 + 4784));
      tlgCreate1Sz_char((__int64)v40, (_BYTE *)(v3 + 168));
      tlgCreate1Sz_char((__int64)v41, (_BYTE *)(v4 + 177));
      tlgCreate1Sz_char((__int64)v42, (_BYTE *)(v5 + 242));
      v7 = v6[1];
      v43 = &v23;
      v16 = v8[620];
      v45 = &v16;
      v17 = v8[621];
      v47 = &v17;
      v18 = v8[622];
      v49 = &v18;
      v19 = v8[623];
      v51 = &v19;
      v20 = v8[566];
      v53 = &v20;
      v23 = *(_QWORD *)&g_SystemUptime_s;
      v9 = *v6;
      v55 = &v21;
      v44 = 8LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v21 = v9;
      v56 = 4LL;
      v22 = v7;
      v57 = &v22;
      v59 = v62;
      v61 = v8 + 624;
      v62[1] = v63;
      v62[3] = v8 + 634;
      v63[0] = 40 * v9;
      v64 = v67;
      v66 = v8 + 734;
      v67[0] = 40 * v7;
      v58 = 4LL;
      v60 = 2LL;
      v62[0] = 40LL;
      v62[2] = 2LL;
      v63[1] = 0;
      v65 = 2LL;
      v67[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_140160A79, v10, (__int64)v8, 0x1Bu, &v24);
    }
  }
}
