/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x140A74EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140461720 (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140488B00 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwDereferenceSpinLockCounters @ 0x140832AC0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140832B20 (EtwReferenceSpinLockCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // r12
  __int64 i; // rdi
  int v8; // r15d
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int16 v11; // si
  __int16 v12; // r8
  __int16 v13; // ax
  unsigned __int64 v14; // r13
  int v15; // r14d
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int **v21; // [rsp+28h] [rbp-E0h]
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  int *v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+60h] [rbp-A8h]
  __int128 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+9Ch] [rbp-6Ch]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  int v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  int v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+BCh] [rbp-4Ch]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  int v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+CCh] [rbp-3Ch]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  int v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+DCh] [rbp-2Ch]
  int v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E4h] [rbp-24h]
  int v50; // [rsp+E8h] [rbp-20h]
  int v51; // [rsp+ECh] [rbp-1Ch]
  int v52; // [rsp+F0h] [rbp-18h]
  int v53; // [rsp+F4h] [rbp-14h]
  int v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+FCh] [rbp-Ch]
  int v56; // [rsp+100h] [rbp-8h]
  int v57; // [rsp+104h] [rbp-4h]
  int v58; // [rsp+108h] [rbp+0h]
  int v59; // [rsp+10Ch] [rbp+4h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  int v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+11Ch] [rbp+14h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  int v66; // [rsp+128h] [rbp+20h]
  int v67; // [rsp+12Ch] [rbp+24h]
  int v68; // [rsp+130h] [rbp+28h]
  int v69; // [rsp+134h] [rbp+2Ch]
  int v70; // [rsp+140h] [rbp+38h]
  int v71; // [rsp+144h] [rbp+3Ch]
  int v72; // [rsp+158h] [rbp+50h] BYREF
  int v73; // [rsp+15Ch] [rbp+54h]
  int v74; // [rsp+160h] [rbp+58h]
  int v75; // [rsp+164h] [rbp+5Ch]
  int v76; // [rsp+168h] [rbp+60h]
  int v77; // [rsp+16Ch] [rbp+64h]
  int v78; // [rsp+170h] [rbp+68h]
  int v79; // [rsp+174h] [rbp+6Ch]
  int v80; // [rsp+178h] [rbp+70h]
  int v81; // [rsp+17Ch] [rbp+74h]
  int v82; // [rsp+180h] [rbp+78h]
  int v83; // [rsp+184h] [rbp+7Ch]
  int v84; // [rsp+188h] [rbp+80h]
  int v85; // [rsp+18Ch] [rbp+84h]
  int v86; // [rsp+190h] [rbp+88h]
  int v87; // [rsp+194h] [rbp+8Ch]
  int v88; // [rsp+198h] [rbp+90h]
  int v89; // [rsp+19Ch] [rbp+94h]
  int v90; // [rsp+1A0h] [rbp+98h]
  int v91; // [rsp+1A4h] [rbp+9Ch]
  int v92; // [rsp+1A8h] [rbp+A0h]
  int v93; // [rsp+1ACh] [rbp+A4h]
  int v94; // [rsp+1B0h] [rbp+A8h]
  int v95; // [rsp+1B4h] [rbp+ACh]
  int v96; // [rsp+1B8h] [rbp+B0h]
  int v97; // [rsp+1BCh] [rbp+B4h]
  int v98; // [rsp+1C0h] [rbp+B8h]
  int v99; // [rsp+1C4h] [rbp+BCh]
  int v100; // [rsp+1C8h] [rbp+C0h]
  int v101; // [rsp+1CCh] [rbp+C4h]
  int v102; // [rsp+1D0h] [rbp+C8h]
  int v103; // [rsp+1D4h] [rbp+CCh]
  int v104; // [rsp+1D8h] [rbp+D0h]
  int v105; // [rsp+1DCh] [rbp+D4h]
  int v106; // [rsp+1E0h] [rbp+D8h]
  int v107; // [rsp+1E4h] [rbp+DCh]
  int v108; // [rsp+1E8h] [rbp+E0h]
  int v109; // [rsp+1ECh] [rbp+E4h]
  int v110; // [rsp+1F0h] [rbp+E8h]
  int v111; // [rsp+1F4h] [rbp+ECh]
  int v112; // [rsp+200h] [rbp+F8h]
  int v113; // [rsp+204h] [rbp+FCh]
  wchar_t pszDest[12]; // [rsp+218h] [rbp+110h] BYREF

  v27 = 0LL;
  memset_0(&v30, 0, 0xB8uLL);
  memset_0(&v72, 0, 0xB8uLL);
  v23 = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0LL;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    EtwDereferenceSpinLockCounters();
    return 0LL;
  }
  if ( (unsigned int)(v4 - 1) >= 2 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v26 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
    {
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
      v24 = &v72;
      v25 = 184;
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
      {
        v10 = guard_dispatch_icall_no_overrides(v6, (__int64)&DestinationString[1]);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
      }
      else
      {
        return (unsigned int)ExpPcwDisabledStatus(v9);
      }
      return (unsigned int)v10;
    }
    memset_0(&v30, 0, 0xB8uLL);
    v8 = 0;
    KeInitializeSchedulerSubNodeEnumerationContext(&v27, KeNodeBlock[i]);
LABEL_8:
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)&v27, &v23) )
      break;
    if ( v8 )
    {
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", (unsigned int)i);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
      v24 = &v30;
      v25 = 184;
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
      {
        v21 = &v24;
        v10 = guard_dispatch_icall_no_overrides(v6, (__int64)&DestinationString[1]);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
      }
      else
      {
        v10 = ExpPcwDisabledStatus(v20);
      }
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
  }
  KiQuerySubNodeActiveAffinity(v23, (__int64)&v26, 0LL);
  v11 = WORD4(v26);
  v13 = v12 + 1;
  v14 = v26;
  v15 = WORD4(v26);
  while ( 1 )
  {
    v16 = v15 + 1;
    while ( !v14 )
    {
      v11 += v13;
      v15 = v11;
      if ( v11 >= v16 )
        goto LABEL_8;
      v14 = *(_QWORD *)(8LL * v11 + 8);
      v13 = 1;
    }
    _BitScanForward64(&v17, v14);
    v14 &= ~(1LL << v17);
    v18 = (_DWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v11].Flink
                                      + (unsigned __int8)v17)]
                   + 36608);
    v30 += *v18;
    v31 += v18[1];
    v32 += v18[2];
    v33 += v18[3];
    v34 += v18[4];
    v35 += v18[5];
    v36 += v18[6];
    v37 += v18[7];
    v38 += v18[8];
    v39 += v18[9];
    v40 += v18[10];
    v41 += v18[11];
    v42 += v18[12];
    v43 += v18[13];
    v44 += v18[14];
    v45 += v18[15];
    v46 += v18[16];
    v47 += v18[17];
    v48 += v18[18];
    v49 += v18[19];
    v50 += v18[20];
    v51 += v18[21];
    v52 += v18[22];
    v53 += v18[23];
    v54 += v18[24];
    v55 += v18[25];
    v56 += v18[26];
    v57 += v18[27];
    v58 += v18[28];
    v59 += v18[29];
    v60 += v18[30];
    v61 += v18[31];
    v62 += v18[32];
    v63 += v18[33];
    v64 += v18[34];
    v65 += v18[35];
    v66 += v18[36];
    v67 += v18[37];
    v68 += v18[38];
    v69 += v18[39];
    v70 += v18[42];
    v71 += v18[43];
    v72 += *v18;
    v73 += v18[1];
    v74 += v18[2];
    v75 += v18[3];
    v76 += v18[4];
    v77 += v18[5];
    v78 += v18[6];
    v79 += v18[7];
    v80 += v18[8];
    v81 += v18[9];
    v82 += v18[10];
    v83 += v18[11];
    v84 += v18[12];
    v85 += v18[13];
    v86 += v18[14];
    v87 += v18[15];
    v88 += v18[16];
    v89 += v18[17];
    v90 += v18[18];
    v91 += v18[19];
    v92 += v18[20];
    v93 += v18[21];
    v94 += v18[22];
    v95 += v18[23];
    v96 += v18[24];
    v97 += v18[25];
    v98 += v18[26];
    v99 += v18[27];
    v100 += v18[28];
    v101 += v18[29];
    v102 += v18[30];
    v103 += v18[31];
    v104 += v18[32];
    v105 += v18[33];
    v106 += v18[34];
    v107 += v18[35];
    v108 += v18[36];
    v109 += v18[37];
    v110 += v18[38];
    v111 += v18[39];
    v112 += v18[42];
    v113 += v18[43];
    LODWORD(v21) = v8;
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", (unsigned int)i, v21);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
    v28 = v18;
    v29 = 184;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v21 = &v28;
      v10 = guard_dispatch_icall_no_overrides(v6, (__int64)&DestinationString[1]);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      v10 = ExpPcwDisabledStatus(v19);
    }
    if ( v10 < 0 )
      return (unsigned int)v10;
    v13 = 1;
    ++v8;
  }
}
