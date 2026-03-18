/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140065848
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x14006D134 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A56D4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140006E1C (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     GetImageTuple @ 0x1400A5444 (GetImageTuple.c)
 *     TakeTelemetryAssertsLock @ 0x1400A5708 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        unsigned int a2,
        const CHAR *a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ImageTuple; // eax
  __int64 v19; // r11
  __int64 v20; // r12
  int v21; // r14d
  unsigned int v22; // ebx
  struct _FAST_MUTEX *v23; // rcx
  const CHAR *v24; // rdi
  const CHAR *v25; // r9
  const CHAR *v26; // rdx
  KIRQL CurrentIrql; // al
  const CHAR *v28; // rax
  const CHAR *v29; // r9
  const CHAR *v30; // rdx
  KIRQL v31; // al
  const CHAR *v32; // rax
  int v33; // r15d
  const GUID *v34; // r9
  const GUID *v35; // r9
  ULONG v36; // r10d
  __int64 **v37; // rcx
  __int64 *v38; // rax
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch] BYREF
  int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+94h] [rbp-6Ch] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+A4h] [rbp-5Ch] BYREF
  int v60; // [rsp+A8h] [rbp-58h] BYREF
  int v61; // [rsp+ACh] [rbp-54h] BYREF
  int v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+B4h] [rbp-4Ch] BYREF
  int v64; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v65; // [rsp+BCh] [rbp-44h] BYREF
  int v66; // [rsp+C0h] [rbp-40h] BYREF
  int v67; // [rsp+C4h] [rbp-3Ch] BYREF
  int v68; // [rsp+C8h] [rbp-38h] BYREF
  const CHAR *v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v70; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+E0h] [rbp-20h] BYREF
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  int *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  unsigned int *v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  int *v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  char v80[16]; // [rsp+140h] [rbp+40h] BYREF
  int *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  unsigned int *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  int *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  char v87[16]; // [rsp+180h] [rbp+80h] BYREF
  int *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  int *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  int *v95; // [rsp+1E0h] [rbp+E0h]
  __int64 v96; // [rsp+1E8h] [rbp+E8h]
  int *v97; // [rsp+1F0h] [rbp+F0h]
  __int64 v98; // [rsp+1F8h] [rbp+F8h]
  int *v99; // [rsp+200h] [rbp+100h]
  __int64 v100; // [rsp+208h] [rbp+108h]
  char v101[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v102; // [rsp+220h] [rbp+120h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  const CHAR **v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  __int64 *v106; // [rsp+240h] [rbp+140h]
  __int64 v107; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+250h] [rbp+150h] BYREF
  int *v109; // [rsp+270h] [rbp+170h]
  __int64 v110; // [rsp+278h] [rbp+178h]
  int *v111; // [rsp+280h] [rbp+180h]
  __int64 v112; // [rsp+288h] [rbp+188h]
  int *v113; // [rsp+290h] [rbp+190h]
  __int64 v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  __int64 v116; // [rsp+2A8h] [rbp+1A8h]
  char v117[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v118; // [rsp+2C0h] [rbp+1C0h]
  __int64 v119; // [rsp+2C8h] [rbp+1C8h]
  int *v120; // [rsp+2D0h] [rbp+1D0h]
  __int64 v121; // [rsp+2D8h] [rbp+1D8h]
  int *v122; // [rsp+2E0h] [rbp+1E0h]
  __int64 v123; // [rsp+2E8h] [rbp+1E8h]
  char v124[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v125; // [rsp+300h] [rbp+200h]
  __int64 v126; // [rsp+308h] [rbp+208h]
  int *v127; // [rsp+310h] [rbp+210h]
  __int64 v128; // [rsp+318h] [rbp+218h]
  char v129[16]; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+330h] [rbp+230h] BYREF
  int *v131; // [rsp+350h] [rbp+250h]
  __int64 v132; // [rsp+358h] [rbp+258h]
  int *v133; // [rsp+360h] [rbp+260h]
  __int64 v134; // [rsp+368h] [rbp+268h]
  int *v135; // [rsp+370h] [rbp+270h]
  __int64 v136; // [rsp+378h] [rbp+278h]
  int *v137; // [rsp+380h] [rbp+280h]
  __int64 v138; // [rsp+388h] [rbp+288h]
  char v139[16]; // [rsp+390h] [rbp+290h] BYREF
  int *v140; // [rsp+3A0h] [rbp+2A0h]
  __int64 v141; // [rsp+3A8h] [rbp+2A8h]
  int *v142; // [rsp+3B0h] [rbp+2B0h]
  __int64 v143; // [rsp+3B8h] [rbp+2B8h]
  int *v144; // [rsp+3C0h] [rbp+2C0h]
  __int64 v145; // [rsp+3C8h] [rbp+2C8h]
  char v146[16]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v45 = a6;
  v43 = a4;
  v42 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && !(unsigned int)TakeTelemetryAssertsLock() )
  {
    v8 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v9 = *v8;
      v8 = (__int64 **)v9;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v9 )
        break;
      v10 = v9 - 4;
      if ( *(v9 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_55;
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v10[2] = 0LL;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
LABEL_11:
    ++*((_DWORD *)v10 + 4);
    ++*((_DWORD *)v10 + 5);
    v16 = MEMORY[0xFFFFF78000000320];
    v17 = v16 * KeQueryTimeIncrement();
    v40 = 0;
    v39 = 0;
    if ( (unsigned __int64)(v17 / 10000 - v10[1]) <= 0xEA60 )
    {
LABEL_55:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    ImageTuple = GetImageTuple(v17, &v40, &v39);
    v20 = v39;
    v21 = ImageTuple;
    if ( ImageTuple
      && a1 >= 0x140000000LL
      && 0x140000000LL + (unsigned __int64)v39 > 0x140000000LL
      && a1 <= 0x140000000LL + (unsigned __int64)v39 )
    {
      v22 = a1 - 0x40000000;
    }
    else
    {
      v22 = 0;
    }
    v23 = g_AssertFastMutex;
    v41 = *((_DWORD *)v10 + 4);
    v39 = *((_DWORD *)v10 + 5);
    v44 = *((_DWORD *)v10 + 6);
    v10[1] = v19;
    ExReleaseFastMutex(v23);
    v24 = "<unknown>";
    if ( !a3 )
      a3 = (const CHAR *)g_ModuleName;
    v69 = a3;
    if ( v42 )
    {
      if ( (unsigned int)dword_14018A078 > 5 && tlgKeywordOn((__int64)&dword_14018A078, 0x400000000000LL) )
      {
        v60 = 10;
        v109 = &v60;
        v26 = "<unknown>";
        v110 = 4LL;
        v111 = (int *)&v70;
        v70 = v22;
        v112 = 4LL;
        v113 = &v46;
        v46 = v21 != 0 ? v40 : 0;
        v114 = 4LL;
        v115 = &v47;
        v116 = 4LL;
        v47 = v21 != 0 ? v20 : 0;
        if ( v25 )
          v26 = v25;
        tlgCreate1Sz_char((__int64)v117, v26);
        v118 = &v48;
        v49 = v39;
        v120 = (int *)&v49;
        v48 = v41;
        v119 = 4LL;
        v121 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v123 = 4LL;
        v50 = CurrentIrql;
        v122 = &v50;
        tlgCreate1Sz_char((__int64)v124, a3);
        v125 = &v51;
        v52 = a5;
        v127 = &v52;
        v28 = (const CHAR *)v45;
        v51 = v43;
        v126 = 4LL;
        if ( !v45 )
          v28 = "<unknown>";
        v128 = 4LL;
        tlgCreate1Sz_char((__int64)v129, v28);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14018A078, byte_140146C40, 0LL, 0LL, 0xEu, &v108);
      }
    }
    else if ( (unsigned int)dword_14018A078 > 5 && tlgKeywordOn((__int64)&dword_14018A078, 0x400000000000LL) )
    {
      v53 = 10;
      v131 = &v53;
      v30 = "<unknown>";
      v132 = 4LL;
      v133 = (int *)&v54;
      v54 = v22;
      v134 = 4LL;
      v135 = &v55;
      v55 = v21 != 0 ? v40 : 0;
      v136 = 4LL;
      v137 = &v56;
      v138 = 4LL;
      v56 = v21 != 0 ? v20 : 0;
      if ( v29 )
        v30 = v29;
      tlgCreate1Sz_char((__int64)v139, v30);
      v140 = &v57;
      v58 = v39;
      v142 = (int *)&v58;
      v57 = v41;
      v141 = 4LL;
      v143 = 4LL;
      v31 = KeGetCurrentIrql();
      v145 = 4LL;
      v59 = v31;
      v144 = &v59;
      v32 = (const CHAR *)v45;
      if ( !v45 )
        v32 = "<unknown>";
      tlgCreate1Sz_char((__int64)v146, v32);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14018A078, byte_140146CEA, 0LL, 0LL, 0xBu, &v130);
    }
    if ( dword_14018A040 && !v44 && !KeGetCurrentIrql() )
    {
      v33 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v40, v20, 0LL, 0LL, 0);
      if ( v42 )
      {
        if ( (unsigned int)dword_14018A078 > 5 && tlgKeywordOn((__int64)&dword_14018A078, 0x400000000000LL) )
        {
          v44 = 10;
          v72 = &v44;
          v74 = (int *)&v42;
          v73 = 4LL;
          v42 = v22;
          v76 = &v40;
          v40 &= -(v21 != 0);
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v61 = v21 != 0 ? v20 : 0;
          v78 = &v61;
          if ( g_ModuleName )
            v24 = (const CHAR *)g_ModuleName;
          tlgCreate1Sz_char((__int64)v80, v24);
          v81 = &v41;
          v83 = &v39;
          v85 = &v62;
          v82 = 4LL;
          v84 = 4LL;
          v62 = v33;
          v86 = 4LL;
          tlgCreate1Sz_char((__int64)v87, v69);
          v88 = &v43;
          v63 = a5;
          v90 = &v63;
          v89 = 4LL;
          v91 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14018A078, byte_140146D57, 0LL, v34, 0xDu, &v71);
        }
      }
      else if ( (unsigned int)dword_14018A078 > 5 && tlgKeywordOn((__int64)&dword_14018A078, 0x400000000000LL) )
      {
        v94 = 4LL;
        v93 = &v64;
        v64 = 10;
        v95 = (int *)&v65;
        v65 = v22;
        v96 = 4LL;
        v97 = &v66;
        v66 = v21 != 0 ? v40 : 0;
        v98 = 4LL;
        v100 = 4LL;
        v67 = v21 != 0 ? v20 : 0;
        v99 = &v67;
        if ( g_ModuleName )
          v24 = (const CHAR *)g_ModuleName;
        tlgCreate1Sz_char((__int64)v101, v24);
        v68 = v41;
        v102 = &v68;
        LODWORD(v69) = v39;
        v104 = &v69;
        v106 = &v45;
        v103 = 4LL;
        v105 = 4LL;
        LODWORD(v45) = v33;
        v107 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14018A078, byte_140146DFD, 0LL, v35, v36, &v92);
      }
      if ( !v33 && !(unsigned int)TakeTelemetryAssertsLock() )
      {
        v37 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v38 = *v37;
          v37 = (__int64 **)v38;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v38 )
            goto LABEL_55;
          if ( *(v38 - 4) == a1 )
          {
            ++*((_DWORD *)v38 - 2);
            goto LABEL_55;
          }
        }
      }
    }
  }
}
