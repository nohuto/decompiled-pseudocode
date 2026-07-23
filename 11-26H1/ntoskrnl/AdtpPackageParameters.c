/*
 * XREFs of AdtpPackageParameters @ 0x14046EBC0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14046E82C (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AAA894 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x14046F5A4 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x14046F5C0 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildSidListString @ 0x140896560 (AdtpBuildSidListString.c)
 *     AdtpBuildUserAccountControlString @ 0x140896A40 (AdtpBuildUserAccountControlString.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     AdtpSubstituteDriveLetter @ 0x140979DD4 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     AdtpBuildMessageString @ 0x140A94678 (AdtpBuildMessageString.c)
 *     AdtpEtwBuildString @ 0x140A94768 (AdtpEtwBuildString.c)
 *     AdtpBuildLogonIdStrings @ 0x140A9B464 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A9EAD0 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A9EBA0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSockAddrString @ 0x140AA9814 (AdtpBuildSockAddrString.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140AE50FC (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildUlongString @ 0x140B1256C (AdtpBuildUlongString.c)
 *     AdtpEtwBuildDashString @ 0x140B32F30 (AdtpEtwBuildDashString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140B5EC24 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildStringListString @ 0x140B6227C (AdtpBuildStringListString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r12
  __int64 v10; // r11
  unsigned __int16 v11; // r15
  unsigned int v12; // r13d
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int *p_ForegroundLossTime; // r9
  int *v17; // r14
  int v18; // edi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  int v21; // edx
  int v22; // r11d
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned __int8 **v32; // rdx
  int v33; // eax
  unsigned __int8 *v34; // r8
  char v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned __int16 v40; // r12
  __int64 v41; // r11
  __int64 v42; // r8
  unsigned __int16 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int16 *v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int16 *v55; // rdi
  unsigned __int16 v56; // r12
  int v57; // ecx
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int8 *v63; // rdi
  __int64 v64; // rdx
  unsigned int v65; // ecx
  __int64 v66; // rax
  void *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int *v70; // r10
  unsigned int v71; // ecx
  unsigned int v72; // eax
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // r8
  unsigned int v76; // r15d
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // r10
  unsigned int v80; // eax
  __int64 v81; // r10
  unsigned __int16 *v82; // rdi
  int v83; // ecx
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  ULONG v90; // ecx
  __int64 v91; // r9
  unsigned __int16 *v92; // rdx
  __int64 v93; // r10
  __int64 v94; // rdi
  int v95; // ecx
  __int64 v96; // rax
  __int64 v97; // rcx
  int v98; // r8d
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  int v103; // ecx
  __int64 v104; // r8
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-69h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h]
  char v107; // [rsp+60h] [rbp-29h] BYREF
  int v108; // [rsp+64h] [rbp-25h]
  __int64 v109; // [rsp+68h] [rbp-21h] BYREF
  __int64 v110; // [rsp+70h] [rbp-19h]
  unsigned __int8 *v111; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int16 *v112; // [rsp+80h] [rbp-9h]
  __int64 v113; // [rsp+D0h] [rbp+47h] BYREF
  unsigned int v114; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v115; // [rsp+E8h] [rbp+5Fh]

  v115 = a4;
  v114 = a3;
  v8 = 0;
  v9 = 0;
  v108 = 0;
  v10 = a4;
  LODWORD(v109) = 0;
  v11 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v108 = -1073741811;
      goto LABEL_28;
    }
    v12 = *(_DWORD *)(a1 + 8);
    v13 = a1 + 24;
  }
  else
  {
    if ( !a2 )
    {
LABEL_26:
      v108 = -1073741811;
      goto LABEL_27;
    }
    v12 = *(_DWORD *)(a2 + 12);
    v13 = a2 + 32;
  }
  v110 = v13;
  v14 = 0x140000000uLL;
  v15 = 2;
  p_ForegroundLossTime = &PspSiloMonitorLock.ForegroundLossTime;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_5:
      if ( v15 >= v12 )
        goto LABEL_27;
      if ( v9 >= 0xEu || v11 >= 0x2Au )
        goto LABEL_26;
      v17 = (int *)(v13 + 32LL * v15);
      v18 = *v17;
      if ( *v17 == 1 )
      {
        if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*((_QWORD *)v17 + 3)) )
          goto LABEL_26;
        v23 = v22;
        goto LABEL_16;
      }
      if ( v18 != 2 )
        break;
      v25 = *((_QWORD *)v17 + 3);
      if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v25) )
        goto LABEL_26;
      AdtpSubstituteDriveLetter();
      v23 = v115;
      v21 = v25;
LABEL_16:
      v24 = AdtpEtwBuildString((unsigned int)a6 + 16 * v11, v21, v23, (unsigned int)&v109, v11 + a8);
LABEL_17:
      v108 = v24;
      if ( v24 < 0 )
        goto LABEL_27;
LABEL_18:
      v10 = v115;
      p_ForegroundLossTime = &PspSiloMonitorLock.ForegroundLossTime;
LABEL_19:
      v14 = 0x140000000uLL;
      ++v11;
LABEL_20:
      ++v15;
    }
    if ( v18 != 14 )
      break;
LABEL_23:
    v26 = v11++;
    v27 = (_QWORD *)(16 * v26 + a6);
    ++v15;
    *v27 = v17 + 2;
    v27[1] = 8LL;
  }
  if ( v18 == 33 )
  {
LABEL_29:
    v32 = &v111;
    LOBYTE(v114) = 0;
    v112 = (unsigned __int16 *)(16LL * v9 + a5);
    LOBYTE(v113) = 0;
    v107 = 0;
    v111 = 0LL;
    if ( v18 != 35 )
      v32 = 0LL;
    DestinationString = (PUNICODE_STRING)&v107;
    Destination = (PUNICODE_STRING)&v113;
    v33 = AdtpBuildLogonIdStrings(v17 + 2, v32, &v114, 16LL * v9 + a5);
    v108 = v33;
    if ( v18 == 35 )
    {
      v35 = v114;
      v34 = v111;
    }
    else
    {
      v34 = *(unsigned __int8 **)(v13 + 24);
      v35 = 0;
    }
    if ( v33 < 0 )
      goto LABEL_27;
    if ( *v17 == 5 || *v17 == 35 )
    {
      if ( !v34 )
      {
        v34 = (unsigned __int8 *)&PspSiloMonitorLock.ForegroundLossTime;
        v35 = 0;
      }
    }
    else
    {
      if ( v18 != 33 )
      {
        if ( v35 && v34 )
          ExFreePoolWithTag(v34, 0);
        v36 = a6;
        goto LABEL_38;
      }
      v34 = (unsigned __int8 *)*((_QWORD *)v17 + 3);
    }
    v36 = a6;
    v37 = v11;
    v38 = 4 * v34[1] + 8;
    v39 = 2LL * v11++;
    *(_QWORD *)(a6 + 8 * v39) = v34;
    *(_QWORD *)(v36 + 8 * v39 + 8) = v38;
    *(_BYTE *)(v37 + a8) = v35;
LABEL_38:
    v40 = v9 + 1;
    v41 = a8;
    v42 = v11;
    v43 = v11 + 1;
    v44 = 2LL * (unsigned int)v42;
    v45 = *((_QWORD *)v112 + 1);
    v46 = v43;
    v11 = v43 + 1;
    *(_DWORD *)(v36 + 8 * v44 + 8) = *v112 + 2;
    *(_QWORD *)(v36 + 8 * v44) = v45;
    LOBYTE(v45) = v113;
    *(_DWORD *)(v36 + 8 * v44 + 12) = 0;
    *(_BYTE *)(v42 + v41) = v45;
    v47 = 2LL * (unsigned int)v46;
    v48 = v40;
    v9 = v40 + 1;
    v49 = (unsigned __int16 *)(a5 + 16 * v48);
    LODWORD(v42) = *v49;
    *(_QWORD *)(v36 + 8 * v47) = *((_QWORD *)v49 + 1);
    LOBYTE(v45) = v107;
    *(_QWORD *)(v36 + 8 * v47 + 8) = (unsigned int)(v42 + 2);
    *(_BYTE *)(v46 + v41) = v45;
    v50 = 2LL * v11;
    *(_QWORD *)(v36 + 8 * v50) = v17 + 2;
    *(_QWORD *)(v36 + 8 * v50 + 8) = 8LL;
    goto LABEL_18;
  }
  switch ( v18 )
  {
    case 0:
      AdtpEtwBuildDashString(a6 + 16LL * v11++);
      ++v15;
      goto LABEL_5;
    case 3:
      v24 = AdtpBuildUlongString(v17[2], (__int64)&v109, v11 + a8);
      goto LABEL_17;
    case 4:
      v63 = (unsigned __int8 *)*((_QWORD *)v17 + 3);
      v114 = 4 * v63[1] + 8;
      if ( v17[1] >= v114 && RtlValidSid(v63) )
      {
        v64 = a6;
        v65 = v114;
        v66 = 2LL * v11;
        *(_QWORD *)(a6 + 8 * v66) = v63;
        *(_QWORD *)(v64 + 8 * v66 + 8) = v65;
        goto LABEL_18;
      }
      v108 = -1073741704;
LABEL_27:
      v8 = v11;
LABEL_28:
      *a7 = v8;
      return (unsigned int)v108;
    case 5:
    case 26:
    case 35:
      goto LABEL_29;
    case 6:
      v73 = a6;
      v74 = 2LL * v11;
      *(_DWORD *)(a6 + 8 * v74 + 8) = 4 * BYTE1(PspSiloMonitorLock.ForegroundLossTime) + 8;
      *(_QWORD *)(v73 + 8 * v74) = p_ForegroundLossTime;
      *(_DWORD *)(v73 + 8 * v74 + 12) = 0;
      AdtpEtwBuildDashString(v73 + 16LL * (unsigned __int16)(v11 + 1));
      AdtpEtwBuildDashString(v75 + 16LL * (unsigned __int16)(v11 + 2));
      v14 = 0x140000000uLL;
      v76 = (unsigned __int16)(v11 + 3);
      v77 = v76;
      v11 = v76 + 1;
      v77 *= 2LL;
      ++v15;
      *(_QWORD *)(v78 + 8 * v77) = v79;
      *(_QWORD *)(v78 + 8 * v77 + 8) = 8LL;
      goto LABEL_5;
    case 7:
      v51 = v17[4];
      if ( v51 >= v15 )
        goto LABEL_26;
      v52 = 32LL * v51;
      if ( *(_DWORD *)(v52 + v13) != 1 )
        goto LABEL_26;
      v24 = AdtpBuildAccessesString(
              *(_QWORD *)(v13 + 56),
              *(_QWORD *)(v52 + v13 + 24),
              v17[2],
              0,
              0LL,
              a6 + 16LL * v11,
              v10,
              (__int64)&v109,
              v11 + a8);
      goto LABEL_17;
    case 8:
      v70 = (unsigned int *)*((_QWORD *)v17 + 3);
      if ( !v70 )
        goto LABEL_26;
      v71 = *v70;
      v72 = *v70 ? 12 * v71 + 8 : 8;
      if ( v17[1] < v72 || v71 && v71 > 0x42 )
        goto LABEL_26;
      v24 = AdtpBuildPrivilegeAuditString(*((_QWORD *)v17 + 3), 0LL, a6 + 16LL * v11, v10, &v109, v11 + a8);
      goto LABEL_17;
    case 9:
      v80 = v17[4];
      if ( v80 >= v15 )
        goto LABEL_26;
      v81 = v13 + 32LL * v80;
      if ( *(_DWORD *)v81 != 1 )
        goto LABEL_26;
      v82 = (unsigned __int16 *)(a5 + 16LL * v9);
      LODWORD(Destination) = a5 + 16 * v9;
      AdtpBuildObjectTypeStrings(*(_QWORD *)(v110 + 56), *(_QWORD *)(v81 + 24), *((_QWORD *)v17 + 3), v17[1] / 0x18u);
      v83 = *v82;
      v84 = 2LL * v11;
      v85 = a6;
      ++v9;
      *(_QWORD *)(a6 + 8 * v84) = *((_QWORD *)v82 + 1);
      *(_QWORD *)(v85 + 8 * v84 + 8) = (unsigned int)(v83 + 2);
      v13 = v110;
      goto LABEL_18;
    case 10:
    case 27:
      v19 = v11++;
      v20 = (_QWORD *)(16 * v19 + a6);
      ++v15;
      *v20 = v17 + 2;
      v20[1] = 4LL;
      goto LABEL_5;
    case 11:
    case 12:
    case 15:
      goto LABEL_23;
    case 13:
      v67 = &unk_140FD84E8;
      v68 = a6;
      if ( *((_QWORD *)v17 + 3) )
        v67 = (void *)*((_QWORD *)v17 + 3);
      v69 = 2LL * v11++;
      ++v15;
      *(_QWORD *)(a6 + 8 * v69) = v67;
      *(_QWORD *)(v68 + 8 * v69 + 8) = 16LL;
      v14 = 0x140000000uLL;
      goto LABEL_5;
    case 16:
      v24 = AdtpBuildStringListString(
              *((_QWORD *)v17 + 3),
              v14,
              (unsigned int)a6 + 16 * v11,
              v10,
              (__int64)&v109,
              v11 + a8);
      goto LABEL_17;
    case 17:
      v108 = AdtpBuildSidListString(
               *((_QWORD *)v17 + 3),
               v14,
               (unsigned int)a6 + 16 * v11,
               v10,
               (__int64)&v109,
               v11 + a8);
      if ( v108 >= 0 )
        goto LABEL_18;
      goto LABEL_27;
    case 18:
      v88 = a6;
      v89 = 2LL * v11;
      *(_QWORD *)(a6 + 8 * v89) = &v113;
      *(_QWORD *)(v88 + 8 * v89 + 8) = 8LL;
      goto LABEL_19;
    case 19:
      v90 = v17[2];
      v113 = a5 + 16LL * v9;
      v108 = AdtpBuildUserAccountControlString(
               v90,
               (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v9 + 1)),
               a8 + (unsigned int)v11 + 1,
               (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v9 + 2)),
               a8 + (unsigned int)v11 + 2);
      if ( v108 < 0 )
        goto LABEL_27;
      v91 = a6;
      v92 = (unsigned __int16 *)v113;
      v93 = a5;
      v94 = 16LL * v11;
      v113 = v94;
      v95 = *v92 + 2;
      *(_QWORD *)(v94 + a6) = *((_QWORD *)v92 + 1);
      v96 = v113;
      *(_DWORD *)(v94 + v91 + 8) = v95;
      *(_DWORD *)(v96 + v91 + 12) = 0;
      v97 = 2LL * (unsigned __int16)(v11 + 1);
      v98 = *(unsigned __int16 *)(v93 + 16LL * (unsigned __int16)(v9 + 1));
      *(_QWORD *)(v91 + 8 * v97) = *(_QWORD *)(v93 + 16LL * (unsigned __int16)(v9 + 1) + 8);
      *(_DWORD *)(v91 + 8 * v97 + 8) = v98 + 2;
      *(_DWORD *)(v91 + 8 * v97 + 12) = 0;
      v99 = 2LL * (unsigned __int16)(v11 + 2);
      v11 += 3;
      v100 = *(_QWORD *)(v93 + 16LL * (unsigned __int16)(v9 + 2) + 8);
      *(_DWORD *)(v91 + 8 * v99 + 8) = *(unsigned __int16 *)(v93 + 16LL * (unsigned __int16)(v9 + 2)) + 2;
      v9 += 3;
      *(_QWORD *)(v91 + 8 * v99) = v100;
      *(_DWORD *)(v91 + 8 * v99 + 12) = 0;
      goto LABEL_58;
    case 20:
      AdtpEtwBuildDashString(a6 + 16LL * v11);
      AdtpEtwBuildDashString(v86 + 16LL * (unsigned __int16)(v11 + 1));
      AdtpEtwBuildDashString(v87 + 16LL * (unsigned __int16)(v11 + 2));
      v11 += 3;
      v14 = 0x140000000uLL;
      goto LABEL_20;
    case 21:
      v24 = AdtpBuildMessageString(v17[2], v14, (unsigned int)a6 + 16 * v11, v10, (__int64)&v109, v11 + a8);
      goto LABEL_17;
    case 23:
      v53 = *((_QWORD *)v17 + 3);
      v54 = v11 + a8;
      v113 = v11;
      v55 = (unsigned __int16 *)(a5 + 16LL * v9);
      LODWORD(Destination) = v54 + 1;
      v108 = AdtpBuildSockAddrString(v53, v55, v54, v55 + 8);
      if ( v108 < 0 )
        goto LABEL_27;
      v56 = v9 + 1;
      v57 = *v55 + 2;
      v58 = a6;
      ++v11;
      v59 = 2 * v113;
      v60 = 2LL * v11;
      *(_QWORD *)(a6 + 8 * v59) = *((_QWORD *)v55 + 1);
      *(_DWORD *)(v58 + 8 * v59 + 8) = v57;
      v61 = a5;
      *(_DWORD *)(v58 + 8 * v59 + 12) = 0;
      v62 = *(_QWORD *)(v61 + 16LL * v56 + 8);
      *(_DWORD *)(v58 + 8 * v60 + 8) = *(unsigned __int16 *)(v61 + 16LL * v56) + 2;
      v9 = v56 + 1;
      *(_QWORD *)(v58 + 8 * v60) = v62;
      *(_DWORD *)(v58 + 8 * v60 + 12) = 0;
      goto LABEL_18;
    case 24:
      v108 = AdtpBuildSecurityDescriptorChangeString(
               v17[2],
               *((_QWORD *)v17 + 3),
               *(_QWORD *)(32LL * ++v15 + v13 + 24),
               v11 + (unsigned int)a8,
               16LL * v11 + a6,
               v11 + a8,
               (_DWORD)DestinationString,
               16LL * v11 + a6 + 16,
               v11 + a8 + 1,
               v10,
               (__int64)&v109);
      if ( v108 < 0 )
        goto LABEL_27;
      v11 += 2;
      goto LABEL_58;
    case 28:
      v111 = (unsigned __int8 *)v11;
      v101 = *((_QWORD *)v17 + 3);
      v113 = a5 + 16LL * v9;
      LODWORD(Destination) = 0;
      v108 = AdtpBuildSockAddrString(v101, v113, v11 + a8, 0LL);
      if ( v108 < 0 )
        goto LABEL_27;
      ++v11;
      v102 = 2LL * (_QWORD)v111;
      v103 = *(unsigned __int16 *)v113;
      v104 = a6;
      ++v9;
      *(_QWORD *)(a6 + 8 * v102) = *(_QWORD *)(v113 + 8);
      *(_QWORD *)(v104 + 8 * v102 + 8) = (unsigned int)(v103 + 2);
LABEL_58:
      v10 = v115;
      v14 = 0x140000000uLL;
      p_ForegroundLossTime = &PspSiloMonitorLock.ForegroundLossTime;
      ++v15;
      goto LABEL_5;
    case 29:
      goto LABEL_24;
    case 30:
      if ( *((_QWORD *)v17 + 1) || *((_QWORD *)v17 + 2) )
        goto LABEL_26;
LABEL_24:
      v28 = *((_QWORD *)v17 + 3);
      v29 = *(_DWORD *)(v28 + 132);
      if ( v29 >= v15 )
        goto LABEL_26;
      v30 = 32LL * v29;
      if ( *(_DWORD *)(v30 + v13) != 1 )
        goto LABEL_26;
      v108 = AdtpBuildAccessReasonAuditString(
               *(_QWORD *)(v13 + 56),
               *(_QWORD *)(v30 + v13 + 24),
               v28,
               v18 == 30,
               (int)Destination,
               a6 + 16LL * v11,
               v10,
               &v109,
               (char *)(v11 + a8));
      if ( v108 >= 0 )
        goto LABEL_18;
      goto LABEL_27;
    case 31:
      if ( v17[2] != 32 || *((_QWORD *)v17 + 2) )
        goto LABEL_26;
      v24 = AdtpBuildSecurityDescriptorUnicodeString(
              32,
              *((_QWORD *)v17 + 3),
              0,
              (unsigned int)a6 + 16 * v11,
              v10,
              (__int64)&v109,
              v11 + a8);
      goto LABEL_17;
    case 34:
      v24 = AdtpBuildMultiSzStringListString(*((_QWORD *)v17 + 3), a6 + 16LL * v11, v11 + a8, p_ForegroundLossTime);
      goto LABEL_17;
    default:
      goto LABEL_26;
  }
}
