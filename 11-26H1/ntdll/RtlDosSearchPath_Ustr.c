/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x1800A5230
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A5B40 (RtlUnicodeStringValidateWorker.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A5B90 (RtlGetFullPathName_UstrEx.c)
 *     RtlReleaseRelativeName @ 0x1800A5EF0 (RtlReleaseRelativeName.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 *     ZwQueryAttributesFile @ 0x18015F5E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlDosSearchPath_Ustr(
        ULONG Flags,
        PUNICODE_STRING Path,
        PUNICODE_STRING FileName,
        PUNICODE_STRING DefaultExtension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PCUNICODE_STRING *FullFileNameOut,
        SIZE_T *FilePartPrefixCch,
        SIZE_T *BytesRequired)
{
  char v11; // bl
  unsigned __int64 v13; // rdi
  unsigned __int16 v14; // r14
  RTL_PATH_TYPE v15; // eax
  ULONG_PTR *FileNameSize; // r8
  ULONG_PTR *RequiredLength; // r9
  _UNICODE_STRING *v18; // r10
  _UNICODE_STRING *v19; // r11
  int FullPathName_Ustr; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int64 v22; // rax
  wchar_t *v23; // rdx
  wchar_t *v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rax
  wchar_t *v27; // r8
  wchar_t *v28; // r10
  unsigned __int64 v29; // rdx
  wchar_t *v30; // rcx
  __int64 v31; // rax
  __int16 v32; // cx
  __int64 v33; // r12
  _UNICODE_STRING *v34; // r8
  wchar_t *v35; // rbx
  wchar_t *v36; // r15
  wchar_t *v37; // r14
  __int64 v38; // rdi
  bool v39; // zf
  unsigned __int16 v40; // di
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int16 v43; // r10
  unsigned __int16 v44; // r11
  wchar_t *v45; // r8
  __int16 v46; // r11
  unsigned __int64 v47; // rax
  unsigned __int64 i; // rdx
  unsigned __int16 v49; // r11
  unsigned __int64 v50; // rbx
  __int64 v51; // r10
  __int16 v52; // r9
  wchar_t *v53; // rdx
  unsigned __int64 v54; // rcx
  wchar_t *v55; // r8
  __int64 j; // r10
  unsigned __int16 *p_Length; // rdi
  unsigned __int64 v58; // rbx
  __int64 v59; // r10
  __int16 v60; // r9
  wchar_t *v61; // rdx
  unsigned __int64 v62; // rax
  wchar_t *v63; // r8
  __int64 k; // r10
  PVOID v65; // rdi
  HANDLE ContainingDirectory; // rax
  NTSTATUS v67; // ebx
  NTSTATUS v68; // eax
  NTSTATUS v70; // eax
  __int64 v71; // rax
  unsigned __int16 v72; // r9
  __int16 v73; // r10
  __int16 v74; // ax
  __int64 Length; // rdx
  unsigned __int64 v76; // rdx
  wchar_t v77; // r8
  wchar_t v78; // dx
  unsigned __int64 v79; // rax
  wchar_t *v80; // r8
  wchar_t *v81; // rcx
  __int16 v82; // ax
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  SIZE_T *v85; // [rsp+68h] [rbp-98h]
  PUNICODE_STRING NewName; // [rsp+70h] [rbp-90h] BYREF
  PUNICODE_STRING *StringUsed; // [rsp+78h] [rbp-88h]
  SIZE_T *v88; // [rsp+80h] [rbp-80h]
  PUNICODE_STRING v89; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v90; // [rsp+90h] [rbp-70h]
  PVOID BaseAddress[2]; // [rsp+98h] [rbp-68h] BYREF
  PUNICODE_STRING v92; // [rsp+A8h] [rbp-58h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v96[528]; // [rsp+130h] [rbp+30h] BYREF

  v11 = Flags;
  v90 = DefaultExtension;
  v85 = FilePartPrefixCch;
  v13 = 0LL;
  v88 = BytesRequired;
  v14 = 0;
  FileNamea.Buffer = (wchar_t *)v96;
  v92 = DynamicString;
  v89 = StaticString;
  StringUsed = (PUNICODE_STRING *)FullFileNameOut;
  *(_QWORD *)&FileNamea.Length = 34078720LL;
  if ( FullFileNameOut )
    *FullFileNameOut = 0LL;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || !Path || !FileName || StaticString && DynamicString && !FullFileNameOut )
    return -1073741811;
  v15 = (unsigned int)RtlDetermineDosPathNameType_Ustr(FileName);
  InputPathType = v15;
  if ( (v11 & 2) != 0 )
  {
    if ( v15 != RtlPathTypeRelative )
      goto LABEL_17;
    if ( FileName->Length >= 4u )
    {
      Buffer = FileName->Buffer;
      if ( *Buffer == 46 )
      {
        v77 = Buffer[1];
        if ( v77 == 92
          || v77 == 47
          || v77 == 46 && FileName->Length >= 6u && ((v78 = Buffer[2], v78 == 92) || v78 == 47) )
        {
          InputPathType = (int)v19;
LABEL_17:
          if ( RtlDoesFileExists_UstrEx((__m128i *)FileName, 1) )
          {
            FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                  FileName,
                                  v89,
                                  DynamicString,
                                  StringUsed,
                                  v85,
                                  0LL,
                                  &InputPathType,
                                  v88);
            if ( FullPathName_Ustr >= 0 )
              FullPathName_Ustr = 0;
            goto LABEL_79;
          }
          if ( DefaultExtension )
          {
            Length = DefaultExtension->Length;
            if ( (_WORD)Length )
            {
              if ( (v11 & 4) == 0 )
              {
                v79 = FileName->Length;
                if ( (_WORD)v79 )
                {
                  v80 = FileName->Buffer;
                  v81 = &v80[v79 >> 1];
                  while ( v81 > v80 )
                  {
                    v82 = *--v81;
                    if ( v82 == 92 || v82 == 47 )
                      break;
                    if ( v82 == 46 )
                    {
                      FullPathName_Ustr = -1073741809;
                      goto LABEL_79;
                    }
                  }
                }
              }
              v76 = FileName->Length + 2LL + Length;
              if ( v76 > 0xFFFE )
              {
                FullPathName_Ustr = -1073741562;
                goto LABEL_79;
              }
              if ( v76 > FileNamea.MaximumLength )
              {
                FileNamea.MaximumLength = v76;
                FileNamea.Buffer = (wchar_t *)RtlpAllocateAtom((unsigned __int16)v76);
                if ( !FileNamea.Buffer )
                {
LABEL_124:
                  FullPathName_Ustr = -1073741801;
                  goto LABEL_79;
                }
              }
              memmove(FileNamea.Buffer, FileName->Buffer, FileName->Length);
              memmove(
                &FileNamea.Buffer[(unsigned __int64)FileName->Length >> 1],
                DefaultExtension->Buffer,
                DefaultExtension->Length);
              FileNamea.Buffer[(FileName->Length + (unsigned __int64)DefaultExtension->Length) >> 1] = 0;
              FileNamea.Length = DefaultExtension->Length + FileName->Length;
              if ( RtlDoesFileExists_UstrEx((__m128i *)&FileNamea, 1) )
              {
                FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                                      &FileNamea,
                                      v89,
                                      DynamicString,
                                      StringUsed,
                                      v85,
                                      0LL,
                                      &InputPathType,
                                      v88);
                if ( FullPathName_Ustr >= 0 )
                  FullPathName_Ustr = 0;
                goto LABEL_79;
              }
            }
          }
          goto LABEL_111;
        }
        FileNameSize = v85;
      }
    }
  }
  if ( v15 != RtlPathTypeRelative )
    goto LABEL_17;
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  NewName = v19;
  v70 = RtlDosApplyFileIsolationRedirection_Ustr(
          1u,
          FileName,
          DefaultExtension,
          v18,
          DynamicString,
          &NewName,
          (PULONG)&v19->Length,
          FileNameSize,
          RequiredLength);
  FullPathName_Ustr = v70;
  if ( v70 >= 0 )
  {
    if ( StringUsed )
      *StringUsed = NewName;
    FullPathName_Ustr = 0;
    goto LABEL_79;
  }
  if ( v70 == -1072365560 )
  {
    v19 = 0LL;
LABEL_24:
    if ( DefaultExtension )
    {
      v22 = FileName->Length;
      v14 = DefaultExtension->Length;
      if ( (_WORD)v22 )
      {
        v23 = FileName->Buffer;
        v24 = &v23[v22 >> 1];
        while ( v24 > v23 )
        {
          v25 = *--v24;
          if ( v25 == 92 || v25 == 47 )
            break;
          if ( v25 == 46 )
          {
            v90 = v19;
            v14 = (unsigned __int16)v19;
            break;
          }
        }
      }
    }
    v26 = Path->Length;
    if ( (_WORD)v26 )
    {
      v27 = Path->Buffer;
      v28 = &v27[v26 >> 1];
      v29 = (unsigned __int64)v28;
      if ( v28 > v27 )
      {
        v30 = v28 - 1;
        do
        {
          if ( *v30 == 59 )
          {
            v71 = (__int64)((__int64)v28 - v29 + 2) >> 1;
            v72 = v71 - 1;
            if ( (_WORD)v71 != 1 )
            {
              v73 = *(v28 - 1);
              if ( v73 != 92 && v73 != 47 )
                v72 = v71;
            }
            v28 = v30;
            if ( v72 > v13 )
              v13 = v72;
          }
          v29 -= 2LL;
          --v30;
        }
        while ( v29 > (unsigned __int64)v27 );
      }
      v31 = (__int64)((__int64)v28 - v29) >> 1;
      if ( (_WORD)v31 )
      {
        v32 = *(v28 - 1);
        if ( v32 != 92 && v32 != 47 )
          LOWORD(v31) = v31 + 1;
      }
      if ( (unsigned __int16)v31 > v13 )
        v13 = (unsigned __int16)v31;
      v13 *= 2LL;
    }
    v33 = v14;
    v34 = (_UNICODE_STRING *)(v14 + (unsigned __int64)FileName->Length + v13 + 2);
    NewName = v34;
    if ( (unsigned __int64)v34 > 0xFFFE )
    {
      FullPathName_Ustr = -1073741562;
      goto LABEL_79;
    }
    v35 = Path->Buffer;
    v36 = &v35[(unsigned __int64)Path->Length >> 1];
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
        v74 = *(v37 - 1);
        if ( v74 != 92 && v74 != 47 )
          v40 += 2;
      }
      v42 = v33 + FileName->Length + v40;
      if ( FileNamea.MaximumLength < v42 + 2 )
      {
        if ( (_BYTE *)FileNamea.Buffer != v96 || v42 > 0xFFFC )
          goto LABEL_104;
        FileNamea.MaximumLength = (unsigned __int16)v34;
        FileNamea.Buffer = (wchar_t *)RtlpAllocateAtom((unsigned __int16)v34);
        if ( !FileNamea.Buffer )
          goto LABEL_124;
      }
      FileNamea.Length = 0;
      if ( (int)RtlUnicodeStringValidateWorker(&FileNamea) >= 0 )
      {
        v45 = FileNamea.Buffer;
        v46 = v43;
        v47 = v41 >> 1;
        for ( i = (unsigned __int64)FileNamea.MaximumLength >> 1; i; --i )
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
        FileNamea.Length = v44;
      }
      if ( v40 && (_WORD)v41 != v40 )
      {
        FileNamea.Buffer[(unsigned __int64)v44 >> 1] = 92;
        FileNamea.Length += 2;
      }
      if ( (int)RtlUnicodeStringValidateWorker(&FileNamea) >= 0 )
      {
        v50 = (unsigned __int64)v49 >> 1;
        if ( (int)RtlUnicodeStringValidateWorker(FileName) >= 0 )
        {
          v52 = 0;
          v53 = FileName->Buffer;
          v54 = (unsigned __int64)FileName->Length >> 1;
          v55 = &FileNamea.Buffer[v50];
          for ( j = v51 - v50; j; --j )
          {
            if ( !v54 )
              break;
            --v54;
            *v55++ = *v53++;
            ++v52;
          }
          v49 = 2 * (v52 + v50);
          FileNamea.Length = v49;
        }
      }
      p_Length = &v90->Length;
      if ( v90 )
      {
        if ( (int)RtlUnicodeStringValidateWorker(&FileNamea) >= 0 )
        {
          v58 = (unsigned __int64)v49 >> 1;
          if ( (int)RtlUnicodeStringValidateWorker(p_Length) >= 0 )
          {
            v60 = 0;
            v61 = (wchar_t *)*((_QWORD *)p_Length + 1);
            v62 = (unsigned __int64)*p_Length >> 1;
            v63 = &FileNamea.Buffer[v58];
            for ( k = v59 - v58; k; --k )
            {
              if ( !v62 )
                break;
              --v62;
              *v63++ = *v61++;
              ++v60;
            }
            v49 = 2 * (v60 + v58);
            FileNamea.Length = v49;
          }
        }
      }
      if ( (unsigned __int64)v49 + 2 > FileNamea.MaximumLength )
      {
LABEL_104:
        FullPathName_Ustr = -1073741595;
        goto LABEL_79;
      }
      *(_OWORD *)&ObjectAttributes.Length = 0LL;
      FileNamea.Buffer[(unsigned __int64)v49 >> 1] = 0;
      memset(&ObjectAttributes.ObjectName, 0, 28);
      *(_OWORD *)BaseAddress = 0LL;
      memset(&RelativeName, 0, sizeof(RelativeName));
      memset(&FileInformation, 0, sizeof(FileInformation));
      if ( (int)RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (__m128i *)&FileNamea,
                  0LL,
                  (unsigned __int16 *)BaseAddress,
                  0LL,
                  0LL,
                  (__int64)&RelativeName) >= 0 )
      {
        v65 = BaseAddress[1];
        if ( RelativeName.RelativeName.Length )
        {
          ContainingDirectory = RelativeName.ContainingDirectory;
          *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
        }
        else
        {
          ContainingDirectory = 0LL;
          RelativeName.ContainingDirectory = 0LL;
        }
        ObjectAttributes.RootDirectory = ContainingDirectory;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v67 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
        RtlReleaseRelativeName(&RelativeName);
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v65);
        if ( v67 >= 0 )
        {
          v68 = RtlGetFullPathName_UstrEx(&FileNamea, v89, v92, StringUsed, v85, 0LL, &InputPathType, v88);
          FullPathName_Ustr = 0;
          if ( v68 < 0 )
            FullPathName_Ustr = v68;
          goto LABEL_79;
        }
      }
      LOWORD(v34) = (_WORD)NewName;
      if ( v37 == v36 )
        v35 = v37;
      else
        v35 = v37 + 1;
    }
LABEL_111:
    FullPathName_Ustr = -1073741809;
  }
LABEL_79:
  if ( FileNamea.Buffer )
  {
    if ( (_BYTE *)FileNamea.Buffer != v96 )
      RtlpSysVolFree(FileNamea.Buffer);
  }
  return FullPathName_Ustr;
}
