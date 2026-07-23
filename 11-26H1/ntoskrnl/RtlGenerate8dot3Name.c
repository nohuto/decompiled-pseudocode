/*
 * XREFs of RtlGenerate8dot3Name @ 0x14097B570
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlIsValidOemCharacter @ 0x14097E350 (RtlIsValidOemCharacter.c)
 *     RtlComputeLfnChecksum @ 0x140AC0654 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  char v4; // r14
  PCUNICODE_STRING v5; // r15
  NTSTATUS v6; // ebx
  PGENERATE_NAME_CONTEXT v7; // rdi
  bool v9; // si
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v11; // r14
  unsigned int v12; // ebp
  char v13; // si
  WCHAR v14; // dx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  unsigned int NameLength; // ebp
  WCHAR v19; // dx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // r13
  unsigned int v24; // r9d
  unsigned int v25; // esi
  __int64 v26; // rax
  char v27; // cl
  __int16 v28; // r8
  unsigned int v29; // eax
  _WORD *v30; // r14
  PUNICODE_STRING v31; // r15
  __int64 v32; // rcx
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // cx
  ULONG v35; // eax
  int v37; // eax
  unsigned int v38; // esi
  WCHAR v39; // dx
  int v40; // eax
  __int64 ExtensionLength; // rcx
  int v42; // eax
  USHORT v43; // ax
  int v44; // r10d
  USHORT v45; // r11
  __int64 v46; // r8
  WCHAR *v47; // r9
  __int16 v48; // ax
  unsigned __int16 v49; // cx
  USHORT v50; // ax
  USHORT v51; // r10
  unsigned int i; // r8d
  __int16 v53; // dx
  __int64 v54; // rax
  WCHAR v55; // dx
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int v58; // r8d
  __int64 v59; // r9
  int v60; // eax
  signed __int32 v61[8]; // [rsp+0h] [rbp-88h] BYREF
  char v62; // [rsp+20h] [rbp-68h]
  char v63; // [rsp+21h] [rbp-67h]
  WCHAR Char[2]; // [rsp+24h] [rbp-64h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+28h] [rbp-60h]
  PUNICODE_STRING v66; // [rsp+30h] [rbp-58h]
  _QWORD v67[2]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 1;
  v66 = Name8dot3;
  v5 = Name;
  v67[0] = Context;
  v6 = 0;
  v63 = 1;
  LOBYTE(Name) = 1;
  Flink = 0LL;
  v7 = Context;
  v9 = 0;
  if ( !(unsigned __int8)RtlpIsUtf8Process(Name) )
  {
    _InterlockedOr(v61, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v9 = WORD2(CurrentServerSiloGlobals[69].Flink) != 0;
    Flink = CurrentServerSiloGlobals[71].Flink;
  }
  if ( !AllowExtendedCharacters || (v62 = 1, !v9) )
    v62 = 0;
  if ( v7->NameLength )
    goto LABEL_46;
  v11 = 0xFFFFFFFFLL;
  v12 = 0;
  if ( !v5->Length || (v13 = 1, *v5->Buffer != 46) )
    v13 = 0;
  while ( 2 )
  {
    v14 = 0;
    while ( v12 < v5->Length >> 1 )
    {
      v15 = v12++;
      v14 = v5->Buffer[v15];
      Char[0] = v14;
      if ( v14 <= 0x20u )
        goto LABEL_65;
      if ( v14 >= 0x7Fu )
      {
        if ( !AllowExtendedCharacters || !RtlIsValidOemCharacter(Char) )
          goto LABEL_65;
        v14 = Char[0];
      }
      if ( v14 != 46 )
      {
        if ( v14 < 0x80u )
        {
LABEL_14:
          v16 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v14 >> 5));
          if ( _bittest(&v16, v14 & 0x1F) )
            v14 = 95;
        }
        if ( (unsigned __int16)(v14 - 97) <= 0x19u )
          v14 -= 32;
        break;
      }
      if ( !v13 )
        goto LABEL_14;
LABEL_65:
      v14 = 0;
    }
    if ( v14 )
    {
      v13 = 0;
      if ( v14 == 46 )
        v11 = v12;
      continue;
    }
    break;
  }
  v17 = 0;
  v7 = (PGENERATE_NAME_CONTEXT)v67[0];
  NameLength = 0;
  if ( (_DWORD)v11 == v5->Length >> 1 )
    v11 = 0xFFFFFFFFLL;
  *(_BYTE *)(v67[0] + 3LL) = 0;
  while ( 2 )
  {
    v19 = 0;
    while ( 2 )
    {
      if ( v17 < v5->Length >> 1 )
      {
        v20 = v17++;
        v19 = v5->Buffer[v20];
        Char[0] = v19;
        if ( v19 > 0x20u )
        {
          if ( v19 >= 0x7Fu )
          {
            if ( AllowExtendedCharacters && RtlIsValidOemCharacter(Char) )
            {
              v19 = Char[0];
              goto LABEL_28;
            }
          }
          else
          {
LABEL_28:
            if ( v19 != 46 )
            {
              if ( v19 < 0x80u )
              {
                v21 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v19 >> 5));
                if ( _bittest(&v21, v19 & 0x1F) )
                  v19 = 95;
              }
              if ( (unsigned __int16)(v19 - 97) <= 0x19u )
                v19 -= 32;
              break;
            }
          }
        }
        v19 = 0;
        continue;
      }
      break;
    }
    if ( v19 && v17 < (unsigned int)v11 && (v22 = v7->NameLength, (unsigned __int8)v22 < 6u) )
    {
      if ( !v62 )
        goto LABEL_38;
      if ( v19 <= 0x7Fu || (v37 = 2, !*((_BYTE *)&Flink->Flink + 2 * v19 + 1)) )
        v37 = 1;
      NameLength += v37;
      if ( NameLength <= 6 )
      {
LABEL_38:
        v7->NameBuffer[v22] = v19;
        ++v7->NameLength;
        continue;
      }
    }
    else if ( !v62 )
    {
      NameLength = v7->NameLength;
    }
    break;
  }
  if ( NameLength <= 2 )
  {
    v50 = RtlComputeLfnChecksum(v5);
    v7->Checksum = v50;
    v51 = v50;
    for ( i = 0; i < 4; ++i )
    {
      v53 = 48;
      if ( (v51 & 0xFu) > 9 )
        v53 = 55;
      v54 = i + v7->NameLength;
      v55 = (v51 & 0xF) + v53;
      v51 >>= 4;
      v7->NameBuffer[v54] = v55;
    }
    v7->NameLength += 4;
    v7->CheckSumInserted = 1;
  }
  if ( (_DWORD)v11 == -1 )
  {
    v7->ExtensionLength = 0;
LABEL_45:
    v4 = v63;
    goto LABEL_46;
  }
  v38 = 1;
  v7->ExtensionBuffer[0] = 46;
  v7->ExtensionLength = 1;
  while ( 2 )
  {
    v39 = 0;
    while ( 2 )
    {
      if ( (unsigned int)v11 < v5->Length >> 1 )
      {
        v39 = v5->Buffer[v11];
        v11 = (unsigned int)(v11 + 1);
        Char[0] = v39;
        if ( v39 > 0x20u )
        {
          if ( v39 >= 0x7Fu )
          {
            if ( AllowExtendedCharacters && RtlIsValidOemCharacter(Char) )
            {
              v39 = Char[0];
              goto LABEL_71;
            }
          }
          else
          {
LABEL_71:
            if ( v39 != 46 )
            {
              if ( v39 < 0x80u )
              {
                v40 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v39 >> 5));
                if ( _bittest(&v40, v39 & 0x1F) )
                  v39 = 95;
              }
              if ( (unsigned __int16)(v39 - 97) <= 0x19u )
                v39 -= 32;
              break;
            }
          }
        }
        v39 = 0;
        continue;
      }
      break;
    }
    if ( !v39 )
      goto LABEL_45;
    ExtensionLength = v7->ExtensionLength;
    if ( (unsigned int)ExtensionLength < 4 )
    {
      if ( !v62 )
        goto LABEL_80;
      if ( v39 <= 0x7Fu || (v42 = 2, !*((_BYTE *)&Flink->Flink + 2 * v39 + 1)) )
        v42 = 1;
      v38 += v42;
      if ( v38 <= 4 )
      {
LABEL_80:
        v7->ExtensionBuffer[ExtensionLength] = v39;
        ++v7->ExtensionLength;
        continue;
      }
    }
    break;
  }
  v4 = v63;
  if ( BYTE2(NlsMbCodePageTag) )
    v7->ExtensionBuffer[(unsigned int)(ExtensionLength - 1)] = 126;
LABEL_46:
  v23 = v62;
  v24 = v7->LastIndexValue + 1;
  v7->LastIndexValue = v24;
  if ( v24 > 4 && !v7->CheckSumInserted )
  {
    v43 = RtlComputeLfnChecksum(v5);
    v7->Checksum = v43;
    v45 = v43;
    if ( 2 - v44 < (unsigned int)(6 - v44) )
    {
      v46 = 4LL;
      v47 = &v7->NameBuffer[2 - v44];
      do
      {
        v48 = 48;
        v49 = v45 & 0xF;
        if ( v49 > 9u )
          v48 = 55;
        v45 >>= 4;
        *v47++ = v49 + v48;
        --v46;
      }
      while ( v46 );
    }
    v7->LastIndexValue = 1;
    v7->NameLength = 6 - v44;
    v24 = 1;
    v7->CheckSumInserted = 1;
  }
  v25 = 1;
  do
  {
    if ( !v24 )
      break;
    v26 = 8 - v25++;
    v27 = 0;
    v28 = v24 % 0xA + 48;
    v24 /= 0xAu;
    *((_WORD *)v67 + v26) = v28;
    if ( v28 == 57 )
      v27 = v4;
    v4 = v27;
  }
  while ( v25 <= 7 );
  v29 = v7->NameLength;
  v63 = v4;
  v30 = (_WORD *)v67 + 8 - v25;
  *v30 = 126;
  if ( (_BYTE)v29 && (unsigned __int8)v29 <= 0xCu )
  {
    v31 = v66;
    memmove(v66->Buffer, v7->NameBuffer, 2LL * v29);
    v32 = v7->NameLength;
    v33 = 2 * v7->NameLength;
  }
  else
  {
    v31 = v66;
    v33 = 0;
    v32 = 0LL;
  }
  v31->Length = v33;
  memmove(&v31->Buffer[v32], v30, 2 * v25);
  v34 = v31->Length + 2 * v25;
  v31->Length = v34;
  v35 = v7->ExtensionLength;
  if ( v35 )
  {
    memmove(&v31->Buffer[(unsigned __int64)v34 >> 1], v7->ExtensionBuffer, 2 * v35);
    v31->Length += 2 * LOWORD(v7->ExtensionLength);
  }
  if ( !v63 )
    return 0;
  v56 = v7->NameLength;
  if ( v23 )
  {
    v57 = 0;
    v58 = 0;
    if ( (_BYTE)v56 )
    {
      do
      {
        v59 = v7->NameBuffer[v57];
        if ( (unsigned int)v59 <= 0x7F || (v60 = 2, !*((_BYTE *)&Flink->Flink + 2 * v59 + 1)) )
          v60 = 1;
        v58 += v60;
        if ( v58 > 7 - v25 )
          break;
        ++v57;
      }
      while ( v57 < v56 );
    }
  }
  else
  {
    LOBYTE(v57) = v56 - 1;
  }
  v7->NameLength = v57;
  if ( !(_BYTE)v57 )
    return -1073740761;
  return v6;
}
