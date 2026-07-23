/*
 * XREFs of ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14
 * Callers:
 *     RtlVirtualUnwind2 @ 0x1402CB250 (RtlVirtualUnwind2.c)
 *     RtlVirtualUnwind @ 0x14052DE90 (RtlVirtualUnwind.c)
 * Callees:
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1403DA7C8 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403DB1B0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140534F80 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062320C (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        int a1,
        __int64 a2,
        _BYTE *a3,
        ...)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 v7; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // r12
  unsigned __int16 v15; // cx
  __int64 v16; // r15
  __int64 v17; // rdx
  char *v18; // rdx
  char v19; // cl
  __int64 v20; // r13
  int v21; // eax
  char v22; // r8
  char *v23; // r8
  bool v24; // zf
  int v25; // r9d
  int v26; // eax
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rax
  char *i; // rbx
  char v31; // r12
  char v32; // al
  char v33; // al
  __int64 v34; // rcx
  _QWORD *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // r8
  _QWORD *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rcx
  unsigned int v44; // r10d
  __int16 v45; // ax
  unsigned int v46; // r11d
  int v47; // ecx
  int v48; // r8d
  int v49; // edx
  BOOL v50; // r9d
  unsigned int v51; // r9d
  __int16 v52; // ax
  _BYTE *v53; // rcx
  __int64 v54; // r9
  int v55; // [rsp+40h] [rbp-88h]
  int v56; // [rsp+4Ch] [rbp-7Ch]
  _QWORD *v57; // [rsp+60h] [rbp-68h]
  __int64 v58; // [rsp+68h] [rbp-60h]
  int v59; // [rsp+D0h] [rbp+8h]
  _DWORD *v61; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v63; // [rsp+F0h] [rbp+28h]
  char *v64; // [rsp+F8h] [rbp+30h]
  _QWORD *v65; // [rsp+100h] [rbp+38h]
  __int64 *v66; // [rsp+108h] [rbp+40h]
  __int64 *v67; // [rsp+110h] [rbp+48h]
  __int64 v68; // [rsp+118h] [rbp+50h]
  __int64 v69; // [rsp+120h] [rbp+58h]
  __int64 v70; // [rsp+128h] [rbp+60h] BYREF
  va_list va1; // [rsp+128h] [rbp+60h]
  va_list va2; // [rsp+130h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v61 = va_arg(va1, _DWORD *);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, char *);
  v65 = va_arg(va1, _QWORD *);
  v66 = va_arg(va1, __int64 *);
  v67 = va_arg(va1, __int64 *);
  v68 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v70 = va_arg(va2, _QWORD);
  v4 = a2;
  v6 = v68;
  v57 = (_QWORD *)v68;
  if ( !v61 )
  {
    v7 = v63;
    v8 = (_QWORD *)(v63 + 152);
    v70 = v63 + 152;
    v9 = *(_QWORD **)(v63 + 152);
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
    {
      ProbeForRead(v9, 1uLL, 4u);
      v6 = v68;
    }
    if ( !*(_QWORD *)v6
      || (unsigned __int64)v9 >= **(_QWORD **)v6 && (unsigned __int64)v9 <= **(_QWORD **)(v6 + 8) - 8LL )
    {
      if ( a3 == (_BYTE *)*v9 )
        return 3221225727LL;
      *(_QWORD *)(v7 + 248) = *v9;
      *v8 += 8LL;
      RtlpVirtualPopShadowStack<_CONTEXT *>(v7, 1, 1);
      *v66 = (__int64)v9;
      if ( v64 )
        *v64 = 0;
      *v65 = 0LL;
      if ( v67 )
        *v67 = 0LL;
      return 0LL;
    }
    return 3221225512LL;
  }
  v58 = 0LL;
  v55 = 0;
  LODWORD(v69) = 0;
  v11 = a2 + (unsigned int)v61[2];
  v12 = *(_BYTE *)v11 & 7;
  if ( !v64 || *v64 )
  {
    if ( v12 < 2 )
    {
      if ( (unsigned int)RtlpxTrivialFunction<CDirectFnEnt,CDirectUnwindInfo>(v61, a2, a2 + (unsigned int)v61[2]) )
      {
        LODWORD(v69) = 1;
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
    LODWORD(v69) = 1;
  }
  v59 = a1 & 0x7FFFFFFF;
  v56 = 0;
  if ( (*(_BYTE *)(v11 + 3) & 0xF) != 0 )
  {
    v13 = (_DWORD)a3 - v4 - *v61;
    if ( v13 >= *(unsigned __int8 *)(v11 + 1) || (*(_BYTE *)v11 & 0x20) != 0 )
      goto LABEL_30;
    v14 = 0LL;
    if ( *(_BYTE *)(v11 + 2) )
    {
      do
      {
        v15 = *(_WORD *)(v11 + 2 * v14 + 4);
        if ( (HIBYTE(v15) & 0xF) == 3 )
          break;
        v14 = (unsigned int)RtlpUnwindOpSlots(v15) + (unsigned int)v14;
      }
      while ( (unsigned int)v14 < *(unsigned __int8 *)(v11 + 2) );
      v4 = a2;
    }
    if ( v13 >= (unsigned __int8)*(_WORD *)(v11 + 2 * v14 + 4) )
LABEL_30:
      v56 = 1;
  }
  v16 = v63;
  if ( v56 )
    v17 = *(_QWORD *)(v63 + 8LL * (*(_BYTE *)(v11 + 3) & 0xF) + 120) - (*(_BYTE *)(v11 + 3) & 0xF0);
  else
    v17 = *(_QWORD *)(v63 + 152);
  *v66 = v17;
  if ( (_DWORD)v69 )
    goto LABEL_138;
  if ( v12 < 2 )
  {
    v18 = a3;
    v19 = *a3;
    v20 = 0LL;
    if ( *a3 != 72 )
      goto LABEL_45;
    if ( a3[1] == 0x83 && a3[2] == 0xC4 )
    {
LABEL_39:
      v18 = a3 + 4;
LABEL_49:
      while ( 1 )
      {
        v19 = *v18;
LABEL_50:
        while ( 1 )
        {
          v23 = v18 + 1;
          if ( (v19 & 0xF8) != 0x58 )
            break;
          ++v18;
          v19 = *v23;
        }
        if ( (v19 & 0xF0) != 0x40 || (*v23 & 0xF8) != 0x58 )
          break;
        v18 += 2;
      }
      if ( v19 == -14 )
      {
        ++v18;
        v19 = *v23;
      }
      if ( (unsigned __int8)(v19 + 62) <= 1u || v19 == -13 && v18[1] == -61 )
        goto LABEL_68;
      if ( ((v19 + 23) & 0xFD) != 0 )
      {
        if ( v19 == -1 && v18[1] == 37 )
        {
          v55 = 1;
          goto LABEL_82;
        }
        if ( (v19 & 0xF8) != 0x48 || v18[1] != -1 )
          goto LABEL_80;
        v24 = (v18[2] & 0x38) == 32;
      }
      else
      {
        if ( v19 == -21 )
          v26 = v18[1] + 2;
        else
          v26 = *(_DWORD *)(v18 + 1) + 5;
        v27 = (unsigned __int64)&v18[v26 - v4];
        v28 = (unsigned int)*v61;
        if ( v27 < v28 || v27 >= (unsigned int)v61[1] )
        {
          if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
          {
            RtlReadUCharFromUser(&v18[v26]);
            v4 = a2;
          }
          v29 = (_QWORD *)RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>((__int64 *)va1, v61, v4, v27 + v4);
          if ( !*v29 )
            goto LABEL_68;
          v24 = v27 == *(unsigned int *)*v29;
        }
        else
        {
          if ( v27 != v28 )
            goto LABEL_80;
          v24 = (*(_BYTE *)v11 & 0x20) == 0;
        }
      }
      if ( v24 )
      {
LABEL_68:
        v25 = 1;
        v55 = 1;
        goto LABEL_81;
      }
LABEL_80:
      v25 = 0;
LABEL_81:
      if ( v25 )
      {
LABEL_82:
        i = a3;
        v31 = *a3;
        LOBYTE(v69) = v31;
        if ( (v31 & 0xF8) != 0x48 )
          goto LABEL_95;
        v32 = a3[1];
        switch ( v32 )
        {
          case -125:
            *(_QWORD *)(v16 + 152) += (char)a3[3];
            goto LABEL_85;
          case -127:
            *(_QWORD *)(v16 + 152) += *(int *)(a3 + 3);
            break;
          case -115:
            v33 = a3[2] & 0xF8;
            if ( v33 == 96 )
            {
              v34 = *(_QWORD *)(v16 + 8 * v20 + 120);
              *(_QWORD *)(v16 + 152) = v34;
              *(_QWORD *)(v16 + 152) = v34 + (char)a3[3];
LABEL_85:
              for ( i = a3 + 4; ; i += 2 )
              {
LABEL_94:
                while ( 1 )
                {
                  v31 = *i;
                  LOBYTE(v69) = *i;
LABEL_95:
                  if ( (v31 & 0xF8) != 0x58 )
                    break;
                  v35 = *(_QWORD **)(v16 + 152);
                  if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
                    ProbeForRead(v35, 1uLL, 4u);
                  if ( *v57
                    && ((unsigned __int64)v35 < *(_QWORD *)*v57 || (unsigned __int64)v35 > **(_QWORD **)(v68 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  v36 = v31 & 7;
                  *(_QWORD *)(v16 + 8 * v36 + 120) = *v35;
                  v37 = *(_QWORD *)(v68 + 16);
                  if ( v37 )
                    *(_QWORD *)(v37 + 8 * v36 + 128) = v35;
                  *(_QWORD *)(v16 + 152) += 8LL;
                  ++i;
                }
                if ( (v31 & 0xF0) != 0x40 )
                  break;
                v38 = i[1];
                LOBYTE(v70) = v38;
                if ( (v38 & 0xF8) != 0x58 )
                  break;
                v39 = *(_QWORD **)(v16 + 152);
                if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
                {
                  ProbeForRead(v39, 1uLL, 4u);
                  v38 = v70;
                }
                if ( *v57
                  && ((unsigned __int64)v39 < *(_QWORD *)*v57 || (unsigned __int64)v39 > **(_QWORD **)(v68 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                v40 = v38 & 7 | (8LL * (v31 & 1));
                *(_QWORD *)(v16 + 8 * v40 + 120) = *v39;
                v41 = *(_QWORD *)(v68 + 16);
                if ( v41 )
                  *(_QWORD *)(v41 + 8 * v40 + 128) = v39;
                *(_QWORD *)(v16 + 152) += 8LL;
              }
              if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
                ProbeForRead(*(volatile void **)(v16 + 152), 1uLL, 4u);
              if ( *v57 )
              {
                v42 = *(_QWORD *)(v16 + 152);
                if ( v42 < *(_QWORD *)*v57 || v42 > **(_QWORD **)(v68 + 8) - 8LL )
                  return 3221225512LL;
              }
              v43 = *(_QWORD **)(v16 + 152);
              *(_QWORD *)(v16 + 248) = *v43;
              *(_QWORD *)(v16 + 152) = v43 + 1;
              RtlpVirtualPopShadowStack<_CONTEXT *>(v16, 1, 1);
              goto LABEL_120;
            }
            if ( v33 != -96 )
              goto LABEL_95;
            *(_QWORD *)(v16 + 152) = *(_QWORD *)(v16 + 8 * v20 + 120) + *(int *)(a3 + 3);
            break;
          default:
            goto LABEL_95;
        }
        i = a3 + 7;
        goto LABEL_94;
      }
LABEL_138:
      result = RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
                 a2,
                 (unsigned __int64)a3,
                 *v66,
                 v61,
                 v16,
                 v64,
                 (_DWORD **)va,
                 v68);
      if ( (int)result < 0 )
        return result;
      if ( v59 )
      {
        v53 = (_BYTE *)(a2 + (unsigned int)v61[2]);
        if ( (int)a3 - (int)a2 - *v61 >= (unsigned int)(unsigned __int8)v53[1]
          && ((*v53 >> 3) & (unsigned __int8)v59) != 0 )
        {
          v54 = (unsigned __int8)v53[2] + (v53[2] & 1u);
          *v65 = &v53[2 * (unsigned int)(v54 + 2) + 4];
          v58 = a2 + *(unsigned int *)&v53[2 * v54 + 4];
        }
      }
      goto LABEL_143;
    }
    if ( a3[1] != 0x81 || a3[2] != 0xC4 )
    {
LABEL_45:
      if ( (v19 & 0xFE) != 0x48 )
        goto LABEL_50;
      if ( a3[1] != 0x8D )
        goto LABEL_50;
      v21 = a3[2] & 7;
      v20 = v21 | (8 * (v19 & 1u));
      if ( !(v21 | (8 * (v19 & 1))) || (_DWORD)v20 != (*(_BYTE *)(v11 + 3) & 0xF) )
        goto LABEL_50;
      v22 = a3[2] & 0xF8;
      if ( v22 == 96 )
        goto LABEL_39;
      if ( v22 != -96 )
        goto LABEL_50;
    }
    v18 = a3 + 7;
    goto LABEL_49;
  }
  v44 = *(unsigned __int8 *)(v11 + 2);
  if ( !(_BYTE)v44 )
    goto LABEL_138;
  v45 = *(_WORD *)(v11 + 4);
  if ( (HIBYTE(v45) & 0xF) != 6 )
    goto LABEL_138;
  v46 = (unsigned __int8)v45;
  v47 = a2;
  v48 = (_DWORD)a3 - a2;
  if ( (v45 & 0x1000) != 0 )
  {
    v49 = v61[1] - (unsigned __int8)v45;
    v50 = v48 - v49 < (unsigned int)(unsigned __int8)v45;
    v55 = v50;
  }
  else
  {
    v49 = 0;
    v50 = 0;
  }
  if ( !v50 )
  {
    v51 = 1;
    if ( v44 > 1 )
    {
      do
      {
        v52 = *(_WORD *)(v11 + 2LL * v51 + 4);
        if ( (HIBYTE(v52) & 0xF) != 6 )
          break;
        v49 = (unsigned __int8)v52 + (HIBYTE(v52) >> 4 << 8);
        if ( !v49 )
          break;
        v49 = v61[1] - v49;
        if ( v48 - v49 < v46 )
        {
          v55 = 1;
          break;
        }
        ++v51;
      }
      while ( v51 < *(unsigned __int8 *)(v11 + 2) );
      v47 = a2;
    }
  }
  if ( !v55 )
    goto LABEL_138;
  RtlpUnwindEpilogue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
    v47,
    (_DWORD)a3,
    v48 - v49,
    (_DWORD)v61,
    v16,
    v68);
LABEL_120:
  if ( v64 )
    *v64 = 0;
LABEL_143:
  if ( v67 )
    *v67 = v58;
  if ( v55 && v56 )
    *v66 = *(_QWORD *)(v16 + 152) - 8LL;
  return 0LL;
}
