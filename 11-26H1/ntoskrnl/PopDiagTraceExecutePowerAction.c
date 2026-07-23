/*
 * XREFs of PopDiagTraceExecutePowerAction @ 0x1409F3E60
 * Callers:
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     PsGetProcessImageFileName @ 0x140478D40 (PsGetProcessImageFileName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceExecutePowerAction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  const CHAR *ProcessImageFileName; // rbx
  __int64 v13; // rax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  BOOL v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  BOOL v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  int *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  int *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  BOOL *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  const CHAR *v56; // [rsp+158h] [rbp+50h]
  int v57; // [rsp+160h] [rbp+58h]
  int v58; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+168h] [rbp+60h] BYREF
  int *v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  int *v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  int *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  int *v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  int *v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  int *v70; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h]
  int *v72; // [rsp+1E8h] [rbp+E0h]
  __int64 v73; // [rsp+1F0h] [rbp+E8h]
  int *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  int *v76; // [rsp+208h] [rbp+100h]
  __int64 v77; // [rsp+210h] [rbp+108h]
  int *v78; // [rsp+218h] [rbp+110h]
  __int64 v79; // [rsp+220h] [rbp+118h]
  int *v80; // [rsp+228h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+128h]
  BOOL *v82; // [rsp+238h] [rbp+130h]
  __int64 v83; // [rsp+240h] [rbp+138h]
  __int64 *v84; // [rsp+248h] [rbp+140h]
  __int64 v85; // [rsp+250h] [rbp+148h]
  char v86[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v87; // [rsp+268h] [rbp+160h]
  __int64 v88; // [rsp+270h] [rbp+168h]
  int v89; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v90; // [rsp+2C0h] [rbp+1B8h] BYREF
  int v91; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v92; // [rsp+2D0h] [rbp+1C8h] BYREF

  v92 = a4;
  v91 = a3;
  v90 = a2;
  v89 = a1;
  v16 = a12 != 0;
  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = -1LL;
  do
    ++v13;
  while ( ProcessImageFileName[v13] );
  LODWORD(v13) = v13 + 1;
  v15 = v13;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v13) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION);
    if ( (_BYTE)v13 )
    {
      UserData.Ptr = (ULONGLONG)&v89;
      *(_QWORD *)&UserData.Size = 4LL;
      v32 = &v90;
      v33 = 4LL;
      v34 = &v91;
      v35 = 4LL;
      v36 = &v92;
      v38 = &a5;
      v40 = &a6;
      v42 = &a7;
      v44 = &a8;
      v46 = &a9;
      v48 = &a10;
      v50 = &a11;
      v52 = &v16;
      v54 = &v15;
      v57 = v15;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v56 = ProcessImageFileName;
      v58 = 0;
      LOBYTE(v13) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_EXECUTE_POWER_ACTION, 0LL, 0xEu, &UserData);
    }
  }
  if ( dword_140E07560 )
  {
    if ( (qword_140E07570 & 0x800000000000LL) != 0 )
    {
      v13 = qword_140E07578 & 0x800000000000LL;
      if ( (qword_140E07578 & 0x800000000000LL) == qword_140E07578
        && (unsigned int)dword_140E07560 > 5
        && v13 == qword_140E07578 )
      {
        v17 = v89;
        v61 = 4LL;
        v60 = &v17;
        v18 = v90;
        v62 = &v18;
        v19 = v91;
        v64 = &v19;
        v20 = v92;
        v66 = &v20;
        v21 = a5;
        v68 = &v21;
        v22 = a6;
        v70 = &v22;
        v23 = a7;
        v72 = &v23;
        v24 = a8;
        v74 = &v24;
        v25 = a9;
        v76 = &v25;
        v26 = a10;
        v78 = &v26;
        v27 = a11;
        v80 = &v27;
        v28 = v16;
        v82 = &v28;
        LODWORD(v29) = v15;
        v84 = &v29;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        tlgCreate1Sz_char((__int64)v86, ProcessImageFileName);
        v30 = 0x1000000LL;
        v87 = &v30;
        v88 = 8LL;
        LOBYTE(v13) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E07560,
                        (unsigned __int8 *)&dword_14004B59C,
                        0LL,
                        0LL,
                        0x11u,
                        &v59);
      }
    }
  }
  return v13;
}
