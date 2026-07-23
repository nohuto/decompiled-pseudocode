/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x140483470
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14048482C (PpmGetPerfPolicyClass.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PpmEventQosClassPolicy @ 0x140ACF798 (PpmEventQosClassPolicy.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  unsigned __int8 PerfPolicyClass; // al
  int Next_high; // ecx
  unsigned __int8 v4; // r8
  char v5; // r12
  char v6; // r13
  __int64 v7; // rax
  _OWORD *v8; // r15
  __int64 v9; // r10
  __int64 WriteTransferCount; // rdx
  int *v11; // r9
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  _OWORD *v14; // rbx
  __int64 v15; // rdx
  int v16; // esi
  __int128 v17; // xmm1
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  SIZE_T v23; // rax
  unsigned int v24; // edx
  __int128 v25; // xmm1
  __int64 v26; // xmm0_8
  unsigned int v27; // ebx
  unsigned __int64 v28; // r13
  unsigned int v29; // ecx
  unsigned int v30; // r12d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // esi
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned __int8 v36; // al
  unsigned __int8 v37; // cl
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edi
  unsigned int v41; // r11d
  unsigned __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  unsigned int v46; // eax
  char v47; // al
  unsigned __int8 v48; // al
  unsigned __int8 v49; // cl
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // r8d
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // ecx
  char v56; // al
  bool v57; // al
  char v58; // r9
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // r8d
  unsigned int v62; // edx
  unsigned int v63; // ebx
  unsigned int v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // eax
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rdi
  __int64 v72; // rbx
  SIZE_T v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int64 v76; // xmm0_8
  bool v77; // cf
  unsigned int v78; // esi
  _WORD *v79; // rdi
  unsigned int v81; // [rsp+28h] [rbp-49h]
  unsigned __int8 v82; // [rsp+2Dh] [rbp-44h]
  unsigned int v83; // [rsp+30h] [rbp-41h]
  char v84; // [rsp+34h] [rbp-3Dh]
  char v85; // [rsp+38h] [rbp-39h]
  int v86; // [rsp+3Ch] [rbp-35h]
  int v87; // [rsp+48h] [rbp-29h]
  __m128i v88; // [rsp+50h] [rbp-21h]
  __int64 v89; // [rsp+60h] [rbp-11h]
  unsigned __int64 v90; // [rsp+68h] [rbp-9h]
  __int128 Source2; // [rsp+78h] [rbp+7h] BYREF
  __int128 v92; // [rsp+88h] [rbp+17h]
  __int64 v93; // [rsp+98h] [rbp+27h]

  PerfPolicyClass = PpmGetPerfPolicyClass(*(_QWORD *)(a1 + 16));
  Next_high = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v82 = PerfPolicyClass;
  v4 = PerfPolicyClass;
  v83 = 0;
  v5 = 0;
  v87 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v6 = 0;
  v85 = 0;
  v7 = 0LL;
  v84 = 0;
  v89 = 0LL;
  v8 = 0LL;
  v86 = 0;
  do
  {
    v9 = (unsigned int)PpmQosClassesOrdered[2 * v7];
    v93 = 0LL;
    v81 = v9;
    Source2 = 0LL;
    v92 = 0LL;
    switch ( (_DWORD)v9 )
    {
      case 0:
LABEL_30:
        v11 = (int *)((char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40);
        goto LABEL_31;
      case 1:
        WriteTransferCount = *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay;
        v8 = (_OWORD *)(a1 + 544);
LABEL_10:
        if ( WriteTransferCount )
          v11 = (int *)(WriteTransferCount + 712LL * Next_high + 40);
        else
          v11 = 0LL;
        goto LABEL_31;
      case 2:
        WriteTransferCount = PopDirectedDripsDiagLock.WriteTransferCount;
        v8 = (_OWORD *)(a1 + 584);
        goto LABEL_10;
      case 3:
        WriteTransferCount = PopDirectedDripsDiagLock.OtherTransferCount;
        v8 = (_OWORD *)(a1 + 544);
        goto LABEL_10;
    }
    if ( (_DWORD)v9 != 4 )
    {
      if ( (_DWORD)v9 == 5 )
      {
        WriteTransferCount = (__int64)PopDirectedDripsDiagLock.QueuedScb;
        v8 = (_OWORD *)(a1 + 784);
      }
      else
      {
        if ( (_DWORD)v9 != 6 )
          goto LABEL_30;
        WriteTransferCount = PopDirectedDripsDiagLock.ReadTransferCount;
        v8 = (_OWORD *)(a1 + 624);
      }
      goto LABEL_10;
    }
    v8 = (_OWORD *)(a1 + 544);
    if ( !PopDirectedDripsDiagLock.OtherTransferCount )
    {
      v11 = 0LL;
      goto LABEL_16;
    }
    v11 = &PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor + 178 * Next_high;
LABEL_31:
    if ( v11 )
    {
      v12 = *(__m128 *)v11;
      v13 = *(__m128 *)&v11[4 * v4];
      goto LABEL_17;
    }
LABEL_16:
    v12 = 0LL;
    v13 = 0LL;
LABEL_17:
    v14 = v8;
    v15 = v4;
    v90 = v13.m128_u64[0];
    v88.m128i_i64[0] = v12.m128_u64[0];
    if ( v8 )
    {
      v16 = 0;
      v17 = v8[1];
      Source2 = *v8;
      if ( !PopHeteroSystem )
        v16 = 64;
      v93 = *((_QWORD *)v8 + 4);
      v92 = v17;
      if ( PpmPerfQosGroupPolicyDisable )
        v16 |= 0x100u;
      if ( !PpmPerfSchedulerDirectedPerfStatesSupported )
        v16 |= 0x80u;
      if ( v11 )
      {
        v18 = (__m128i)_mm_and_ps(v12, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyClassAgnosticQosSettingsMask));
        if ( !(v18.m128i_i64[0] | _mm_srli_si128(v18, 8).m128i_u64[0]) )
        {
          v19 = (__m128i)_mm_and_ps(
                           v13,
                           (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyClassSpecificQosSettingsMask));
          if ( !(v19.m128i_i64[0] | _mm_srli_si128(v19, 8).m128i_u64[0]) )
            v16 |= 4u;
        }
      }
      else
      {
        v16 |= 2u;
      }
      v20 = *(_QWORD *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v20 )
        v20 = *(_QWORD *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      if ( !v20 )
        v16 |= 0x20u;
      if ( PpmPerfMaxOverrideEnabled )
        v16 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v16 |= 1u;
      if ( v16 )
      {
        v21 = a1 + 40 * v9;
        v22 = v9;
        v23 = RtlCompareMemory((const void *)(v21 + 544), &Source2, 0x28uLL);
        v24 = v83;
        v25 = v92;
        *(_OWORD *)(v21 + 544) = Source2;
        if ( v23 == 40 )
          v5 = 1;
        v26 = v93;
        *(_OWORD *)(v21 + 560) = v25;
        v85 = v5;
        *(_QWORD *)(v21 + 576) = v26;
        v27 = 0;
        *(_DWORD *)(a1 + 4 * v22 + 824) = v16;
        goto LABEL_219;
      }
    }
    if ( (_DWORD)v9 == 3 )
    {
      v28 = PpmPolicyClassSpecificQosSettingsMask;
      v8 = 0LL;
      v14 = 0LL;
      v88 = _mm_loadu_si128((const __m128i *)&PpmPolicyClassAgnosticQosSettingsMask);
LABEL_56:
      v30 = *((unsigned __int8 *)v11 + v4 + 62);
      LODWORD(Source2) = v30;
      if ( !v8 )
        goto LABEL_62;
      goto LABEL_57;
    }
    v28 = v90;
    if ( !v8 )
      goto LABEL_56;
    if ( (v90 & 0x80u) != 0LL )
    {
      v29 = *((unsigned __int8 *)v11 + v4 + 62);
      if ( (_DWORD)v9 == 4 )
      {
        if ( v29 > *(_DWORD *)v8 )
          goto LABEL_56;
      }
      else if ( v29 < *(_DWORD *)v8 )
      {
        goto LABEL_56;
      }
    }
    v30 = Source2;
LABEL_57:
    if ( (v28 & 0x40) == 0 )
      goto LABEL_60;
    v31 = *((unsigned __int8 *)v11 + v4 + 59);
    v32 = *((_DWORD *)v14 + 2);
    if ( (_DWORD)v9 == 4 )
    {
      if ( v31 <= v32 )
      {
LABEL_60:
        v33 = DWORD2(Source2);
        goto LABEL_63;
      }
    }
    else if ( v31 >= v32 )
    {
      goto LABEL_60;
    }
LABEL_62:
    v33 = *((unsigned __int8 *)v11 + v4 + 59);
    DWORD2(Source2) = v33;
LABEL_63:
    if ( !PpmPerfEppViaPerfControl )
      goto LABEL_77;
    if ( !v8 )
    {
LABEL_70:
      DWORD1(v92) = v11[v4 + 30];
      if ( !v8 )
        goto LABEL_76;
      goto LABEL_71;
    }
    if ( (v28 & 0x400000000LL) != 0 )
    {
      v34 = v11[v4 + 30];
      v35 = *((_DWORD *)v14 + 5);
      if ( (_DWORD)v9 == 4 )
      {
        if ( v34 < v35 )
          goto LABEL_70;
      }
      else if ( v34 > v35 )
      {
        goto LABEL_70;
      }
    }
LABEL_71:
    if ( (v28 & 0x10000) == 0 )
      goto LABEL_77;
    v36 = *((_BYTE *)v11 + v4 + 152);
    v37 = *((_BYTE *)v14 + 32);
    if ( (_DWORD)v9 == 4 )
    {
      if ( v36 >= v37 )
        goto LABEL_77;
    }
    else if ( v36 <= v37 )
    {
      goto LABEL_77;
    }
LABEL_76:
    LOBYTE(v93) = *((_BYTE *)v11 + v4 + 152);
LABEL_77:
    if ( PpmFrequencyOverride )
    {
      v38 = (((unsigned __int64)*(unsigned int *)(a1 + 456) >> 1) + 100LL * (unsigned int)PpmFrequencyOverride)
          / *(unsigned int *)(a1 + 456);
      v15 = v4;
      if ( (unsigned int)v38 < v30 )
        v30 = (((unsigned __int64)*(unsigned int *)(a1 + 456) >> 1) + 100LL * (unsigned int)PpmFrequencyOverride)
            / *(unsigned int *)(a1 + 456);
      LODWORD(Source2) = v30;
      if ( (unsigned int)v38 < v33 )
        v33 = v38;
      DWORD2(Source2) = v33;
    }
    v39 = (unsigned int)v11[v15 + 21];
    v40 = *(_DWORD *)(a1 + 460);
    v41 = v40;
    if ( (_DWORD)v39 )
    {
      v42 = (((unsigned __int64)*(unsigned int *)(a1 + 456) >> 1) + 100 * v39) / *(unsigned int *)(a1 + 456);
      v15 = v4;
      if ( (unsigned int)v42 < v40 )
        v41 = v42;
    }
    if ( v8 )
    {
      if ( (v28 & 0x4000000000LL) == 0 )
        goto LABEL_90;
      v43 = *((_DWORD *)v14 + 1);
      if ( (_DWORD)v9 == 4 )
      {
        if ( v41 <= v43 )
        {
LABEL_90:
          v41 = DWORD1(Source2);
          goto LABEL_93;
        }
      }
      else if ( v41 >= v43 )
      {
        goto LABEL_90;
      }
    }
    DWORD1(Source2) = v41;
LABEL_93:
    v44 = (unsigned int)v11[v15 + 24];
    if ( (_DWORD)v44 )
    {
      v15 = v4;
      v45 = (((unsigned __int64)*(unsigned int *)(a1 + 456) >> 1) + 100 * v44) / *(unsigned int *)(a1 + 456);
      if ( (unsigned int)v45 >= v40 )
        LODWORD(v45) = v40;
    }
    else
    {
      LODWORD(v45) = 0;
    }
    if ( v8 )
    {
      if ( (v28 & 0x8000000000LL) == 0 )
        goto LABEL_101;
      v46 = *((_DWORD *)v14 + 3);
      if ( v81 == 4 )
      {
        if ( (unsigned int)v45 <= v46 )
        {
LABEL_101:
          LODWORD(v45) = HIDWORD(Source2);
          goto LABEL_104;
        }
      }
      else if ( (unsigned int)v45 >= v46 )
      {
        goto LABEL_101;
      }
    }
    HIDWORD(Source2) = v45;
LABEL_104:
    if ( PpmPerfAutonomousActivityWindowViaPerfControl )
    {
      if ( v8 && (v88.m128i_i64[0] & 0x800000000LL) == 0 )
        goto LABEL_109;
      LODWORD(v92) = v11[33];
    }
    if ( !v8 )
      goto LABEL_116;
LABEL_109:
    if ( (v88.m128i_i16[0] & 0x400) != 0 )
    {
      v47 = *((_BYTE *)v14 + 26);
      if ( v81 == 4 )
      {
        if ( !v47 && v11[28] )
        {
LABEL_116:
          BYTE10(v92) = *((_BYTE *)v11 + 112);
          if ( !v8 )
            goto LABEL_122;
        }
      }
      else if ( v47 && !v11[28] )
      {
        goto LABEL_116;
      }
    }
    if ( (v28 & 0x4000) == 0 )
      goto LABEL_123;
    v48 = *((_BYTE *)v11 + v15 + 137);
    v49 = *((_BYTE *)v14 + 27);
    if ( v81 == 4 )
    {
      if ( v48 <= v49 )
        goto LABEL_123;
    }
    else if ( v48 >= v49 )
    {
      goto LABEL_123;
    }
LABEL_122:
    BYTE11(v92) = *((_BYTE *)v11 + v15 + 137);
LABEL_123:
    v50 = (unsigned int)v11[v15 + 35];
    if ( (_DWORD)v50 )
    {
      v51 = (((unsigned __int64)*(unsigned int *)(a1 + 456) >> 1) + 100 * v50) / *(unsigned int *)(a1 + 456);
      v15 = v4;
      if ( (unsigned int)v51 < v40 )
        v40 = v51;
    }
    else
    {
      v40 = 0;
    }
    if ( v8 )
    {
      if ( (v28 & 0x8000) == 0 )
        goto LABEL_132;
      v52 = v81;
      v53 = *((_DWORD *)v14 + 7);
      if ( v81 == 4 )
      {
        if ( v40 <= v53 )
          goto LABEL_132;
      }
      else if ( v40 >= v53 )
      {
        goto LABEL_132;
      }
    }
    else
    {
      v52 = v81;
    }
    HIDWORD(v92) = v40;
    if ( !v8 )
      goto LABEL_142;
LABEL_132:
    v52 = v81;
    if ( (v28 & 0x10000000000000LL) != 0 )
    {
      v54 = *((unsigned __int8 *)v11 + v15 + 259);
      v55 = *((_DWORD *)v14 + 9);
      if ( v81 == 4 )
      {
        if ( v54 > v55 )
LABEL_142:
          HIDWORD(v93) = *((unsigned __int8 *)v11 + v15 + 259);
      }
      else if ( v54 < v55 )
      {
        goto LABEL_142;
      }
    }
    v56 = *((_BYTE *)v11 + 48);
    v57 = v56 == 1 || v56 == 2 && *(_BYTE *)(a1 + 500);
    if ( !v8 || (v88.m128i_i16[0] & 0x800) != 0 )
      BYTE9(v92) = v57;
    if ( *(_BYTE *)(a1 + 529) == 2 )
    {
      v58 = 0;
    }
    else if ( !*((_BYTE *)v11 + 136) || (v58 = 0, !*(_BYTE *)(a1 + 528)) )
    {
      v58 = 1;
    }
    if ( v8 && (v88.m128i_i64[0] & 0x1000000000LL) == 0 )
    {
      v6 = v84;
    }
    else
    {
      v6 = v84;
      if ( v58 )
        v6 = 1;
      BYTE8(v92) = v58;
      v84 = v6;
    }
    v59 = v45;
    if ( v33 > (unsigned int)v45 )
      v59 = v33;
    if ( v30 <= v59 )
    {
      v30 = v45;
      if ( v33 > (unsigned int)v45 )
        v30 = v33;
      LODWORD(Source2) = v30;
    }
    v60 = v45;
    if ( v33 > (unsigned int)v45 )
      v60 = v33;
    if ( v41 <= v60 )
    {
      v41 = v45;
      if ( v33 > (unsigned int)v45 )
        v41 = v33;
      DWORD1(Source2) = v41;
    }
    if ( v52 == 4 )
    {
      v61 = *(unsigned __int8 *)(a1 + 691);
      v62 = *(_DWORD *)(a1 + 692);
      v63 = v45;
      if ( v33 > (unsigned int)v45 )
        v63 = v33;
      v64 = v41;
      v65 = *(unsigned __int8 *)(a1 + 691);
      if ( v30 < v41 )
        v64 = v30;
      if ( v61 <= v62 )
        v65 = *(_DWORD *)(a1 + 692);
      if ( v64 >= v65 )
      {
        v66 = *(_DWORD *)(a1 + 692);
        if ( v61 > v62 )
          v66 = *(unsigned __int8 *)(a1 + 691);
      }
      else
      {
        v66 = v41;
        if ( v30 < v41 )
          v66 = v30;
      }
      if ( v63 <= v66 )
      {
        v67 = v41;
        v68 = *(_DWORD *)(a1 + 692);
        if ( v30 < v41 )
          v67 = v30;
        if ( v61 > v62 )
          v68 = *(unsigned __int8 *)(a1 + 691);
        if ( v67 >= v68 )
        {
          if ( v61 > v62 )
            v62 = *(unsigned __int8 *)(a1 + 691);
          DWORD2(Source2) = v62;
        }
        else
        {
          if ( v30 < v41 )
            v41 = v30;
          DWORD2(Source2) = v41;
        }
      }
      else if ( v33 <= (unsigned int)v45 )
      {
        DWORD2(Source2) = v45;
      }
      v52 = v81;
      if ( PpmPerfEppViaPerfControl )
      {
        v69 = DWORD1(v92);
        if ( DWORD1(v92) >= *(unsigned __int8 *)(a1 + 696) )
          v69 = *(unsigned __int8 *)(a1 + 696);
        DWORD1(v92) = v69;
      }
    }
    if ( v58 )
    {
      v70 = *((_DWORD *)stru_140FC11F0.Padding + v52);
      if ( v70 == 1 )
        goto LABEL_217;
      if ( v70 == 3 )
      {
        if ( *(_BYTE *)(a1 + 300) )
          goto LABEL_217;
      }
      else if ( v70 == 2 && !*(_BYTE *)(a1 + 300) )
      {
LABEL_217:
        BYTE1(v93) = 1;
        goto LABEL_210;
      }
    }
    BYTE1(v93) = 0;
LABEL_210:
    v71 = v52;
    v72 = a1 + 40LL * v52;
    v73 = RtlCompareMemory((const void *)(v72 + 544), &Source2, 0x28uLL);
    v74 = Source2;
    v5 = v85;
    v75 = v92;
    *(_DWORD *)(a1 + 4 * v71 + 824) = 0;
    if ( v73 != 40 )
      v5 = 1;
    *(_OWORD *)(v72 + 544) = v74;
    v85 = v5;
    v76 = v93;
    *(_OWORD *)(v72 + 560) = v75;
    *(_QWORD *)(v72 + 576) = v76;
    v27 = 0;
    if ( v8 && RtlCompareMemory(v8, &Source2, 0x28uLL) == 40 )
    {
      v24 = v83;
      *(_DWORD *)(a1 + 4 * v71 + 824) = 8;
    }
    else
    {
      v24 = ++v83;
    }
LABEL_219:
    Next_high = v87;
    v7 = v89 + 1;
    v4 = v82;
    v77 = (unsigned int)++v86 < 7;
    ++v89;
  }
  while ( v77 );
  *(_BYTE *)(a1 + 530) = v6;
  v78 = 0;
  v79 = (_WORD *)(a1 + 852);
  *(_BYTE *)(a1 + 866) = v24 > 1;
  do
  {
    *v79 = 0;
    do
    {
      if ( v78 == v27
        || RtlCompareMemory(
             (const void *)(a1 + 8 * (v78 + 4 * (v78 + 17LL))),
             (const void *)(a1 + 8 * (v27 + 4 * (v27 + 17LL))),
             0x28uLL) == 40 )
      {
        *v79 |= 1 << v27;
      }
      ++v27;
    }
    while ( v27 < 7 );
    ++v78;
    v27 = 0;
    ++v79;
  }
  while ( v78 < 7 );
  PpmEventQosClassPolicy(a1, 0LL);
  return v5;
}
