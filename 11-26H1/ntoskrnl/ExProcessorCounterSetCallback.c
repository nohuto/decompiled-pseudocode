/*
 * XREFs of ExProcessorCounterSetCallback @ 0x140A75530
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     swscanf_s @ 0x14053EE70 (swscanf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpQueryProcessorInformationCounters @ 0x140A75F30 (ExpQueryProcessorInformationCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  unsigned int v4; // ebx
  bool v5; // r15
  char v6; // r12
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r14
  bool v10; // r13
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rsi
  __int64 *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // edi
  unsigned int v19; // esi
  int v20; // r9d
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // esi
  __int64 **v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+28h] [rbp-E0h]
  bool v33; // [rsp+38h] [rbp-D0h]
  __int16 v34; // [rsp+39h] [rbp-CFh]
  int v35; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+44h] [rbp-C4h] BYREF
  int v38; // [rsp+48h] [rbp-C0h]
  ULONG ActiveProcessorCount; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v40; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v42; // [rsp+60h] [rbp-A8h]
  _QWORD DestinationString[3]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-88h]
  __int64 *v45; // [rsp+88h] [rbp-80h]
  int v46; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v47; // [rsp+98h] [rbp-70h] BYREF
  int v48; // [rsp+A0h] [rbp-68h]
  __int64 *v49; // [rsp+A8h] [rbp-60h] BYREF
  int v50; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v51; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v53; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v56; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-20h]
  int v58; // [rsp+F0h] [rbp-18h]
  int v59; // [rsp+F4h] [rbp-14h]
  int v60; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v61; // [rsp+100h] [rbp-8h]
  unsigned __int64 v62; // [rsp+108h] [rbp+0h]
  unsigned __int64 v63; // [rsp+110h] [rbp+8h]
  __int64 v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  __int64 v66; // [rsp+128h] [rbp+20h]
  unsigned __int64 v67; // [rsp+130h] [rbp+28h]
  unsigned int v68; // [rsp+13Ch] [rbp+34h]
  unsigned int v69; // [rsp+140h] [rbp+38h]
  int v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+14Ch] [rbp+44h]
  unsigned __int64 v72; // [rsp+150h] [rbp+48h]
  unsigned __int64 v73; // [rsp+158h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+58h]
  __int64 v75; // [rsp+168h] [rbp+60h]
  unsigned int v76; // [rsp+170h] [rbp+68h]
  int v77; // [rsp+174h] [rbp+6Ch]
  unsigned __int64 v78; // [rsp+178h] [rbp+70h]
  unsigned __int64 v79; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v80; // [rsp+190h] [rbp+88h]
  unsigned __int64 v81; // [rsp+198h] [rbp+90h]
  unsigned __int64 v82; // [rsp+1A0h] [rbp+98h]
  int v83; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v84; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 v85; // [rsp+1B8h] [rbp+B0h]
  int v86; // [rsp+1C0h] [rbp+B8h]
  int v87; // [rsp+1C4h] [rbp+BCh]
  int v88; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v89; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 v90; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v91; // [rsp+1E0h] [rbp+D8h]
  __int64 v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int64 v94; // [rsp+1F8h] [rbp+F0h]
  unsigned __int64 v95; // [rsp+200h] [rbp+F8h]
  unsigned int v96; // [rsp+20Ch] [rbp+104h]
  unsigned int v97; // [rsp+210h] [rbp+108h]
  int v98; // [rsp+218h] [rbp+110h]
  int v99; // [rsp+21Ch] [rbp+114h]
  unsigned __int64 v100; // [rsp+220h] [rbp+118h]
  unsigned __int64 v101; // [rsp+228h] [rbp+120h]
  __int64 v102; // [rsp+230h] [rbp+128h]
  __int64 v103; // [rsp+238h] [rbp+130h]
  unsigned int v104; // [rsp+240h] [rbp+138h]
  int v105; // [rsp+244h] [rbp+13Ch]
  unsigned __int64 v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+258h] [rbp+150h] BYREF
  __int64 v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  int v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  __int64 v113; // [rsp+288h] [rbp+180h]
  int v114; // [rsp+290h] [rbp+188h]
  int v115; // [rsp+294h] [rbp+18Ch]
  int v116; // [rsp+298h] [rbp+190h]
  __int64 v117; // [rsp+2A0h] [rbp+198h]
  __int64 v118; // [rsp+2A8h] [rbp+1A0h]
  __int64 v119; // [rsp+2B0h] [rbp+1A8h]
  __int64 v120; // [rsp+2B8h] [rbp+1B0h]
  __int64 v121; // [rsp+2C0h] [rbp+1B8h]
  __int64 v122; // [rsp+2C8h] [rbp+1C0h]
  __int64 v123; // [rsp+2D0h] [rbp+1C8h]
  int v124; // [rsp+2DCh] [rbp+1D4h]
  int v125; // [rsp+2E0h] [rbp+1D8h]
  unsigned int v126; // [rsp+2E8h] [rbp+1E0h]
  unsigned int v127; // [rsp+2ECh] [rbp+1E4h]
  __int64 v128; // [rsp+2F0h] [rbp+1E8h]
  __int64 v129; // [rsp+2F8h] [rbp+1F0h]
  __int64 v130; // [rsp+300h] [rbp+1F8h]
  __int64 v131; // [rsp+308h] [rbp+200h]
  int v132; // [rsp+310h] [rbp+208h]
  int v133; // [rsp+314h] [rbp+20Ch]
  __int64 v134; // [rsp+318h] [rbp+210h]
  __int64 v135; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v136[33]; // [rsp+330h] [rbp+228h] BYREF
  wchar_t pszDest[16]; // [rsp+438h] [rbp+330h] BYREF

  memset_0(&v51, 0, 0xC8uLL);
  memset_0(&v79, 0, 0xC8uLL);
  v4 = 0;
  v37 = 0;
  v36 = 0;
  LOWORD(v35) = 0;
  *(_OWORD *)&DestinationString[1] = 0LL;
  memset_0(&v107, 0, 0xC8uLL);
  memset_0(&v135, 0, 0x108uLL);
  v33 = 0;
  v5 = 0;
  v34 = 0;
  v6 = 0;
  v7 = a1 - 2;
  if ( !v7 )
  {
    v9 = a2[3];
    v45 = (__int64 *)v9;
    goto LABEL_12;
  }
  if ( v7 != 1 )
    return 0LL;
  v8 = *a2;
  v9 = a2[3];
  v45 = (__int64 *)v9;
  v10 = (v8 & 0x100E0FF05LL) != 0;
  v33 = v10;
  v5 = (v8 & 0xC00F0000) != 0;
  v6 = (v8 & 0x63F000000LL) != 0;
  LOBYTE(v34) = v5;
  HIBYTE(v34) = v6;
  if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v36, &v37) != 2 )
  {
LABEL_12:
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    DestinationString[0] = 0LL;
    v19 = 0;
    v42 = 0LL;
    v36 = 0;
    while ( v19 < (unsigned __int16)KeNumberNodes )
    {
      v135 = 2097153LL;
      memset_0(v136, 0, 0x100uLL);
      KeQueryNodeActiveAffinityEx(v19, (unsigned __int16 *)&v135, &v35);
      if ( (_WORD)v35 )
      {
        memset_0(&v51, 0, 0xC8uLL);
        v21 = v136[0];
        LOWORD(v22) = 0;
        v38 = 0;
        v41 = 0LL;
        v40 = 0LL;
        v37 = 0;
LABEL_16:
        LODWORD(v44) = 0;
        while ( 1 )
        {
          if ( v21 )
          {
            _BitScanForward64(&v23, v21);
            LOBYTE(v20) = v6;
            v24 = v21 & ~(1LL << v23);
            v25 = (unsigned __int8)v23;
            LOBYTE(v23) = v33;
            v44 = v24;
            LOBYTE(v24) = v5;
            ExpQueryProcessorInformationCounters(
              KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v22].Flink
                               + v25)],
              v23,
              v24,
              v20,
              (__int64)&v107);
            LODWORD(v32) = v37;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v36, v32);
            ++v37;
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
            v49 = &v107;
            v50 = 200;
            if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
            {
              v31 = &v49;
              v27 = guard_dispatch_icall_no_overrides(v9, (__int64)&DestinationString[1]);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
            }
            else
            {
              v27 = ExpPcwDisabledStatus(v26);
            }
            if ( v27 >= 0 )
            {
              v51 += v107;
              v52 += v108;
              v53 += v109;
              v54 += v110;
              v63 += v119;
              v79 += v107;
              v55 += v111;
              v57 += v113;
              v59 += v115;
              v80 += v108;
              v81 += v109;
              v82 += v110;
              v60 += v116;
              v56 += v112;
              v83 += v111;
              v85 += v113;
              v87 += v115;
              v58 += v114;
              v61 += v117;
              v64 += v120;
              v88 += v116;
              v84 += v112;
              v62 += v118;
              v86 += v114;
              v89 += v117;
              v65 += v121;
              v20 = v128;
              v77 |= v133;
              v66 += v122;
              v74 += v130;
              v75 += v131;
              v67 += v123;
              v68 += v124;
              v69 += v125;
              v40 += v126;
              v41 += v127;
              v72 += v128;
              v73 += v129;
              v78 += v134;
              v76 += v132;
              v92 += v120;
              v90 += v118;
              v93 += v121;
              v91 += v119;
              v94 += v122;
              v102 += v130;
              v103 += v131;
              v96 += v124;
              v101 += v129;
              v104 += v132;
              v95 += v123;
              v97 += v125;
              v42 += v126;
              DestinationString[0] += v127;
              v100 += v128;
              v106 += v134;
              v105 |= v133;
              LOWORD(v22) = v38;
              v21 = v44;
              v9 = (__int64)v45;
              v6 = HIBYTE(v34);
              v5 = v34;
              goto LABEL_16;
            }
            return (unsigned int)v27;
          }
          v22 = (unsigned __int16)(v22 + 1);
          v38 = v22;
          if ( (unsigned int)v22 >= (unsigned __int16)v135 )
            break;
          v21 = v136[v22];
        }
        if ( (unsigned __int16)v35 > 1u )
        {
          v51 /= (unsigned __int16)v35;
          v52 /= (unsigned __int16)v35;
          v53 /= (unsigned __int16)v35;
          v54 /= (unsigned __int16)v35;
          v57 /= (unsigned __int16)v35;
          v56 /= (unsigned __int16)v35;
          v61 /= (unsigned __int16)v35;
          v62 /= (unsigned __int16)v35;
          v63 /= (unsigned __int16)v35;
          v67 /= (unsigned __int16)v35;
          v68 /= (unsigned __int16)v35;
          v69 /= (unsigned __int16)v35;
        }
        if ( v6 )
        {
          v70 = v40 / (unsigned __int16)v35;
          v71 = v41 / (unsigned __int16)v35;
          v72 /= (unsigned __int16)v35;
          v73 /= (unsigned __int16)v35;
          v78 /= (unsigned __int16)v35;
        }
        if ( v5 )
          v76 /= (unsigned __int16)v35;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v36, v31);
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
        v47 = &v51;
        v48 = 200;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v31 = (__int64 **)&v47;
          v30 = guard_dispatch_icall_no_overrides(v9, (__int64)&DestinationString[1]);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v30 = ExpPcwDisabledStatus(v29);
        }
        if ( v30 < 0 )
          return (unsigned int)v30;
      }
      v19 = ++v36;
    }
    if ( ActiveProcessorCount > 1 )
    {
      v79 /= ActiveProcessorCount;
      v80 /= ActiveProcessorCount;
      v81 /= ActiveProcessorCount;
      v82 /= ActiveProcessorCount;
      v85 /= ActiveProcessorCount;
      v84 /= ActiveProcessorCount;
      v89 /= ActiveProcessorCount;
      v90 /= ActiveProcessorCount;
      v91 /= ActiveProcessorCount;
      v95 /= ActiveProcessorCount;
      v96 /= ActiveProcessorCount;
      v97 /= ActiveProcessorCount;
    }
    if ( v6 )
    {
      v98 = v42 / ActiveProcessorCount;
      v99 = DestinationString[0] / (unsigned __int64)ActiveProcessorCount;
      v100 /= ActiveProcessorCount;
      v101 /= ActiveProcessorCount;
      v106 /= ActiveProcessorCount;
    }
    if ( v5 )
      v104 /= ActiveProcessorCount;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total");
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
    v47 = &v79;
    v48 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v4 = guard_dispatch_icall_no_overrides(v9, (__int64)&DestinationString[1]);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      return (unsigned int)ExpPcwDisabledStatus(v28);
    }
    return v4;
  }
  v13 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v13 < (unsigned int)KeNumberProcessors_0 )
  {
    v14 = &v107;
    LOBYTE(v12) = v6;
    LOBYTE(v14) = v10;
    LOBYTE(v11) = v5;
    ExpQueryProcessorInformationCounters(KiProcessorBlock[v13], (_DWORD)v14, v11, v12, (__int64)&v107);
    v15 = a2[1];
    v45 = &v107;
    v46 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v17 = guard_dispatch_icall_no_overrides(v9, v15);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      v17 = ExpPcwDisabledStatus(v16);
    }
    if ( v17 < 0 )
      return (unsigned int)v17;
    return v4;
  }
  return 3221226021LL;
}
