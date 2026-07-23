/*
 * XREFs of PopDiagTraceSmartSuspendPrediction @ 0x1407D7EDC
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopSystemTimeToLocalTime @ 0x140526EE8 (PopSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int8 PopDiagTraceSmartSuspendPrediction()
{
  unsigned __int8 result; // al
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+30h] [rbp-D0h] BYREF
  char v4; // [rsp+31h] [rbp-CFh] BYREF
  char v5; // [rsp+32h] [rbp-CEh] BYREF
  char v6; // [rsp+33h] [rbp-CDh] BYREF
  char v7; // [rsp+34h] [rbp-CCh] BYREF
  char v8; // [rsp+35h] [rbp-CBh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  char *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  __int64 *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  __int64 *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  char *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  char *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  __int64 *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  __int64 *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  char *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  __int64 *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  __int64 *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  char *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  __int64 *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  __int64 *v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  int *v66; // [rsp+200h] [rbp+100h]
  __int64 v67; // [rsp+208h] [rbp+108h]
  __int64 *v68; // [rsp+210h] [rbp+110h]
  __int64 v69; // [rsp+218h] [rbp+118h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  result = (unsigned __int8)PopSystemTimeToLocalTime();
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( result )
    {
      v27 = 8LL;
      v26 = &v15;
      v9 = *((_DWORD *)v1 + 18);
      v28 = &v9;
      v10 = *((_DWORD *)v1 + 17);
      v30 = &v10;
      v11 = *((_DWORD *)v1 + 1);
      v32 = &v11;
      v3 = *v1;
      v34 = &v3;
      v4 = v1[1];
      v36 = &v4;
      v12 = *((_DWORD *)v1 + 2);
      v38 = &v12;
      v40 = &v16;
      v42 = &v17;
      v5 = v1[2];
      v44 = &v5;
      v6 = v1[3];
      v46 = &v6;
      v13 = *((_DWORD *)v1 + 3);
      v48 = &v13;
      v50 = &v18;
      v52 = &v19;
      v7 = *v2;
      v54 = &v7;
      v56 = &v20;
      v58 = &v21;
      v8 = v2[2];
      v60 = &v8;
      v62 = &v22;
      v64 = &v23;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 4LL;
      v51 = 8LL;
      v53 = 8LL;
      v55 = 1LL;
      v57 = 8LL;
      v59 = 8LL;
      v61 = 1LL;
      v63 = 8LL;
      v14 = *((_DWORD *)v1 + 24);
      v65 = 8LL;
      v66 = &v14;
      v67 = 4LL;
      v68 = &v24;
      v24 = 0x2000000LL;
      v69 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)byte_14004D1BB,
               0LL,
               0LL,
               0x18u,
               &v25);
    }
  }
  return result;
}
