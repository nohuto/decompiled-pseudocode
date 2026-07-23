/*
 * XREFs of PopPowerAggregatorDiagTraceHandleIntent @ 0x1409FAF54
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1409FAD60 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceHandleIntent(int a1, int a2, int a3, int *a4, int *a5, int a6, __int64 a7)
{
  int *v7; // rdi
  __int64 v8; // rsi
  int *v10; // rax
  int v11; // r10d
  int v12; // r8d
  bool v13; // dl
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+F8h] [rbp-10h] BYREF
  int *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  _DWORD *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 v54; // [rsp+178h] [rbp+70h]
  _DWORD v55[2]; // [rsp+180h] [rbp+78h] BYREF
  int *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  int v60; // [rsp+1E8h] [rbp+E0h] BYREF
  int v61; // [rsp+1F0h] [rbp+E8h] BYREF
  int v62; // [rsp+1F8h] [rbp+F0h] BYREF

  v62 = a3;
  v61 = a2;
  v60 = a1;
  v7 = a5;
  v8 = a7;
  UserData.Ptr = (ULONGLONG)&v60;
  v25 = &v61;
  v27 = &v62;
  *(_QWORD *)&UserData.Size = 4LL;
  v29 = &a6;
  v35 = &v22;
  v10 = &v16;
  v37 = &v16;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v31 = a4;
  v32 = 4LL;
  v33 = (__int64)a5;
  v34 = 4LL;
  v22 = 0LL;
  v36 = 8LL;
  v16 = 24;
  v38 = 4LL;
  v39 = a7;
  v40 = 24LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v10) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT);
    if ( (_BYTE)v10 )
      LOBYTE(v10) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT, 0LL, 9u, &UserData);
  }
  v11 = *v7;
  v12 = *a4;
  if ( *a4 != *v7 && a6 >= 0 )
  {
    v13 = 0;
    if ( v12 == 1 )
      v13 = *((_BYTE *)a4 + 27) != 0;
    if ( (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x400000000000LL) != 0 )
    {
      LOBYTE(v10) = 0;
      if ( (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
      {
        v17 = v60;
        v42 = &v17;
        v18 = v62;
        v44 = &v18;
        v46 = &v19;
        v48 = &v20;
        v50 = &v21;
        v52 = v55;
        v55[0] = v16;
        v56 = &v15;
        v58 = &v23;
        v19 = a6;
        v20 = v12;
        LOBYTE(v15) = v13;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        LODWORD(v21) = v11;
        v51 = 4LL;
        v53 = 2LL;
        v54 = v8;
        v55[1] = 0;
        v57 = 1LL;
        v23 = 0x1000000LL;
        v59 = 8LL;
        LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E07560,
                        (unsigned __int8 *)byte_140051BE8,
                        0LL,
                        0LL,
                        0xBu,
                        &v41);
      }
    }
  }
  return (char)v10;
}
