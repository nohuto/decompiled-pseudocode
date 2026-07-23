/*
 * XREFs of ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0
 * Callers:
 *     RtlpWalkFrameChain @ 0x18005BC74 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x1800E41F0 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x1800FC988 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x18010A5C4 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011CFC0 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D0A8 (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014A914 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B35C (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 */

__int64 __fastcall RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned int *a4,
        _QWORD *a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        int a9,
        __int64 a10,
        int a11,
        _BYTE *a12)
{
  __int64 v14; // r10
  _QWORD *v15; // r14
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // r13d
  __int64 v21; // rbx
  unsigned int v22; // r15d
  unsigned int v23; // r15d
  __int64 v24; // r12
  unsigned __int16 v25; // cx
  bool v26; // cf
  __int64 v27; // rax
  __int64 Context; // rax
  int v29; // r8d
  char *v30; // rdx
  char v31; // cl
  char v32; // r8
  int v33; // r9d
  char v34; // r8
  char *v35; // r8
  bool v36; // zf
  int v37; // eax
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rax
  BOOL v41; // r13d
  char v42; // cl
  _BYTE *v43; // rax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // r11
  _QWORD *v47; // rbx
  __int64 *v48; // r9
  __int64 v49; // r9
  unsigned int v50; // r10d
  __int64 v51; // rcx
  int v52; // r9d
  __int64 *v53; // r10
  unsigned int v54; // r9d
  __int64 v55; // r10
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rdx
  __int16 v59; // cx
  unsigned int v60; // r11d
  int v61; // r8d
  __int64 v62; // rdx
  unsigned int v63; // r9d
  unsigned int v64; // r15d
  __int16 v65; // r10
  _QWORD *v66; // [rsp+50h] [rbp-48h]
  int v67; // [rsp+A0h] [rbp+8h]
  _QWORD *v69; // [rsp+B8h] [rbp+20h] BYREF

  v14 = a2;
  v15 = a5;
  v66 = a5;
  if ( a4 )
  {
    v67 = 0;
    a11 = 0;
    v20 = 0;
    v21 = a2 + a4[2];
    v22 = *(_BYTE *)v21 & 7;
    LODWORD(v69) = v22;
    if ( !a6 || *a6 )
    {
      if ( v22 < 2 )
      {
        if ( (unsigned int)RtlpxTrivialFunction<CDirectFnEnt,CDirectUnwindInfo>((__int64)a4, a2, v21) )
          v20 = 1;
        v14 = a2;
      }
    }
    else
    {
      v20 = 1;
    }
    a9 = 0;
    if ( (*(_BYTE *)(v21 + 3) & 0xF) != 0 )
    {
      v23 = (_DWORD)a3 - *a4 - v14;
      if ( v23 >= *(unsigned __int8 *)(v21 + 1) || (*(_BYTE *)v21 & 0x20) != 0 )
      {
        a9 = 1;
        v22 = (unsigned int)v69;
      }
      else
      {
        v24 = 0LL;
        if ( *(_BYTE *)(v21 + 2) )
        {
          do
          {
            v25 = *(_WORD *)(v21 + 2 * v24 + 4);
            if ( (HIBYTE(v25) & 0xF) == 3 )
              break;
            v24 = (unsigned int)RtlpUnwindOpSlots(v25) + (unsigned int)v24;
          }
          while ( (unsigned int)v24 < *(unsigned __int8 *)(v21 + 2) );
          v14 = a2;
        }
        v26 = v23 < *(unsigned __int8 *)(v21 + 2 * v24 + 4);
        v22 = (unsigned int)v69;
        if ( !v26 )
          a9 = 1;
      }
    }
    if ( a9 )
    {
      Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v15, *(_BYTE *)(v21 + 3) & 0xF);
      v27 = Context - (v29 & 0xFFFFFFF0);
    }
    else
    {
      v27 = v15[1];
    }
    *a8 = v27;
    if ( !v20 )
    {
      if ( v22 < 2 )
      {
        v30 = a3;
        v31 = *a3;
        LODWORD(v69) = 0;
        if ( v31 != 72 )
          goto LABEL_42;
        if ( a3[1] == 0x83 && a3[2] == 0xC4 )
        {
LABEL_36:
          v30 = a3 + 4;
LABEL_46:
          while ( 1 )
          {
            v31 = *v30;
LABEL_47:
            while ( 1 )
            {
              v35 = v30 + 1;
              if ( (v31 & 0xF8) != 0x58 )
                break;
              ++v30;
              v31 = *v35;
            }
            if ( (v31 & 0xF0) != 0x40 || (*v35 & 0xF8) != 0x58 )
              break;
            v30 += 2;
          }
          if ( v31 == -14 )
          {
            ++v30;
            v31 = *v35;
          }
          if ( (unsigned __int8)(v31 + 62) <= 1u || v31 == -13 && v30[1] == -61 )
            goto LABEL_74;
          if ( ((v31 + 23) & 0xFD) != 0 )
          {
            if ( v31 == -1 && v30[1] == 37 )
            {
              v67 = 1;
              a11 = 1;
              goto LABEL_77;
            }
            if ( (v31 & 0xF8) != 0x48 || v30[1] != -1 )
              goto LABEL_75;
            v36 = (v30[2] & 0x38) == 32;
          }
          else
          {
            if ( v31 == -21 )
              v37 = v30[1] + 2;
            else
              v37 = *(_DWORD *)(v30 + 1) + 5;
            v38 = (unsigned __int64)&v30[v37 - v14];
            v39 = *a4;
            if ( v38 < v39 || v38 >= a4[1] )
            {
              v40 = RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(&a12, a4, v14, (ULONG64)&v30[v37]);
              if ( !*v40 )
              {
LABEL_74:
                v41 = 1;
                v67 = 1;
                a11 = 1;
                goto LABEL_76;
              }
              v36 = v38 == *(unsigned int *)*v40;
            }
            else
            {
              if ( v38 != v39 )
                goto LABEL_75;
              v36 = (*(_BYTE *)v21 & 0x20) == 0;
            }
          }
          if ( v36 )
            goto LABEL_74;
LABEL_75:
          v41 = 0;
LABEL_76:
          if ( v41 )
          {
LABEL_77:
            a12 = a3;
            v42 = *a3;
            if ( (*a3 & 0xF8) == 0x48 )
            {
              switch ( a3[1] )
              {
                case 0x83:
                  v15[1] += (char)a3[3];
LABEL_80:
                  v43 = a3 + 4;
LABEL_89:
                  a3 = v43;
                  v42 = *v43;
                  a12 = v43;
                  break;
                case 0x81:
                  v15[1] += *(int *)(a3 + 3);
LABEL_88:
                  v43 = a3 + 7;
                  goto LABEL_89;
                case 0x8D:
                  v44 = a3[2] & 0xF8;
                  if ( v44 == 96 )
                  {
                    v45 = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v15, (int)v69);
                    v15[1] = v45;
                    v15[1] = v45 + (char)a3[3];
                    goto LABEL_80;
                  }
                  if ( v44 == -96 )
                  {
                    v15[1] = *(int *)(a3 + 3) + RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v15, (int)v69);
                    goto LABEL_88;
                  }
                  break;
              }
            }
            v46 = a10;
            v47 = (_QWORD *)a10;
            while ( 1 )
            {
              if ( (v42 & 0xF8) == 0x58 )
              {
                LODWORD(v69) = v42 & 7;
                v48 = (__int64 *)v15[1];
                if ( *v47
                  && ((unsigned __int64)v48 < *(_QWORD *)*v47 || (unsigned __int64)v48 > **(_QWORD **)(v46 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v15, v42 & 7, *v48);
                v51 = *(_QWORD *)(v46 + 16);
                if ( v51 )
                  *(_QWORD *)(v51 + 8LL * v50 + 128) = v49;
                v15[1] += 8LL;
                ++a3;
              }
              else
              {
                if ( (v42 & 0xF0) != 0x40 || (a3[1] & 0xF8) != 0x58 )
                {
                  if ( !*v47 || (v57 = v15[1], v57 >= *(_QWORD *)*v47) && v57 <= **(_QWORD **)(v46 + 8) - 8LL )
                  {
                    v41 = v67;
                    v58 = (_QWORD *)v15[1];
                    *v66 = *v58;
                    v15[1] = v58 + 1;
                    RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v15);
LABEL_111:
                    if ( a6 )
                      *a6 = 0;
LABEL_131:
                    if ( v41 && a9 )
                      *a8 = v15[1] - 8LL;
                    return 0LL;
                  }
                  return 3221225512LL;
                }
                v52 = a3[1] & 7 | (8 * (v42 & 1));
                LODWORD(v69) = v52;
                v53 = (__int64 *)v15[1];
                if ( *v47
                  && ((unsigned __int64)v53 < *(_QWORD *)*v47 || (unsigned __int64)v53 > **(_QWORD **)(v46 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v15, v52, *v53);
                v56 = *(_QWORD *)(v46 + 16);
                if ( v56 )
                  *(_QWORD *)(v56 + 8LL * v54 + 128) = v55;
                v15[1] += 8LL;
                a3 += 2;
              }
              a12 = a3;
              v42 = *a3;
            }
          }
LABEL_130:
          result = RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
                     a2,
                     (int)a3,
                     *a8,
                     a4,
                     v15,
                     a6,
                     &v69,
                     a10);
          if ( (int)result >= 0 )
            goto LABEL_131;
          return result;
        }
        if ( a3[1] != 0x81 || a3[2] != 0xC4 )
        {
LABEL_42:
          if ( (v31 & 0xFE) != 0x48 )
            goto LABEL_47;
          if ( a3[1] != 0x8D )
            goto LABEL_47;
          v32 = a3[2];
          v33 = v32 & 7 | (8 * (v31 & 1));
          LODWORD(v69) = v33;
          if ( !v33 || v33 != (*(_BYTE *)(v21 + 3) & 0xF) )
            goto LABEL_47;
          v34 = v32 & 0xF8;
          if ( v34 == 96 )
            goto LABEL_36;
          if ( v34 != -96 )
            goto LABEL_47;
        }
        v30 = a3 + 7;
        goto LABEL_46;
      }
      if ( *(_BYTE *)(v21 + 2) )
      {
        v59 = HIBYTE(*(_WORD *)(v21 + 4));
        if ( (v59 & 0xF) == 6 )
        {
          v60 = *(unsigned __int8 *)(v21 + 4);
          v61 = (_DWORD)a3 - v14;
          if ( (v59 & 0x10) != 0 )
          {
            v62 = a4[1] - v60;
            v41 = v61 - (int)v62 < v60;
          }
          else
          {
            v62 = 0LL;
            v41 = 0;
          }
          if ( v41 )
            goto LABEL_128;
          v63 = 1;
          v64 = *(unsigned __int8 *)(v21 + 2);
          if ( v64 > 1 )
          {
            while ( 1 )
            {
              v65 = HIBYTE(*(_WORD *)(v21 + 2LL * v63 + 4));
              if ( (v65 & 0xF) != 6 )
                goto LABEL_126;
              v62 = *(unsigned __int8 *)(v21 + 2LL * v63 + 4) + ((unsigned __int8)v65 >> 4 << 8);
              if ( !(_DWORD)v62 )
                goto LABEL_126;
              v62 = a4[1] - (unsigned int)v62;
              if ( v61 - (int)v62 < v60 )
                break;
              if ( ++v63 >= v64 )
                goto LABEL_126;
            }
            v41 = 1;
LABEL_126:
            v14 = a2;
          }
          if ( v41 )
          {
LABEL_128:
            RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
              v14,
              v62,
              v61 - v62,
              a4,
              v15,
              a10);
            goto LABEL_111;
          }
          goto LABEL_130;
        }
      }
    }
    v41 = 0;
    goto LABEL_130;
  }
  v16 = a5 + 1;
  v69 = a5 + 1;
  v17 = (_QWORD *)a5[1];
  if ( *(_QWORD *)a10
    && ((unsigned __int64)v17 < **(_QWORD **)a10 || (unsigned __int64)v17 > **(_QWORD **)(a10 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  if ( a3 != (_BYTE *)*v17 )
  {
    *a5 = *v17;
    *v16 += 8LL;
    RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v15);
    *a8 = v19;
    if ( a6 )
      *a6 = 0;
    *a7 = 0LL;
    return 0LL;
  }
  return 3221225727LL;
}
