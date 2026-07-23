/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800CFA78 (RtlpQueryEafPlusModuleList.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v6; // r12
  ULONG v8; // r15d
  __int64 v9; // rdi
  int inited; // esi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  __int32 v14; // r14d
  __int32 v15; // r14d
  __int32 v16; // r14d
  __int32 v17; // r14d
  int v18; // r14d
  int v19; // r14d
  unsigned __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r8
  char v24; // r8
  bool v25; // zf
  wchar_t *v26; // rcx
  size_t v27; // rax
  NTSTATUS v28; // eax
  __int32 v29; // r14d
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r8
  _OWORD *v37; // rbx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char v46; // cl
  int v47; // ecx
  bool v48; // zf
  int v50; // r14d
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rdx
  char v53; // r8
  __int32 v54; // r14d
  __int32 v55; // r14d
  __int32 v56; // r14d
  int v57; // r14d
  int v58; // r14d
  char v59; // r10
  __int64 v60; // r9
  __int64 v61; // r8
  unsigned __int64 v62; // r15
  char v63; // r8
  char v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  int v68; // ecx
  int v69; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v75; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v76; // [rsp+A0h] [rbp-60h]
  char KeyValueInformation[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  size_t Size_4; // [rsp+B4h] [rbp-4Ch] BYREF
  _BYTE v80[1024]; // [rsp+D0h] [rbp-30h] BYREF

  ResultLength = Flags & 4;
  v6 = 8LL;
  v76 = 0LL;
  DestinationString = 0LL;
  v8 = Flags & 8;
  v75 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, ImagePath);
  if ( inited < 0 )
    return inited;
  if ( ResultLength )
  {
    if ( DestinationString.Length )
      return -1073741811;
    if ( v8 )
      v11 = 0x2222222222222222LL;
    else
      v11 = 0x2222212222111211LL;
    v12 = *((_QWORD *)&v75 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v13 = 572661794LL;
  }
  else
  {
    KeyHandle = 0LL;
    v26 = (wchar_t *)L"MitigationOptions";
    ResultLength = 0;
    *(_QWORD *)&ValueName.Length = 0LL;
    if ( v8 )
      v26 = (wchar_t *)L"MitigationAuditOptions";
    ValueName.Buffer = v26;
    v27 = wcslen(v26);
    if ( v27 <= 0x7FFE )
    {
      ValueName.Length = 2 * v27;
      ValueName.MaximumLength = 2 * v27 + 2;
    }
    if ( DestinationString.Length )
    {
      v28 = RtlpOpenImageFileOptionsKeyEx(&DestinationString, 9LL, 0LL, &KeyHandle);
    }
    else
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801711E8;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v28 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    }
    inited = v28;
    if ( v28 < 0 )
      return inited;
    inited = NtQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x28u,
               &ResultLength);
    if ( inited >= 0 && Policy == ImagePayloadRestrictionPolicy )
      inited = RtlpQueryEafPlusModuleList(KeyHandle, v80);
    NtClose(KeyHandle);
    if ( inited < 0 )
      return inited;
    if ( Size > 0x18 )
      return -1073741788;
    memmove(&v75, &Size_4, Size);
    v11 = v75;
    v13 = v76;
    v12 = *((_QWORD *)&v75 + 1);
  }
  if ( Policy <= ImageFontDisablePolicy )
  {
    if ( Policy == ImageFontDisablePolicy )
    {
      if ( BufferSize != 8 )
        return -1073741811;
      LOBYTE(v11) = BYTE6(v11);
      goto LABEL_135;
    }
    if ( Policy == ImageDepPolicy )
    {
      if ( BufferSize != 8 )
        return -1073741811;
      v46 = v11;
      goto LABEL_112;
    }
    v29 = Policy - 1;
    if ( !v29 )
    {
      if ( BufferSize != 24 )
        return -1073741811;
      v30 = 0LL;
      *(_OWORD *)Buffer = 0LL;
      *((_QWORD *)Buffer + 2) = 0LL;
      v31 = 0LL;
      if ( (v11 & 0x300) == 0 )
      {
LABEL_48:
        if ( (v11 & 0x400) != 0 )
          *(_QWORD *)Buffer = v31 | 4;
        v32 = 0LL;
        if ( (v11 & 0x30000) != 0 )
        {
          if ( (BYTE2(v11) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v32 = 1LL;
          }
          else if ( (BYTE2(v11) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 1) &= ~1uLL;
            *((_QWORD *)Buffer + 1) |= 2uLL;
            v32 = *((_QWORD *)Buffer + 1);
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v11 & 0x40000) != 0 )
          *((_QWORD *)Buffer + 1) = v32 | 4;
        v24 = v11 >> 20;
        if ( (v24 & 3) == 0 )
          goto LABEL_28;
        if ( (v24 & 3) != 1 )
        {
          if ( (v24 & 3) == 2 )
          {
            *((_QWORD *)Buffer + 2) &= ~1uLL;
            *((_QWORD *)Buffer + 2) |= 2uLL;
          }
          goto LABEL_29;
        }
        goto LABEL_245;
      }
      if ( (BYTE1(v11) & 3) != 1 )
      {
        if ( (BYTE1(v11) & 3) == 2 )
        {
          *(_QWORD *)Buffer = 2LL;
          v31 = 2LL;
          goto LABEL_48;
        }
        if ( (BYTE1(v11) & 3) != 3 )
          goto LABEL_48;
        v30 = 8LL;
      }
      v31 = v30 | 1;
      *(_QWORD *)Buffer = v30 | 1;
      goto LABEL_48;
    }
    v54 = v29 - 1;
    if ( !v54 )
    {
      if ( BufferSize != 8 )
        return -1073741811;
      v11 >>= 36;
      goto LABEL_135;
    }
    v55 = v54 - 1;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( !v56 )
      {
        if ( BufferSize != 16 )
          return -1073741811;
        v64 = v11 >> 28;
        v65 = 0LL;
        *(_OWORD *)Buffer = 0LL;
        if ( (v64 & 3) != 0 )
        {
          if ( (v64 & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v65 = 1LL;
          }
          else if ( (v64 & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v65 = 2LL;
          }
        }
        if ( (v64 & 4) != 0 )
          *(_QWORD *)Buffer = v65 | 4;
        v63 = v13 >> 28;
        goto LABEL_185;
      }
      v57 = v56 - 2;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          if ( v58 != 1 || BufferSize != 16 )
            return -1073741811;
          v59 = v11 >> 44;
          v60 = 0LL;
          v61 = 0LL;
          *(_OWORD *)Buffer = 0LL;
          if ( (v59 & 3) == 0 )
            goto LABEL_181;
          if ( (v59 & 3) != 1 )
          {
            if ( (v59 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v61 = 2LL;
              goto LABEL_181;
            }
            if ( (v59 & 3) != 3 )
            {
LABEL_181:
              if ( (v59 & 4) != 0 )
                *(_QWORD *)Buffer = v61 | 4;
              v62 = v12 >> 4;
LABEL_184:
              v63 = v62;
LABEL_185:
              if ( (v63 & 3) != 0 )
              {
                if ( (v63 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v9 = 1LL;
                }
                else if ( (v63 & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 1) &= ~1uLL;
                  *((_QWORD *)Buffer + 1) |= 2uLL;
                  v9 = *((_QWORD *)Buffer + 1);
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v63 & 4) != 0 )
                *((_QWORD *)Buffer + 1) = v9 | 4;
              return inited;
            }
            v60 = 8LL;
          }
          v61 = v60 | 1;
          *(_QWORD *)Buffer = v60 | 1;
          goto LABEL_181;
        }
        if ( BufferSize != 16 )
          return -1073741811;
        v66 = 0LL;
        v67 = 0LL;
        *(_OWORD *)Buffer = 0LL;
        if ( (v11 & 0x30000000000LL) != 0 )
        {
          switch ( BYTE5(v11) & 3 )
          {
            case 1:
LABEL_218:
              v67 = v66 | 1;
              *(_QWORD *)Buffer = v66 | 1;
              break;
            case 2:
              *(_QWORD *)Buffer = 2LL;
              v67 = 2LL;
              break;
            case 3:
              v66 = 8LL;
              goto LABEL_218;
          }
        }
        if ( (v11 & 0x40000000000LL) != 0 )
          *(_QWORD *)Buffer = v67 | 4;
        v62 = v12 >> 8;
        goto LABEL_184;
      }
      if ( BufferSize != 8 )
        return -1073741811;
      LOBYTE(v11) = BYTE4(v11);
    }
    else
    {
      if ( BufferSize != 8 )
        return -1073741811;
      v11 >>= 24;
    }
LABEL_156:
    v53 = v11;
    *(_QWORD *)Buffer = 0LL;
    if ( (v11 & 3) != 0 )
    {
      if ( (v11 & 3) == 1 )
      {
        *(_QWORD *)Buffer = 1LL;
        v9 = 1LL;
        goto LABEL_136;
      }
      if ( (v11 & 3) == 2 )
        goto LABEL_159;
    }
    goto LABEL_136;
  }
  v14 = Policy - 10;
  if ( !v14 )
  {
    if ( BufferSize == 24 )
    {
      *(_OWORD *)Buffer = 0LL;
      *((_QWORD *)Buffer + 2) = 0LL;
      v33 = 0LL;
      if ( ((v11 >> 52) & 3) != 0 )
      {
        if ( ((v11 >> 52) & 3) == 1 )
        {
          *(_QWORD *)Buffer = 1LL;
          v33 = 1LL;
        }
        else if ( ((v11 >> 52) & 3) == 2 )
        {
          *(_QWORD *)Buffer = 2LL;
          v33 = 2LL;
        }
      }
      if ( ((v11 >> 52) & 4) != 0 )
        *(_QWORD *)Buffer = v33 | 4;
      v34 = 0LL;
      if ( (v11 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v11) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) = 1LL;
          v34 = 1LL;
        }
        else if ( (HIBYTE(v11) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 1) &= ~1uLL;
          *((_QWORD *)Buffer + 1) |= 2uLL;
          v34 = *((_QWORD *)Buffer + 1);
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) = 0LL;
      }
      if ( (v11 & 0x400000000000000LL) != 0 )
        *((_QWORD *)Buffer + 1) = v34 | 4;
      v52 = v11 >> 60;
      if ( (v52 & 3) != 0 )
      {
        if ( (v52 & 3) == 1 )
        {
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
        }
        else if ( (v52 & 3) == 2 )
        {
          *((_QWORD *)Buffer + 2) &= ~1uLL;
          *((_QWORD *)Buffer + 2) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      v25 = (v52 & 4) == 0;
      goto LABEL_30;
    }
    return -1073741811;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( BufferSize == 24 )
            {
              v20 = v12 >> 60;
              v21 = 0LL;
              v22 = 0LL;
              *(_OWORD *)Buffer = 0LL;
              *((_QWORD *)Buffer + 2) = 0LL;
              if ( (v20 & 3) != 0 )
              {
                if ( (v20 & 3) != 1 )
                {
                  if ( (v20 & 3) == 2 )
                  {
                    *(_QWORD *)Buffer = 2LL;
                    v22 = 2LL;
                    goto LABEL_19;
                  }
                  if ( (v20 & 3) != 3 )
                    goto LABEL_19;
                  v21 = 8LL;
                }
                v22 = v21 | 1;
                *(_QWORD *)Buffer = v21 | 1;
              }
LABEL_19:
              if ( (v20 & 4) != 0 )
                *(_QWORD *)Buffer = v22 | 4;
              v23 = 0LL;
              if ( (v13 & 3) != 0 )
              {
                if ( (v13 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v23 = 1LL;
                }
                else if ( (v13 & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 1) &= ~1uLL;
                  *((_QWORD *)Buffer + 1) |= 2uLL;
                  v23 = *((_QWORD *)Buffer + 1);
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v13 & 4) != 0 )
                *((_QWORD *)Buffer + 1) = v23 | 4;
              v24 = v13 >> 4;
              if ( (v24 & 3) == 0 )
              {
LABEL_28:
                *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
LABEL_29:
                v25 = (v24 & 4) == 0;
LABEL_30:
                if ( !v25 )
                  *((_QWORD *)Buffer + 2) |= 4uLL;
                return inited;
              }
              if ( (v24 & 3) != 1 )
              {
                if ( (v24 & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 2) &= ~1uLL;
                  *((_QWORD *)Buffer + 2) |= 2uLL;
                  goto LABEL_29;
                }
                if ( (v24 & 3) != 3 )
                  goto LABEL_29;
                *((_QWORD *)Buffer + 2) |= 8uLL;
              }
LABEL_245:
              *((_QWORD *)Buffer + 2) &= ~2uLL;
              *((_QWORD *)Buffer + 2) |= 1uLL;
              goto LABEL_29;
            }
            return -1073741811;
          }
          v50 = v19 - 1;
          if ( v50 )
          {
            if ( v50 != 1 || BufferSize != 8 )
              return -1073741811;
            v51 = v13 >> 12;
          }
          else
          {
            if ( BufferSize != 8 )
              return -1073741811;
            v51 = v13 >> 20;
          }
          LOBYTE(v11) = v51;
          *(_QWORD *)Buffer = 0LL;
          switch ( v51 & 3 )
          {
            case 0uLL:
              goto LABEL_113;
            case 1uLL:
              *(_QWORD *)Buffer = 1LL;
              v9 = 1LL;
              goto LABEL_113;
            case 2uLL:
              goto LABEL_124;
          }
          goto LABEL_113;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v11 >>= 12;
        goto LABEL_156;
      }
      if ( BufferSize != 8 )
        return -1073741811;
      v11 >>= 4;
LABEL_135:
      v53 = v11;
      *(_QWORD *)Buffer = 0LL;
      if ( (v11 & 3) == 0 )
        goto LABEL_136;
      if ( (v11 & 3) != 1 )
      {
        if ( (v11 & 3) == 2 )
        {
LABEL_159:
          *(_QWORD *)Buffer = 2LL;
          v9 = 2LL;
          goto LABEL_136;
        }
        if ( (v11 & 3) != 3 )
        {
LABEL_136:
          v48 = (v53 & 4) == 0;
LABEL_114:
          if ( !v48 )
            *(_QWORD *)Buffer = v9 | 4;
          return inited;
        }
        v9 = 8LL;
      }
      v9 |= 1uLL;
      *(_QWORD *)Buffer = v9;
      goto LABEL_136;
    }
    if ( BufferSize != 8 )
      return -1073741811;
    LOBYTE(v11) = v12 >> 36;
    v46 = v11;
LABEL_112:
    *(_QWORD *)Buffer = 0LL;
    v47 = v46 & 3;
    if ( v47 )
    {
      v68 = v47 - 1;
      if ( v68 )
      {
        v69 = v68 - 1;
        if ( !v69 )
        {
LABEL_124:
          *(_QWORD *)Buffer = 2LL;
          v9 = 2LL;
          goto LABEL_113;
        }
        if ( v69 != 1 )
          goto LABEL_113;
        v9 = 8LL;
      }
      v9 |= 1uLL;
      *(_QWORD *)Buffer = v9;
    }
LABEL_113:
    v48 = (v11 & 4) == 0;
    goto LABEL_114;
  }
  if ( BufferSize != 1072 )
    return -1073741811;
  memset_thunk_772440563353939046(Buffer, 0, 0x430uLL);
  v35 = 0LL;
  if ( (v12 & 0x30000) != 0 )
  {
    if ( (BYTE2(v12) & 3) == 1 )
    {
      *((_QWORD *)Buffer + 3) = 1LL;
      v35 = 1LL;
    }
    else if ( (BYTE2(v12) & 3) == 2 )
    {
      *((_QWORD *)Buffer + 3) = 2LL;
      v35 = 2LL;
    }
  }
  if ( (v12 & 0x40000) != 0 )
    *((_QWORD *)Buffer + 3) = v35 | 4;
  v36 = 0LL;
  if ( ((v12 >> 20) & 3) != 0 )
  {
    if ( ((v12 >> 20) & 3) == 1 )
    {
      *((_QWORD *)Buffer + 4) = 1LL;
      v36 = 1LL;
    }
    else if ( ((v12 >> 20) & 3) == 2 )
    {
      *((_QWORD *)Buffer + 4) &= ~1uLL;
      *((_QWORD *)Buffer + 4) |= 2uLL;
      v36 = *((_QWORD *)Buffer + 4);
    }
  }
  else
  {
    *((_QWORD *)Buffer + 4) = 0LL;
  }
  if ( ((v12 >> 20) & 4) != 0 )
    *((_QWORD *)Buffer + 4) = v36 | 4;
  if ( (v12 & 0x3000000) != 0 )
  {
    if ( (BYTE3(v12) & 3) == 1 )
    {
      *((_QWORD *)Buffer + 5) &= ~2uLL;
      *((_QWORD *)Buffer + 5) |= 1uLL;
    }
    else if ( (BYTE3(v12) & 3) == 2 )
    {
      *((_QWORD *)Buffer + 5) &= ~1uLL;
      *((_QWORD *)Buffer + 5) |= 2uLL;
    }
  }
  else
  {
    *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x4000000) != 0 )
    *((_QWORD *)Buffer + 5) |= 4uLL;
  if ( ((v12 >> 28) & 3) != 0 )
  {
    if ( ((v12 >> 28) & 3) == 1 )
    {
      *(_QWORD *)Buffer &= ~2uLL;
      *(_QWORD *)Buffer |= 1uLL;
    }
    else if ( ((v12 >> 28) & 3) == 2 )
    {
      *(_QWORD *)Buffer &= ~1uLL;
      *(_QWORD *)Buffer |= 2uLL;
    }
  }
  else
  {
    *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( ((v12 >> 28) & 4) != 0 )
    *(_QWORD *)Buffer |= 4uLL;
  if ( (v12 & 0x300000000LL) != 0 )
  {
    if ( (BYTE4(v12) & 3) == 1 )
    {
      *((_QWORD *)Buffer + 1) &= ~2uLL;
      *((_QWORD *)Buffer + 1) |= 1uLL;
    }
    else if ( (BYTE4(v12) & 3) == 2 )
    {
      *((_QWORD *)Buffer + 1) &= ~1uLL;
      *((_QWORD *)Buffer + 1) |= 2uLL;
    }
  }
  else
  {
    *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    *((_QWORD *)Buffer + 1) |= 4uLL;
  if ( (v12 & 0x30000000000LL) != 0 )
  {
    if ( (BYTE5(v12) & 3) == 1 )
    {
      *((_QWORD *)Buffer + 2) &= ~2uLL;
      *((_QWORD *)Buffer + 2) |= 1uLL;
    }
    else if ( (BYTE5(v12) & 3) == 2 )
    {
      *((_QWORD *)Buffer + 2) &= ~1uLL;
      *((_QWORD *)Buffer + 2) |= 2uLL;
    }
  }
  else
  {
    *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x40000000000LL) != 0 )
    *((_QWORD *)Buffer + 2) |= 4uLL;
  v37 = (char *)Buffer + 48;
  v38 = v80;
  do
  {
    v39 = v38[1];
    *v37 = *v38;
    v40 = v38[2];
    v37[1] = v39;
    v41 = v38[3];
    v37[2] = v40;
    v42 = v38[4];
    v37[3] = v41;
    v43 = v38[5];
    v37[4] = v42;
    v44 = v38[6];
    v37[5] = v43;
    v45 = v38[7];
    v38 += 8;
    v37[6] = v44;
    v37 += 8;
    *(v37 - 1) = v45;
    --v6;
  }
  while ( v6 );
  return inited;
}
