/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A5230 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180091278 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     sxsisol_RespectDotLocal @ 0x180098C80 (sxsisol_RespectDotLocal.c)
 *     RtlFindCharInUnicodeString @ 0x180099860 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A5B90 (RtlGetFullPathName_UstrEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  char v10; // r13
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS FullPathName_Ustr; // ebx
  _UNICODE_STRING v14; // xmm7
  __m128i v15; // xmm6
  unsigned __int64 v16; // rdi
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdi
  size_t v19; // rdi
  size_t v20; // rbx
  bool v21; // di
  wchar_t v22; // cx
  _UNICODE_STRING *v23; // rdx
  __m128i v24; // xmm0
  unsigned __int16 Length; // ax
  unsigned __int16 v26; // cx
  ULONG v27; // r15d
  char v28; // dl
  PSIZE_T v30; // rdi
  wchar_t v31; // dx
  wchar_t v32; // dx
  wchar_t v33; // dx
  _UNICODE_STRING *MaximumLength; // r8
  wchar_t *Buffer; // rax
  int NonInclusivePrefixLength; // [rsp+48h] [rbp-C0h] BYREF
  USHORT v37; // [rsp+4Ch] [rbp-BCh] BYREF
  _UNICODE_STRING StringToSearch_8; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v39; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING v40; // [rsp+70h] [rbp-98h] BYREF
  PUNICODE_STRING StringUsed[2]; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING v42; // [rsp+98h] [rbp-70h]
  _UNICODE_STRING StaticStringa; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h] BYREF
  PSIZE_T v45; // [rsp+C0h] [rbp-48h]
  _UNICODE_STRING v46; // [rsp+C8h] [rbp-40h]
  PVOID v47; // [rsp+D8h] [rbp-30h] BYREF
  _WORD *v48; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-10h]
  _UNICODE_STRING v52; // [rsp+108h] [rbp+0h] BYREF
  PVOID BaseAddress[2]; // [rsp+118h] [rbp+10h]
  __int128 v54; // [rsp+128h] [rbp+20h]
  __int128 v55; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int128 v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+158h] [rbp+50h]
  _WORD v58[16]; // [rsp+168h] [rbp+60h] BYREF
  char v59; // [rsp+188h] [rbp+80h] BYREF

  v10 = Flags;
  StaticStringa.Buffer = (wchar_t *)&v59;
  v45 = FileNameSize;
  *(_QWORD *)&v40.Length = 0LL;
  v40.Buffer = 0LL;
  *(_QWORD *)&StaticStringa.Length = 0x800000LL;
  *(_DWORD *)(&v46.MaximumLength + 1) = 0;
  v51 = 0LL;
  v57 = 0LL;
  v44 = 0LL;
  v37 = 0;
  v39 = 0;
  StringToSearch_8 = 0LL;
  v52 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
    *DynamicString = 0LL;
  v47 = v58;
  v48 = v58;
  v49 = 32LL;
  v46.Buffer = v58;
  v50 = 32LL;
  v58[0] = 0;
  *(_DWORD *)&v46.Length = 0x200000;
  if ( StaticString )
  {
    MaximumLength = (_UNICODE_STRING *)StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( (unsigned __int64)MaximumLength < 2 )
    {
      *(_QWORD *)&v54 = 2LL;
      BaseAddress[0] = &v55;
      BaseAddress[1] = &v55;
      v52.Buffer = (wchar_t *)&v55;
      *((_QWORD *)&v54 + 1) = 2LL;
      LOWORD(v55) = 0;
      v52.Length = 0;
      v52.MaximumLength = 2;
    }
    else
    {
      BaseAddress[0] = StaticString->Buffer;
      *(_QWORD *)&v54 = MaximumLength;
      BaseAddress[1] = Buffer;
      *((_QWORD *)&v54 + 1) = MaximumLength;
      v52.Buffer = Buffer;
      StringUsed[0] = MaximumLength;
      if ( Buffer )
        *Buffer = 0;
      v52.Length = 0;
      v52.MaximumLength = (unsigned __int16)MaximumLength;
    }
  }
  else
  {
    *(_QWORD *)&v54 = 2LL;
    BaseAddress[0] = &v55;
    BaseAddress[1] = &v55;
    v52.Buffer = (wchar_t *)&v55;
    *((_QWORD *)&v54 + 1) = 2LL;
    LOWORD(v55) = 0;
    *(_DWORD *)&v52.Length = 0x20000;
  }
  *((_QWORD *)&v55 + 1) = StaticString;
  v56 = __PAIR128__((unsigned __int64)NewName, (unsigned __int64)DynamicString);
  LOBYTE(v57) = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  if ( !OriginalName )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  if ( StaticString )
  {
    if ( DynamicString && !NewName )
    {
      FullPathName_Ustr = -1073741811;
      goto LABEL_54;
    }
  }
  else if ( !DynamicString && FileNameSize )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_54;
  }
  StringToSearch_8 = *OriginalName;
  if ( Extension )
  {
    if ( Extension->Length )
    {
      LOWORD(NonInclusivePrefixLength) = 0;
      CharInUnicodeString = RtlFindCharInUnicodeString(
                              1u,
                              &StringToSearch_8,
                              (PUNICODE_STRING)&CharSet,
                              (PUSHORT)&NonInclusivePrefixLength);
      FullPathName_Ustr = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString == -1073741275 )
        {
          v14 = *Extension;
          v15 = (__m128i)StringToSearch_8;
          v16 = 0LL;
          v42 = v14;
          v17 = 0;
          *(_UNICODE_STRING *)StringUsed = StringToSearch_8;
          while ( v17 != 2 )
          {
            v16 += LOWORD(StringUsed[2 * v17]);
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
          if ( v18 <= v49 || (FullPathName_Ustr = RtlpEnsureBufferSize(0LL, &v47), FullPathName_Ustr >= 0) )
          {
            v46.MaximumLength = v18;
            v46.Length = v18 - 2;
            v19 = (unsigned __int16)_mm_cvtsi128_si32(v15);
            v46.Buffer = (wchar_t *)v47;
            memmove(v47, (const void *)_mm_srli_si128(v15, 8).m128i_i64[0], v19);
            v20 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v14);
            memmove(
              &v46.Buffer[(unsigned __int64)(unsigned int)v19 >> 1],
              (const void *)_mm_srli_si128((__m128i)v14, 8).m128i_i64[0],
              v20);
            v46.Buffer[(v20 + v19) >> 1] = 0;
            StringToSearch_8 = v46;
            goto LABEL_26;
          }
        }
        goto LABEL_54;
      }
    }
  }
LABEL_26:
  v21 = 0;
  StringUsed[0] = 0LL;
  if ( v40.Buffer )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_43;
  }
  if ( StringToSearch_8.Length >= 2u && (*StringToSearch_8.Buffer == 92 || *StringToSearch_8.Buffer == 47) )
  {
    if ( StringToSearch_8.Length < 4u )
      goto LABEL_78;
    v31 = StringToSearch_8.Buffer[1];
    if ( v31 != 92 && v31 != 47 )
      goto LABEL_78;
    if ( StringToSearch_8.Length >= 6u )
    {
      v32 = StringToSearch_8.Buffer[2];
      if ( v32 == 46 || v32 == 63 )
      {
        if ( StringToSearch_8.Length >= 8u )
        {
          v33 = StringToSearch_8.Buffer[3];
          if ( v33 == 92 || v33 == 47 )
          {
            NonInclusivePrefixLength = 6;
            goto LABEL_36;
          }
        }
        if ( StringToSearch_8.Length == 6 )
        {
LABEL_78:
          FullPathName_Ustr = 0;
LABEL_43:
          if ( v40.Buffer )
          {
            RtlpSysVolFree(v40.Buffer);
            *(_QWORD *)&v40.Length = 0LL;
            v40.Buffer = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          }
          goto LABEL_45;
        }
      }
    }
    NonInclusivePrefixLength = 1;
    goto LABEL_36;
  }
  if ( StringToSearch_8.Length < 4u )
    goto LABEL_78;
  if ( !*StringToSearch_8.Buffer )
    goto LABEL_78;
  if ( StringToSearch_8.Buffer[1] != 58 )
    goto LABEL_78;
  if ( StringToSearch_8.Length < 6u )
    goto LABEL_78;
  v22 = StringToSearch_8.Buffer[2];
  if ( v22 != 92 && v22 != 47 )
    goto LABEL_78;
  NonInclusivePrefixLength = 2;
LABEL_36:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        &StringToSearch_8,
                        &StaticStringa,
                        &v40,
                        StringUsed,
                        0LL,
                        0LL,
                        (RTL_PATH_TYPE *)&NonInclusivePrefixLength,
                        0LL);
  if ( FullPathName_Ustr < 0 )
    goto LABEL_43;
  v23 = StringUsed[0];
  v24 = *(__m128i *)StringUsed[0];
  *(_UNICODE_STRING *)StringUsed = *StringUsed[0];
  if ( NonInclusivePrefixLength == 6 && StringToSearch_8.Buffer[5] == 58 && StringToSearch_8.Buffer[6] == 92 )
  {
    StringUsed[1] = (PUNICODE_STRING)((char *)StringUsed[1] + 8);
    StringToSearch_8.MaximumLength -= 8;
    Length = StringToSearch_8.Length - 8;
    StringToSearch_8.Buffer += 4;
    v26 = LOWORD(StringUsed[0]) - 8;
    StringToSearch_8.Length -= 8;
    WORD1(StringUsed[0]) -= 8;
    LOWORD(StringUsed[0]) -= 8;
    v24 = *(__m128i *)StringUsed;
  }
  else
  {
    Length = StringToSearch_8.Length;
    v26 = _mm_cvtsi128_si32(v24);
  }
  if ( Length > v26 )
  {
    StringToSearch_8 = (_UNICODE_STRING)v24;
    v21 = v23 == &v40;
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
      || (FullPathName_Ustr = sxsisol_RespectDotLocal(&StringToSearch_8, &v52, &v39), FullPathName_Ustr >= 0) )
    {
      v27 = v39;
      if ( (v39 & 1) != 0
        || (!StaticString && !DynamicString ? (v28 = 1) : (v28 = 0),
            FullPathName_Ustr = sxsisol_SearchActCtxForDllName(&StringToSearch_8, v28, &v44, NewFlags, &v52.Length),
            FullPathName_Ustr >= 0) )
      {
        if ( DynamicString || !StaticString || v52.Buffer == StaticString->Buffer )
        {
          v30 = v45;
          if ( v45 )
          {
            FullPathName_Ustr = RtlFindCharInUnicodeString(1u, &v52, &RtlDosPathSeperatorsString, &v37);
            if ( FullPathName_Ustr < 0 )
              goto LABEL_54;
            *v30 = ((unsigned __int64)v37 >> 1) + 1;
          }
          FullPathName_Ustr = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v52);
          if ( FullPathName_Ustr >= 0 )
          {
            if ( NewFlags )
              *NewFlags = v27;
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
  if ( FullPathName_Ustr < 0 )
  {
    if ( (_BYTE)v57 )
    {
      if ( BaseAddress[0] && BaseAddress[0] != BaseAddress[1] )
        RtlpSysVolFree(BaseAddress[0]);
      if ( BaseAddress[1] )
        *(_WORD *)BaseAddress[1] = 0;
    }
    v52 = 0LL;
    v57 = 0LL;
    *(_OWORD *)BaseAddress = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
  }
  if ( v40.Buffer )
  {
    RtlpSysVolFree(v40.Buffer);
    v40 = 0LL;
  }
  if ( v47 )
  {
    if ( v47 != v48 )
      RtlpSysVolFree(v47);
    v47 = v48;
    v49 = v50;
  }
  v46.Buffer = v48;
  if ( v48 )
    *v48 = 0;
  v46.Length = 0;
  v46.MaximumLength = v50;
  if ( FullPathName_Ustr == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B1u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return FullPathName_Ustr;
}
