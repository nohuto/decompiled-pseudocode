/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1800344C0
 * Callers:
 *     LdrpGetModuleName @ 0x180033E20 (LdrpGetModuleName.c)
 *     GetModuleFullPathName @ 0x1800353CC (GetModuleFullPathName.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180034960 (RtlUnicodeToUTF8N.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  BOOLEAN v3; // r15
  PCUNICODE_STRING v4; // rsi
  char v6; // r12
  NTSTATUS v7; // ebx
  unsigned int v8; // r10d
  unsigned int Length; // eax
  wchar_t *Buffer; // r9
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int MaximumLength; // edx
  unsigned int v14; // ecx
  wchar_t *v15; // r9
  char *v16; // r11
  __int16 v17; // r8
  __int16 v18; // ax
  __int64 v19; // rdi
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // r15d
  char *v24; // rsi
  __int16 v25; // dx
  unsigned int v26; // eax
  char *Atom; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-68h]
  unsigned int v31; // [rsp+38h] [rbp-60h]
  unsigned int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h]
  int v34; // [rsp+48h] [rbp-50h]
  char *v35; // [rsp+50h] [rbp-48h]
  unsigned __int16 *v36; // [rsp+58h] [rbp-40h]
  unsigned int v37; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v38; // [rsp+B0h] [rbp+18h]
  unsigned int v39; // [rsp+B8h] [rbp+20h] BYREF

  v38 = AllocateDestinationString;
  v3 = AllocateDestinationString;
  v4 = SourceString;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v37 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v29, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( Length )
    {
      RtlUnicodeToUTF8N(0, 0, (unsigned int)&v37, (_DWORD)Buffer, Length);
      v8 = v37;
    }
  }
  else
  {
    _InterlockedOr(v29, 0);
    *(_QWORD *)&AllocateDestinationString = qword_1801C5FB8;
    v11 = Length >> 1;
    if ( word_1801C5F9C )
    {
      for ( ; v11; --v11 )
      {
        SourceString = (PCUNICODE_STRING)*(unsigned __int16 *)(qword_1801C5FB8 + 2LL * *Buffer++);
        LOWORD(SourceString) = (unsigned __int16)SourceString >> 8;
        v8 += ((_BYTE)SourceString != 0) + 1;
      }
    }
    else
    {
      v8 = v11;
    }
  }
  v12 = v8 + 1;
  v39 = v8 + 1;
  if ( v8 + 1 > 0xFFFF )
    return -1073741584;
  if ( v3 )
  {
    Atom = (char *)RtlpAllocateAtom(v12, SourceString, AllocateDestinationString, Buffer);
    DestinationString->Buffer = Atom;
    if ( !Atom )
      return -1073741801;
    DestinationString->MaximumLength = v12;
    LOWORD(MaximumLength) = v12;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v12 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v33 = 0;
  v14 = v4->Length;
  v15 = v4->Buffer;
  v16 = DestinationString->Buffer;
  _InterlockedOr(v29, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v17 = Utf8TableInfo;
    v18 = WORD6(Utf8TableInfo);
    v19 = *((_QWORD *)&xmmword_1801C6070 + 1);
  }
  else
  {
    _InterlockedOr(v29, 0);
    v17 = GlobalRtlNlsState;
    v18 = word_1801C5F9C;
    v19 = qword_1801C5FB8;
  }
  v36 = v15;
  v20 = (unsigned __int16)MaximumLength - 1;
  v31 = v20;
  v35 = v16;
  v30 = 0;
  v32 = 0;
  if ( v17 == -535 )
  {
    v34 = 0;
    if ( !v14 )
    {
      v20 = 0;
      v39 = 0;
      goto LABEL_31;
    }
    RtlUnicodeToUTF8N((_DWORD)v16, v20, (unsigned int)&v39, (_DWORD)v15, v14);
  }
  else
  {
    v21 = v14 >> 1;
    v32 = v21;
    if ( !v18 )
    {
      if ( v21 < v20 )
        v20 = v21;
      v39 = v20;
      v22 = 0;
      v30 = 0;
      while ( v22 < v20 )
      {
        v16[v22] = *(_BYTE *)(v15[v22] + v19);
        v30 = ++v22;
      }
      goto LABEL_31;
    }
    LOWORD(v37) = 0;
    v23 = (int)v16;
    while ( 1 )
    {
      v24 = v16;
      if ( !v21 || !v20 )
        break;
      v25 = *(_WORD *)(v19 + 2LL * *v15);
      LOWORD(v37) = v25;
      v36 = ++v15;
      if ( HIBYTE(v25) )
      {
        v26 = v20--;
        v31 = v20;
        if ( v26 < 2 )
          break;
        *v16++ = HIBYTE(v25);
        v35 = v16;
        v24 = v16;
      }
      *v16 = v25;
      v16 = v24 + 1;
      v35 = v24 + 1;
      v31 = --v20;
      v32 = --v21;
    }
    v39 = (_DWORD)v16 - v23;
  }
  v20 = v39;
LABEL_31:
  v33 = 0;
  DestinationString->Buffer[v20] = 0;
  DestinationString->Length = v20;
  if ( v6 )
    return -2147483643;
  return v7;
}
