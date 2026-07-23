/*
 * XREFs of ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 * Callees:
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140412B50 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x1404132D0 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x140445AF0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140534F80 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140623718 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        int a1,
        __int64 a2,
        _BYTE *a3,
        ...)
{
  __int64 v4; // r10
  _QWORD *v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 result; // rax
  BOOL v11; // r15d
  __int64 v12; // rbx
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  __int64 v15; // r12
  unsigned __int16 v16; // cx
  __int64 v17; // rax
  __int64 Context; // rax
  int v19; // r8d
  char *v20; // rdx
  char v21; // cl
  int v22; // r13d
  char v23; // r8
  char *v24; // r8
  int v25; // eax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rcx
  char *i; // rbx
  char v29; // cl
  char v30; // al
  _QWORD *v31; // rax
  char v32; // al
  __int64 v33; // rax
  unsigned int v34; // r13d
  _QWORD *v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // r15d
  _QWORD *v38; // r13
  __int64 v39; // rcx
  volatile void *v40; // rcx
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rdx
  unsigned int v43; // r10d
  __int64 v44; // r12
  __int16 v45; // ax
  unsigned int v46; // r11d
  int v47; // r8d
  int v48; // edx
  unsigned int j; // r9d
  __int16 v50; // ax
  _BYTE *v51; // rcx
  int v52; // [rsp+40h] [rbp-88h]
  _QWORD *v53; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v54; // [rsp+58h] [rbp-70h]
  __int64 v55; // [rsp+60h] [rbp-68h]
  __int64 v56; // [rsp+68h] [rbp-60h]
  __int64 v57; // [rsp+70h] [rbp-58h]
  __int64 v58; // [rsp+78h] [rbp-50h]
  _QWORD *v59; // [rsp+80h] [rbp-48h]
  int v60; // [rsp+D0h] [rbp+8h]
  _BYTE *v62; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  _QWORD *v64; // [rsp+F0h] [rbp+28h]
  char *v65; // [rsp+F8h] [rbp+30h]
  _QWORD *v66; // [rsp+100h] [rbp+38h]
  __int64 *v67; // [rsp+108h] [rbp+40h]
  _QWORD *v68; // [rsp+110h] [rbp+48h]
  __int64 v69; // [rsp+118h] [rbp+50h]
  __int64 v70; // [rsp+120h] [rbp+58h]
  __int64 v71; // [rsp+128h] [rbp+60h]
  va_list va1; // [rsp+130h] [rbp+68h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v62 = va_arg(va1, _BYTE *);
  v64 = va_arg(va1, _QWORD *);
  v65 = va_arg(va1, char *);
  v66 = va_arg(va1, _QWORD *);
  v67 = va_arg(va1, __int64 *);
  v68 = va_arg(va1, _QWORD *);
  v69 = va_arg(va1, _QWORD);
  v70 = va_arg(va1, _QWORD);
  v71 = va_arg(va1, _QWORD);
  v4 = a2;
  v6 = v64;
  v59 = v64;
  v7 = v69;
  v54 = (_QWORD *)v69;
  if ( !v62 )
  {
    v8 = v64 + 1;
    v68 = v64 + 1;
    v9 = (_QWORD *)v64[1];
    v53 = v9;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
    {
      v55 = 1LL;
      ProbeForRead(v9, 1uLL, 4u);
      v7 = v69;
    }
    if ( !*(_QWORD *)v7
      || (unsigned __int64)v9 >= **(_QWORD **)v7 && (unsigned __int64)v9 <= **(_QWORD **)(v7 + 8) - 8LL )
    {
      if ( a3 == (_BYTE *)*v9 )
        return 3221225727LL;
      *v6 = *v9;
      *v8 += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v6, 1);
      *v67 = (__int64)v9;
      if ( v65 )
        *v65 = 0;
      *v66 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v11 = 0;
  LODWORD(v70) = 0;
  LODWORD(v68) = 0;
  v52 = 0;
  v12 = a2 + *((unsigned int *)v62 + 2);
  v13 = *(_BYTE *)v12 & 7;
  if ( !v65 || *v65 )
  {
    if ( v13 < 2 )
    {
      if ( (unsigned int)RtlpxTrivialFunction<CDirectFnEnt,CDirectUnwindInfo>(
                           (__int64)v62,
                           a2,
                           a2 + *((unsigned int *)v62 + 2)) )
      {
        v52 = 1;
        v4 = a2;
      }
      else
      {
        if ( a1 < 0 )
          return 3221225512LL;
        v4 = a2;
      }
    }
  }
  else
  {
    v52 = 1;
  }
  v60 = a1 & 0x7FFFFFFF;
  LODWORD(v71) = 0;
  if ( (*(_BYTE *)(v12 + 3) & 0xF) != 0 )
  {
    v14 = (_DWORD)a3 - v4 - *(_DWORD *)v62;
    if ( v14 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
      goto LABEL_29;
    v15 = 0LL;
    if ( *(_BYTE *)(v12 + 2) )
    {
      do
      {
        v16 = *(_WORD *)(v12 + 2 * v15 + 4);
        if ( (HIBYTE(v16) & 0xF) == 3 )
          break;
        v15 = (unsigned int)RtlpUnwindOpSlots(v16) + (unsigned int)v15;
      }
      while ( (unsigned int)v15 < *(unsigned __int8 *)(v12 + 2) );
      v4 = a2;
    }
    if ( v14 >= (unsigned __int8)*(_WORD *)(v12 + 2 * v15 + 4) )
LABEL_29:
      LODWORD(v71) = 1;
    v11 = 0;
  }
  if ( (_DWORD)v71 )
  {
    Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, *(_BYTE *)(v12 + 3) & 0xF);
    v17 = Context - (v19 & 0xFFFFFFF0);
  }
  else
  {
    v17 = v6[1];
  }
  *v67 = v17;
  if ( v52 )
  {
LABEL_138:
    v44 = a2;
LABEL_139:
    result = RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
               v44,
               (unsigned __int64)a3,
               *v67,
               v62,
               (__int64)v6,
               v65,
               (_BYTE **)va,
               v69);
    if ( (int)result < 0 )
      return result;
    if ( v60 )
    {
      v51 = (_BYTE *)(v44 + *((unsigned int *)v62 + 2));
      if ( (int)a3 - (int)v44 - *(_DWORD *)v62 >= (unsigned int)(unsigned __int8)v51[1]
        && ((*v51 >> 3) & (unsigned __int8)v60) != 0 )
      {
        *v66 = &v51[2 * (unsigned __int8)v51[2] + 8 + 2 * (v51[2] & 1)];
      }
    }
    goto LABEL_144;
  }
  if ( v13 < 2 )
  {
    v20 = a3;
    v21 = *a3;
    v22 = 0;
    if ( *a3 != 72 )
      goto LABEL_45;
    if ( a3[1] == 0x83 && a3[2] == 0xC4 )
    {
LABEL_39:
      v20 = a3 + 4;
LABEL_49:
      while ( 1 )
      {
        v21 = *v20;
LABEL_50:
        while ( 1 )
        {
          v24 = v20 + 1;
          if ( (v21 & 0xF8) != 0x58 )
            break;
          ++v20;
          v21 = *v24;
        }
        if ( (v21 & 0xF0) != 0x40 || (*v24 & 0xF8) != 0x58 )
          break;
        v20 += 2;
      }
      if ( v21 == -14 )
      {
        ++v20;
        v21 = *v24;
      }
      if ( (unsigned __int8)(v21 + 62) > 1u && (v21 != -13 || v20[1] != -61) )
      {
        if ( ((v21 + 23) & 0xFD) != 0 )
        {
          if ( v21 == -1 && v20[1] == 37 )
          {
            LODWORD(v70) = 1;
            LODWORD(v68) = 1;
            goto LABEL_78;
          }
          if ( (v21 & 0xF8) != 0x48 || v20[1] != -1 || (v20[2] & 0x38) != 0x20 )
            goto LABEL_77;
          goto LABEL_67;
        }
        if ( v21 == -21 )
          v25 = v20[1] + 2;
        else
          v25 = *(_DWORD *)(v20 + 1) + 5;
        v26 = (unsigned __int64)&v20[v25 - v4];
        v27 = *(unsigned int *)v62;
        if ( v26 < v27 || v26 >= *((unsigned int *)v62 + 1) )
        {
          if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
          {
            RtlReadUCharFromUser(&v20[v25]);
            v4 = a2;
          }
          v31 = RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(&v53, v62, v4, v26 + v4);
          if ( !*v31 || v26 == *(_DWORD *)*v31 )
          {
            v11 = 1;
            LODWORD(v70) = 1;
            LODWORD(v68) = 1;
            goto LABEL_77;
          }
LABEL_76:
          v11 = 0;
          goto LABEL_77;
        }
        if ( v26 != v27 || (*(_BYTE *)v12 & 0x20) != 0 )
          goto LABEL_76;
      }
LABEL_67:
      v11 = 1;
      LODWORD(v70) = 1;
      LODWORD(v68) = 1;
LABEL_77:
      if ( v11 )
      {
LABEL_78:
        i = a3;
        v29 = *a3;
        if ( (*a3 & 0xF8) != 0x48 )
          goto LABEL_96;
        v30 = a3[1];
        switch ( v30 )
        {
          case -125:
            v6[1] += (char)a3[3];
            goto LABEL_81;
          case -127:
            v6[1] += *(int *)(a3 + 3);
            break;
          case -115:
            v32 = a3[2] & 0xF8;
            if ( v32 == 96 )
            {
              v33 = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v22);
              v6[1] = v33;
              v6[1] = v33 + (char)a3[3];
LABEL_81:
              for ( i = a3 + 4; ; i += 2 )
              {
LABEL_95:
                while ( 1 )
                {
                  v29 = *i;
LABEL_96:
                  if ( (v29 & 0xF8) != 0x58 )
                    break;
                  v34 = v29 & 7;
                  v35 = (_QWORD *)v6[1];
                  v53 = v35;
                  if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
                  {
                    v56 = 1LL;
                    ProbeForRead(v35, 1uLL, 4u);
                  }
                  if ( *v54
                    && ((unsigned __int64)v35 < *(_QWORD *)*v54 || (unsigned __int64)v35 > **(_QWORD **)(v69 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v34, *v35);
                  v36 = *(_QWORD *)(v69 + 16);
                  if ( v36 )
                    *(_QWORD *)(v36 + 8LL * v34 + 128) = v35;
                  v6[1] += 8LL;
                  ++i;
                }
                if ( (v29 & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
                  break;
                v37 = i[1] & 7 | (8 * (v29 & 1));
                v38 = (_QWORD *)v6[1];
                v53 = v38;
                if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
                {
                  v57 = 1LL;
                  ProbeForRead(v38, 1uLL, 4u);
                }
                if ( *v54
                  && ((unsigned __int64)v38 < *(_QWORD *)*v54 || (unsigned __int64)v38 > **(_QWORD **)(v69 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v37, *v38);
                v39 = *(_QWORD *)(v69 + 16);
                if ( v39 )
                  *(_QWORD *)(v39 + 8LL * v37 + 128) = v38;
                v6[1] += 8LL;
              }
              if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
              {
                v58 = 8LL;
                v40 = (volatile void *)v6[1];
                v58 = 1LL;
                ProbeForRead(v40, 1uLL, 4u);
              }
              if ( *v54 )
              {
                v41 = v6[1];
                if ( v41 < *(_QWORD *)*v54 || v41 > **(_QWORD **)(v69 + 8) - 8LL )
                  return 3221225512LL;
              }
              v11 = v70;
              v42 = (_QWORD *)v6[1];
              *v59 = *v42;
              v6[1] = v42 + 1;
              RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)v6, 1);
              goto LABEL_121;
            }
            if ( v32 != -96 )
              goto LABEL_96;
            v6[1] = *(int *)(a3 + 3) + RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(v6, v22);
            break;
          default:
            goto LABEL_96;
        }
        i = a3 + 7;
        goto LABEL_95;
      }
      goto LABEL_138;
    }
    if ( a3[1] != 0x81 || a3[2] != 0xC4 )
    {
LABEL_45:
      if ( (v21 & 0xFE) != 0x48 )
        goto LABEL_50;
      if ( a3[1] != 0x8D )
        goto LABEL_50;
      v22 = a3[2] & 7 | (8 * (v21 & 1));
      if ( !v22 || v22 != (*(_BYTE *)(v12 + 3) & 0xF) )
        goto LABEL_50;
      v23 = a3[2] & 0xF8;
      if ( v23 == 96 )
        goto LABEL_39;
      if ( v23 != -96 )
        goto LABEL_50;
    }
    v20 = a3 + 7;
    goto LABEL_49;
  }
  v43 = *(unsigned __int8 *)(v12 + 2);
  v44 = a2;
  if ( !(_BYTE)v43 )
    goto LABEL_139;
  v45 = *(_WORD *)(v12 + 4);
  if ( (HIBYTE(v45) & 0xF) != 6 )
    goto LABEL_139;
  v46 = (unsigned __int8)v45;
  v47 = (_DWORD)a3 - a2;
  if ( (v45 & 0x1000) != 0 )
  {
    v48 = *((_DWORD *)v62 + 1) - (unsigned __int8)v45;
    v11 = v47 - v48 < (unsigned int)(unsigned __int8)v45;
    LODWORD(v70) = v11;
  }
  else
  {
    v48 = 0;
  }
  if ( !v11 )
  {
    for ( j = 1; j < v43; ++j )
    {
      v50 = *(_WORD *)(v12 + 2LL * j + 4);
      if ( (HIBYTE(v50) & 0xF) != 6 )
        break;
      v48 = (unsigned __int8)v50 + (HIBYTE(v50) >> 4 << 8);
      if ( !v48 )
        break;
      v48 = *((_DWORD *)v62 + 1) - v48;
      if ( v47 - v48 < v46 )
      {
        v11 = 1;
        goto LABEL_135;
      }
    }
    v11 = v70;
LABEL_135:
    if ( !v11 )
      goto LABEL_139;
  }
  RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
    a2,
    (unsigned __int64)a3,
    v47 - v48,
    v62,
    v6,
    v69);
LABEL_121:
  if ( v65 )
    *v65 = 0;
LABEL_144:
  if ( v11 && (_DWORD)v71 )
    *v67 = v6[1] - 8LL;
  return 0LL;
}
