/*
 * XREFs of PpmPerfApplyDomainState @ 0x140483F90
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140483E00 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmEventDomainPerfStateChange @ 0x140462364 (PpmEventDomainPerfStateChange.c)
 *     PpmGetPerfPolicyClass @ 0x14048482C (PpmGetPerfPolicyClass.c)
 *     PpmEventQosClassPerfSelection @ 0x1404AEB64 (PpmEventQosClassPerfSelection.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v2; // r15
  unsigned __int8 PerfPolicyClass; // al
  __int64 v4; // r11
  unsigned int v5; // r12d
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // r9
  unsigned __int16 v11; // r8
  unsigned __int16 Count; // r11
  struct _KAFFINITY_EX *v13; // r10
  unsigned __int16 v14; // dx
  __int64 v15; // rcx
  __int64 v16; // r9
  char *v17; // rsi
  unsigned int v18; // r12d
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  unsigned __int16 v21; // r10
  struct _KAFFINITY_EX *v22; // rdi
  unsigned __int16 v23; // r14
  unsigned __int16 i; // r8
  __int64 v25; // rcx
  char v26; // r10
  char v27; // r11
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int *v30; // rdx
  unsigned int v31; // esi
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rdx
  _BYTE *v41; // rdx
  __int64 v42; // r8
  unsigned int *v43; // rdi
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // edi
  unsigned int v47; // eax
  char v48; // r9
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // r12d
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // r15d
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // esi
  unsigned int v69; // r14d
  unsigned int v70; // eax
  bool v71; // zf
  char v72; // al
  char v73; // r8
  char v74; // di
  char v76; // [rsp+48h] [rbp-79h]
  char v77; // [rsp+49h] [rbp-78h]
  unsigned int v78; // [rsp+4Ch] [rbp-75h]
  unsigned __int8 v79; // [rsp+51h] [rbp-70h]
  char v80; // [rsp+52h] [rbp-6Fh]
  unsigned int v81; // [rsp+54h] [rbp-6Dh]
  unsigned int v82; // [rsp+58h] [rbp-69h]
  unsigned int v83; // [rsp+5Ch] [rbp-65h]
  unsigned int v84; // [rsp+60h] [rbp-61h]
  unsigned int v85; // [rsp+64h] [rbp-5Dh]
  char *v86; // [rsp+68h] [rbp-59h]
  __int64 v87; // [rsp+78h] [rbp-49h]
  __int64 v88; // [rsp+80h] [rbp-41h]
  __int64 v89; // [rsp+88h] [rbp-39h]
  _BYTE v90[16]; // [rsp+98h] [rbp-29h] BYREF
  unsigned int v91; // [rsp+A8h] [rbp-19h]
  unsigned int v92; // [rsp+B0h] [rbp-11h]
  unsigned int v93; // [rsp+B4h] [rbp-Dh]
  unsigned int v94; // [rsp+B8h] [rbp-9h]
  unsigned int v95; // [rsp+BCh] [rbp-5h]
  int v96; // [rsp+C0h] [rbp-1h]
  int v97; // [rsp+C4h] [rbp+3h]
  bool v98; // [rsp+E0h] [rbp+1Fh]
  char v99; // [rsp+E1h] [rbp+20h]
  char v100; // [rsp+E2h] [rbp+21h]

  memset_0(v90, 0, 0x50uLL);
  v2 = *(_QWORD *)(a1 + 16);
  v77 = 0;
  v87 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 8LL);
  v86 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
  PerfPolicyClass = PpmGetPerfPolicyClass(v2);
  v5 = *(_DWORD *)(a1 + 468);
  v6 = (unsigned int)(v4 + 1);
  v7 = *(_DWORD *)(a1 + 460);
  v8 = v4;
  v79 = PerfPolicyClass;
  v9 = v4 + 100;
  v81 = v4 + 100;
  v78 = v4;
  v76 = v4;
  v84 = v4;
  v82 = v7;
  v85 = v5;
  if ( PpmPerfArtificialDomainEnabled == (_DWORD)v4 )
  {
LABEL_16:
    v17 = *(char **)a1;
    v16 = a1;
  }
  else
  {
    v10 = a1 + 24;
    v11 = *(_WORD *)(a1 + 24);
    Count = PpmPerfNewCoreParkingMask.Count;
    v13 = &PpmPerfNewCoreParkingMask;
    v14 = v8;
    if ( v11 >= PpmPerfNewCoreParkingMask.Count )
    {
      Count = *(_WORD *)(a1 + 24);
      v13 = (struct _KAFFINITY_EX *)(a1 + 24);
      v11 = PpmPerfNewCoreParkingMask.Count;
    }
    while ( 1 )
    {
      if ( v14 >= v11 )
      {
        if ( v13 == &PpmPerfNewCoreParkingMask )
        {
          v8 = v78;
        }
        else
        {
          v8 = 0;
          while ( v14 < Count )
          {
            if ( *(_QWORD *)(v10 + 8LL * v14 + 8) )
              goto LABEL_12;
            v14 += v6;
          }
        }
        v4 = 0LL;
        goto LABEL_16;
      }
      v15 = *(_QWORD *)(v10 + 8LL * v14 + 8);
      if ( (v15 & PpmPerfNewCoreParkingMask.Bitmap[v14]) != v15 )
        break;
      v14 += v6;
    }
LABEL_12:
    v4 = 0LL;
    v8 = 0;
    if ( *(_DWORD *)(a1 + 304) )
      goto LABEL_16;
    v16 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 2);
    v17 = (char *)&Mm64BitPhysicalAddress + 2;
  }
  if ( (char *)v16 == v17 )
    goto LABEL_50;
  v18 = *(_DWORD *)(a1 + 460);
  do
  {
    v19 = *(unsigned int *)(v16 + 532);
    if ( v16 == a1 )
    {
LABEL_42:
      if ( (unsigned int)v19 <= v8 )
        LODWORD(v19) = v8;
      v8 = v19;
      v78 = v19;
      if ( *(_BYTE *)(v16 + 540) != (_BYTE)v4 )
      {
        v76 = v6;
        v78 = v19;
      }
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v16 + 304) != (_DWORD)v4 )
      goto LABEL_48;
    v20 = v16 + 24;
    v21 = *(_WORD *)(v16 + 24);
    v22 = &PpmPerfNewCoreParkingMask;
    v23 = PpmPerfNewCoreParkingMask.Count;
    if ( v21 >= PpmPerfNewCoreParkingMask.Count )
    {
      v23 = *(_WORD *)(v16 + 24);
      v22 = (struct _KAFFINITY_EX *)(v16 + 24);
      v21 = PpmPerfNewCoreParkingMask.Count;
    }
    for ( i = 0; ; i += v6 )
    {
      if ( i >= v21 )
      {
        if ( v22 != &PpmPerfNewCoreParkingMask )
        {
          while ( i < v23 )
          {
            if ( *(_QWORD *)(v20 + 8LL * i + 8) )
              goto LABEL_31;
            i += v6;
          }
        }
LABEL_46:
        v8 = v78;
        goto LABEL_47;
      }
      v25 = *(_QWORD *)(v20 + 8LL * i + 8);
      v18 = *(_DWORD *)(a1 + 460);
      if ( (v25 & PpmPerfNewCoreParkingMask.Bitmap[i]) != v25 )
        break;
    }
LABEL_31:
    if ( *(_QWORD *)(v2 - 35072) != *(_QWORD *)(*(_QWORD *)(v16 + 16) - 35072LL) )
      goto LABEL_46;
    v26 = *(_BYTE *)(v16 + 300);
    v27 = *(_BYTE *)(a1 + 300);
    if ( v27 != v26 && !PpmPerfQosEnabled )
      goto LABEL_46;
    if ( *(_BYTE *)(a1 + 301) != *(_BYTE *)(v16 + 301) )
    {
      v19 = (*(_QWORD *)(v16 + 488) * v19 + (*(_QWORD *)(a1 + 488) >> 1)) / *(_QWORD *)(a1 + 488);
      if ( (unsigned int)v19 > v18 )
        LODWORD(v19) = v18;
    }
    v8 = v78;
    if ( v27 == v26 )
    {
      v4 = 0LL;
      goto LABEL_42;
    }
    if ( (unsigned int)v19 <= v84 )
      LODWORD(v19) = v84;
    v84 = v19;
LABEL_47:
    v4 = 0LL;
LABEL_48:
    v16 = *(_QWORD *)v16;
  }
  while ( (char *)v16 != v17 );
  v5 = *(_DWORD *)(a1 + 468);
  v9 = v81;
  v7 = *(_DWORD *)(a1 + 460);
LABEL_50:
  v28 = *(_DWORD *)(a1 + 296);
  if ( v28 )
  {
    v29 = v28;
    v30 = (unsigned int *)(*(_QWORD *)(a1 + 312) + 24LL);
    v31 = v5;
    do
    {
      v32 = v30[1];
      v33 = v30[6];
      if ( v32 <= v5 )
        v32 = v5;
      if ( v32 < v33 )
        v33 = v32;
      if ( *(_BYTE *)(a1 + 498) && v33 >= *v30 )
        v33 = *v30;
      if ( v33 < 0x64 && v7 > v33 )
        v7 = v33;
      v34 = *v30;
      if ( v33 < *v30 )
        v34 = v33;
      if ( v9 > v34 )
        v9 = v34;
      v35 = v30[7];
      if ( v31 >= v35 )
        v35 = v31;
      v30 += 306;
      v31 = v35;
      v29 -= v6;
    }
    while ( v29 );
    v82 = v7;
    v81 = v9;
    v85 = v35;
  }
  else
  {
    v31 = *(_DWORD *)(a1 + 468);
  }
  v36 = (unsigned int)v4;
  v37 = v4;
  v83 = v4;
  v38 = v4;
  v88 = v4;
  while ( 2 )
  {
    v39 = (unsigned int)PpmQosClassesOrdered[2 * v38];
    v89 = v39;
    if ( *(_DWORD *)(a1 + 4 * v39 + 824) != (_DWORD)v4 )
    {
      if ( LOBYTE(PpmQosClassesOrdered[2 * v38 + 1]) == (_BYTE)v4 )
        v40 = a1;
      else
        v40 = a1 + 80 * v36;
      v41 = (_BYTE *)(v40 + 872);
      goto LABEL_196;
    }
    v42 = 5 * v39;
    v43 = (unsigned int *)(a1 + 468);
    if ( !*(_BYTE *)(a1 + 40 * v39 + 569) )
      v43 = (unsigned int *)(a1 + 464);
    v44 = *(_DWORD *)(a1 + 40 * v39 + 556);
    v45 = *(_DWORD *)(a1 + 40 * v39 + 552);
    v46 = *v43;
    v47 = v45;
    if ( v45 <= v44 )
      v47 = *(_DWORD *)(a1 + 40 * v39 + 556);
    if ( v46 <= v47 )
    {
      v46 = *(_DWORD *)(a1 + 40 * v39 + 556);
      if ( v45 > v44 )
        v46 = *(_DWORD *)(a1 + 40 * v39 + 552);
    }
    v48 = *(_BYTE *)(a1 + 40 * v39 + 570);
    v49 = 100;
    if ( v48 )
    {
      v50 = *(_DWORD *)(a1 + 460);
      v80 = v4;
    }
    else
    {
      v50 = v9;
      v80 = v6;
      if ( PpmPerfBoostAtGuaranteed == (_DWORD)v4 )
        v50 = 100;
    }
    v51 = *(_DWORD *)(a1 + 40 * v39 + 544);
    if ( v51 < 0x64 && v50 >= v51 )
      v50 = *(_DWORD *)(a1 + 40 * v39 + 544);
    v52 = *(_DWORD *)(a1 + 40 * v39 + 548);
    if ( v50 < v52 )
      v52 = v50;
    if ( !PpmPerfMaxOverrideEnabled )
    {
      if ( PpmCheckLatencyBoostActive )
      {
        v49 = *(unsigned __int8 *)(a1 + 40 * v39 + 571);
        if ( v49 <= *(_DWORD *)(a1 + 40 * v39 + 572) )
          v49 = *(_DWORD *)(a1 + 40 * v39 + 572);
      }
      else if ( v76 )
      {
        v49 = *(_DWORD *)&v86[4 * v79 + 204];
      }
      else
      {
        v49 = 0;
      }
    }
    v53 = v52;
    if ( v49 < v52 )
      v53 = v49;
    if ( v53 <= v46 )
    {
      v54 = v46;
    }
    else
    {
      v54 = v52;
      if ( v49 < v52 )
        v54 = v49;
    }
    if ( v54 >= v9 )
    {
      v56 = v9;
    }
    else
    {
      v55 = v52;
      if ( v49 < v52 )
        v55 = v49;
      if ( v55 <= v46 )
      {
        v56 = v46;
      }
      else
      {
        v56 = v52;
        if ( v49 < v52 )
          v56 = v49;
      }
    }
    if ( v56 <= v31 )
    {
      v60 = v31;
    }
    else
    {
      v57 = v52;
      if ( v49 < v52 )
        v57 = v49;
      if ( v57 <= v46 )
      {
        v58 = v46;
      }
      else
      {
        v58 = v52;
        if ( v49 < v52 )
          v58 = v49;
      }
      if ( v58 >= v9 )
      {
        v60 = v9;
      }
      else
      {
        v59 = v52;
        if ( v49 < v52 )
          v59 = v49;
        if ( v59 <= v46 )
        {
          v60 = v46;
        }
        else
        {
          v60 = v52;
          if ( v49 < v52 )
            v60 = v49;
        }
      }
    }
    v61 = v46;
    if ( v52 > v46 )
      v61 = v52;
    if ( v61 >= v82 )
    {
      v62 = v82;
    }
    else
    {
      v62 = v46;
      if ( v52 > v46 )
        v62 = v52;
    }
    if ( v62 <= v31 )
    {
      v46 = v31;
    }
    else
    {
      v63 = v46;
      if ( v52 > v46 )
        v63 = v52;
      if ( v63 >= v82 )
      {
        v46 = v82;
      }
      else if ( v52 > v46 )
      {
        v46 = v52;
      }
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v64 = v46;
      v65 = v46;
      goto LABEL_154;
    }
    if ( *(_BYTE *)(a1 + 40 * v39 + 577) )
    {
      v64 = v84;
      if ( v78 > v84 )
        v64 = v78;
    }
    else
    {
      v64 = v78;
    }
    v65 = v64;
    if ( v64 <= v46 )
    {
LABEL_154:
      if ( v64 < v60 )
        v65 = v60;
    }
    else
    {
      v65 = v46;
    }
    if ( ((v48 - 2) & 0xFD) != 0 )
    {
      if ( (unsigned __int8)(v48 - 5) <= 1u )
      {
LABEL_167:
        v66 = v9;
        goto LABEL_168;
      }
    }
    else
    {
      v66 = 100;
      if ( PpmPerfBoostAtGuaranteed )
        goto LABEL_167;
LABEL_168:
      if ( v65 >= v66 )
        v65 = v46;
    }
    v67 = 0;
    if ( !PpmPerfMaxOverrideEnabled )
      v67 = *((_DWORD *)v86 + 29);
    if ( v67 >= v64 )
      v68 = 0;
    else
      v68 = v64 - v67;
    if ( v68 < v60 )
      v68 = v60;
    if ( v68 > v9 )
      v68 = v9;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v69 = 0;
    else
      v69 = *(_DWORD *)(a1 + 8 * v42 + 564);
    if ( PpmCheckLatencyBoostActive && v69 >= *(unsigned __int8 *)(a1 + 8 * v42 + 576) )
      v69 = *(unsigned __int8 *)(a1 + 8 * v42 + 576);
    if ( v76 && v69 >= *(_DWORD *)&v86[4 * v79 + 192] )
      v69 = *(_DWORD *)&v86[4 * v79 + 192];
    memset_0(v90, 0, 0x50uLL);
    v70 = guard_dispatch_icall_no_overrides(v87, v65);
    v39 = v89;
    v91 = v70;
    if ( v68 > v70 )
      v68 = v70;
    v71 = *(_BYTE *)(a1 + 40 * v89 + 568) == 0;
    v100 = v80;
    v6 = 1LL;
    v98 = v71;
    v92 = v60;
    v93 = v46;
    v94 = v68;
    v95 = v69;
    v96 = *(_DWORD *)(a1 + 40 * v89 + 560);
    v97 = *(_DWORD *)(a1 + 40 * v89 + 580);
    if ( !(_DWORD)v89 )
    {
      v72 = v99;
      if ( *(_QWORD *)(a1 + 416) )
        v72 = 1;
      v99 = v72;
    }
    guard_dispatch_icall_no_overrides(v87, 0LL);
    v38 = v88;
    v41 = v90;
    v37 = v83;
    LODWORD(v4) = 0;
LABEL_196:
    if ( *(_BYTE *)(a1 + 1444) == (_BYTE)v4
      && (v73 = v41[72], *(_BYTE *)(a1 + 80 * v39 + 944) == v73)
      && *(_DWORD *)(a1 + 80 * v39 + 896) == *((_DWORD *)v41 + 6)
      && *(_DWORD *)(a1 + 80 * v39 + 900) == *((_DWORD *)v41 + 7)
      && *(_DWORD *)(a1 + 80 * v39 + 908) == *((_DWORD *)v41 + 9)
      && *(_DWORD *)(a1 + 80 * v39 + 912) == *((_DWORD *)v41 + 10) )
    {
      v9 = v81;
      if ( *(_QWORD *)(a1 + 80 * v39 + 872) == *(_QWORD *)v41
        && *(_QWORD *)(a1 + 80 * v39 + 880) == *((_QWORD *)v41 + 1)
        && v81 == *(_DWORD *)(a1 + 536)
        && (v73
         || *(_DWORD *)(a1 + 80 * v39 + 904) == *((_DWORD *)v41 + 8)
         && *(_DWORD *)(a1 + 80 * v39 + 888) == *((_DWORD *)v41 + 4)) )
      {
        v74 = v77;
        goto LABEL_209;
      }
    }
    else
    {
      v9 = v81;
    }
    v74 = v6;
    v77 = v6;
    *(_OWORD *)(a1 + 80 * v39 + 872) = *(_OWORD *)v41;
    *(_OWORD *)(a1 + 80 * v39 + 888) = *((_OWORD *)v41 + 1);
    *(_OWORD *)(a1 + 80 * v39 + 904) = *((_OWORD *)v41 + 2);
    *(_OWORD *)(a1 + 80 * v39 + 920) = *((_OWORD *)v41 + 3);
    *(_OWORD *)(a1 + 80 * v39 + 936) = *((_OWORD *)v41 + 4);
LABEL_209:
    v31 = v85;
    v37 += v6;
    v36 = (unsigned int)v39;
    v38 += v6;
    v83 = v37;
    v88 = v38;
    if ( v37 < 7 )
      continue;
    break;
  }
  if ( v74 )
  {
    if ( *(_DWORD *)(a1 + 868) != -1 )
      LODWORD(v6) = *(_DWORD *)(a1 + 868) + 1;
    *(_DWORD *)(a1 + 868) = v6;
    *(_BYTE *)(a1 + 1444) = v4;
    *(_DWORD *)(a1 + 536) = v9;
    *(LARGE_INTEGER *)(a1 + 1432) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 1440) = 0;
    PpmEventDomainPerfStateChange(a1);
    PpmEventQosClassPerfSelection(a1, 0LL);
  }
  return v74;
}
