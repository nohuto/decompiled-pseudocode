/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1400BF840
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14024A64C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x1400C022C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const char *a6)
{
  const char *v6; // r12
  unsigned int v7; // esi
  __int64 **v10; // rcx
  __int64 *v11; // rax
  unsigned __int64 *Pool2; // rax
  __int64 *v13; // rdi
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int16 v20; // cx
  unsigned int v21; // r15d
  unsigned int v22; // ebx
  __int64 **v23; // rcx
  __int64 *v24; // rax
  struct _FAST_MUTEX *v25; // rcx
  const char *v26; // rdi
  const char *v27; // rdx
  KIRQL CurrentIrql; // al
  int v29; // r12d
  ULONGLONG v30; // r10
  LPCGUID v31; // r8
  unsigned __int64 v32; // rcx
  const char *v33; // r8
  unsigned int v34; // r11d
  const char *v35; // rdx
  KIRQL v36; // al
  __int64 v37; // r8
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+74h] [rbp-8Ch] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+94h] [rbp-6Ch] BYREF
  int v54; // [rsp+9Ch] [rbp-64h] BYREF
  int v55; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v57; // [rsp+A8h] [rbp-58h] BYREF
  int v58; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v59; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v61; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v63; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C4h] [rbp-3Ch] BYREF
  int v65; // [rsp+CCh] [rbp-34h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v67; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+F0h] [rbp-10h] BYREF
  void *v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+108h] [rbp+8h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  int *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  int *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  int *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  char v80[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  char *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  int *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+190h] [rbp+90h] BYREF
  void *v88; // [rsp+1A0h] [rbp+A0h]
  int v89; // [rsp+1A8h] [rbp+A8h]
  int v90; // [rsp+1ACh] [rbp+ACh]
  int *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  int *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]
  int *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  int *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  char v99[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  char *v102; // [rsp+210h] [rbp+110h]
  __int64 v103; // [rsp+218h] [rbp+118h]
  int *v104; // [rsp+220h] [rbp+120h]
  __int64 v105; // [rsp+228h] [rbp+128h]
  char v106[16]; // [rsp+230h] [rbp+130h] BYREF
  int *v107; // [rsp+240h] [rbp+140h]
  __int64 v108; // [rsp+248h] [rbp+148h]
  int *v109; // [rsp+250h] [rbp+150h]
  __int64 v110; // [rsp+258h] [rbp+158h]
  char v111[16]; // [rsp+260h] [rbp+160h] BYREF
  char v112[32]; // [rsp+270h] [rbp+170h] BYREF
  int *v113; // [rsp+290h] [rbp+190h]
  __int64 v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  __int64 v116; // [rsp+2A8h] [rbp+1A8h]
  int *v117; // [rsp+2B0h] [rbp+1B0h]
  __int64 v118; // [rsp+2B8h] [rbp+1B8h]
  int *v119; // [rsp+2C0h] [rbp+1C0h]
  __int64 v120; // [rsp+2C8h] [rbp+1C8h]
  char v121[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 *v122; // [rsp+2E0h] [rbp+1E0h]
  __int64 v123; // [rsp+2E8h] [rbp+1E8h]
  char *v124; // [rsp+2F0h] [rbp+1F0h]
  __int64 v125; // [rsp+2F8h] [rbp+1F8h]
  int *v126; // [rsp+300h] [rbp+200h]
  __int64 v127; // [rsp+308h] [rbp+208h]
  char v128[16]; // [rsp+310h] [rbp+210h] BYREF
  int *v129; // [rsp+320h] [rbp+220h]
  __int64 v130; // [rsp+328h] [rbp+228h]
  unsigned int *v131; // [rsp+330h] [rbp+230h]
  __int64 v132; // [rsp+338h] [rbp+238h]
  char v133[32]; // [rsp+340h] [rbp+240h] BYREF
  unsigned int *v134; // [rsp+360h] [rbp+260h]
  __int64 v135; // [rsp+368h] [rbp+268h]
  int *v136; // [rsp+370h] [rbp+270h]
  __int64 v137; // [rsp+378h] [rbp+278h]
  int *v138; // [rsp+380h] [rbp+280h]
  __int64 v139; // [rsp+388h] [rbp+288h]
  int *v140; // [rsp+390h] [rbp+290h]
  __int64 v141; // [rsp+398h] [rbp+298h]
  char v142[16]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 *v143; // [rsp+3B0h] [rbp+2B0h]
  __int64 v144; // [rsp+3B8h] [rbp+2B8h]
  char *v145; // [rsp+3C0h] [rbp+2C0h]
  __int64 v146; // [rsp+3C8h] [rbp+2C8h]
  int *v147; // [rsp+3D0h] [rbp+2D0h]
  __int64 v148; // [rsp+3D8h] [rbp+2D8h]
  char v149[16]; // [rsp+3E0h] [rbp+2E0h] BYREF

  v6 = a6;
  v7 = 0;
  v40 = a4;
  v39 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && KeGetCurrentIrql() <= 1u )
  {
    ExAcquireFastMutex(g_AssertFastMutex);
    v10 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v11 = *v10;
      v10 = (__int64 **)v11;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v11 )
        break;
      v13 = v11 - 4;
      if ( *(v11 - 4) == a1 )
        goto LABEL_10;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v13 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_19;
    v14 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v13[2] = 0LL;
    *((_DWORD *)v13 + 6) = 0;
    v13[1] = ((__int64)((unsigned __int128)(v14 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v14 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v16 = v13 + 4;
    v17 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    v13[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v17 + 8) = v16;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v13 + 4);
LABEL_10:
    ++*((_DWORD *)v13 + 4);
    ++*((_DWORD *)v13 + 5);
    v18 = MEMORY[0xFFFFF78000000320];
    v19 = v18 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v19 - v13[1]) <= 0xEA60 )
    {
LABEL_19:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v20 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
    if ( v20 == 267 || v20 == 523 )
    {
      v21 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
      v22 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    }
    else
    {
      v21 = 0;
      v22 = 0;
    }
    if ( a1 >= 0x140000000LL )
    {
      v32 = 0x140000000LL + v22;
      if ( v32 > 0x140000000LL && a1 <= v32 )
        v7 = a1 - 0x40000000;
    }
    v25 = g_AssertFastMutex;
    v38 = v13[2];
    v42 = *((_DWORD *)v13 + 6);
    v13[1] = v19;
    ExReleaseFastMutex(v25);
    v26 = "<unknown>";
    if ( !a3 )
      a3 = g_ModuleName;
    if ( v39 )
    {
      if ( (unsigned int)dword_1402D1040 > 5
        && (qword_1402D1050 & 0x400000000000LL) != 0
        && (qword_1402D1058 & 0x400000000000LL) == qword_1402D1058 )
      {
        v55 = 10;
        v91 = &v55;
        v92 = 4LL;
        v93 = (int *)&v59;
        v59 = v7;
        v95 = (int *)&v44;
        v27 = "<unknown>";
        v94 = 4LL;
        if ( g_ModuleName )
          v27 = (const char *)g_ModuleName;
        v97 = (int *)&v45;
        v44 = v21;
        v96 = 4LL;
        v45 = v22;
        v98 = 4LL;
        tlgCreate1Sz_char(v99, v27);
        v100 = &v46;
        v102 = (char *)&v46 + 4;
        v46 = v38;
        v101 = 4LL;
        v103 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v105 = 4LL;
        v47 = CurrentIrql;
        v104 = &v47;
        tlgCreate1Sz_char(v106, a3);
        v107 = &v48;
        v49 = a5;
        if ( !a6 )
          v6 = "<unknown>";
        v48 = v40;
        v109 = &v49;
        v108 = 4LL;
        v110 = 4LL;
        tlgCreate1Sz_char(v111, v6);
        *(_DWORD *)&EventDescriptor.Level = 5;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_1402D1048;
        UserData.Size = *(unsigned __int16 *)off_1402D1048;
        v88 = &unk_14028EAD2;
        UserData.Reserved = 2;
        v89 = 158;
        v90 = 1;
        v41 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(qword_1402D1060, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
      }
    }
    else if ( (unsigned int)dword_1402D1040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402D1040, 0x400000000000LL) )
    {
      v41 = v34;
      v134 = &v41;
      v135 = 4LL;
      v136 = (int *)&v50;
      v50 = v7;
      v138 = (int *)&v51;
      v35 = "<unknown>";
      v137 = 4LL;
      if ( v33 )
        v35 = v33;
      v140 = (int *)&v52;
      v51 = v21;
      v139 = 4LL;
      v52 = v22;
      v141 = 4LL;
      tlgCreate1Sz_char(v142, v35);
      v143 = &v53;
      v145 = (char *)&v53 + 4;
      v53 = v38;
      v144 = 4LL;
      v146 = 4LL;
      v36 = KeGetCurrentIrql();
      v148 = 4LL;
      v54 = v36;
      if ( !a6 )
        v6 = "<unknown>";
      v147 = &v54;
      tlgCreate1Sz_char(v149, v6);
      tlgWriteTransfer_EtwWriteTransfer(&dword_1402D1040, &unk_14028EBDA, 0LL, 0LL, 11, v133);
    }
    if ( dword_1402D1078 && !v42 && !KeGetCurrentIrql() )
    {
      v29 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v7, g_ModuleName, v21, v22, 0LL, 0LL, 0);
      if ( v39 )
      {
        if ( (unsigned int)dword_1402D1040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402D1040, 0x400000000000LL) )
        {
          v42 = 10;
          v113 = &v42;
          v114 = 4LL;
          v115 = (int *)&v39;
          v117 = (int *)&v56;
          v119 = (int *)&v57;
          v39 = v7;
          v116 = 4LL;
          if ( g_ModuleName )
            v26 = (const char *)g_ModuleName;
          v56 = v21;
          v118 = 4LL;
          v57 = v22;
          v120 = 4LL;
          tlgCreate1Sz_char(v121, v26);
          v123 = 4LL;
          v122 = &v38;
          v124 = (char *)&v38 + 4;
          v126 = &v58;
          v125 = 4LL;
          v58 = v29;
          v127 = 4LL;
          tlgCreate1Sz_char(v128, a3);
          v130 = 4LL;
          v129 = &v40;
          v43 = a5;
          v131 = &v43;
          v132 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_1402D1040, &unk_14028EC47, v37, 0LL, 13, v112);
        }
      }
      else if ( (unsigned int)dword_1402D1040 > 5
             && (qword_1402D1050 & 0x400000000000LL) != 0
             && (qword_1402D1058 & 0x400000000000LL) == qword_1402D1058 )
      {
        v60 = 10;
        v72 = &v60;
        v73 = 4LL;
        v74 = (int *)&v61;
        v76 = (int *)&v62;
        v78 = (int *)&v63;
        v61 = v7;
        v75 = 4LL;
        if ( g_ModuleName )
          v26 = (const char *)g_ModuleName;
        v62 = v21;
        v77 = 4LL;
        v63 = v22;
        v79 = 4LL;
        tlgCreate1Sz_char(v80, v26);
        v64 = v38;
        v82 = 4LL;
        v81 = &v64;
        v83 = (char *)&v64 + 4;
        v85 = &v65;
        *(_DWORD *)&v67.Level = 5;
        v68.Ptr = (ULONGLONG)off_1402D1048;
        v84 = 4LL;
        v65 = v29;
        v86 = 4LL;
        *(_DWORD *)&v67.Id = 184549376;
        v67.Keyword = v30;
        v68.Size = *(unsigned __int16 *)off_1402D1048;
        v69 = &unk_14028EB7C;
        v68.Reserved = 2;
        v70 = 93;
        v71 = 1;
        v43 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(qword_1402D1060, &v67, v31, 0LL, 0xAu, &v68);
      }
      if ( !v29 && KeGetCurrentIrql() <= 1u )
      {
        ExAcquireFastMutex(g_AssertFastMutex);
        v23 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v24 = *v23;
          v23 = (__int64 **)v24;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v24 )
            goto LABEL_19;
          if ( *(v24 - 4) == a1 )
          {
            ++*((_DWORD *)v24 - 2);
            goto LABEL_19;
          }
        }
      }
    }
  }
}
