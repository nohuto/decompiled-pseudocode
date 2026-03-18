/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14020428C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14034207C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14020FD78 (_tlgCreate1Sz_char.c)
 *     TakeTelemetryAssertsLock @ 0x14021A760 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        void *a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  __int64 *v8; // rax
  __int64 *v9; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int16 v17; // cx
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  unsigned __int64 v20; // rcx
  int v21; // r12d
  struct _FAST_MUTEX *v22; // rcx
  int v23; // r13d
  PVOID v24; // rax
  const char *v25; // rdi
  const char *v26; // r9
  const char *v27; // rdx
  KIRQL CurrentIrql; // al
  int v29; // r8d
  const char *v30; // rax
  const char *v31; // r9
  const char *v32; // rdx
  KIRQL v33; // al
  const char *v34; // rax
  int v35; // r12d
  const GUID *v36; // r9
  const GUID *v37; // r9
  ULONG v38; // r10d
  __int64 *v39; // rax
  int v42; // [rsp+58h] [rbp-A8h]
  PVOID v44; // [rsp+60h] [rbp-A0h]
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+7Ch] [rbp-84h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+94h] [rbp-6Ch] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A4h] [rbp-5Ch]
  int v61; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v63; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+B4h] [rbp-4Ch] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  int v66; // [rsp+BCh] [rbp-44h] BYREF
  int v67; // [rsp+C0h] [rbp-40h] BYREF
  int v68; // [rsp+C4h] [rbp-3Ch] BYREF
  int v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v71; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned int v73; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+DCh] [rbp-24h] BYREF
  int v75; // [rsp+E0h] [rbp-20h] BYREF
  int v76; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v77; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+100h] [rbp+0h] BYREF
  int *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  int *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  int *v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  int *v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  _BYTE v88[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  int *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  int *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  _BYTE v95[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  int *v98; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  int *v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h]
  int *v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]
  int *v107; // [rsp+220h] [rbp+120h]
  __int64 v108; // [rsp+228h] [rbp+128h]
  _BYTE v109[16]; // [rsp+230h] [rbp+130h] BYREF
  int *v110; // [rsp+240h] [rbp+140h]
  __int64 v111; // [rsp+248h] [rbp+148h]
  int *v112; // [rsp+250h] [rbp+150h]
  __int64 v113; // [rsp+258h] [rbp+158h]
  int *v114; // [rsp+260h] [rbp+160h]
  __int64 v115; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+270h] [rbp+170h] BYREF
  int *v117; // [rsp+290h] [rbp+190h]
  __int64 v118; // [rsp+298h] [rbp+198h]
  int *v119; // [rsp+2A0h] [rbp+1A0h]
  __int64 v120; // [rsp+2A8h] [rbp+1A8h]
  int *v121; // [rsp+2B0h] [rbp+1B0h]
  __int64 v122; // [rsp+2B8h] [rbp+1B8h]
  int *v123; // [rsp+2C0h] [rbp+1C0h]
  __int64 v124; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v125[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v126; // [rsp+2E0h] [rbp+1E0h]
  __int64 v127; // [rsp+2E8h] [rbp+1E8h]
  int *v128; // [rsp+2F0h] [rbp+1F0h]
  __int64 v129; // [rsp+2F8h] [rbp+1F8h]
  int *v130; // [rsp+300h] [rbp+200h]
  int v131; // [rsp+308h] [rbp+208h]
  int v132; // [rsp+30Ch] [rbp+20Ch]
  _BYTE v133[16]; // [rsp+310h] [rbp+210h] BYREF
  int *v134; // [rsp+320h] [rbp+220h]
  int v135; // [rsp+328h] [rbp+228h]
  int v136; // [rsp+32Ch] [rbp+22Ch]
  int *v137; // [rsp+330h] [rbp+230h]
  int v138; // [rsp+338h] [rbp+238h]
  int v139; // [rsp+33Ch] [rbp+23Ch]
  _BYTE v140[16]; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+350h] [rbp+250h] BYREF
  int *v142; // [rsp+370h] [rbp+270h]
  __int64 v143; // [rsp+378h] [rbp+278h]
  int *v144; // [rsp+380h] [rbp+280h]
  __int64 v145; // [rsp+388h] [rbp+288h]
  int *v146; // [rsp+390h] [rbp+290h]
  __int64 v147; // [rsp+398h] [rbp+298h]
  int *v148; // [rsp+3A0h] [rbp+2A0h]
  __int64 v149; // [rsp+3A8h] [rbp+2A8h]
  _BYTE v150[16]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v151; // [rsp+3C0h] [rbp+2C0h]
  __int64 v152; // [rsp+3C8h] [rbp+2C8h]
  int *v153; // [rsp+3D0h] [rbp+2D0h]
  __int64 v154; // [rsp+3D8h] [rbp+2D8h]
  int *v155; // [rsp+3E0h] [rbp+2E0h]
  int v156; // [rsp+3E8h] [rbp+2E8h]
  int v157; // [rsp+3ECh] [rbp+2ECh]
  _BYTE v158[16]; // [rsp+3F0h] [rbp+2F0h] BYREF

  v6 = 0;
  v78 = a6;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && KeGetCurrentIrql() <= 1u )
  {
    ExAcquireFastMutex(g_AssertFastMutex);
    v8 = &g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v8 = (__int64 *)*v8;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
        break;
      v9 = v8 - 4;
      if ( *(v8 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v9 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_57;
    v11 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v9[2] = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    v9[1] = ((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v13 = v9 + 4;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    v9[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v14 + 8) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v9 + 4);
LABEL_11:
    ++*((_DWORD *)v9 + 4);
    ++*((_DWORD *)v9 + 5);
    v15 = MEMORY[0xFFFFF78000000320];
    v16 = v15 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v16 - v9[1]) <= 0xEA60 )
    {
LABEL_57:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v17 = *(_WORD *)(0x140000018LL + MEMORY[0x14000003C]);
    if ( v17 == 267 || v17 == 523 )
    {
      v18 = *(_DWORD *)(0x140000008LL + MEMORY[0x14000003C]);
      v19 = *(_DWORD *)(0x140000050LL + MEMORY[0x14000003C]);
    }
    else
    {
      v18 = 0;
      v19 = 0;
    }
    if ( a1 >= 0x140000000LL )
    {
      v20 = 0x140000000LL + v19;
      if ( v20 > 0x140000000LL && a1 <= v20 )
        v6 = a1 - 0x40000000;
    }
    v21 = *((_DWORD *)v9 + 5);
    v22 = g_AssertFastMutex;
    v23 = *((_DWORD *)v9 + 4);
    v42 = v21;
    v60 = *((_DWORD *)v9 + 6);
    v9[1] = v16;
    ExReleaseFastMutex(v22);
    v24 = a3;
    v25 = "<unknown>";
    if ( !a3 )
      v24 = g_ModuleName;
    v44 = v24;
    if ( a2 )
    {
      if ( (unsigned int)dword_1403D2040 > 5 && tlgKeywordOn((__int64)&dword_1403D2040, 0x400000000000LL) )
      {
        v72 = 10;
        v117 = &v72;
        v118 = 4LL;
        v119 = (int *)&v45;
        v45 = v6;
        v121 = (int *)&v46;
        v27 = "<unknown>";
        v120 = 4LL;
        if ( v26 )
          v27 = v26;
        v123 = (int *)&v47;
        v46 = v18;
        v122 = 4LL;
        v47 = v19;
        v124 = 4LL;
        tlgCreate1Sz_char(v125, v27);
        v48 = v23;
        v126 = &v48;
        v128 = &v49;
        v127 = 4LL;
        v49 = v21;
        v129 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v132 = 0;
        v50 = CurrentIrql;
        v130 = &v50;
        v131 = 4;
        tlgCreate1Sz_char(v133, v44);
        v136 = 0;
        v139 = 0;
        v134 = &v51;
        v52 = a5;
        v137 = &v52;
        v30 = (const char *)v78;
        v51 = a4;
        v135 = v29;
        if ( !v78 )
          v30 = "<unknown>";
        v138 = v29;
        tlgCreate1Sz_char(v140, v30);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403D2040, byte_14036C4D6, 0LL, 0LL, 0xEu, &v116);
      }
    }
    else if ( (unsigned int)dword_1403D2040 > 5 && tlgKeywordOn((__int64)&dword_1403D2040, 0x400000000000LL) )
    {
      v53 = 10;
      v142 = &v53;
      v143 = 4LL;
      v144 = (int *)&v54;
      v54 = v6;
      v146 = (int *)&v55;
      v32 = "<unknown>";
      v145 = 4LL;
      if ( v31 )
        v32 = v31;
      v148 = (int *)&v56;
      v55 = v18;
      v147 = 4LL;
      v56 = v19;
      v149 = 4LL;
      tlgCreate1Sz_char(v150, v32);
      v57 = v23;
      v151 = &v57;
      v153 = &v58;
      v152 = 4LL;
      v58 = v21;
      v154 = 4LL;
      v33 = KeGetCurrentIrql();
      v157 = 0;
      v59 = v33;
      v155 = &v59;
      v34 = (const char *)v78;
      v156 = 4;
      if ( !v78 )
        v34 = "<unknown>";
      tlgCreate1Sz_char(v158, v34);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403D2040, byte_14036C580, 0LL, 0LL, 0xBu, &v141);
    }
    if ( dword_1403D2078 && !v60 && !KeGetCurrentIrql() )
    {
      v35 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v6, g_ModuleName, v18, v19, 0LL, 0LL, 0);
      if ( a2 )
      {
        if ( (unsigned int)dword_1403D2040 > 5 && tlgKeywordOn((__int64)&dword_1403D2040, 0x400000000000LL) )
        {
          v61 = 10;
          v80 = &v61;
          v81 = 4LL;
          v82 = (int *)&v62;
          v84 = (int *)&v63;
          v86 = (int *)&v64;
          v62 = v6;
          v83 = 4LL;
          if ( g_ModuleName )
            v25 = (const char *)g_ModuleName;
          v63 = v18;
          v85 = 4LL;
          v64 = v19;
          v87 = 4LL;
          tlgCreate1Sz_char(v88, v25);
          v89 = &v65;
          v66 = v42;
          v91 = &v66;
          v93 = &v67;
          v65 = v23;
          v90 = 4LL;
          v92 = 4LL;
          v67 = v35;
          v94 = 4LL;
          tlgCreate1Sz_char(v95, v44);
          v68 = a4;
          v96 = &v68;
          v69 = a5;
          v98 = &v69;
          v97 = 4LL;
          v99 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403D2040, byte_14036C5ED, 0LL, v36, 0xDu, &v79);
        }
      }
      else if ( (unsigned int)dword_1403D2040 > 5 && tlgKeywordOn((__int64)&dword_1403D2040, 0x400000000000LL) )
      {
        v102 = 4LL;
        v101 = &v70;
        v71 = v6;
        v103 = (int *)&v71;
        v70 = 10;
        v105 = (int *)&v77;
        v107 = (int *)&v73;
        v104 = 4LL;
        v77 = v18;
        if ( g_ModuleName )
          v25 = (const char *)g_ModuleName;
        v106 = 4LL;
        v73 = v19;
        v108 = 4LL;
        tlgCreate1Sz_char(v109, v25);
        v74 = v23;
        v110 = &v74;
        v75 = v42;
        v112 = &v75;
        v114 = &v76;
        v111 = 4LL;
        v113 = 4LL;
        v76 = v35;
        v115 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403D2040, byte_14036C693, 0LL, v37, v38, &v100);
      }
      if ( !v35 && !(unsigned int)TakeTelemetryAssertsLock() )
      {
        v39 = &g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v39 = (__int64 *)*v39;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v39 )
            goto LABEL_57;
          if ( *(v39 - 4) == a1 )
          {
            ++*((_DWORD *)v39 - 2);
            goto LABEL_57;
          }
        }
      }
    }
  }
}
