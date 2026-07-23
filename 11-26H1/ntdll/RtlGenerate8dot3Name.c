/*
 * XREFs of RtlGenerate8dot3Name @ 0x180100A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 *     GetNextWchar @ 0x180120A34 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180120CE4 (RtlComputeLfnChecksum.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  NTSTATUS v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int16 i; // ax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int NameLength; // esi
  WCHAR NextWchar; // cx
  unsigned int v18; // esi
  WCHAR v19; // cx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  ULONG v23; // r9d
  USHORT v24; // ax
  int v25; // r10d
  USHORT v26; // r11
  unsigned int v27; // esi
  char v28; // r13
  __int64 v29; // rax
  char v30; // cl
  __int16 v31; // r8
  _WORD *v32; // r15
  PUNICODE_STRING v33; // r12
  unsigned __int16 v34; // ax
  __int64 v35; // rcx
  unsigned __int16 v36; // cx
  ULONG ExtensionLength; // eax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // r8
  WCHAR *v41; // r9
  __int16 v42; // ax
  unsigned __int16 v43; // cx
  unsigned int v44; // r8d
  int v45; // eax
  USHORT v47; // ax
  USHORT v48; // r10
  __int16 v49; // dx
  __int64 v50; // rax
  WCHAR v51; // dx
  int v52; // eax
  signed __int32 v53[8]; // [rsp+0h] [rbp-60h] BYREF
  char v54; // [rsp+20h] [rbp-40h]
  unsigned int v55; // [rsp+24h] [rbp-3Ch] BYREF
  _BYTE *WideCharTable; // [rsp+28h] [rbp-38h]
  unsigned int v57; // [rsp+30h] [rbp-30h] BYREF
  PUNICODE_STRING v58; // [rsp+38h] [rbp-28h]
  _WORD v59[8]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v58 = Name8dot3;
  WideCharTable = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, 0);
    v8 = CodePageTable.DBCSCodePage != 0;
    WideCharTable = CodePageTable.WideCharTable;
  }
  if ( !AllowExtendedCharacters || (v54 = 1, !v8) )
    v54 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v55 = 0;
    v11 = -1;
    if ( !Name->Length || (LOBYTE(v9) = 1, *Name->Buffer != 46) )
      LOBYTE(v9) = 0;
    LOBYTE(v10) = AllowExtendedCharacters;
    for ( i = GetNextWchar(Name, &v55, v9, v10); i; i = GetNextWchar(Name, &v55, 0LL, v14) )
    {
      LOBYTE(v14) = AllowExtendedCharacters;
      if ( i == 46 )
        v11 = v55;
    }
    v15 = Name->Length >> 1;
    v55 = 0;
    Context->NameLength = 0;
    if ( v11 == v15 )
      v11 = -1;
    NameLength = 0;
    v57 = v11;
    while ( 1 )
    {
      LOBYTE(v14) = AllowExtendedCharacters;
      LOBYTE(v13) = 1;
      NextWchar = GetNextWchar(Name, &v55, v13, v14);
      if ( !NextWchar || v55 >= v11 || Context->NameLength >= 6u )
        break;
      if ( v54 )
      {
        if ( NextWchar <= 0x7Fu || (v52 = 2, !WideCharTable[2 * NextWchar + 1]) )
          v52 = 1;
        NameLength += v52;
        if ( NameLength > 6 )
          goto LABEL_15;
      }
      Context->NameBuffer[Context->NameLength++] = NextWchar;
    }
    if ( !v54 )
      NameLength = Context->NameLength;
LABEL_15:
    if ( NameLength <= 2 )
    {
      v47 = RtlComputeLfnChecksum(Name);
      Context->Checksum = v47;
      v48 = v47;
      LODWORD(v13) = 0;
      do
      {
        v49 = 48;
        if ( (v48 & 0xFu) > 9 )
          v49 = 55;
        v50 = (unsigned int)v13 + Context->NameLength;
        v51 = (v48 & 0xF) + v49;
        v48 >>= 4;
        v13 = (unsigned int)(v13 + 1);
        Context->NameBuffer[v50] = v51;
      }
      while ( (unsigned int)v13 < 4 );
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v11 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      v18 = 1;
      Context->ExtensionBuffer[0] = 46;
      LOBYTE(v13) = 1;
      Context->ExtensionLength = 1;
      LOBYTE(v14) = AllowExtendedCharacters;
      v19 = GetNextWchar(Name, &v57, v13, v14);
      if ( v19 )
      {
        while ( Context->ExtensionLength < 4 )
        {
          if ( !v54 )
            goto LABEL_84;
          if ( v19 <= 0x7Fu || (v22 = 2, !WideCharTable[2 * v19 + 1]) )
            v22 = 1;
          v18 += v22;
          if ( v18 <= 4 )
          {
LABEL_84:
            LOBYTE(v21) = AllowExtendedCharacters;
            LOBYTE(v20) = 1;
            Context->ExtensionBuffer[Context->ExtensionLength++] = v19;
            v19 = GetNextWchar(Name, &v57, v20, v21);
            if ( v19 )
              continue;
          }
          if ( !v19 )
            goto LABEL_26;
          break;
        }
        Context->ExtensionBuffer[Context->ExtensionLength - 1] = 126;
      }
    }
  }
LABEL_26:
  v23 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v23;
  if ( v23 > 4 && !Context->CheckSumInserted )
  {
    v24 = RtlComputeLfnChecksum(Name);
    Context->Checksum = v24;
    v26 = v24;
    if ( 2 - v25 < (unsigned int)(6 - v25) )
    {
      v40 = 4LL;
      v41 = &Context->NameBuffer[2 - v25];
      do
      {
        v42 = 48;
        v43 = v26 & 0xF;
        if ( v43 > 9u )
          v42 = 55;
        v26 >>= 4;
        *v41++ = v43 + v42;
        --v40;
      }
      while ( v40 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v25;
    v23 = 1;
    Context->CheckSumInserted = 1;
  }
  v27 = 1;
  v28 = 1;
  do
  {
    if ( !v23 )
      break;
    v29 = 8 - v27++;
    v30 = 0;
    v31 = v23 % 0xA + 48;
    v23 /= 0xAu;
    v59[v29] = v31;
    if ( v31 == 57 )
      v30 = v28;
    v28 = v30;
  }
  while ( v27 <= 7 );
  v32 = &v59[8 - v27];
  *v32 = 126;
  if ( Context->NameLength && Context->NameLength <= 0xCu )
  {
    v33 = v58;
    memmove(v58->Buffer, Context->NameBuffer, 2LL * Context->NameLength);
    v35 = Context->NameLength;
    v34 = 2 * Context->NameLength;
  }
  else
  {
    v33 = v58;
    v34 = 0;
    v35 = 0LL;
  }
  v33->Length = v34;
  memmove(&v33->Buffer[v35], v32, 2 * v27);
  v36 = v33->Length + 2 * v27;
  v33->Length = v36;
  ExtensionLength = Context->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v33->Buffer[(unsigned __int64)v36 >> 1], Context->ExtensionBuffer, 2 * ExtensionLength);
    v33->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v28 )
    return 0;
  v38 = Context->NameLength;
  if ( v54 )
  {
    v39 = 0;
    v44 = 0;
    if ( (_BYTE)v38 )
    {
      do
      {
        if ( Context->NameBuffer[v39] <= 0x7Fu || (v45 = 2, !WideCharTable[2 * Context->NameBuffer[v39] + 1]) )
          v45 = 1;
        v44 += v45;
        if ( v44 > 7 - v27 )
          break;
        ++v39;
      }
      while ( v39 < v38 );
    }
  }
  else
  {
    LOBYTE(v39) = v38 - 1;
  }
  Context->NameLength = v39;
  if ( !(_BYTE)v39 )
    return -1073740761;
  return v4;
}
