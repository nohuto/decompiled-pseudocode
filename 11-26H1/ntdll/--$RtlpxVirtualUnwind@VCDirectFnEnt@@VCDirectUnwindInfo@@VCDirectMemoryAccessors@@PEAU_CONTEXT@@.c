/*
 * XREFs of ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800B1590 (RtlVirtualUnwind.c)
 *     RtlVirtualUnwind3 @ 0x18014CB08 (RtlVirtualUnwind3.c)
 * Callees:
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1800BCD34 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011CFC0 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D0A8 (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014A528 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AD00 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 */

__int64 __fastcall RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        int a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        char a11,
        __int64 a12)
{
  unsigned int *v12; // rax
  __int64 v14; // r11
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rbx
  __int64 result; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // r13d
  unsigned int v23; // r14d
  __int64 v24; // r15
  unsigned __int16 v25; // cx
  __int64 v26; // r14
  __int64 v27; // r8
  char *v28; // r8
  char v29; // dl
  char *v30; // r9
  int v31; // ecx
  char v32; // r9
  bool v33; // zf
  int v34; // r10d
  int v35; // ecx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rdx
  _QWORD *v38; // rax
  char v39; // dl
  char *v40; // rax
  char v41; // al
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // r15
  _QWORD *v45; // r10
  _QWORD *v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // r9
  _QWORD *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  unsigned int v56; // r15d
  int v57; // r10d
  unsigned int v58; // r8d
  int v59; // r13d
  unsigned int v60; // r9d
  unsigned int v61; // r12d
  __int16 v62; // r11
  _BYTE *v63; // rcx
  __int64 v64; // r9
  int v65; // [rsp+44h] [rbp-64h]
  _QWORD *v66; // [rsp+50h] [rbp-58h] BYREF
  __int64 v67; // [rsp+60h] [rbp-48h]
  int v68; // [rsp+B0h] [rbp+8h]
  unsigned int *v70; // [rsp+C8h] [rbp+20h] BYREF

  v70 = (unsigned int *)a4;
  v12 = (unsigned int *)a4;
  v14 = a2;
  if ( a4 )
  {
    v67 = 0LL;
    LODWORD(a12) = 0;
    v20 = 0LL;
    v21 = a2 + *(unsigned int *)(a4 + 8);
    v22 = *(_BYTE *)v21 & 7;
    if ( !a6 || *a6 )
    {
      if ( v22 < 2 )
      {
        if ( (unsigned int)RtlpxTrivialFunction<CDirectFnEnt,CDirectUnwindInfo>(a4, a2, a2 + *(unsigned int *)(a4 + 8)) )
          v20 = 1LL;
        v12 = v70;
        v14 = a2;
      }
    }
    else
    {
      v20 = 1LL;
    }
    v68 = a1 & 0x7FFFFFFF;
    v65 = 0;
    if ( (*(_BYTE *)(v21 + 3) & 0xF) != 0 )
    {
      v23 = (_DWORD)a3 - v14 - *v12;
      if ( v23 >= *(unsigned __int8 *)(v21 + 1) || (*(_BYTE *)v21 & 0x20) != 0 )
      {
        v65 = 1;
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
          v12 = v70;
          v14 = a2;
        }
        if ( v23 >= *(unsigned __int8 *)(v21 + 2 * v24 + 4) )
          v65 = 1;
      }
    }
    v26 = a5;
    if ( v65 )
      v27 = *(_QWORD *)(a5 + 8LL * (*(_BYTE *)(v21 + 3) & 0xF) + 120) - (*(_BYTE *)(v21 + 3) & 0xF0);
    else
      v27 = *(_QWORD *)(a5 + 152);
    *a8 = v27;
    if ( !(_DWORD)v20 )
    {
      if ( v22 < 2 )
      {
        v28 = a3;
        v29 = *a3;
        if ( *a3 == 72 )
        {
          if ( a3[1] == -125 && a3[2] == -60 )
          {
            v28 = a3 + 4;
LABEL_38:
            v29 = *v28;
            goto LABEL_39;
          }
          if ( a3[1] == -127 && a3[2] == -60 )
          {
            v28 = a3 + 7;
            goto LABEL_38;
          }
        }
        if ( (v29 & 0xFE) == 0x48 && a3[1] == -115 )
        {
          v31 = a3[2] & 7;
          v20 = v31 | (8 * (v29 & 1u));
          if ( v31 | (8 * (v29 & 1)) )
          {
            if ( (_DWORD)v20 == (*(_BYTE *)(v21 + 3) & 0xF) )
            {
              v32 = a3[2] & 0xF8;
              if ( v32 == 96 )
              {
                v28 = a3 + 4;
                goto LABEL_55;
              }
              if ( v32 == -96 )
              {
                v28 = a3 + 7;
                goto LABEL_55;
              }
            }
          }
        }
        while ( 1 )
        {
LABEL_39:
          while ( 1 )
          {
            v30 = v28 + 1;
            if ( (v29 & 0xF8) != 0x58 )
              break;
            ++v28;
            v29 = *v30;
          }
          if ( (v29 & 0xF0) != 0x40 || (*v30 & 0xF8) != 0x58 )
            break;
          v28 += 2;
LABEL_55:
          v29 = *v28;
        }
        if ( v29 == -14 )
        {
          ++v28;
          v29 = *v30;
        }
        if ( (unsigned __int8)(v29 + 62) <= 1u || v29 == -13 && v28[1] == -61 )
          goto LABEL_69;
        if ( ((v29 + 23) & 0xFD) != 0 )
        {
          if ( v29 == -1 && v28[1] == 37 )
          {
            LODWORD(a12) = 1;
            goto LABEL_82;
          }
          if ( (v29 & 0xF8) == 0x48 && v28[1] == -1 )
          {
            v33 = (v28[2] & 0x38) == 32;
            goto LABEL_68;
          }
        }
        else
        {
          if ( v29 == -21 )
            v35 = v28[1] + 2;
          else
            v35 = *(_DWORD *)(v28 + 1) + 5;
          v36 = (unsigned __int64)&v28[v35 - v14];
          v37 = *v12;
          if ( v36 < v37 || v36 >= v12[1] )
          {
            v38 = RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(&v66, v12, v14, (ULONG64)&v28[v35]);
            if ( !*v38 || v36 == *(_DWORD *)*v38 )
            {
              v34 = 1;
              LODWORD(a12) = 1;
              v12 = v70;
LABEL_81:
              if ( v34 )
              {
LABEL_82:
                v39 = *a3;
                a11 = v39;
                if ( (v39 & 0xF8) == 0x48 )
                {
                  switch ( a3[1] )
                  {
                    case -125:
                      *(_QWORD *)(v26 + 152) += a3[3];
LABEL_85:
                      v40 = a3 + 4;
LABEL_95:
                      v39 = *v40;
                      a3 = v40;
                      a11 = *v40;
                      break;
                    case -127:
                      *(_QWORD *)(v26 + 152) += *(int *)(a3 + 3);
LABEL_94:
                      v40 = a3 + 7;
                      goto LABEL_95;
                    case -115:
                      v41 = a3[2] & 0xF8;
                      if ( v41 == 96 )
                      {
                        v42 = *(_QWORD *)(v26 + 8 * v20 + 120);
                        *(_QWORD *)(v26 + 152) = v42;
                        *(_QWORD *)(v26 + 152) = v42 + a3[3];
                        goto LABEL_85;
                      }
                      if ( v41 == -96 )
                      {
                        *(_QWORD *)(v26 + 152) = *(_QWORD *)(v26 + 8 * v20 + 120) + *(int *)(a3 + 3);
                        goto LABEL_94;
                      }
                      break;
                  }
                }
                v43 = a12;
                v44 = a10;
                v45 = (_QWORD *)a10;
                while ( 1 )
                {
                  if ( (v39 & 0xF8) == 0x58 )
                  {
                    v46 = *(_QWORD **)(v26 + 152);
                    v66 = v46;
                    if ( *v45
                      && ((unsigned __int64)v46 < *(_QWORD *)*v45 || (unsigned __int64)v46 > **(_QWORD **)(v44 + 8)
                                                                                           - 8LL) )
                    {
                      return 3221225512LL;
                    }
                    v47 = v39 & 7;
                    *(_QWORD *)(v26 + 8 * v47 + 120) = *v46;
                    v48 = *(_QWORD *)(v44 + 16);
                    if ( v48 )
                      *(_QWORD *)(v48 + 8 * v47 + 128) = v46;
                    *(_QWORD *)(v26 + 152) += 8LL;
                    ++a3;
                  }
                  else
                  {
                    if ( (v39 & 0xF0) != 0x40 || (v49 = a3[1], LOBYTE(a12) = v49, (v49 & 0xF8) != 0x58) )
                    {
                      if ( !*v45
                        || (v53 = *(_QWORD *)(v26 + 152), v53 >= *(_QWORD *)*v45) && v53 <= **(_QWORD **)(v44 + 8) - 8LL )
                      {
                        v54 = *(_QWORD **)(v26 + 152);
                        *(_QWORD *)(v26 + 248) = *v54;
                        *(_QWORD *)(v26 + 152) = v54 + 1;
                        RtlpVirtualPopShadowStack<_CONTEXT *>(v26);
LABEL_117:
                        if ( a6 )
                          *a6 = 0;
LABEL_142:
                        if ( a9 )
                          *a9 = v67;
                        if ( v43 && v65 )
                          *a8 = *(_QWORD *)(v26 + 152) - 8LL;
                        return 0LL;
                      }
                      return 3221225512LL;
                    }
                    v50 = *(_QWORD **)(v26 + 152);
                    v66 = v50;
                    if ( *v45
                      && ((unsigned __int64)v50 < *(_QWORD *)*v45 || (unsigned __int64)v50 > **(_QWORD **)(v44 + 8)
                                                                                           - 8LL) )
                    {
                      return 3221225512LL;
                    }
                    v51 = v49 & 7 | (8LL * (v39 & 1));
                    *(_QWORD *)(v26 + 8 * v51 + 120) = *v50;
                    v52 = *(_QWORD *)(v44 + 16);
                    if ( v52 )
                      *(_QWORD *)(v52 + 8 * v51 + 128) = v50;
                    *(_QWORD *)(v26 + 152) += 8LL;
                    a3 += 2;
                  }
                  v39 = *a3;
                  a11 = *a3;
                }
              }
              goto LABEL_136;
            }
            v12 = v70;
          }
          else if ( v36 == v37 )
          {
            v33 = (*(_BYTE *)v21 & 0x20) == 0;
LABEL_68:
            if ( v33 )
            {
LABEL_69:
              v34 = 1;
              LODWORD(a12) = 1;
              goto LABEL_81;
            }
          }
        }
        v34 = a12;
        goto LABEL_81;
      }
      if ( *(_BYTE *)(v21 + 2) )
      {
        v55 = *(unsigned __int16 *)(v21 + 4);
        LOWORD(v55) = BYTE1(v55);
        if ( (v55 & 0xF) == 6 )
        {
          v56 = *(unsigned __int8 *)(v21 + 4);
          v57 = (_DWORD)a3 - v14;
          if ( (v55 & 0x10) != 0 )
          {
            v58 = v12[1] - v56;
            v59 = v57 - v58 < v56;
            LODWORD(a12) = v59;
          }
          else
          {
            v58 = 0;
            v59 = a12;
          }
          if ( v59 || (v60 = 1, v61 = *(unsigned __int8 *)(v21 + 2), v61 <= 1) )
          {
            v43 = a12;
          }
          else
          {
            while ( 1 )
            {
              v62 = HIBYTE(*(_WORD *)(v21 + 2LL * v60 + 4));
              LOBYTE(v55) = v62 & 0xF;
              if ( (v62 & 0xF) != 6
                || (v55 = *(unsigned __int8 *)(v21 + 2LL * v60 + 4), (v58 = v55 + ((unsigned __int8)v62 >> 4 << 8)) == 0) )
              {
LABEL_130:
                v43 = a12;
                goto LABEL_131;
              }
              v58 = v12[1] - v58;
              if ( v57 - v58 < v56 )
                break;
              if ( ++v60 >= v61 )
                goto LABEL_130;
            }
            v43 = 1;
LABEL_131:
            v14 = a2;
          }
          if ( v43 )
          {
            RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
              v14,
              v55,
              v57 - v58,
              v12,
              v26,
              a10);
            goto LABEL_117;
          }
LABEL_137:
          result = RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
                     a2,
                     (int)a3,
                     *a8,
                     v12,
                     v26,
                     a6,
                     &v70,
                     a10);
          if ( (int)result >= 0 )
          {
            if ( v68 )
            {
              v63 = (_BYTE *)(a2 + v70[2]);
              if ( (_DWORD)a3 - (_DWORD)a2 - *v70 >= (unsigned __int8)v63[1]
                && ((*v63 >> 3) & (unsigned __int8)v68) != 0 )
              {
                v64 = (unsigned __int8)v63[2] + (v63[2] & 1u);
                *a7 = &v63[2 * (unsigned int)(v64 + 2) + 4];
                v67 = a2 + *(unsigned int *)&v63[2 * v64 + 4];
              }
            }
            goto LABEL_142;
          }
          return result;
        }
      }
    }
LABEL_136:
    v43 = a12;
    goto LABEL_137;
  }
  v16 = a5;
  v17 = (_QWORD *)(a5 + 152);
  a12 = a5 + 152;
  v18 = *(_QWORD **)(a5 + 152);
  v66 = v18;
  if ( *(_QWORD *)a10
    && ((unsigned __int64)v18 < **(_QWORD **)a10 || (unsigned __int64)v18 > **(_QWORD **)(a10 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  if ( a3 != (char *)*v18 )
  {
    *(_QWORD *)(a5 + 248) = *v18;
    *v17 += 8LL;
    RtlpVirtualPopShadowStack<_CONTEXT *>(v16);
    *a8 = (__int64)v18;
    if ( a6 )
      *a6 = 0;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    return 0LL;
  }
  return 3221225727LL;
}
