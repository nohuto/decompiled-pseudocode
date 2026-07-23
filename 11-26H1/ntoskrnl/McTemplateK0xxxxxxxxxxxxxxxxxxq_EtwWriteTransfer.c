/*
 * XREFs of McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x140499270
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21)
{
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  char *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  char *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  char *v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  char *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  char *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  char *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  char *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  char *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  char *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  char *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  char *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  char *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  int *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h] BYREF

  v62 = a4;
  v22 = CcNumberNumaNodes;
  v25 = 8LL;
  v24 = &v62;
  v27 = 8LL;
  v26 = &a5;
  v29 = 8LL;
  v28 = &a6;
  v30 = &a7;
  v32 = &a8;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &a13;
  v44 = &a14;
  v46 = &a15;
  v48 = &a16;
  v50 = &a17;
  v52 = &a18;
  v54 = &a19;
  v56 = &a20;
  v58 = &a21;
  v60 = &v22;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 8LL;
  v49 = 8LL;
  v51 = 8LL;
  v53 = 8LL;
  v55 = 8LL;
  v57 = 8LL;
  v59 = 8LL;
  v61 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelCc_Provider_Context,
           (const EVENT_DESCRIPTOR *)CcEvt_CacheGlobalPeriodic,
           0LL,
           0x14u,
           &v23);
}
