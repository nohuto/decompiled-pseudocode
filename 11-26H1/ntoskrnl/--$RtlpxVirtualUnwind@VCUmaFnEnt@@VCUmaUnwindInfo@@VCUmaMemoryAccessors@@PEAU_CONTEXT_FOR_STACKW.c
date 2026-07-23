/*
 * XREFs of ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 * Callees:
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404125BC (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x1404132D0 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x140445AF0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ?GetUnwindCode@CUmaUnwindInfo@@QEAA?AT_UNWIND_CODE@@K@Z @ 0x1404E1C40 (-GetUnwindCode@CUmaUnwindInfo@@QEAA-AT_UNWIND_CODE@@K@Z.c)
 *     ??$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14052F6BC (--$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AM.c)
 *     ??$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140623C30 (--$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpxVirtualUnwind<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 *a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        int a9,
        _QWORD *a10)
{
  unsigned int *v10; // r13
  _QWORD *v12; // r9
  __int64 v13; // rcx
  volatile void *v14; // r15
  char *v15; // r13
  __int64 ULong64FromUser; // rcx
  __int64 result; // rax
  CUmaUnwindInfo *v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  unsigned int v22; // r15d
  __int8 v23; // r12
  __int64 v24; // r10
  unsigned int v25; // r15d
  unsigned int v26; // r12d
  unsigned int i; // r13d
  unsigned __int16 v28; // cx
  _WORD *UnwindCode; // rax
  bool v30; // cf
  __int64 v31; // rax
  __int64 Context; // rax
  int v33; // r8d
  unsigned __int64 j; // r13
  char UCharFromUser; // r15
  char v36; // al
  int v37; // edx
  unsigned __int64 v38; // r12
  bool v39; // zf
  int v40; // r12d
  unsigned __int64 v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rcx
  unsigned __int64 k; // r15
  char v46; // r12
  char v47; // al
  __m128i *v48; // rax
  char v49; // al
  __int64 v50; // rax
  __int64 v51; // r8
  volatile void *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  char v56; // al
  unsigned int v57; // r12d
  volatile void *v58; // r9
  __int64 v59; // rax
  __int64 v60; // r8
  volatile void *v61; // rcx
  unsigned __int64 v62; // rdx
  char *v63; // rsi
  __int64 v64; // rax
  int v65; // r12d
  int v66; // r15d
  BOOL v67; // ecx
  unsigned int v68; // r13d
  __int16 v69; // ax
  int v70; // r15d
  unsigned int *v71; // rdx
  unsigned __int8 v72; // r13
  unsigned int v73; // esi
  CUmaUnwindInfo *v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // edx
  __int64 v77; // r8
  int v78; // [rsp+40h] [rbp-168h]
  int v79; // [rsp+44h] [rbp-164h]
  int v80; // [rsp+44h] [rbp-164h]
  _WORD v83[2]; // [rsp+5Ch] [rbp-14Ch] BYREF
  volatile void *v84; // [rsp+60h] [rbp-148h]
  int v85; // [rsp+68h] [rbp-140h]
  int v86; // [rsp+6Ch] [rbp-13Ch]
  _QWORD *v87; // [rsp+70h] [rbp-138h]
  char *v88; // [rsp+78h] [rbp-130h]
  _QWORD *v89; // [rsp+80h] [rbp-128h]
  __m128i v90; // [rsp+90h] [rbp-118h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-108h]
  __int64 *v92; // [rsp+B0h] [rbp-F8h]
  _QWORD *v93; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 v94; // [rsp+C8h] [rbp-E0h]
  _QWORD *v95; // [rsp+D0h] [rbp-D8h]
  __int64 *v96; // [rsp+D8h] [rbp-D0h]
  __m256i v97; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v98; // [rsp+100h] [rbp-A8h]
  __int64 v99; // [rsp+110h] [rbp-98h]
  __int64 *v100; // [rsp+118h] [rbp-90h]
  __int64 v101; // [rsp+120h] [rbp-88h]
  __int64 *v102; // [rsp+128h] [rbp-80h]
  __int64 v103; // [rsp+130h] [rbp-78h]
  __int64 v104; // [rsp+138h] [rbp-70h]
  __int64 v105; // [rsp+140h] [rbp-68h]
  __m128i v106[5]; // [rsp+150h] [rbp-58h] BYREF

  v10 = a4;
  v85 = a1;
  v100 = a5;
  v12 = a10;
  v89 = a10;
  v94 = a3;
  v92 = a5;
  v88 = a6;
  v95 = a7;
  v102 = a8;
  v96 = a8;
  v13 = (__int64)a10;
  v87 = a10;
  if ( !*((_QWORD *)v10 + 2) )
  {
    v93 = a5 + 1;
    v14 = (volatile void *)a5[1];
    if ( a3 < 0x7FFFFFFF0000LL )
    {
      v101 = 1LL;
      ProbeForRead(v14, 1uLL, 4u);
      v13 = (__int64)v87;
      v12 = v87;
    }
    if ( !*v12 || (unsigned __int64)v14 >= *(_QWORD *)*v12 && (unsigned __int64)v14 <= **(_QWORD **)(v13 + 8) - 8LL )
    {
      v15 = v88;
      ULong64FromUser = RtlReadULong64FromUser(v14);
      if ( a3 == ULong64FromUser )
        return 3221225727LL;
      *v100 = ULong64FromUser;
      a5[1] += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)a5, 1);
      *v96 = (__int64)v14;
      if ( v15 )
        *v15 = 0;
      *v95 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v78 = 0;
  v79 = 0;
  v18 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)v106, (struct _UNWIND_INFO *)(a2 + v10[2]));
  v19 = *(__m128i *)v18;
  *(_OWORD *)v97.m256i_i8 = *(_OWORD *)v18;
  v20 = *((__m128i *)v18 + 1);
  *(__m128i *)&v97.m256i_u64[2] = v20;
  v21 = *((__m128i *)v18 + 2);
  v98 = v21;
  v93 = (_QWORD *)*((_QWORD *)v18 + 1);
  v22 = (unsigned __int8)v93 & 7;
  LODWORD(v84) = v22;
  if ( a6 && !*a6 )
    goto LABEL_16;
  if ( v22 >= 2 )
    goto LABEL_19;
  v106[0] = v19;
  v106[1] = v20;
  v106[2] = v21;
  v90 = *(__m128i *)v10;
  v91 = *((_QWORD *)v10 + 2);
  if ( (unsigned int)RtlpxTrivialFunction<CUmaFnEnt,CUmaUnwindInfo>((__int64)&v90, a2, (__int64)v106) )
  {
LABEL_16:
    v79 = 1;
  }
  else if ( v85 < 0 )
  {
    return 3221225512LL;
  }
LABEL_19:
  v85 &= ~0x80000000;
  v86 = 0;
  v23 = v97.m256i_i8[11];
  v99 = *(__int64 *)((char *)&v97.m256i_i64[1] + 3);
  v24 = a2;
  if ( (v97.m256i_i8[11] & 0xF) == 0 )
    goto LABEL_29;
  v25 = a3 - a2 - *v10;
  if ( v25 >= v97.m256i_u8[9] || ((unsigned __int8)v93 & 0x20) != 0 )
  {
    v22 = (unsigned int)v84;
LABEL_28:
    v86 = 1;
    goto LABEL_29;
  }
  v26 = 0;
  for ( i = v97.m256i_u8[10]; v26 < i; v26 += RtlpUnwindOpSlots(v28) )
  {
    v28 = *CUmaUnwindInfo::GetUnwindCode(&v97, v83, v26);
    if ( (HIBYTE(v28) & 0xF) == 3 )
      break;
  }
  UnwindCode = CUmaUnwindInfo::GetUnwindCode(&v97, v83, v26);
  v10 = a4;
  v23 = v99;
  v24 = a2;
  v30 = v25 < *(unsigned __int8 *)UnwindCode;
  v22 = (unsigned int)v84;
  if ( !v30 )
    goto LABEL_28;
LABEL_29:
  if ( v86 )
  {
    Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v23 & 0xF);
    v31 = Context - (v33 & 0xFFFFFFF0);
  }
  else
  {
    v31 = a5[1];
  }
  *v102 = v31;
  if ( v79 )
    goto LABEL_139;
  if ( v22 >= 2 )
  {
    if ( v97.m256i_i8[10] && (v97.m256i_i8[13] & 0xF) == 6 )
    {
      v65 = a3 - v24;
      if ( (v97.m256i_i8[13] & 0x10) != 0 )
      {
        v66 = v10[1] - v97.m256i_u8[12];
        v67 = v65 - v66 < (unsigned int)v97.m256i_u8[12];
        v78 = v67;
      }
      else
      {
        v66 = 0;
        v67 = 0;
      }
      if ( v67 || (v68 = 1, v97.m256i_u8[10] <= 1u) )
      {
        v71 = a4;
      }
      else
      {
        while ( 1 )
        {
          v69 = *CUmaUnwindInfo::GetUnwindCode(&v97, v83, v68);
          if ( (HIBYTE(v69) & 0xF) != 6 )
            break;
          v70 = HIBYTE(v69) >> 4 << 8;
          v39 = (unsigned __int8)v69 + v70 == 0;
          v66 = (unsigned __int8)v69 + v70;
          v71 = a4;
          if ( !v39 )
          {
            v66 = a4[1] - v66;
            if ( v65 - v66 < (unsigned int)v97.m256i_u8[12] )
            {
              v67 = 1;
              v78 = 1;
              goto LABEL_135;
            }
            if ( ++v68 < v97.m256i_u8[10] )
              continue;
          }
          goto LABEL_134;
        }
        v71 = a4;
LABEL_134:
        v67 = v78;
LABEL_135:
        v24 = a2;
      }
      if ( v67 )
      {
        v90 = *(__m128i *)v71;
        v91 = *((_QWORD *)v71 + 2);
        RtlpUnwindEpilogue<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
          v24,
          a3,
          v65 - v66,
          &v90,
          a5,
          (__int64)v87);
        if ( v88 )
          *v88 = 0;
        goto LABEL_145;
      }
    }
LABEL_139:
    v90 = *(__m128i *)a4;
    v91 = *((_QWORD *)a4 + 2);
    result = RtlpUnwindPrologue<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
               a2,
               a3,
               *v96,
               &v90,
               (__int64)a5,
               v88,
               a4,
               (__int64)v87);
    if ( (int)result < 0 )
      return result;
    v72 = v85;
    if ( v85 )
    {
      v73 = a3 - a2 - *a4;
      v74 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)v106, (struct _UNWIND_INFO *)(a2 + a4[2]));
      *(_OWORD *)v97.m256i_i8 = *(_OWORD *)v74;
      v75 = *((_QWORD *)v74 + 1);
      if ( v73 >= BYTE1(v75) && (((unsigned __int8)v75 >> 3) & v72) != 0 )
      {
        v76 = BYTE2(v75) + (BYTE2(v75) & 1);
        v77 = v97.m256i_i64[0];
        *v95 = v97.m256i_i64[0] + 2 * (v76 + 2 + 2LL);
        if ( v76 >= 0x10 )
          RtlReadULongFromUser(2LL * v76 + v77 + 4);
      }
    }
    goto LABEL_145;
  }
  j = a3;
  UCharFromUser = RtlReadUCharFromUser(a3);
  v80 = 0;
  if ( UCharFromUser != 72 )
  {
LABEL_40:
    if ( (UCharFromUser & 0xFE) != 0x48 )
      goto LABEL_48;
    if ( (unsigned __int8)RtlReadUCharFromUser(a3 + 1) != 0x8D )
      goto LABEL_48;
    v36 = RtlReadUCharFromUser(a3 + 2);
    v37 = v36 & 7 | (8 * (UCharFromUser & 1));
    v80 = v37;
    if ( !v37 || v37 != (v23 & 0xF) )
      goto LABEL_48;
    if ( (v36 & 0xF8) == 0x60 )
      goto LABEL_37;
    if ( (v36 & 0xF8) != 0xA0 )
      goto LABEL_48;
LABEL_46:
    j = a3 + 7;
    goto LABEL_47;
  }
  if ( (unsigned __int8)RtlReadUCharFromUser(a3 + 1) != 0x83 || (unsigned __int8)RtlReadUCharFromUser(a3 + 2) != 0xC4 )
  {
    if ( (unsigned __int8)RtlReadUCharFromUser(a3 + 1) == 0x81 && (unsigned __int8)RtlReadUCharFromUser(a3 + 2) == 0xC4 )
      goto LABEL_46;
    goto LABEL_40;
  }
LABEL_37:
  for ( j = a3 + 4; ; j += 2LL )
  {
LABEL_47:
    while ( 1 )
    {
      UCharFromUser = RtlReadUCharFromUser(j);
LABEL_48:
      v38 = j + 1;
      if ( (UCharFromUser & 0xF8) != 0x58 )
        break;
      ++j;
    }
    if ( (UCharFromUser & 0xF0) != 0x40 || (RtlReadUCharFromUser(j + 1) & 0xF8) != 0x58 )
      break;
  }
  if ( UCharFromUser == -14 )
  {
    ++j;
    UCharFromUser = RtlReadUCharFromUser(v38);
  }
  if ( (unsigned __int8)(UCharFromUser + 62) <= 1u
    || UCharFromUser == -13 && (unsigned __int8)RtlReadUCharFromUser(j + 1) == 0xC3 )
  {
    goto LABEL_66;
  }
  if ( ((UCharFromUser + 23) & 0xFD) != 0 )
  {
    if ( UCharFromUser == -1 && (unsigned __int8)RtlReadUCharFromUser(j + 1) == 37 )
    {
      v78 = 1;
      goto LABEL_76;
    }
    if ( (UCharFromUser & 0xF8) == 0x48 && (unsigned __int8)RtlReadUCharFromUser(j + 1) == 0xFF )
    {
      v39 = (RtlReadUCharFromUser(j + 2) & 0x38) == 32;
      goto LABEL_65;
    }
    goto LABEL_74;
  }
  v41 = j + 1;
  if ( UCharFromUser == -21 )
    v42 = (char)RtlReadUCharFromUser(v41) + 2;
  else
    v42 = RtlReadULongFromUser(v41) + 5;
  v43 = v42 + j - a2;
  v44 = *a4;
  if ( v43 >= v44 && v43 < a4[1] )
  {
    if ( v43 == v44 )
    {
      v39 = ((unsigned __int8)v93 & 0x20) == 0;
LABEL_65:
      if ( v39 )
      {
LABEL_66:
        v40 = 1;
        v78 = 1;
        goto LABEL_75;
      }
    }
LABEL_74:
    v40 = 0;
    goto LABEL_75;
  }
  if ( a3 < 0x7FFFFFFF0000LL )
    RtlReadUCharFromUser(v42 + j);
  v90 = *(__m128i *)a4;
  v91 = *((_QWORD *)a4 + 2);
  v48 = RtlpxSameFunction<CUmaFnEnt,CUmaUnwindInfo>(v106, (__int128 *)v90.m128i_i8, a2, a2 + v43);
  v90 = *v48;
  v91 = v48[1].m128i_i64[0];
  if ( v91 && v43 != v90.m128i_u32[0] )
    goto LABEL_74;
  v40 = 1;
  v78 = 1;
LABEL_75:
  if ( !v40 )
    goto LABEL_139;
LABEL_76:
  k = a3;
  v46 = RtlReadUCharFromUser(a3);
  if ( (v46 & 0xF8) != 0x48 )
    goto LABEL_93;
  v47 = RtlReadUCharFromUser(a3 + 1);
  if ( v47 != -125 )
  {
    if ( v47 == -127 )
    {
      a5[1] += (int)RtlReadULongFromUser(a3 + 3);
    }
    else
    {
      if ( v47 != -115 )
        goto LABEL_93;
      v49 = RtlReadUCharFromUser(a3 + 2) & 0xF8;
      if ( v49 == 96 )
      {
        a5[1] = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v80);
        goto LABEL_78;
      }
      if ( v49 != -96 )
        goto LABEL_93;
      RtlReadULongFromUser(a3 + 3);
      v50 = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v80);
      a5[1] = v51 + v50;
    }
    k = a3 + 7;
    goto LABEL_92;
  }
LABEL_78:
  a5[1] += (char)RtlReadUCharFromUser(a3 + 3);
  for ( k = a3 + 4; ; k += 2LL )
  {
LABEL_92:
    while ( 1 )
    {
      v46 = RtlReadUCharFromUser(k);
LABEL_93:
      if ( (v46 & 0xF8) != 0x58 )
        break;
      LODWORD(v84) = v46 & 7;
      v52 = (volatile void *)a5[1];
      if ( a3 < 0x7FFFFFFF0000LL )
      {
        v103 = 1LL;
        ProbeForRead(v52, 1uLL, 4u);
      }
      if ( *v89 && ((unsigned __int64)v52 < *(_QWORD *)*v89 || (unsigned __int64)v52 > *(_QWORD *)v87[1] - 8LL) )
        return 3221225512LL;
      v53 = RtlReadULong64FromUser(v52);
      RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, (int)v84, v53);
      v55 = v87[2];
      if ( v55 )
        *(_QWORD *)(v55 + 8 * v54 + 128) = v52;
      a5[1] += 8LL;
      ++k;
    }
    if ( (v46 & 0xF0) != 0x40 )
      break;
    v56 = RtlReadUCharFromUser(k + 1);
    if ( (v56 & 0xF8) != 0x58 )
      break;
    v57 = v56 & 7 | (8 * (v46 & 1));
    v58 = (volatile void *)a5[1];
    v84 = v58;
    if ( a3 < 0x7FFFFFFF0000LL )
    {
      v104 = 1LL;
      ProbeForRead(v58, 1uLL, 4u);
      v58 = v84;
    }
    if ( *v89 && ((unsigned __int64)v58 < *(_QWORD *)*v89 || (unsigned __int64)v58 > *(_QWORD *)v87[1] - 8LL) )
      return 3221225512LL;
    v59 = RtlReadULong64FromUser(v58);
    RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v57, v59);
    v60 = v87[2];
    if ( v60 )
      *(_QWORD *)(v60 + 8LL * v57 + 128) = v84;
    a5[1] += 8LL;
  }
  if ( a3 < 0x7FFFFFFF0000LL )
  {
    v105 = 8LL;
    v61 = (volatile void *)a5[1];
    v105 = 1LL;
    ProbeForRead(v61, 1uLL, 4u);
  }
  if ( *v89 )
  {
    v62 = a5[1];
    if ( v62 < *(_QWORD *)*v89 || v62 > *(_QWORD *)v87[1] - 8LL )
      return 3221225512LL;
  }
  v63 = v88;
  v64 = RtlReadULong64FromUser(a5[1]);
  *v100 = v64;
  a5[1] += 8LL;
  RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)a5, 1);
  if ( v63 )
    *v63 = 0;
LABEL_145:
  if ( v78 && v86 )
    *v96 = a5[1] - 8;
  return 0LL;
}
