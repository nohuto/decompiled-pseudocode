/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800A8A50
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     LdrpResCompareResourceNames @ 0x1800AA320 (LdrpResCompareResourceNames.c)
 *     LdrpResReadFile @ 0x1800AA578 (LdrpResReadFile.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1800AAD90 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpGetSectionSize @ 0x1800AAE2C (LdrpGetSectionSize.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v17; // rcx
  int v18; // ebx
  bool v19; // r12
  HANDLE v20; // r11
  int v21; // edx
  unsigned __int64 v22; // rsi
  unsigned int *v23; // r13
  _QWORD *v24; // rcx
  signed __int16 *v25; // r10
  int v26; // r9d
  int v27; // ebx
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 Heap_0; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  __int16 v38; // ax
  int v39; // eax
  __int64 v40; // r9
  unsigned __int64 v41; // r10
  unsigned int v42; // edx
  unsigned __int64 v43; // rdi
  __int64 v44; // r9
  _DWORD *v45; // rsi
  int i; // r8d
  unsigned int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r15
  unsigned __int8 v52; // r12
  __int64 v53; // rcx
  unsigned int SectionSize; // eax
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 *v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 result; // rax
  __int64 v64; // r13
  char *v65; // r15
  __int64 v66; // r8
  unsigned int *v67; // r12
  unsigned int *v68; // rcx
  int v69; // r15d
  int v70; // eax
  __int64 v71; // rax
  bool v72; // zf
  char v73; // r15
  unsigned int *v74; // r13
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rsi
  int v79; // r8d
  unsigned __int64 v80; // rax
  char *v81; // rcx
  unsigned __int64 v82; // rcx
  unsigned int v83; // r10d
  unsigned __int64 v84; // r11
  __int64 v85; // r8
  int j; // edx
  __int64 v87; // r9
  __int64 v88; // r10
  unsigned int *v89; // rdx
  int k; // r8d
  __int64 v91; // r10
  __int64 v92; // r8
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // r8
  __int64 v95; // rcx
  int v96; // [rsp+40h] [rbp-1C8h]
  __int64 v97; // [rsp+48h] [rbp-1C0h]
  bool v98; // [rsp+50h] [rbp-1B8h]
  int v99; // [rsp+54h] [rbp-1B4h]
  unsigned int *v101; // [rsp+60h] [rbp-1A8h]
  char v102; // [rsp+70h] [rbp-198h]
  signed __int16 v104; // [rsp+88h] [rbp-180h]
  int v105; // [rsp+8Ch] [rbp-17Ch]
  __int64 v107; // [rsp+98h] [rbp-170h]
  int v108; // [rsp+A0h] [rbp-168h]
  int v109; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v110; // [rsp+B4h] [rbp-154h]
  int v111; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v112; // [rsp+C0h] [rbp-148h]
  HANDLE Handle; // [rsp+C8h] [rbp-140h]
  __int64 v114; // [rsp+D0h] [rbp-138h]
  int v115; // [rsp+D8h] [rbp-130h]
  int v116; // [rsp+DCh] [rbp-12Ch]
  int v117; // [rsp+E0h] [rbp-128h]
  __int64 v118; // [rsp+E8h] [rbp-120h]
  __int64 v119; // [rsp+F0h] [rbp-118h]
  unsigned int *v120; // [rsp+F8h] [rbp-110h]
  __int16 v121; // [rsp+100h] [rbp-108h]
  __int64 v122; // [rsp+108h] [rbp-100h]
  __int64 v123; // [rsp+110h] [rbp-F8h]
  unsigned int *v124; // [rsp+118h] [rbp-F0h]
  unsigned int *v125; // [rsp+120h] [rbp-E8h]
  _WORD *v126; // [rsp+128h] [rbp-E0h]
  __int64 v127; // [rsp+130h] [rbp-D8h]
  unsigned __int64 v128; // [rsp+138h] [rbp-D0h]
  __int64 v129; // [rsp+140h] [rbp-C8h]
  _DWORD *v130; // [rsp+148h] [rbp-C0h]
  unsigned __int64 *v131; // [rsp+150h] [rbp-B8h]
  __int64 v132; // [rsp+158h] [rbp-B0h]
  _QWORD v133[2]; // [rsp+160h] [rbp-A8h] BYREF
  _QWORD v134[2]; // [rsp+170h] [rbp-98h] BYREF
  int v135; // [rsp+180h] [rbp-88h]
  unsigned __int64 *v136; // [rsp+188h] [rbp-80h]
  unsigned __int64 v137; // [rsp+190h] [rbp-78h]
  _QWORD *v138; // [rsp+198h] [rbp-70h]
  __int128 v139; // [rsp+1A0h] [rbp-68h]
  __int128 v140; // [rsp+1B0h] [rbp-58h] BYREF

  v13 = a4;
  Handle = a2;
  v118 = a9;
  v114 = a6;
  v123 = a7;
  v131 = a10;
  v136 = a11;
  v126 = a13;
  v109 = 0;
  v139 = 0LL;
  v104 = 0;
  LOWORD(v107) = 0;
  v140 = 0LL;
  v97 = 0LL;
  LOWORD(v111) = 0;
  v133[0] = 5636180LL;
  v133[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v134[0] = 5505106LL;
  v134[1] = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v17 = 2147353477LL;
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v95 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v95 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v133, *(unsigned __int8 *)v95);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  v18 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v19 = (a12 & 0x800) != 0 && (a12 & 0x8000) != 0;
  v98 = v19;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( !v19 && !a1 )
    return 3221225485LL;
  v20 = Handle;
  if ( v19 && !Handle )
    return 3221225485LL;
  v21 = a8;
  v22 = v13;
  v23 = 0LL;
  v101 = 0LL;
  v112 = 0LL;
  if ( v126 )
    *v126 = 0;
  v24 = (_QWORD *)v123;
  v25 = (signed __int16 *)v118;
  while ( 2 )
  {
    if ( !v22 )
      goto LABEL_18;
    v39 = v21--;
    v108 = v21;
    v135 = v21;
    if ( !v39 )
      goto LABEL_18;
    v107 = *v24;
    v122 = *v24;
    if ( !v21 && a8 == 3 )
    {
      v112 = v22;
      v137 = v22;
      if ( !v25 )
      {
        v30 = -1073741811;
        goto LABEL_27;
      }
      v104 = *v25;
      v121 = *v25;
      v111 = 0;
      v110 = 0;
      if ( (~(_BYTE)v18 & 4) != 0 )
      {
        v107 = (unsigned __int16)v25[2];
        v122 = v107;
      }
    }
    if ( v19 )
    {
      result = LdrpResReadFile(v20);
      v96 = result;
      if ( (int)result < 0 )
        return result;
      v21 = v108;
    }
    else if ( (a12 & 0x1000) != 0 )
    {
      if ( v22 + 24 < v22 )
        goto LABEL_26;
      v40 = a1;
      v41 = a3;
      if ( v22 + 24 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
      goto LABEL_126;
    }
    v41 = a3;
    v40 = a1;
LABEL_126:
    v64 = WORD6(v139);
    if ( !v19 )
      v64 = *(unsigned __int16 *)(v22 + 12);
    v105 = v64;
    if ( (_DWORD)v64 && (a12 & 0x1000) != 0 )
    {
      v119 = 8 * v64;
      v82 = v22 + 8 * v64 + 16;
      if ( v82 < v22 )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
      if ( v82 > v41 + (v40 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
    }
    v65 = (char *)(v22 + 16);
    v119 = v22 + 16;
    v120 = (unsigned int *)(v22 + 16);
    v66 = v107;
    if ( (v107 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( (_DWORD)v64 )
      {
        if ( (a12 & 0x1000) != 0 && &v65[(int)v64] < v65 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
        v65 += 8 * (int)v64;
        v119 = (__int64)v65;
        v120 = (unsigned int *)v65;
      }
      LODWORD(v64) = HIWORD(v139);
      if ( !v19 )
        LODWORD(v64) = *(unsigned __int16 *)(v22 + 14);
      v105 = v64;
      if ( (a12 & 0x1000) != 0 )
      {
        v80 = 8LL * (unsigned int)v64;
        v133[0] = v80;
        if ( v80 > 0xFFFFFFFF )
          goto LABEL_26;
        v81 = &v65[(unsigned int)v80];
        if ( v81 < v65 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
        if ( (unsigned __int64)v81 > v41 + (v40 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
      }
    }
    if ( !(_DWORD)v64 )
      goto LABEL_54;
    if ( v19 )
    {
      if ( v97 )
      {
        RtlFreeHeap_0();
        v132 = 0LL;
      }
      Heap_0 = RtlAllocateHeap_0();
      v97 = Heap_0;
      v132 = Heap_0;
      if ( !Heap_0 )
      {
        v30 = -1073741801;
        goto LABEL_28;
      }
      result = LdrpResReadFile(Handle);
      v96 = result;
      if ( (int)result < 0 )
        return result;
      v65 = (char *)Heap_0;
      v119 = Heap_0;
      v120 = (unsigned int *)Heap_0;
LABEL_142:
      v66 = v107;
    }
    if ( v112 && (v18 & 0x20) != 0 )
    {
      v22 = 0LL;
      v23 = (unsigned int *)(a4 + *((unsigned int *)v65 + 1));
      v101 = v23;
      if ( (a12 & 0x1000) != 0 )
      {
        if ( (unsigned __int64)v23 < a4 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
      }
      else
      {
        v101 = (unsigned int *)(a4 + *((unsigned int *)v65 + 1));
      }
      v26 = *(_DWORD *)v65;
      v122 = *(unsigned int *)v65;
      v19 = v98;
      v21 = v108;
      v13 = a4;
      goto LABEL_19;
    }
LABEL_144:
    v22 = 0LL;
    v67 = (unsigned int *)v65;
    v120 = (unsigned int *)v65;
    v68 = (unsigned int *)&v65[8 * (int)v64 - 8];
    v125 = v68;
    v69 = v64;
    v70 = v64;
    while ( 1 )
    {
      if ( v67 > v68 )
      {
        v13 = a4;
        goto LABEL_162;
      }
      LODWORD(v71) = v70 >> 1;
      v99 = v71;
      if ( !(_DWORD)v71 )
      {
        v72 = v69 == 0;
        v13 = a4;
        if ( v72 )
          goto LABEL_162;
        result = LdrpResCompareResourceNames(a1, Handle, a3, v66, a4, v67, v18, &v109, v96);
        v96 = result;
        if ( (int)result < 0 )
          return result;
        if ( v109 )
          goto LABEL_162;
        v77 = v67[1];
        v76 = (unsigned int)v77;
        if ( (int)v77 >= 0 )
        {
          if ( (a12 & 0x1000) == 0 )
          {
            v23 = (unsigned int *)(a4 + v77);
            v101 = (unsigned int *)(a4 + v77);
            goto LABEL_163;
          }
          if ( v112 )
          {
            v23 = (unsigned int *)(a4 + v77);
            v101 = (unsigned int *)(a4 + v77);
            if ( a4 + v77 >= a4 )
              goto LABEL_163;
            goto LABEL_26;
          }
          v30 = -1073741701;
LABEL_27:
          Heap_0 = v97;
          goto LABEL_28;
        }
        if ( (a12 & 0x1000) == 0 )
        {
          v78 = (unsigned int)v77;
          LODWORD(v78) = v77 & 0x7FFFFFFF;
          v22 = a4 + v78;
LABEL_162:
          v23 = v101;
          goto LABEL_163;
        }
        if ( v112 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
LABEL_195:
        LODWORD(v76) = v76 & 0x7FFFFFFF;
        v22 = v76 + v13;
        if ( v76 + v13 < v13 )
          goto LABEL_26;
        goto LABEL_162;
      }
      v124 = v67;
      v73 = v69 & 1;
      v72 = v73 == 0;
      v102 = v73;
      v69 = v71 - 1;
      v71 = (int)v71;
      if ( v72 )
        v71 = v69;
      v74 = &v67[2 * v71];
      v124 = v74;
      result = LdrpResCompareResourceNames(a1, Handle, a3, v66, a4, v74, v18, &v109, v96);
      v96 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v109 )
        break;
      if ( v109 >= 0 )
      {
        v67 = v74 + 2;
        v120 = v74 + 2;
        v70 = v99;
        v68 = v125;
      }
      else
      {
        v68 = v74 - 2;
        v125 = v74 - 2;
        if ( !v102 )
        {
          v70 = v69;
          goto LABEL_191;
        }
        v70 = v99;
      }
      v69 = v70;
LABEL_191:
      v66 = v107;
    }
    v75 = v74[1];
    v76 = v75;
    if ( (v75 & 0x80000000) != 0 )
    {
      if ( (a12 & 0x1000) == 0 )
      {
        v13 = a4;
        v22 = a4 + (v75 & 0x7FFFFFFF);
        goto LABEL_162;
      }
      if ( v112 )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
      v13 = a4;
      goto LABEL_195;
    }
    if ( (a12 & 0x1000) != 0 )
    {
      if ( v112 )
      {
        v13 = a4;
        v23 = (unsigned int *)(a4 + v75);
        v101 = v23;
        if ( (unsigned __int64)v23 >= a4 )
          goto LABEL_163;
LABEL_26:
        v30 = -1073741701;
      }
      else
      {
        v30 = -1073741701;
      }
      goto LABEL_27;
    }
    v13 = a4;
    v23 = (unsigned int *)(a4 + v75);
    v101 = v23;
LABEL_163:
    if ( !v112 || v23 )
    {
      v25 = (signed __int16 *)v118;
LABEL_193:
      v24 = (_QWORD *)(v123 + 8);
      v123 = (__int64)v24;
      v138 = v24;
      v19 = v98;
      v21 = v108;
      v20 = Handle;
      continue;
    }
    break;
  }
  if ( (v18 & 4) == 0 )
  {
    HIWORD(v79) = HIWORD(v111);
    LOWORD(v79) = v111 + 1;
    v111 = v79;
    v110 = v79;
    v25 = (signed __int16 *)v118;
    if ( (unsigned __int16)v79 < v104 )
    {
      v66 = *(unsigned __int16 *)(v118 + 8LL * (unsigned __int16)v79 + 4);
      v107 = v66;
      v122 = v66;
      LODWORD(v64) = v105;
      v65 = (char *)v119;
      goto LABEL_144;
    }
    if ( !*(_BYTE *)(v118 + 516) )
    {
      v18 |= 0x20u;
      LODWORD(v64) = v105;
      v65 = (char *)v119;
      goto LABEL_142;
    }
    goto LABEL_193;
  }
  v19 = v98;
  v21 = v108;
LABEL_18:
  LOWORD(v26) = v107;
LABEL_19:
  v27 = v18 & 2;
  if ( !v23 || v27 )
  {
    if ( v22 && v27 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( v22 + 24 < v22 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
        v28 = a1;
        v29 = a3;
        if ( v22 + 24 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v30 = -1073741701;
          Heap_0 = v97;
          goto LABEL_28;
        }
      }
      else
      {
        v28 = a1;
        v29 = a3;
      }
      if ( v131 )
      {
        if ( (a12 & 0x1000) != 0 )
        {
          v48 = v28 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v22 < v48 )
            goto LABEL_26;
          if ( v22 > v48 + v29 )
          {
            v30 = -1073741701;
            goto LABEL_27;
          }
        }
        *v131 = v22;
      }
      v30 = 0;
      Heap_0 = v97;
LABEL_28:
      if ( Heap_0 )
      {
        RtlFreeHeap_0();
        v132 = 0LL;
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v32 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v32 = 2147353477LL;
      if ( (*(_BYTE *)v32 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v33 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v33 = 2147353476LL;
        LdrpTraceLoadMUIDll((unsigned __int16 *)v134, *(unsigned __int8 *)v33);
      }
      return v30;
    }
LABEL_54:
    switch ( a8 - v21 )
    {
      case 1:
        v30 = -1073741686;
        break;
      case 2:
        v30 = -1073741685;
        break;
      case 3:
        v30 = -1073741308;
        break;
      default:
        v30 = -1073741811;
        break;
    }
    goto LABEL_27;
  }
  if ( (a12 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v23 <= v13
      || (v34 = a1, v35 = a3, (unsigned __int64)(v23 + 4) > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      v30 = -1073741701;
      goto LABEL_27;
    }
  }
  else
  {
    v34 = a1;
    v35 = a3;
  }
  if ( v126 )
    *v126 = v26;
  v36 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v34 & 1) == 0 && !v19 )
  {
    v43 = 0LL;
    v128 = 0LL;
    goto LABEL_85;
  }
  v37 = a5;
  v38 = *(_WORD *)(a5 + 24);
  if ( v38 == 267 )
  {
    v42 = *(_DWORD *)(a5 + 136);
  }
  else
  {
    if ( v38 != 523 )
      goto LABEL_46;
    v42 = *(_DWORD *)(a5 + 152);
  }
  if ( !v42 )
  {
LABEL_46:
    v30 = -1073741687;
    Heap_0 = v97;
    goto LABEL_28;
  }
  if ( (a12 & 0x1000) != 0 )
  {
    if ( v42 + v36 < v36 )
      goto LABEL_26;
    if ( v42 + v36 < v13 )
    {
      v30 = -1073741701;
      goto LABEL_27;
    }
  }
  v43 = v36 + v42 - v13;
  v128 = v43;
  v117 = 0;
  v44 = v114;
  v45 = (_DWORD *)v114;
  v130 = (_DWORD *)v114;
  if ( !v114 )
  {
    v45 = (_DWORD *)(*(unsigned __int16 *)(a5 + 20) + a5 + 24);
    v130 = v45;
    if ( !v45 )
      goto LABEL_70;
  }
  for ( i = 0; ; ++i )
  {
    v117 = i;
    if ( i >= *(unsigned __int16 *)(v37 + 6) )
      goto LABEL_70;
    if ( !v114 && (a12 & 0x1000) != 0 )
    {
      if ( (unsigned __int64)(v45 + 10) > v35 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_70;
      v37 = a5;
    }
    v47 = v45[3];
    if ( v42 >= v47 && v42 < v45[4] + v47 )
      break;
    v45 += 10;
    v130 = v45;
    v35 = a3;
  }
  if ( !v19 )
  {
LABEL_213:
    v83 = *v23;
    if ( *v23 > v45[2] )
    {
      v84 = (unsigned int)v45[3];
      v116 = 0;
      v85 = v44;
      v129 = v44;
      if ( v44 )
      {
LABEL_215:
        for ( j = 0; ; ++j )
        {
          v116 = j;
          if ( j >= *(unsigned __int16 *)(v37 + 6) )
            goto LABEL_70;
          if ( !v44 && (a12 & 0x1000) != 0 )
          {
            if ( v85 + 40 > a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
              goto LABEL_70;
            v37 = a5;
          }
          v87 = *(unsigned int *)(v85 + 12);
          if ( v83 >= (unsigned int)v87 && v83 < (int)v87 + *(_DWORD *)(v85 + 16) )
            break;
          v85 += 40LL;
          v129 = v85;
          v44 = v114;
        }
        v115 = 0;
        v88 = v114;
        v89 = (unsigned int *)v114;
        v127 = v114;
        if ( v114 )
        {
LABEL_224:
          for ( k = 0; ; ++k )
          {
            v115 = k;
            if ( k >= *(unsigned __int16 *)(v37 + 6) )
              break;
            if ( !v88 && (a12 & 0x1000) != 0 )
            {
              if ( (unsigned __int64)(v89 + 10) > a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
                break;
              v37 = a5;
            }
            v91 = v89[3];
            if ( (unsigned int)v87 >= (unsigned int)v91 && (unsigned int)v87 < (unsigned int)v91 + v89[4] )
            {
              if ( (a12 & 0x1000) == 0 )
                goto LABEL_238;
              v94 = v36 + v87 - v91;
              if ( v94 < v36 )
                goto LABEL_26;
              if ( v94 + v89[5] >= v94 )
              {
LABEL_238:
                v92 = v87 + v36 + v89[5] - v91;
                goto LABEL_230;
              }
              v30 = -1073741701;
              goto LABEL_27;
            }
            v89 += 10;
            v127 = (__int64)v89;
            v88 = v114;
          }
        }
        else
        {
          v89 = (unsigned int *)(*(unsigned __int16 *)(v37 + 20) + a5 + 24);
          v127 = (__int64)v89;
          if ( v89 )
          {
            v37 = a5;
            goto LABEL_224;
          }
        }
        v89 = 0LL;
        v92 = 0LL;
LABEL_230:
        if ( (a12 & 0x1000) == 0 )
          goto LABEL_83;
        v93 = v89[3];
        if ( v93 < v84 )
          goto LABEL_26;
        if ( v93 - v84 >= v92 - v13 )
        {
LABEL_83:
          v43 += v13 + v89[3] - v84 - v92;
          v128 = v43;
          goto LABEL_84;
        }
        v30 = -1073741701;
        goto LABEL_27;
      }
      v85 = *(unsigned __int16 *)(v37 + 20) + a5 + 24;
      v129 = v85;
      if ( v85 )
      {
        v37 = a5;
        goto LABEL_215;
      }
LABEL_70:
      v30 = -1073741701;
      Heap_0 = v97;
      goto LABEL_28;
    }
LABEL_84:
    v34 = a1;
LABEL_85:
    v49 = v23[1];
    if ( (a12 & 0x1000) != 0 )
    {
      v50 = *v23;
      if ( v50 < v43 )
        goto LABEL_26;
      v51 = (unsigned int)v50 - v43;
      if ( v51 < a4 - v34 || v51 > a3 || !(_DWORD)v49 || v49 > a3 || v51 + v49 > a3 )
        goto LABEL_70;
      v52 = (v34 & 1) == 0 && !v19;
      v53 = LdrpSectionTableFromVirtualAddress(v36, a3, a5, v114, v50, (a12 & 0x1000) != 0, v52);
      if ( !v53 )
        goto LABEL_70;
      if ( *v101 + v49 < *v101 )
        goto LABEL_70;
      SectionSize = LdrpGetSectionSize(v53, v52);
      v57 = *(unsigned int *)(v56 + 12);
      v58 = v57 + SectionSize;
      if ( v58 < v57 || v55 > v58 )
        goto LABEL_70;
      v23 = v101;
    }
    else
    {
      v51 = 0LL;
    }
    v59 = v131;
    if ( v131 )
    {
      if ( (a12 & 0x1000) == 0 )
      {
        *v131 = v36 + *v23 - v43;
        goto LABEL_102;
      }
      v62 = v51 + v36;
      if ( v51 + v36 < v36 )
        goto LABEL_26;
      v60 = a3;
      if ( v62 > a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_26;
      *v131 = v62;
    }
    else
    {
LABEL_102:
      v60 = a3;
    }
    if ( v136 )
    {
      if ( (a12 & 0x1000) != 0 && v59 )
      {
        v61 = *v59 + v49;
        if ( v61 < *v59 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
        if ( v61 > v60 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
      }
      *v136 = v49;
    }
    v30 = 0;
    Heap_0 = v97;
    goto LABEL_28;
  }
  result = LdrpResReadFile(Handle);
  if ( (int)result >= 0 )
  {
    v23 = (unsigned int *)&v140;
    v101 = (unsigned int *)&v140;
    v37 = a5;
    v44 = v114;
    goto LABEL_213;
  }
  return result;
}
