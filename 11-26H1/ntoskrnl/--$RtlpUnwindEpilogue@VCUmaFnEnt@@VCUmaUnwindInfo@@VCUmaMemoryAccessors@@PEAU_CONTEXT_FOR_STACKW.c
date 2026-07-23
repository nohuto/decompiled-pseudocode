/*
 * XREFs of ??$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140623C30
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x140445AF0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     ?GetUnwindCode@CUmaUnwindInfo@@QEAA?AT_UNWIND_CODE@@K@Z @ 0x1404E1C40 (-GetUnwindCode@CUmaUnwindInfo@@QEAA-AT_UNWIND_CODE@@K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindEpilogue<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  int v7; // r13d
  CUmaUnwindInfo *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // edi
  int v13; // r14d
  unsigned __int16 v14; // cx
  char v15; // al
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  volatile void *v19; // r12
  __int64 ULong64FromUser; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r15
  _QWORD *v24; // r13
  __int64 v25; // rax
  volatile void *v26; // rdi
  __int64 v27; // rax
  __int16 v28; // [rsp+20h] [rbp-128h] BYREF
  int v29; // [rsp+24h] [rbp-124h] BYREF
  __int64 v30; // [rsp+28h] [rbp-120h]
  int v31; // [rsp+30h] [rbp-118h]
  unsigned __int64 v32; // [rsp+38h] [rbp-110h]
  unsigned int v33; // [rsp+40h] [rbp-108h]
  __int64 v34; // [rsp+48h] [rbp-100h]
  __int64 v35; // [rsp+50h] [rbp-F8h]
  __int64 v36; // [rsp+58h] [rbp-F0h]
  __int64 v37; // [rsp+60h] [rbp-E8h]
  _OWORD *v38; // [rsp+70h] [rbp-D8h]
  __int64 *v39; // [rsp+78h] [rbp-D0h]
  __int64 v40; // [rsp+80h] [rbp-C8h]
  __int64 v41; // [rsp+88h] [rbp-C0h]
  __int64 v42; // [rsp+90h] [rbp-B8h]
  __int64 v43; // [rsp+98h] [rbp-B0h]
  _OWORD v44[3]; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-68h]

  v38 = a4;
  v36 = a1;
  v6 = a5;
  v30 = (__int64)a5;
  v39 = a5;
  v34 = a6;
  v37 = (__int64)a5;
  v35 = a6;
  v7 = 0;
  v29 = 0;
  while ( 1 )
  {
    v8 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)&v45, (struct _UNWIND_INFO *)(a1 + *((unsigned int *)a4 + 2)));
    v44[0] = *(_OWORD *)v8;
    v44[1] = *((_OWORD *)v8 + 1);
    v44[2] = *((_OWORD *)v8 + 2);
    v9 = *((_QWORD *)v8 + 1);
    v32 = v9;
    v10 = BYTE2(v9);
    v33 = BYTE2(v9);
    v11 = BYTE2(v9);
    v12 = 0;
    if ( BYTE2(v9) )
    {
      v13 = v29;
      do
      {
        v14 = *CUmaUnwindInfo::GetUnwindCode(v44, &v28, v12);
        v15 = HIBYTE(v14) & 0xF;
        if ( (v14 & 0xF00) == 0 || v15 == 10 )
          break;
        if ( v15 != 2 || (v14 & 0xF000u) != 0 )
        {
          if ( v11 != v10 )
            v11 = -1;
        }
        else
        {
          v11 = v12;
        }
        if ( (HIBYTE(v14) & 0xF) == 2 || (HIBYTE(v14) & 0xF) == 1 )
          ++v13;
        v12 += RtlpUnwindOpSlots(v14);
      }
      while ( v12 < v10 );
      v29 = v13;
      v6 = (_QWORD *)v30;
      LOBYTE(v9) = v32;
    }
    if ( v12 < v10 || (v9 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v7 > 0x20 )
      return 3221225727LL;
    CUmaFnEnt::CUmaFnEnt(
      (CUmaFnEnt *)&v45,
      (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(*(_QWORD *)&v44[0] + 4LL + 2LL * (BYTE10(v44[0]) + (BYTE10(v44[0]) & 1u))));
    a4 = v38;
    *v38 = v45;
    *((_QWORD *)a4 + 2) = v46;
    a1 = v36;
  }
  if ( v11 < v10 && v29 == 2 && v12 == v10 )
    v12 = v11;
  v17 = 0;
  v31 = 0;
  v28 = 0;
  while ( 1 )
  {
    LODWORD(v36) = v12;
    LODWORD(v32) = v17;
    if ( v12 >= v10 )
      goto LABEL_60;
    v28 = *CUmaUnwindInfo::GetUnwindCode(v44, &v29, v12);
    v18 = HIBYTE(v28) >> 4;
    LODWORD(v38) = v18;
    if ( (v28 & 0xF00) != 0 )
      break;
    if ( v17 >= a3 )
    {
      v19 = (volatile void *)v6[1];
      v30 = (__int64)v19;
      if ( a2 < 0x7FFFFFFF0000LL )
      {
        v40 = 1LL;
        ProbeForRead(v19, 1uLL, 4u);
      }
      if ( *(_QWORD *)v34
        && ((unsigned __int64)v19 < **(_QWORD **)v34 || (unsigned __int64)v19 > **(_QWORD **)(v34 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      v6[1] += 8LL;
      ULong64FromUser = RtlReadULong64FromUser(v19);
      RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v18, ULong64FromUser);
      v21 = *(_QWORD *)(v35 + 16);
      if ( v21 )
        *(_QWORD *)(v21 + 8LL * v18 + 128) = v19;
      v10 = v33;
    }
    v31 = ++v17;
    if ( v18 >= 8 )
    {
      v17 = v32 + 2;
      v31 = v32 + 2;
    }
    ++v12;
  }
  if ( v12 >= v10 )
    goto LABEL_60;
  if ( (HIBYTE(v28) & 0xF) == 2 && !v18 )
  {
    if ( v17 >= a3 )
      v6[1] += 8LL;
    ++v12;
  }
  if ( v12 >= v10 || (*((_BYTE *)CUmaUnwindInfo::GetUnwindCode(v44, &v29, v12) + 1) & 0xF) != 0xA )
  {
LABEL_60:
    v26 = (volatile void *)v6[1];
    v30 = (__int64)v26;
    if ( a2 < 0x7FFFFFFF0000LL )
    {
      v43 = 1LL;
      ProbeForRead(v26, 1uLL, 4u);
    }
    if ( !*(_QWORD *)v34
      || (unsigned __int64)v26 >= **(_QWORD **)v34 && (unsigned __int64)v26 <= **(_QWORD **)(v35 + 8) - 8LL )
    {
      v27 = RtlReadULong64FromUser(v26);
      *v39 = v27;
      v6[1] += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v6, 1);
      return 0LL;
    }
    return 3221225512LL;
  }
  v22 = v6[1];
  v32 = v22;
  v23 = v22 + 24;
  v30 = v22 + 24;
  if ( a2 < 0x7FFFFFFF0000LL )
  {
    v41 = 1LL;
    ProbeForRead((volatile void *)v22, 1uLL, 4u);
  }
  v24 = (_QWORD *)v34;
  if ( *(_QWORD *)v34 && (v22 < **(_QWORD **)v34 || v22 > **(_QWORD **)(v34 + 8) - 8LL) )
    return 3221225512LL;
  if ( a2 < 0x7FFFFFFF0000LL )
  {
    v42 = 1LL;
    ProbeForRead((volatile void *)(v22 + 24), 1uLL, 4u);
  }
  if ( *v24 && (v23 < *(_QWORD *)*v24 || v23 > **(_QWORD **)(v35 + 8) - 8LL) )
    return 3221225512LL;
  v25 = RtlReadULong64FromUser(v22);
  *v39 = v25;
  v6[1] = RtlReadULong64FromUser(v22 + 24);
  return 0LL;
}
