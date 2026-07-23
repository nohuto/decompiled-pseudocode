/*
 * XREFs of PopDiagTraceRtcWakeInfo @ 0x140504F48
 * Callers:
 *     PopValidateRTCWake @ 0x140C0F8AC (PopValidateRTCWake.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140C12634 (PopDiagInterruptTimeToSystemTime.c)
 */

char __fastcall PopDiagTraceRtcWakeInfo(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  char result; // al
  int v8; // r8d
  __int64 v9; // r10
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v14; // [rsp+60h] [rbp-A8h] BYREF
  int v15; // [rsp+64h] [rbp-A4h] BYREF
  int v16; // [rsp+68h] [rbp-A0h] BYREF
  int v17; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v18; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v20; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v21; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v22; // [rsp+80h] [rbp-88h] BYREF
  int v23; // [rsp+84h] [rbp-84h] BYREF
  BOOL v24; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v28[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  unsigned int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  unsigned int *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  unsigned int *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  __int64 *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  __int64 *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  int *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  __int64 *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  _QWORD *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  BOOL *v54; // [rsp+188h] [rbp+80h]
  __int64 v55; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+198h] [rbp+90h] BYREF
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  int *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  int *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  int *v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  int *v65; // [rsp+1F8h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+F8h]
  unsigned int *v67; // [rsp+208h] [rbp+100h]
  __int64 v68; // [rsp+210h] [rbp+108h]
  unsigned int *v69; // [rsp+218h] [rbp+110h]
  __int64 v70; // [rsp+220h] [rbp+118h]
  unsigned int *v71; // [rsp+228h] [rbp+120h]
  __int64 v72; // [rsp+230h] [rbp+128h]
  __int64 *v73; // [rsp+238h] [rbp+130h]
  __int64 v74; // [rsp+240h] [rbp+138h]
  __int64 *v75; // [rsp+248h] [rbp+140h]
  __int64 v76; // [rsp+250h] [rbp+148h]
  int *v77; // [rsp+258h] [rbp+150h]
  __int64 v78; // [rsp+260h] [rbp+158h]
  __int64 *v79; // [rsp+268h] [rbp+160h]
  __int64 v80; // [rsp+270h] [rbp+168h]
  _QWORD *v81; // [rsp+278h] [rbp+170h]
  __int64 v82; // [rsp+280h] [rbp+178h]
  int *v83; // [rsp+288h] [rbp+180h]
  __int64 v84; // [rsp+290h] [rbp+188h]
  int v85; // [rsp+2D0h] [rbp+1C8h] BYREF
  int v86; // [rsp+2D8h] [rbp+1D0h] BYREF
  int v87; // [rsp+2E0h] [rbp+1D8h] BYREF

  v87 = a4;
  v86 = a3;
  v85 = a2;
  v11 = PopFixedWakeSourceMask;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v12 = ((unsigned int)PopFixedWakeSourceMask >> 3) & 1;
  v14 = ((unsigned int)PopFixedWakeSourceMask >> 2) & 1;
  v13 = ((unsigned int)PopFixedWakeSourceMask >> 4) & 1;
  v28[0] = 0LL;
  if ( qword_140F104A0 )
    PopDiagInterruptTimeToSystemTime(qword_140F104A0, &v25);
  if ( qword_140F104B8 )
    PopDiagInterruptTimeToSystemTime(qword_140F104B8, &v26);
  PopDiagInterruptTimeToSystemTime(qword_140F10478, &v27);
  result = PopDiagInterruptTimeToSystemTime(a7, v28);
  v24 = PopPendingUserPresenceDuringSystemSleep != 0;
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( result )
    {
      v15 = v85;
      v23 = v8;
      v57 = &v15;
      LOBYTE(v10) = v86;
      v59 = &v10;
      v16 = v87;
      v61 = &v16;
      v17 = a5;
      v63 = &v17;
      v18 = v11;
      v65 = &v18;
      v19 = v12;
      v67 = &v19;
      v20 = v13;
      v69 = &v20;
      v21 = v14;
      v71 = &v21;
      v73 = &v25;
      v75 = &v26;
      v22 = a6;
      v77 = &v22;
      v79 = &v27;
      v81 = v28;
      v83 = &v23;
      v58 = 4LL;
      v60 = v9;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 4LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 4LL;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E07560,
                 (unsigned __int8 *)byte_14004B6B1,
                 0LL,
                 0LL,
                 0x10u,
                 &v56);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_RTC_WAKE_INFO);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v85;
      *(_QWORD *)&UserData.Size = 4LL;
      v30 = &v86;
      v31 = 4LL;
      v32 = &v87;
      v33 = 4LL;
      v34 = &a5;
      v36 = &v11;
      v38 = &v12;
      v40 = &v13;
      v42 = &v14;
      v44 = &v25;
      v46 = &v26;
      v48 = &a6;
      v50 = &v27;
      v52 = v28;
      v54 = &v24;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 4LL;
      v51 = 8LL;
      v53 = 8LL;
      v55 = 4LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_RTC_WAKE_INFO, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return result;
}
