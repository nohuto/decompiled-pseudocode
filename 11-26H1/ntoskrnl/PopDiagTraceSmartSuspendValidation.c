/*
 * XREFs of PopDiagTraceSmartSuspendValidation @ 0x1407D8240
 * Callers:
 *     PopSmartSuspendValidatePredictions @ 0x140B65EDC (PopSmartSuspendValidatePredictions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopSystemTimeToLocalTime @ 0x140526EE8 (PopSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int8 PopDiagTraceSmartSuspendValidation()
{
  unsigned __int8 result; // al
  char *v1; // r10
  char v2; // [rsp+30h] [rbp-D0h] BYREF
  char v3; // [rsp+31h] [rbp-CFh] BYREF
  char v4; // [rsp+32h] [rbp-CEh] BYREF
  char v5; // [rsp+33h] [rbp-CDh] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  char *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  char *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  __int64 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  char *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  char *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  int *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  __int64 *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  __int64 *v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  int *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]
  int *v52; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  __int64 *v54; // [rsp+1B0h] [rbp+B0h]
  __int64 v55; // [rsp+1B8h] [rbp+B8h]
  int *v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1C8h] [rbp+C8h]
  __int64 *v58; // [rsp+1D0h] [rbp+D0h]
  __int64 v59; // [rsp+1D8h] [rbp+D8h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
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
      v23 = 8LL;
      v22 = &v14;
      v6 = *((_DWORD *)v1 + 18);
      v24 = &v6;
      v7 = *((_DWORD *)v1 + 17);
      v26 = &v7;
      v8 = *((_DWORD *)v1 + 1);
      v28 = &v8;
      v2 = *v1;
      v30 = &v2;
      v3 = v1[1];
      v32 = &v3;
      v9 = *((_DWORD *)v1 + 2);
      v34 = &v9;
      v36 = &v15;
      v38 = &v16;
      v4 = v1[2];
      v40 = &v4;
      v5 = v1[3];
      v42 = &v5;
      v10 = *((_DWORD *)v1 + 3);
      v44 = &v10;
      v46 = &v17;
      v48 = &v18;
      v11 = *((_DWORD *)v1 + 19);
      v50 = &v11;
      v12 = *((_DWORD *)v1 + 20);
      v52 = &v12;
      v54 = &v19;
      v13 = *((_DWORD *)v1 + 24);
      v56 = &v13;
      v58 = &v20;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 1LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 4LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 8LL;
      v57 = 4LL;
      v20 = 0x2000000LL;
      v59 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)word_14004D352,
               0LL,
               0LL,
               0x15u,
               &v21);
    }
  }
  return result;
}
