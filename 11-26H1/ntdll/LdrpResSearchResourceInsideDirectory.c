/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800A7B80
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A976C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpResCompareResourceNames @ 0x1800A9450 (LdrpResCompareResourceNames.c)
 *     LdrpResReadFile @ 0x1800A96A8 (LdrpResReadFile.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1800A9EC0 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpGetSectionSize @ 0x1800A9F5C (LdrpGetSectionSize.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _QWORD *a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11,
        __int16 a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v17; // rcx
  char v18; // bl
  bool v19; // r12
  void *v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // rsi
  unsigned int *v23; // r13
  _QWORD *v24; // rcx
  signed __int16 *v25; // r10
  int v26; // r9d
  int v27; // ebx
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // ebx
  PVOID Heap_0; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  __int16 v38; // ax
  int v39; // eax
  __int64 v40; // r10
  unsigned __int64 v41; // r11
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
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 result; // rax
  __int64 v63; // r13
  _DWORD *v64; // r15
  _DWORD *v65; // r12
  __int64 v66; // rax
  _DWORD *v67; // r13
  unsigned int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rsi
  int v72; // edx
  char *v73; // rdx
  unsigned __int64 v74; // rcx
  unsigned int v75; // r10d
  unsigned __int64 v76; // r11
  __int64 v77; // r8
  int j; // edx
  __int64 v79; // r9
  __int64 v80; // r10
  unsigned int *v81; // rdx
  int k; // r8d
  __int64 v83; // r10
  __int64 v84; // r8
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // r8
  __int64 v87; // rcx
  PVOID BaseAddress; // [rsp+48h] [rbp-1C0h]
  bool v89; // [rsp+50h] [rbp-1B8h]
  unsigned int *v91; // [rsp+60h] [rbp-1A8h]
  signed __int16 v93; // [rsp+88h] [rbp-180h]
  int v94; // [rsp+8Ch] [rbp-17Ch]
  __int64 v96; // [rsp+98h] [rbp-170h]
  int v97; // [rsp+A0h] [rbp-168h]
  int v98; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v99; // [rsp+C0h] [rbp-148h]
  _DWORD *v101; // [rsp+F0h] [rbp-118h]
  __int64 v102; // [rsp+110h] [rbp-F8h]
  _QWORD v103[2]; // [rsp+160h] [rbp-A8h] BYREF
  _QWORD v104[2]; // [rsp+170h] [rbp-98h] BYREF
  int v105; // [rsp+180h] [rbp-88h]
  unsigned __int64 *v106; // [rsp+188h] [rbp-80h]
  unsigned __int64 v107; // [rsp+190h] [rbp-78h]
  _QWORD *v108; // [rsp+198h] [rbp-70h]
  __int128 v109; // [rsp+1A0h] [rbp-68h]
  __int128 v110; // [rsp+1B0h] [rbp-58h] BYREF

  v13 = a4;
  v102 = (__int64)a7;
  v106 = a11;
  v109 = 0LL;
  v93 = 0;
  LOWORD(v96) = 0;
  v110 = 0LL;
  BaseAddress = 0LL;
  LOWORD(v98) = 0;
  v103[0] = 5636180LL;
  v103[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v104[0] = 5505106LL;
  v104[1] = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v17 = 2147353477LL;
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v87 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v87 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v103, *(unsigned __int8 *)v87);
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
  if ( a12 < 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v19 = (a12 & 0x800) != 0 && a12 < 0;
  v89 = v19;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( !v19 && !a1 )
    return 3221225485LL;
  v20 = a2;
  if ( v19 && !a2 )
    return 3221225485LL;
  v21 = a8;
  v22 = v13;
  v23 = 0LL;
  v91 = 0LL;
  v99 = 0LL;
  if ( a13 )
    *a13 = 0;
  v24 = a7;
  v25 = (signed __int16 *)a9;
LABEL_17:
  if ( !v22 )
    goto LABEL_18;
  v39 = v21--;
  v97 = v21;
  v105 = v21;
  if ( !v39 )
    goto LABEL_18;
  v96 = *v24;
  if ( !v21 && a8 == 3 )
  {
    v99 = v22;
    v107 = v22;
    if ( !v25 )
    {
      v30 = -1073741811;
      goto LABEL_27;
    }
    v93 = *v25;
    v98 = 0;
    if ( (~v18 & 4) != 0 )
      v96 = (unsigned __int16)v25[2];
  }
  if ( v19 )
  {
    result = LdrpResReadFile(v20);
    if ( (int)result < 0 )
      return result;
    v21 = v97;
    goto LABEL_125;
  }
  if ( (a12 & 0x1000) == 0 )
  {
LABEL_125:
    v41 = a3;
    v40 = a1;
    goto LABEL_126;
  }
  if ( v22 + 24 < v22 )
    goto LABEL_26;
  v40 = a1;
  v41 = a3;
  if ( v22 + 24 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v30 = -1073741701;
    goto LABEL_27;
  }
LABEL_126:
  v63 = WORD6(v109);
  if ( !v19 )
    v63 = *(unsigned __int16 *)(v22 + 12);
  v94 = v63;
  if ( (_DWORD)v63 && (a12 & 0x1000) != 0 )
  {
    v74 = v22 + 8 * v63 + 16;
    if ( v74 < v22 )
    {
      v30 = -1073741701;
LABEL_27:
      Heap_0 = BaseAddress;
      goto LABEL_28;
    }
    if ( v74 > v41 + (v40 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v30 = -1073741701;
      goto LABEL_27;
    }
  }
  v64 = (_DWORD *)(v22 + 16);
  v101 = (_DWORD *)(v22 + 16);
  if ( (v96 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v63 )
    {
      if ( (a12 & 0x1000) != 0 && (_DWORD *)((char *)v64 + (int)v63) < v64 )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
      v64 += 2 * (int)v63;
      v101 = v64;
    }
    LODWORD(v63) = HIWORD(v109);
    if ( !v19 )
      LODWORD(v63) = *(unsigned __int16 *)(v22 + 14);
    v94 = v63;
    if ( (a12 & 0x1000) != 0 )
    {
      v103[0] = 8LL * (unsigned int)v63;
      if ( v103[0] > 0xFFFFFFFFuLL )
        goto LABEL_26;
      v73 = (char *)v64 + (unsigned int)(8 * v63);
      if ( v73 < (char *)v64 )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
      if ( (unsigned __int64)v73 > v41 + (v40 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v30 = -1073741701;
        goto LABEL_27;
      }
    }
  }
  if ( !(_DWORD)v63 )
    goto LABEL_54;
  if ( !v19 )
  {
LABEL_142:
    if ( v99 && (v18 & 0x20) != 0 )
    {
      v22 = 0LL;
      v23 = (unsigned int *)(a4 + (unsigned int)v64[1]);
      v91 = v23;
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
        v91 = (unsigned int *)(a4 + (unsigned int)v64[1]);
      }
      v26 = *v64;
      v19 = v89;
      v21 = v97;
      v13 = a4;
LABEL_19:
      v27 = v18 & 2;
      if ( !v23 || v27 )
      {
        if ( !v22 || !v27 )
        {
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
            Heap_0 = BaseAddress;
            goto LABEL_28;
          }
        }
        else
        {
          v28 = a1;
          v29 = a3;
        }
        if ( a10 )
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
          *a10 = v22;
        }
        v30 = 0;
        Heap_0 = BaseAddress;
        goto LABEL_28;
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
      if ( a13 )
        *a13 = v26;
      v36 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v34 & 1) == 0 && !v19 )
      {
        v43 = 0LL;
LABEL_85:
        v49 = v23[1];
        if ( (a12 & 0x1000) == 0 )
        {
          v51 = 0LL;
          goto LABEL_99;
        }
        v50 = *v23;
        if ( v50 < v43 )
          goto LABEL_26;
        v51 = (unsigned int)v50 - v43;
        if ( v51 >= a4 - v34 && v51 <= a3 && (_DWORD)v49 && v49 <= a3 && v51 + v49 <= a3 )
        {
          v52 = (v34 & 1) == 0 && !v19;
          v53 = LdrpSectionTableFromVirtualAddress(v36, a3, a5, (_DWORD)a6, v50, (a12 & 0x1000) != 0, v52);
          if ( v53 )
          {
            if ( *v91 + v49 >= *v91 )
            {
              SectionSize = LdrpGetSectionSize(v53, v52);
              v57 = *(unsigned int *)(v56 + 12);
              v58 = v57 + SectionSize;
              if ( v58 >= v57 && v55 <= v58 )
              {
                v23 = v91;
LABEL_99:
                if ( !a10 )
                {
LABEL_102:
                  v59 = a3;
                  goto LABEL_103;
                }
                if ( (a12 & 0x1000) == 0 )
                {
                  *a10 = v36 + *v23 - v43;
                  goto LABEL_102;
                }
                v61 = v51 + v36;
                if ( v51 + v36 >= v36 )
                {
                  v59 = a3;
                  if ( v61 <= a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    *a10 = v61;
LABEL_103:
                    if ( v106 )
                    {
                      if ( (a12 & 0x1000) != 0 && a10 )
                      {
                        v60 = *a10 + v49;
                        if ( v60 < *a10 )
                        {
                          v30 = -1073741701;
                          goto LABEL_27;
                        }
                        if ( v60 > v59 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                        {
                          v30 = -1073741701;
                          goto LABEL_27;
                        }
                      }
                      *v106 = v49;
                    }
                    v30 = 0;
                    Heap_0 = BaseAddress;
                    goto LABEL_28;
                  }
                }
LABEL_26:
                v30 = -1073741701;
                goto LABEL_27;
              }
            }
          }
        }
LABEL_70:
        v30 = -1073741701;
        Heap_0 = BaseAddress;
        goto LABEL_28;
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
        {
LABEL_46:
          v30 = -1073741687;
          Heap_0 = BaseAddress;
          goto LABEL_28;
        }
        v42 = *(_DWORD *)(a5 + 152);
      }
      if ( !v42 )
        goto LABEL_46;
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
      v44 = (__int64)a6;
      v45 = a6;
      if ( !a6 )
      {
        v45 = (_DWORD *)(*(unsigned __int16 *)(a5 + 20) + a5 + 24);
        if ( !v45 )
          goto LABEL_70;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(v37 + 6) )
          goto LABEL_70;
        if ( !a6 && (a12 & 0x1000) != 0 )
        {
          if ( (unsigned __int64)(v45 + 10) > v35 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
            goto LABEL_70;
          v37 = a5;
        }
        v47 = v45[3];
        if ( v42 >= v47 && v42 < v45[4] + v47 )
          break;
        v45 += 10;
        v35 = a3;
      }
      if ( v19 )
      {
        result = LdrpResReadFile(a2);
        if ( (int)result < 0 )
          return result;
        v23 = (unsigned int *)&v110;
        v91 = (unsigned int *)&v110;
        v37 = a5;
        v44 = (__int64)a6;
      }
      v75 = *v23;
      if ( *v23 <= v45[2] )
      {
LABEL_84:
        v34 = a1;
        goto LABEL_85;
      }
      v76 = (unsigned int)v45[3];
      v77 = v44;
      if ( !v44 )
      {
        v77 = *(unsigned __int16 *)(v37 + 20) + a5 + 24;
        if ( !v77 )
          goto LABEL_70;
        v37 = a5;
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= *(unsigned __int16 *)(v37 + 6) )
          goto LABEL_70;
        if ( !v44 && (a12 & 0x1000) != 0 )
        {
          if ( v77 + 40 > a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
            goto LABEL_70;
          v37 = a5;
        }
        v79 = *(unsigned int *)(v77 + 12);
        if ( v75 >= (unsigned int)v79 && v75 < (int)v79 + *(_DWORD *)(v77 + 16) )
          break;
        v77 += 40LL;
        v44 = (__int64)a6;
      }
      v80 = (__int64)a6;
      v81 = a6;
      if ( !a6 )
      {
        v81 = (unsigned int *)(*(unsigned __int16 *)(v37 + 20) + a5 + 24);
        if ( !v81 )
          goto LABEL_218;
        v37 = a5;
      }
      for ( k = 0; k < *(unsigned __int16 *)(v37 + 6); ++k )
      {
        if ( !v80 && (a12 & 0x1000) != 0 )
        {
          if ( (unsigned __int64)(v81 + 10) > a3 + (v36 & 0xFFFFFFFFFFFFFFFCuLL) )
            break;
          v37 = a5;
        }
        v83 = v81[3];
        if ( (unsigned int)v79 >= (unsigned int)v83 && (unsigned int)v79 < (unsigned int)v83 + v81[4] )
        {
          if ( (a12 & 0x1000) == 0 )
            goto LABEL_227;
          v86 = v36 + v79 - v83;
          if ( v86 < v36 )
            goto LABEL_26;
          if ( v86 + v81[5] >= v86 )
          {
LABEL_227:
            v84 = v79 + v36 + v81[5] - v83;
            goto LABEL_219;
          }
          v30 = -1073741701;
          goto LABEL_27;
        }
        v81 += 10;
        v80 = (__int64)a6;
      }
LABEL_218:
      v81 = 0LL;
      v84 = 0LL;
LABEL_219:
      if ( (a12 & 0x1000) != 0 )
      {
        v85 = v81[3];
        if ( v85 < v76 )
          goto LABEL_26;
        if ( v85 - v76 < v84 - v13 )
        {
          v30 = -1073741701;
          goto LABEL_27;
        }
      }
      v43 += v13 + v81[3] - v76 - v84;
      goto LABEL_84;
    }
    while ( 1 )
    {
      v22 = 0LL;
      v65 = v64;
      if ( v64 > &v64[2 * (int)v63 - 2] )
      {
        v13 = a4;
        goto LABEL_158;
      }
      LODWORD(v66) = (int)v63 >> 1;
      if ( (int)v63 >> 1 )
      {
        v66 = (int)v66;
        if ( (v63 & 1) == 0 )
          v66 = (int)v66 - 1;
        v67 = &v64[2 * v66];
        result = LdrpResCompareResourceNames(a1, a2, a3);
        if ( (int)result < 0 )
          return result;
        v68 = v67[1];
        v69 = v68;
        if ( (v68 & 0x80000000) != 0 )
        {
          if ( (a12 & 0x1000) == 0 )
          {
            v13 = a4;
            v22 = a4 + (v68 & 0x7FFFFFFF);
            goto LABEL_158;
          }
          if ( v99 )
          {
            v30 = -1073741701;
            goto LABEL_27;
          }
          v13 = a4;
          goto LABEL_185;
        }
        if ( (a12 & 0x1000) != 0 )
        {
          if ( !v99 )
          {
            v30 = -1073741701;
            goto LABEL_27;
          }
          v13 = a4;
          v23 = (unsigned int *)(a4 + v68);
          v91 = v23;
          if ( (unsigned __int64)v23 < a4 )
            goto LABEL_26;
        }
        else
        {
          v13 = a4;
          v23 = (unsigned int *)(a4 + v68);
          v91 = v23;
        }
      }
      else
      {
        v13 = a4;
        if ( !(_DWORD)v63 )
          goto LABEL_158;
        result = LdrpResCompareResourceNames(a1, a2, a3);
        if ( (int)result < 0 )
          return result;
        v70 = (unsigned int)v65[1];
        v69 = (unsigned int)v70;
        if ( (int)v70 < 0 )
        {
          if ( (a12 & 0x1000) == 0 )
          {
            v71 = (unsigned int)v70;
            LODWORD(v71) = v70 & 0x7FFFFFFF;
            v22 = a4 + v71;
LABEL_158:
            v23 = v91;
            goto LABEL_159;
          }
          if ( v99 )
          {
            v30 = -1073741701;
            goto LABEL_27;
          }
LABEL_185:
          LODWORD(v69) = v69 & 0x7FFFFFFF;
          v22 = v69 + v13;
          if ( v69 + v13 < v13 )
            goto LABEL_26;
          goto LABEL_158;
        }
        if ( (a12 & 0x1000) != 0 )
        {
          if ( !v99 )
          {
            v30 = -1073741701;
            goto LABEL_27;
          }
          v23 = (unsigned int *)(a4 + v70);
          v91 = (unsigned int *)(a4 + v70);
          if ( a4 + v70 < a4 )
            goto LABEL_26;
        }
        else
        {
          v23 = (unsigned int *)(a4 + v70);
          v91 = (unsigned int *)(a4 + v70);
        }
      }
LABEL_159:
      if ( !v99 || v23 )
      {
        v25 = (signed __int16 *)a9;
LABEL_183:
        v24 = (_QWORD *)(v102 + 8);
        v102 = (__int64)v24;
        v108 = v24;
        v19 = v89;
        v21 = v97;
        v20 = a2;
        goto LABEL_17;
      }
      if ( (v18 & 4) != 0 )
      {
        v19 = v89;
        v21 = v97;
LABEL_18:
        LOWORD(v26) = v96;
        goto LABEL_19;
      }
      HIWORD(v72) = HIWORD(v98);
      LOWORD(v72) = v98 + 1;
      v98 = v72;
      v25 = (signed __int16 *)a9;
      if ( (unsigned __int16)v72 >= v93 )
      {
        if ( *(_BYTE *)(a9 + 516) )
          goto LABEL_183;
        v18 |= 0x20u;
        LODWORD(v63) = v94;
        v64 = v101;
        goto LABEL_142;
      }
      LOWORD(v96) = *(_WORD *)(a9 + 8LL * (unsigned __int16)v72 + 4);
      LODWORD(v63) = v94;
      v64 = v101;
    }
  }
  if ( BaseAddress )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 8LL * (int)v63);
  BaseAddress = Heap_0;
  if ( Heap_0 )
  {
    result = LdrpResReadFile(a2);
    if ( (int)result >= 0 )
    {
      v64 = Heap_0;
      v101 = Heap_0;
      goto LABEL_142;
    }
  }
  else
  {
    v30 = -1073741801;
LABEL_28:
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    if ( RtlGetCurrentServiceSessionId() )
      v32 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v32 = 2147353477LL;
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v33 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v33 = 2147353476LL;
      LdrpTraceLoadMUIDll((unsigned __int16 *)v104, *(unsigned __int8 *)v33);
    }
    return v30;
  }
  return result;
}
