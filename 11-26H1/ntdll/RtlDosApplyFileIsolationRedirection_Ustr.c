/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x180032478 (LdrpQuerySxSMUIFile.c)
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180070E28 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     sxsisol_RespectDotLocal @ 0x180099B50 (sxsisol_RespectDotLocal.c)
 *     RtlFindCharInUnicodeString @ 0x18009A730 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A6A60 (RtlGetFullPathName_UstrEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        __m128i *a3,
        __int64 a4,
        _OWORD *a5,
        unsigned __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // r13
  int CharInUnicodeString; // eax
  int FullPathName_Ustr; // ebx
  __m128i v14; // xmm7
  __m128i v15; // xmm6
  unsigned __int64 v16; // rdi
  int v17; // ecx
  unsigned __int64 v18; // rdi
  size_t v19; // rdi
  size_t v20; // rbx
  bool v21; // di
  __int16 v22; // cx
  _QWORD *v23; // rdx
  __m128i v24; // xmm0
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  int v27; // r15d
  char v28; // dl
  _QWORD *v30; // rdi
  __int16 v31; // dx
  __int16 v32; // dx
  __int16 v33; // dx
  unsigned __int64 v34; // r8
  _WORD *v35; // rax
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v37; // [rsp+4Ch] [rbp-BCh] BYREF
  __m128i v38; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v39[4]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v40[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v41[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v43; // [rsp+C0h] [rbp-48h]
  __int128 v44; // [rsp+C8h] [rbp-40h]
  void *v45; // [rsp+D8h] [rbp-30h] BYREF
  _WORD *v46; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-10h]
  __int128 v50; // [rsp+108h] [rbp+0h] BYREF
  __int128 v51; // [rsp+118h] [rbp+10h]
  __int128 v52; // [rsp+128h] [rbp+20h]
  __int128 v53; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int128 v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+158h] [rbp+50h]
  _WORD v56[16]; // [rsp+168h] [rbp+60h] BYREF
  char v57; // [rsp+188h] [rbp+80h] BYREF

  v10 = a1;
  v41[1] = &v57;
  v43 = a8;
  *(_OWORD *)&v39[1] = 0uLL;
  v41[0] = 0x800000LL;
  DWORD1(v44) = 0;
  v49 = 0LL;
  v55 = 0LL;
  v42 = 0LL;
  v37 = 0;
  LODWORD(v39[0]) = 0;
  v38 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
    *a5 = 0LL;
  v45 = v56;
  v46 = v56;
  v47 = 32LL;
  *((_QWORD *)&v44 + 1) = v56;
  v48 = 32LL;
  v56[0] = 0;
  LODWORD(v44) = 0x200000;
  if ( a4 && (v34 = *(unsigned __int16 *)(a4 + 2), v35 = *(_WORD **)(a4 + 8), v34 >= 2) )
  {
    *(_QWORD *)&v51 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v52 = v34;
    *((_QWORD *)&v51 + 1) = v35;
    *((_QWORD *)&v52 + 1) = v34;
    *((_QWORD *)&v50 + 1) = v35;
    *(_QWORD *)&v40[0] = v34;
    if ( v35 )
      *v35 = 0;
    LOWORD(v50) = 0;
    WORD1(v50) = v34;
  }
  else
  {
    *(_QWORD *)&v52 = 2LL;
    *(_QWORD *)&v51 = &v53;
    *((_QWORD *)&v51 + 1) = &v53;
    *((_QWORD *)&v50 + 1) = &v53;
    *((_QWORD *)&v52 + 1) = 2LL;
    LOWORD(v53) = 0;
    LODWORD(v50) = 0x20000;
  }
  *((_QWORD *)&v53 + 1) = a4;
  v54 = __PAIR128__(a6, (unsigned __int64)a5);
  LOBYTE(v55) = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  if ( !a2 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  if ( a4 )
  {
    if ( a5 && !a6 )
    {
      FullPathName_Ustr = -1073741811;
      goto LABEL_54;
    }
  }
  else if ( !a5 && a8 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  v38 = (__m128i)*a2;
  if ( a3 )
  {
    if ( a3->m128i_i16[0] )
    {
      LOWORD(v36) = 0;
      CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v38, &unk_180171AB8, &v36);
      FullPathName_Ustr = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString == -1073741275 )
        {
          v14 = *a3;
          v15 = v38;
          v16 = 0LL;
          v40[1] = v14;
          v17 = 0;
          v40[0] = v38;
          while ( v17 != 2 )
          {
            v16 += LOWORD(v40[v17]);
            if ( v16 > 0xFFFE )
              goto LABEL_120;
            ++v17;
          }
          v18 = v16 + 2;
          if ( v18 > 0xFFFE )
          {
LABEL_120:
            FullPathName_Ustr = -1073741562;
            goto LABEL_54;
          }
          if ( v18 <= v47 || (FullPathName_Ustr = RtlpEnsureBufferSize(0LL, &v45), FullPathName_Ustr >= 0) )
          {
            WORD1(v44) = v18;
            LOWORD(v44) = v18 - 2;
            v19 = (unsigned __int16)_mm_cvtsi128_si32(v15);
            *((_QWORD *)&v44 + 1) = v45;
            memmove(v45, (const void *)_mm_srli_si128(v15, 8).m128i_i64[0], v19);
            v20 = (unsigned __int16)_mm_cvtsi128_si32(v14);
            memmove(
              (void *)(*((_QWORD *)&v44 + 1) + 2 * ((unsigned __int64)(unsigned int)v19 >> 1)),
              (const void *)_mm_srli_si128(v14, 8).m128i_i64[0],
              v20);
            *(_WORD *)(*((_QWORD *)&v44 + 1) + 2 * ((v20 + v19) >> 1)) = 0;
            v38 = (__m128i)v44;
            goto LABEL_26;
          }
        }
        goto LABEL_54;
      }
    }
  }
LABEL_26:
  v21 = 0;
  *(_QWORD *)&v40[0] = 0LL;
  if ( v39[2] )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_43;
  }
  if ( v38.m128i_i16[0] >= 2u && (*(_WORD *)v38.m128i_i64[1] == 92 || *(_WORD *)v38.m128i_i64[1] == 47) )
  {
    if ( v38.m128i_i16[0] < 4u )
      goto LABEL_78;
    v31 = *(_WORD *)(v38.m128i_i64[1] + 2);
    if ( v31 != 92 && v31 != 47 )
      goto LABEL_78;
    if ( v38.m128i_i16[0] >= 6u )
    {
      v32 = *(_WORD *)(v38.m128i_i64[1] + 4);
      if ( v32 == 46 || v32 == 63 )
      {
        if ( v38.m128i_i16[0] >= 8u )
        {
          v33 = *(_WORD *)(v38.m128i_i64[1] + 6);
          if ( v33 == 92 || v33 == 47 )
          {
            v36 = 6;
            goto LABEL_36;
          }
        }
        if ( v38.m128i_i16[0] == 6 )
        {
LABEL_78:
          FullPathName_Ustr = 0;
LABEL_43:
          if ( v39[2] )
          {
            RtlpSysVolFree(v39[2]);
            v39[1] = 0LL;
            v39[2] = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          }
          goto LABEL_45;
        }
      }
    }
    v36 = 1;
    goto LABEL_36;
  }
  if ( v38.m128i_i16[0] < 4u )
    goto LABEL_78;
  if ( !*(_WORD *)v38.m128i_i64[1] )
    goto LABEL_78;
  if ( *(_WORD *)(v38.m128i_i64[1] + 2) != 58 )
    goto LABEL_78;
  if ( v38.m128i_i16[0] < 6u )
    goto LABEL_78;
  v22 = *(_WORD *)(v38.m128i_i64[1] + 4);
  if ( v22 != 92 && v22 != 47 )
    goto LABEL_78;
  v36 = 2;
LABEL_36:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        (unsigned int)&v38,
                        (unsigned int)v41,
                        (unsigned int)&v39[1],
                        (unsigned int)v40,
                        0LL,
                        0LL,
                        (__int64)&v36,
                        0LL);
  if ( FullPathName_Ustr < 0 )
    goto LABEL_43;
  v23 = *(_QWORD **)&v40[0];
  v24 = **(__m128i **)&v40[0];
  v40[0] = **(_OWORD **)&v40[0];
  if ( v36 == 6 && *(_WORD *)(v38.m128i_i64[1] + 10) == 58 && *(_WORD *)(v38.m128i_i64[1] + 12) == 92 )
  {
    *((_QWORD *)&v40[0] + 1) += 8LL;
    v38.m128i_i16[1] -= 8;
    v25 = v38.m128i_i16[0] - 8;
    v38.m128i_i64[1] += 8LL;
    v26 = LOWORD(v40[0]) - 8;
    v38.m128i_i16[0] -= 8;
    WORD1(v40[0]) -= 8;
    LOWORD(v40[0]) -= 8;
    v24 = (__m128i)v40[0];
  }
  else
  {
    v25 = v38.m128i_i16[0];
    v26 = _mm_cvtsi128_si32(v24);
  }
  if ( v25 > v26 )
  {
    v38 = v24;
    v21 = v23 == &v39[1];
  }
  FullPathName_Ustr = 0;
  if ( !v21 )
    goto LABEL_43;
LABEL_45:
  if ( FullPathName_Ustr >= 0 )
  {
    if ( (v10 & 1) == 0
      || !NtCurrentPeb()->ProcessParameters
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (FullPathName_Ustr = sxsisol_RespectDotLocal(&v38, &v50, v39), FullPathName_Ustr >= 0) )
    {
      v27 = v39[0];
      if ( (v39[0] & 1) != 0
        || (!a4 && !a5 ? (v28 = 1) : (v28 = 0),
            FullPathName_Ustr = sxsisol_SearchActCtxForDllName(
                                  (__int128 *)v38.m128i_i8,
                                  v28,
                                  &v42,
                                  a7,
                                  (unsigned __int16 *)&v50),
            FullPathName_Ustr >= 0) )
      {
        if ( a5 || !a4 || *((_QWORD *)&v50 + 1) == *(_QWORD *)(a4 + 8) )
        {
          v30 = v43;
          if ( v43 )
          {
            FullPathName_Ustr = RtlFindCharInUnicodeString(1LL, &v50, &RtlDosPathSeperatorsString, &v37);
            if ( FullPathName_Ustr < 0 )
              goto LABEL_54;
            *v30 = ((unsigned __int64)v37 >> 1) + 1;
          }
          FullPathName_Ustr = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v50);
          if ( FullPathName_Ustr >= 0 )
          {
            if ( a7 )
              *a7 = v27;
            FullPathName_Ustr = 0;
          }
        }
        else
        {
          FullPathName_Ustr = -1073741789;
        }
      }
    }
  }
LABEL_54:
  if ( FullPathName_Ustr >= 0 )
    goto LABEL_62;
  while ( 1 )
  {
    if ( (_BYTE)v55 )
    {
      if ( (_QWORD)v51 && (_QWORD)v51 != *((_QWORD *)&v51 + 1) )
        RtlpSysVolFree(v51);
      if ( *((_QWORD *)&v51 + 1) )
        **((_WORD **)&v51 + 1) = 0;
    }
    v50 = 0LL;
    v55 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
LABEL_62:
    if ( v39[2] )
    {
      RtlpSysVolFree(v39[2]);
      *(_OWORD *)&v39[1] = 0LL;
    }
    if ( v45 )
    {
      if ( v45 != v46 )
        RtlpSysVolFree((__int64)v45);
      v45 = v46;
      v47 = v48;
    }
    *((_QWORD *)&v44 + 1) = v46;
    if ( v46 )
      *v46 = 0;
    LOWORD(v44) = 0;
    WORD1(v44) = v48;
    if ( FullPathName_Ustr != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      433LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    FullPathName_Ustr = -1073741595;
  }
  return (unsigned int)FullPathName_Ustr;
}
