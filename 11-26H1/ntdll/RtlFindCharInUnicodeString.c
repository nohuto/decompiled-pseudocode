/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180099860
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x180097C90 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  unsigned __int16 v4; // r13
  char v6; // bl
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  wchar_t *Buffer; // r11
  wchar_t *v13; // r14
  unsigned __int16 v14; // r15
  unsigned __int16 v15; // r10
  int v16; // r12d
  _BOOL8 v17; // rbp
  wchar_t v18; // ax
  int v19; // ebx
  USHORT v20; // r10
  int v22; // ebx
  __int64 v23; // r11
  int v24; // ebx
  wchar_t v25; // dx
  unsigned __int16 v26; // cx
  __int64 v27; // rax
  __int64 v28; // r13
  signed __int64 v29; // r14
  _WORD *v30; // rsi
  int v31; // ebx
  __int16 v32; // r8
  __int64 v33; // r11
  unsigned __int16 v34; // dx
  unsigned __int16 i; // cx
  __int16 v36; // [rsp+20h] [rbp-98h]
  unsigned __int16 v37; // [rsp+22h] [rbp-96h]
  _WORD v38[32]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v6 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !NonInclusivePrefixLength )
    return -1073741811;
  if ( StringToSearch )
  {
    Length = StringToSearch->Length;
    if ( (StringToSearch->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = StringToSearch->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || MaximumLength == 0xFFFF
      || Length > MaximumLength
      || !StringToSearch->Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  if ( CharSet )
  {
    v9 = CharSet->Length;
    if ( (CharSet->Length & 1) != 0 )
      return -1073741811;
    v10 = CharSet->MaximumLength;
    if ( (v10 & 1) != 0 || v10 == 0xFFFF || v9 > v10 || !CharSet->Buffer && (v9 || v10) )
      return -1073741811;
  }
  v11 = StringToSearch->Length;
  Buffer = StringToSearch->Buffer;
  v13 = CharSet->Buffer;
  v14 = CharSet->Length >> 1;
  v15 = StringToSearch->Length >> 1;
  v37 = StringToSearch->Length;
  v16 = v6 & 1;
  if ( (v6 & 1) != 0 )
    Buffer = &Buffer[v15 - 1];
  v17 = !(v6 & 1);
  if ( (v6 & 4) == 0 )
  {
    if ( v14 != 1 )
    {
      if ( v15 )
      {
        v24 = v6 & 2;
        while ( 1 )
        {
          v25 = *Buffer;
          v26 = 0;
          if ( v24 )
          {
            if ( v14 )
            {
              while ( v25 != v13[v26] )
              {
                if ( ++v26 >= v14 )
                  goto LABEL_81;
              }
            }
            else
            {
LABEL_81:
              if ( v26 == v14 )
                goto LABEL_36;
            }
          }
          else
          {
            if ( v14 )
            {
              while ( v25 != v13[v26] )
              {
                if ( ++v26 >= v14 )
                  goto LABEL_50;
              }
              goto LABEL_36;
            }
LABEL_50:
            if ( v26 != v14 )
              goto LABEL_36;
          }
          Buffer = &Buffer[2 * v17 - 1];
          if ( !--v15 )
            return -1073741275;
        }
      }
      return -1073741275;
    }
    v18 = *v13;
    v19 = v6 & 2;
    if ( !v15 )
      return -1073741275;
    if ( v19 )
    {
      while ( *Buffer == v18 )
      {
        Buffer = &Buffer[2 * v17 - 1];
        if ( !--v15 )
          return -1073741275;
      }
    }
    else
    {
      while ( *Buffer != v18 )
      {
        Buffer = &Buffer[2 * v17 - 1];
        if ( !--v15 )
          return -1073741275;
      }
    }
LABEL_24:
    v20 = 2 * v15 - 2;
    if ( !v16 )
      v20 = v11 - v20;
    *NonInclusivePrefixLength = v20;
    return 0;
  }
  if ( v14 > 0x20u )
  {
    if ( v15 )
    {
      v22 = v6 & 2;
      while ( 1 )
      {
        v36 = NLS_DOWNCASE(qword_1801C5040, *Buffer);
        if ( v22 )
        {
          while ( v36 != (unsigned __int16)NLS_DOWNCASE(qword_1801C5040, v13[v4]) )
          {
            if ( ++v4 >= v14 )
            {
              if ( v4 == v14 )
                goto LABEL_36;
              break;
            }
          }
        }
        else
        {
          do
          {
            if ( v36 == (unsigned __int16)NLS_DOWNCASE(qword_1801C5040, v13[v4]) )
              goto LABEL_36;
            ++v4;
          }
          while ( v4 < v14 );
          if ( v4 != v14 )
            goto LABEL_36;
        }
        v4 = 0;
        Buffer = (wchar_t *)(v23 + 4 * v17 - 2);
        if ( v15 == 1 )
          return -1073741275;
      }
    }
    return -1073741275;
  }
  v27 = qword_1801C5040;
  if ( v14 )
  {
    v28 = v14;
    v29 = (char *)v13 - (char *)v38;
    v30 = v38;
    do
    {
      *v30 = NLS_DOWNCASE(v27, *(unsigned __int16 *)((char *)v30 + v29));
      ++v30;
      v27 = qword_1801C5040;
      --v28;
    }
    while ( v28 );
  }
  if ( !v15 )
    return -1073741275;
  v31 = v6 & 2;
  while ( 1 )
  {
    v32 = NLS_DOWNCASE(v27, *Buffer);
    if ( v31 )
    {
      v34 = 0;
      if ( v14 )
      {
        while ( v32 != v38[v34] )
        {
          if ( ++v34 >= v14 )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        if ( v34 == v14 )
          break;
      }
      goto LABEL_68;
    }
    for ( i = 0; i < v14; ++i )
    {
      if ( v32 == v38[i] )
        goto LABEL_36;
    }
    if ( i != v14 )
      break;
LABEL_68:
    v27 = qword_1801C5040;
    Buffer = (wchar_t *)(v33 + 4 * v17 - 2);
    if ( v15 == 1 )
      return -1073741275;
  }
LABEL_36:
  if ( v15 )
  {
    v11 = v37;
    goto LABEL_24;
  }
  return -1073741275;
}
