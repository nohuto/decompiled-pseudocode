/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x140A9807C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 *     LdrpGetSectionSize @ 0x14050D6C4 (LdrpGetSectionSize.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14077EC74 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResCompareResourceNames @ 0x140A98B94 (LdrpResCompareResourceNames.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        ULONGLONG a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        ULONGLONG *a11,
        int a12,
        _WORD *a13)
{
  ULONGLONG v14; // r10
  unsigned int v16; // ebx
  __int64 v17; // r11
  _QWORD *v18; // rdx
  int v19; // r8d
  int v20; // ecx
  unsigned __int64 v21; // rdi
  unsigned int *v22; // rsi
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // r9
  __int64 v28; // rax
  ULONGLONG v29; // rax
  char *v30; // rdx
  int v31; // r8d
  unsigned __int64 v32; // rdi
  unsigned int *v33; // rdx
  unsigned __int64 v34; // r9
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  bool v38; // zf
  char v39; // al
  __int64 v40; // rax
  __int64 result; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // r9
  ULONGLONG v46; // r15
  __int64 v47; // rdx
  __int16 v48; // ax
  unsigned int v49; // r10d
  __int64 v50; // r11
  __int64 v51; // rax
  __int64 v52; // r9
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r10
  __int64 v58; // rax
  unsigned int v59; // r8d
  unsigned __int64 v60; // rdx
  int v61; // eax
  unsigned __int64 v62; // r11
  __int64 v63; // r11
  ULONGLONG v64; // r12
  unsigned int v65; // ecx
  __int64 v66; // r9
  char v67; // r10
  ULONGLONG v68; // r13
  __int64 v69; // rax
  unsigned int SectionSize; // eax
  unsigned __int64 v71; // r9
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  int v75; // r8d
  unsigned __int64 v76; // rdx
  ULONGLONG v77; // r10
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r14
  int v81; // [rsp+40h] [rbp-F8h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-F0h] BYREF
  int v83; // [rsp+50h] [rbp-E8h]
  unsigned int *v84; // [rsp+58h] [rbp-E0h]
  __int64 v85; // [rsp+60h] [rbp-D8h]
  signed __int16 v86; // [rsp+68h] [rbp-D0h]
  int v87; // [rsp+6Ch] [rbp-CCh] BYREF
  unsigned int v88; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v89; // [rsp+78h] [rbp-C0h]
  __int16 v90; // [rsp+80h] [rbp-B8h]
  int v91; // [rsp+84h] [rbp-B4h]
  int v92; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+90h] [rbp-A8h]
  ULONGLONG ullSubtrahend; // [rsp+98h] [rbp-A0h]
  int v95; // [rsp+A0h] [rbp-98h]
  __int64 v96; // [rsp+A8h] [rbp-90h]
  unsigned int *v97; // [rsp+B0h] [rbp-88h]
  unsigned int *v98; // [rsp+B8h] [rbp-80h]
  __int16 v99; // [rsp+C0h] [rbp-78h]
  __int128 v100; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-60h]
  int v102; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v103; // [rsp+E8h] [rbp-50h]
  _QWORD *v104; // [rsp+F0h] [rbp-48h]
  char v105; // [rsp+148h] [rbp+10h]
  char v108; // [rsp+158h] [rbp+20h]
  char v109; // [rsp+168h] [rbp+30h]
  unsigned int v110; // [rsp+168h] [rbp+30h]

  v14 = a3;
  v16 = 0;
  v87 = 0;
  v100 = 0LL;
  v86 = 0;
  LOWORD(v17) = 0;
  v91 = 0;
  pullResult = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v18 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v19 = a12;
  v83 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v95 = a12 & 0x1000;
  v105 = v95 != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v20 = a8;
  v92 = a8;
  v21 = a4;
  v22 = 0LL;
  v93 = 0LL;
  if ( a13 )
    *a13 = 0;
  while ( 1 )
  {
    if ( !v21 )
      goto LABEL_51;
    v23 = v20;
    v24 = v20 - 1;
    v92 = v24;
    v102 = v24;
    if ( !v23 )
      goto LABEL_51;
    v17 = *v18;
    v85 = v17;
    v96 = v17;
    if ( !v24 && a8 == 3 )
    {
      v93 = v21;
      v103 = v21;
      if ( !a9 )
        return (unsigned int)-1073741811;
      v86 = *a9;
      v99 = v86;
      v91 = 0;
      v90 = 0;
      if ( (~(_BYTE)v19 & 4) != 0 )
      {
        v17 = (unsigned __int16)a9[2];
        v85 = v17;
        v96 = v17;
      }
    }
    if ( (a12 & 0x1000) != 0 )
    {
      if ( v21 + 24 < v21 )
        goto LABEL_23;
      pullResult = v21 + 24;
      if ( v21 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
    v25 = *(unsigned __int16 *)(v21 + 12);
    if ( *(_WORD *)(v21 + 12) && (a12 & 0x1000) != 0 )
    {
      *(_QWORD *)&v100 = 8LL * *(unsigned __int16 *)(v21 + 12);
      v26 = v21 + (unsigned int)(8 * v25) + 16LL;
      if ( v26 < v21 )
        goto LABEL_23;
      pullResult = v21 + (unsigned int)(8 * v25) + 16LL;
      if ( v26 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
    v27 = (char *)(v21 + 16);
    *(_QWORD *)&v100 = v21 + 16;
    v98 = (unsigned int *)(v21 + 16);
    v28 = v25;
    v88 = v25;
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( (_DWORD)v25 )
      {
        if ( (a12 & 0x1000) != 0 )
        {
          if ( &v27[(int)v25] < v27 )
            goto LABEL_23;
          pullResult = (ULONGLONG)&v27[(int)v25];
        }
        v27 += 8 * v25;
        *(_QWORD *)&v100 = v27;
        v98 = (unsigned int *)v27;
      }
      LODWORD(v25) = *(unsigned __int16 *)(v21 + 14);
      v28 = *(unsigned __int16 *)(v21 + 14);
      v88 = v25;
      if ( (a12 & 0x1000) != 0 )
      {
        v29 = 8LL * (unsigned int)v25;
        ullSubtrahend = v29;
        if ( v29 > 0xFFFFFFFF )
          return (unsigned int)-1073741701;
        v30 = &v27[(unsigned int)v29];
        if ( v30 < v27 )
          goto LABEL_23;
        pullResult = (ULONGLONG)&v27[(unsigned int)v29];
        v88 = v25;
        if ( (unsigned __int64)v30 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
          return (unsigned int)-1073741701;
        v28 = (unsigned int)v25;
      }
    }
    if ( !(_DWORD)v25 )
    {
      v89 = 0LL;
      goto LABEL_41;
    }
LABEL_45:
    if ( v93 && (v19 & 0x20) != 0 )
      break;
    while ( 2 )
    {
      v21 = 0LL;
      v89 = 0LL;
      v33 = (unsigned int *)v27;
      v98 = (unsigned int *)v27;
      v34 = (unsigned __int64)&v27[8 * v28 - 8];
      v101 = v34;
      v35 = v88;
      v36 = v88;
      while ( (unsigned __int64)v33 <= v34 )
      {
        v37 = v35 >> 1;
        LODWORD(ullSubtrahend) = v37;
        if ( !v37 )
        {
          if ( !v36 )
            break;
          result = LdrpResCompareResourceNames(a1, v33, v14, v17, a4, v33, v19, &v87, v81);
          v81 = result;
          if ( (int)result < 0 )
            return result;
          if ( !v87 )
          {
            v42 = v98[1];
            v43 = (unsigned int)v42;
            if ( (int)v42 >= 0 )
              goto LABEL_73;
LABEL_66:
            if ( (a12 & 0x1000) != 0 )
            {
              if ( v93 )
                return (unsigned int)-1073741701;
              LODWORD(v43) = v43 & 0x7FFFFFFF;
              v21 = v43 + a4;
              if ( v43 + a4 < a4 )
                goto LABEL_23;
              pullResult = v43 + a4;
            }
            else
            {
              v21 = a4 + (v43 & 0xFFFFFFFF7FFFFFFFuLL);
            }
            v89 = v21;
          }
LABEL_91:
          v19 = v83;
          v14 = a3;
          v17 = v85;
          break;
        }
        v97 = v33;
        v39 = v36 & 1;
        v38 = v39 == 0;
        v109 = v39;
        LODWORD(v40) = v37 - 1;
        LODWORD(v96) = v37 - 1;
        if ( v38 )
          v40 = (int)v40;
        else
          v40 = v37;
        v97 = &v33[2 * v40];
        result = LdrpResCompareResourceNames(a1, v33, v14, v17, a4, v97, v19, &v87, v81);
        v81 = result;
        if ( (int)result < 0 )
          return result;
        if ( !v87 )
        {
          v42 = v97[1];
          v43 = (unsigned int)v42;
          if ( (int)v42 < 0 )
            goto LABEL_66;
          v21 = 0LL;
          v89 = 0LL;
LABEL_73:
          if ( (a12 & 0x1000) != 0 )
          {
            if ( !v93 )
              return (unsigned int)-1073741701;
            v22 = (unsigned int *)(a4 + v42);
            if ( a4 + v42 < a4 )
              goto LABEL_23;
            pullResult = a4 + v42;
          }
          else
          {
            v22 = (unsigned int *)(a4 + v42);
          }
          v84 = v22;
          goto LABEL_91;
        }
        if ( v87 >= 0 )
        {
          v33 = v97 + 2;
          v98 = v97 + 2;
          v35 = ullSubtrahend;
          v36 = ullSubtrahend;
          v34 = v101;
        }
        else
        {
          v34 = (unsigned __int64)(v97 - 2);
          v101 = (unsigned __int64)(v97 - 2);
          if ( v109 )
          {
            v35 = ullSubtrahend;
            v36 = ullSubtrahend;
          }
          else
          {
            v36 = v96;
            v35 = v96;
          }
          v33 = v98;
        }
        v19 = v83;
        v14 = a3;
        v17 = v85;
      }
      if ( v93 && !v22 )
      {
        if ( (v19 & 4) != 0 )
          goto LABEL_51;
        HIWORD(v44) = HIWORD(v91);
        LOWORD(v44) = v91 + 1;
        v91 = v44;
        v90 = v44;
        if ( (unsigned __int16)v44 < v86 )
        {
          v17 = (unsigned __int16)a9[4 * (unsigned __int16)v44 + 2];
          v85 = v17;
          v96 = v17;
          v27 = (char *)v100;
          v28 = v88;
          continue;
        }
        if ( !*((_BYTE *)a9 + 516) )
        {
          v19 |= 0x20u;
          v83 = v19;
          v27 = (char *)v100;
          v28 = v88;
          goto LABEL_45;
        }
      }
      break;
    }
    v18 = a7 + 1;
    a7 = v18;
    v104 = v18;
    v20 = v92;
  }
  v21 = 0LL;
  v89 = 0LL;
  v22 = (unsigned int *)(a4 + *((unsigned int *)v27 + 1));
  if ( (a12 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v22 >= a4 )
    {
      pullResult = a4 + *((unsigned int *)v27 + 1);
      goto LABEL_50;
    }
LABEL_23:
    pullResult = -1LL;
    return (unsigned int)-1073741701;
  }
LABEL_50:
  v84 = v22;
  LODWORD(v17) = *(_DWORD *)v27;
  v96 = *(unsigned int *)v27;
LABEL_51:
  v31 = v19 & 2;
  if ( !v22 || v31 )
  {
    if ( !v21 || !v31 )
    {
LABEL_41:
      switch ( a8 - v92 )
      {
        case 1:
          return (unsigned int)-1073741686;
        case 2:
          return (unsigned int)-1073741685;
        case 3:
          return (unsigned int)-1073741308;
        default:
          return (unsigned int)-1073741811;
      }
    }
    if ( (a12 & 0x1000) != 0 )
    {
      if ( v21 + 24 < v21 )
      {
        pullResult = -1LL;
        goto LABEL_165;
      }
      pullResult = v21 + 24;
      v80 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v21 + 24 > v80 + v14 )
      {
LABEL_165:
        v89 = 0LL;
        return (unsigned int)-1073741701;
      }
    }
    else
    {
      v80 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( a10 )
    {
      if ( (a12 & 0x1000) != 0 && (v21 < v80 || v21 > v80 + v14) )
        return (unsigned int)-1073741701;
      *a10 = v21;
    }
    return v16;
  }
  if ( (a12 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v22 <= a4 )
      goto LABEL_56;
    v32 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (unsigned __int64)(v22 + 4) > (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v14 )
      goto LABEL_56;
  }
  else
  {
    v32 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v45 = (__int64)a13;
  if ( a13 )
    *a13 = v17;
  if ( (a1 & 1) == 0 )
  {
    v46 = 0LL;
    goto LABEL_134;
  }
  v47 = a5;
  v48 = *(_WORD *)(a5 + 24);
  if ( v48 == 267 )
  {
    v49 = *(_DWORD *)(a5 + 136);
  }
  else if ( v48 == 523 )
  {
    v49 = *(_DWORD *)(a5 + 152);
  }
  else
  {
    v49 = 0;
  }
  if ( !v49 )
  {
    v84 = 0LL;
    return (unsigned int)-1073741687;
  }
  v50 = v49;
  if ( (a12 & 0x1000) != 0 )
  {
    if ( v32 + v49 < v32 )
      goto LABEL_23;
    pullResult = v32 + v49;
    if ( RtlULongLongSub(pullResult, a4, &pullResult) < 0 )
      return (unsigned int)-1073741701;
    v47 = a5;
  }
  v46 = v50 + v32 - a4;
  v51 = LdrpSectionTableFromVirtualAddress(v32, a3, v47, v45, v49, v105, 0);
  if ( !v51 )
    goto LABEL_56;
  v53 = *v22;
  if ( *v22 <= *(_DWORD *)(v51 + 8) )
    goto LABEL_134;
  LODWORD(ullSubtrahend) = *(_DWORD *)(v51 + 12);
  v54 = LdrpSectionTableFromVirtualAddress(v32, a3, a5, v52, v53, v105, 0);
  if ( !v54 )
  {
LABEL_56:
    v84 = 0LL;
    return (unsigned int)-1073741701;
  }
  v110 = *(_DWORD *)(v54 + 12);
  v56 = LdrpSectionTableFromVirtualAddress(v32, a3, a5, v55, v110, v105, 0);
  v57 = v56;
  if ( v56 )
  {
    if ( (a12 & 0x1000) != 0 )
    {
      v58 = *(unsigned int *)(v56 + 12);
      v59 = v110;
      v60 = v32 + v110 - v58;
      if ( v60 < v32 )
      {
        pullResult = -1LL;
        v61 = -1073741675;
        v60 = -1LL;
      }
      else
      {
        pullResult = v32 + v110 - v58;
        v61 = 0;
      }
      if ( v61 < 0 )
        return (unsigned int)-1073741701;
      if ( v60 + *(unsigned int *)(v57 + 20) < v60 )
        goto LABEL_23;
      pullResult = v60 + *(unsigned int *)(v57 + 20);
    }
    else
    {
      v59 = v110;
    }
    v62 = v32 + *(unsigned int *)(v57 + 20) - (unsigned __int64)*(unsigned int *)(v57 + 12) + v59;
  }
  else
  {
    v62 = 0LL;
  }
  if ( (a12 & 0x1000) != 0
    && (RtlULongLongSub(*(unsigned int *)(v57 + 12), (unsigned int)ullSubtrahend, &pullResult) < 0
     || RtlULongLongSub(pullResult, v63 - a4, &pullResult) < 0) )
  {
    return (unsigned int)-1073741701;
  }
  v46 += a4 + *(unsigned int *)(v57 + 12) - (unsigned __int64)(unsigned int)ullSubtrahend - v62;
LABEL_134:
  v64 = v22[1];
  if ( (a12 & 0x1000) != 0 )
  {
    if ( RtlULongLongSub(*v22, v46, &pullResult) < 0 )
      return (unsigned int)-1073741701;
    v68 = pullResult;
    if ( pullResult < a4 - a1 )
      goto LABEL_56;
    if ( pullResult > a3 )
      goto LABEL_56;
    if ( !(_DWORD)v64 )
      goto LABEL_56;
    if ( v64 > a3 )
      goto LABEL_56;
    if ( pullResult + (unsigned int)v64 > a3 )
      goto LABEL_56;
    v108 = v67 & ~(_BYTE)a1;
    v69 = LdrpSectionTableFromVirtualAddress(v32, a3, a5, v66, v65, v105, v108);
    if ( !v69 )
      goto LABEL_56;
    if ( *v22 + v64 < *v22 )
      goto LABEL_56;
    SectionSize = LdrpGetSectionSize(v69, v108);
    v73 = *(unsigned int *)(v72 + 12);
    v74 = v73 + SectionSize;
    if ( v74 < v73 || v71 > v74 )
      goto LABEL_56;
  }
  else
  {
    v68 = 0LL;
  }
  v75 = v95;
  if ( !a10 )
  {
LABEL_153:
    v77 = a3;
    goto LABEL_154;
  }
  if ( !v95 )
  {
    *a10 = v32 + *v22 - v46;
    goto LABEL_153;
  }
  v76 = v32 + v68;
  if ( v32 + v68 < v32 )
    return (unsigned int)-1073741701;
  v77 = a3;
  if ( v76 > v32 + a3 )
    return (unsigned int)-1073741701;
  *a10 = v76;
LABEL_154:
  if ( a11 )
  {
    if ( !v75 || !a10 )
      goto LABEL_159;
    v78 = *a10;
    v79 = *a10 + v64;
    if ( v78 + v64 < v78 )
      goto LABEL_23;
    pullResult = v78 + v64;
    if ( v79 <= v77 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
LABEL_159:
      *a11 = v64;
      return v16;
    }
    return (unsigned int)-1073741701;
  }
  return v16;
}
