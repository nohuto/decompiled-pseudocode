/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x1800A6100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A5FB0 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A6A10 (RtlUnicodeStringValidateWorker.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A6A60 (RtlGetFullPathName_UstrEx.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        __m128i *a3,
        const void **a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v11; // bl
  unsigned __int64 v13; // rdi
  unsigned __int16 v14; // r14
  int v15; // eax
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  __int64 v18; // r10
  _DWORD *v19; // r11
  int FullPathName_Ustr; // ebx
  _WORD *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  char *v28; // r10
  char *v29; // rdx
  char *v30; // rcx
  __int64 v31; // rax
  __int16 v32; // cx
  __int64 v33; // r12
  unsigned __int64 v34; // r8
  _WORD *v35; // rbx
  _WORD *v36; // r15
  _WORD *v37; // r14
  __int64 v38; // rdi
  bool v39; // zf
  unsigned __int16 v40; // di
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int16 v43; // r10
  unsigned __int16 v44; // r11
  _WORD *v45; // r8
  __int16 v46; // r11
  unsigned __int64 v47; // rax
  unsigned __int64 i; // rdx
  unsigned __int16 v49; // r11
  unsigned __int64 v50; // rbx
  __int64 v51; // r10
  __int16 v52; // r9
  _WORD *v53; // rdx
  unsigned __int64 v54; // rcx
  _WORD *v55; // r8
  __int64 j; // r10
  const void **v57; // rdi
  unsigned __int64 v58; // rbx
  __int64 v59; // r10
  __int16 v60; // r9
  _WORD *v61; // rdx
  unsigned __int64 v62; // rax
  _WORD *v63; // r8
  __int64 k; // r10
  __int64 v65; // rax
  int v66; // ebx
  int v67; // eax
  int v69; // eax
  __int64 v70; // rax
  unsigned __int16 v71; // r9
  __int16 v72; // r10
  __int16 v73; // ax
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  __int16 v76; // r8
  __int16 v77; // dx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rcx
  __int16 v81; // ax
  __m128i v82; // [rsp+50h] [rbp-B0h] BYREF
  int v83; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v84; // [rsp+68h] [rbp-98h]
  _DWORD *v85; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v86; // [rsp+78h] [rbp-88h]
  _QWORD *v87; // [rsp+80h] [rbp-80h]
  __int64 v88; // [rsp+88h] [rbp-78h]
  const void **v89; // [rsp+90h] [rbp-70h]
  __int128 v90; // [rsp+98h] [rbp-68h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-58h]
  __int128 v92; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v93; // [rsp+C0h] [rbp-40h]
  __int128 v94; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v95; // [rsp+E0h] [rbp-20h]
  __int128 v96; // [rsp+F0h] [rbp-10h]
  _OWORD v97[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v98; // [rsp+120h] [rbp+20h]
  _BYTE v99[528]; // [rsp+130h] [rbp+30h] BYREF

  v11 = a1;
  v89 = a4;
  v84 = a8;
  v13 = 0LL;
  v87 = a9;
  v14 = 0;
  v82.m128i_i64[1] = (__int64)v99;
  v91 = a6;
  v88 = a5;
  v86 = a7;
  v82.m128i_i64[0] = 34078720LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
    return 3221225485LL;
  v15 = RtlDetermineDosPathNameType_Ustr(a3);
  v83 = v15;
  if ( (v11 & 2) != 0 )
  {
    if ( v15 != 5 )
      goto LABEL_17;
    if ( a3->m128i_i16[0] >= 4u )
    {
      v21 = (_WORD *)a3->m128i_i64[1];
      if ( *v21 == 46 )
      {
        v76 = v21[1];
        if ( v76 == 92 || v76 == 47 || v76 == 46 && a3->m128i_i16[0] >= 6u && ((v77 = v21[2], v77 == 92) || v77 == 47) )
        {
          v83 = (int)v19;
LABEL_17:
          if ( RtlDoesFileExists_UstrEx(a3, 1) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                  (_DWORD)a3,
                                  v88,
                                  a6,
                                  (_DWORD)v86,
                                  (__int64)v84,
                                  0LL,
                                  (__int64)&v83,
                                  (__int64)v87);
            if ( FullPathName_Ustr >= 0 )
              FullPathName_Ustr = 0;
            goto LABEL_79;
          }
          if ( a4 )
          {
            v74 = *(unsigned __int16 *)a4;
            if ( (_WORD)v74 )
            {
              if ( (v11 & 4) == 0 )
              {
                v78 = a3->m128i_u16[0];
                if ( (_WORD)v78 )
                {
                  v79 = a3->m128i_u64[1];
                  v80 = v79 + 2 * (v78 >> 1);
                  while ( v80 > v79 )
                  {
                    v81 = *(_WORD *)(v80 - 2);
                    v80 -= 2LL;
                    if ( v81 == 92 || v81 == 47 )
                      break;
                    if ( v81 == 46 )
                    {
                      FullPathName_Ustr = -1073741809;
                      goto LABEL_79;
                    }
                  }
                }
              }
              v75 = a3->m128i_u16[0] + 2LL + v74;
              if ( v75 > 0xFFFE )
              {
                FullPathName_Ustr = -1073741562;
                goto LABEL_79;
              }
              if ( v75 > v82.m128i_u16[1] )
              {
                v82.m128i_i16[1] = v75;
                v82.m128i_i64[1] = RtlpAllocateAtom((unsigned __int16)v75);
                if ( !v82.m128i_i64[1] )
                {
LABEL_124:
                  FullPathName_Ustr = -1073741801;
                  goto LABEL_79;
                }
              }
              memmove((void *)v82.m128i_i64[1], (const void *)a3->m128i_i64[1], a3->m128i_u16[0]);
              memmove(
                (void *)(v82.m128i_i64[1] + 2 * ((unsigned __int64)a3->m128i_u16[0] >> 1)),
                a4[1],
                *(unsigned __int16 *)a4);
              *(_WORD *)(v82.m128i_i64[1] + 2 * ((a3->m128i_u16[0] + (unsigned __int64)*(unsigned __int16 *)a4) >> 1)) = 0;
              v82.m128i_i16[0] = *(_WORD *)a4 + a3->m128i_i16[0];
              if ( RtlDoesFileExists_UstrEx(&v82, 1) )
              {
                FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                      (unsigned int)&v82,
                                      v88,
                                      a6,
                                      (_DWORD)v86,
                                      (__int64)v84,
                                      0LL,
                                      (__int64)&v83,
                                      (__int64)v87);
                if ( FullPathName_Ustr >= 0 )
                  FullPathName_Ustr = 0;
                goto LABEL_79;
              }
            }
          }
          goto LABEL_111;
        }
        v16 = v84;
      }
    }
  }
  if ( v15 != 5 )
    goto LABEL_17;
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  v85 = v19;
  v69 = RtlDosApplyFileIsolationRedirection_Ustr(
          1,
          (__int128 *)a3->m128i_i8,
          (__m128i *)a4,
          v18,
          (_OWORD *)a6,
          (unsigned __int64)&v85,
          v19,
          v16,
          v17);
  FullPathName_Ustr = v69;
  if ( v69 >= 0 )
  {
    if ( v86 )
      *v86 = v85;
    FullPathName_Ustr = 0;
    goto LABEL_79;
  }
  if ( v69 == -1072365560 )
  {
    v19 = 0LL;
LABEL_24:
    if ( a4 )
    {
      v22 = a3->m128i_u16[0];
      v14 = *(_WORD *)a4;
      if ( (_WORD)v22 )
      {
        v23 = a3->m128i_u64[1];
        v24 = v23 + 2 * (v22 >> 1);
        while ( v24 > v23 )
        {
          v25 = *(_WORD *)(v24 - 2);
          v24 -= 2LL;
          if ( v25 == 92 || v25 == 47 )
            break;
          if ( v25 == 46 )
          {
            v89 = (const void **)v19;
            v14 = (unsigned __int16)v19;
            break;
          }
        }
      }
    }
    v26 = *a2;
    if ( (_WORD)v26 )
    {
      v27 = *((_QWORD *)a2 + 1);
      v28 = (char *)(v27 + 2 * (v26 >> 1));
      v29 = v28;
      if ( (unsigned __int64)v28 > v27 )
      {
        v30 = v28 - 2;
        do
        {
          if ( *(_WORD *)v30 == 59 )
          {
            v70 = (v28 - v29 + 2) >> 1;
            v71 = v70 - 1;
            if ( (_WORD)v70 != 1 )
            {
              v72 = *((_WORD *)v28 - 1);
              if ( v72 != 92 && v72 != 47 )
                v71 = v70;
            }
            v28 = v30;
            if ( v71 > v13 )
              v13 = v71;
          }
          v29 -= 2;
          v30 -= 2;
        }
        while ( (unsigned __int64)v29 > v27 );
      }
      v31 = (v28 - v29) >> 1;
      if ( (_WORD)v31 )
      {
        v32 = *((_WORD *)v28 - 1);
        if ( v32 != 92 && v32 != 47 )
          LOWORD(v31) = v31 + 1;
      }
      if ( (unsigned __int16)v31 > v13 )
        v13 = (unsigned __int16)v31;
      v13 *= 2LL;
    }
    v33 = v14;
    v34 = v14 + (unsigned __int64)a3->m128i_u16[0] + v13 + 2;
    v85 = (_DWORD *)v34;
    if ( v34 > 0xFFFE )
    {
      FullPathName_Ustr = -1073741562;
      goto LABEL_79;
    }
    v35 = (_WORD *)*((_QWORD *)a2 + 1);
    v36 = &v35[(unsigned __int64)*a2 >> 1];
    while ( v35 < v36 )
    {
      v37 = v35;
      do
      {
        if ( *v37 == 59 )
          break;
        ++v37;
      }
      while ( v37 != v36 );
      v38 = v37 - v35;
      v39 = 2 * (_WORD)v38 == 0;
      v40 = 2 * v38;
      v41 = v40;
      if ( !v39 )
      {
        v73 = *(v37 - 1);
        if ( v73 != 92 && v73 != 47 )
          v40 += 2;
      }
      v42 = v33 + a3->m128i_u16[0] + v40;
      if ( v82.m128i_u16[1] < v42 + 2 )
      {
        if ( (_BYTE *)v82.m128i_i64[1] != v99 || v42 > 0xFFFC )
          goto LABEL_104;
        v82.m128i_i16[1] = v34;
        v82.m128i_i64[1] = RtlpAllocateAtom((unsigned __int16)v34);
        if ( !v82.m128i_i64[1] )
          goto LABEL_124;
      }
      v82.m128i_i16[0] = 0;
      if ( (int)RtlUnicodeStringValidateWorker(&v82) >= 0 )
      {
        v45 = (_WORD *)v82.m128i_i64[1];
        v46 = v43;
        v47 = v41 >> 1;
        for ( i = (unsigned __int64)v82.m128i_u16[1] >> 1; i; --i )
        {
          if ( !v47 )
            break;
          if ( !*v35 )
            break;
          *v45++ = *v35++;
          --v47;
          ++v46;
        }
        v44 = 2 * v46;
        v82.m128i_i16[0] = v44;
      }
      if ( v40 && (_WORD)v41 != v40 )
      {
        *(_WORD *)(v82.m128i_i64[1] + 2 * ((unsigned __int64)v44 >> 1)) = 92;
        v82.m128i_i16[0] += 2;
      }
      if ( (int)RtlUnicodeStringValidateWorker(&v82) >= 0 )
      {
        v50 = (unsigned __int64)v49 >> 1;
        if ( (int)RtlUnicodeStringValidateWorker(a3) >= 0 )
        {
          v52 = 0;
          v53 = (_WORD *)a3->m128i_i64[1];
          v54 = (unsigned __int64)a3->m128i_u16[0] >> 1;
          v55 = (_WORD *)(v82.m128i_i64[1] + 2 * v50);
          for ( j = v51 - v50; j; --j )
          {
            if ( !v54 )
              break;
            --v54;
            *v55++ = *v53++;
            ++v52;
          }
          v49 = 2 * (v52 + v50);
          v82.m128i_i16[0] = v49;
        }
      }
      v57 = v89;
      if ( v89 )
      {
        if ( (int)RtlUnicodeStringValidateWorker(&v82) >= 0 )
        {
          v58 = (unsigned __int64)v49 >> 1;
          if ( (int)RtlUnicodeStringValidateWorker(v57) >= 0 )
          {
            v60 = 0;
            v61 = v57[1];
            v62 = (unsigned __int64)*(unsigned __int16 *)v57 >> 1;
            v63 = (_WORD *)(v82.m128i_i64[1] + 2 * v58);
            for ( k = v59 - v58; k; --k )
            {
              if ( !v62 )
                break;
              --v62;
              *v63++ = *v61++;
              ++v60;
            }
            v49 = 2 * (v60 + v58);
            v82.m128i_i16[0] = v49;
          }
        }
      }
      if ( (unsigned __int64)v49 + 2 > v82.m128i_u16[1] )
      {
LABEL_104:
        FullPathName_Ustr = -1073741595;
        goto LABEL_79;
      }
      v94 = 0LL;
      *(_WORD *)(v82.m128i_i64[1] + 2 * ((unsigned __int64)v49 >> 1)) = 0;
      *(_QWORD *)&v96 = 0LL;
      DWORD2(v96) = 0;
      v98 = 0LL;
      v95 = 0LL;
      v90 = 0LL;
      v92 = 0LL;
      v93 = 0LL;
      memset(v97, 0, sizeof(v97));
      if ( (int)RtlpDosPathNameToRelativeNtPathName(2, &v82, 0LL, (unsigned __int16 *)&v90, 0LL, 0LL, (__int64)&v92) >= 0 )
      {
        if ( (_WORD)v92 )
        {
          v65 = v93;
          v90 = v92;
        }
        else
        {
          v65 = 0LL;
          *(_QWORD *)&v93 = 0LL;
        }
        *((_QWORD *)&v94 + 1) = v65;
        LODWORD(v94) = 48;
        *(_QWORD *)&v95 = &v90;
        DWORD2(v95) = 64;
        v96 = 0LL;
        v66 = ZwQueryAttributesFile(&v94, v97);
        RtlReleaseRelativeName(&v92);
        RtlFreeHeap_0();
        if ( v66 >= 0 )
        {
          v67 = RtlGetFullPathName_UstrEx(
                  (unsigned int)&v82,
                  v88,
                  v91,
                  (_DWORD)v86,
                  (__int64)v84,
                  0LL,
                  (__int64)&v83,
                  (__int64)v87);
          FullPathName_Ustr = 0;
          if ( v67 < 0 )
            FullPathName_Ustr = v67;
          goto LABEL_79;
        }
      }
      LOWORD(v34) = (_WORD)v85;
      if ( v37 == v36 )
        v35 = v37;
      else
        v35 = v37 + 1;
    }
LABEL_111:
    FullPathName_Ustr = -1073741809;
  }
LABEL_79:
  if ( v82.m128i_i64[1] )
  {
    if ( (_BYTE *)v82.m128i_i64[1] != v99 )
      RtlpSysVolFree(v82.m128i_i64[1]);
  }
  return (unsigned int)FullPathName_Ustr;
}
