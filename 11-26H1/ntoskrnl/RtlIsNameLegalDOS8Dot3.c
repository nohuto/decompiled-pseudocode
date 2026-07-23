/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x14097C630
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  PCUNICODE_STRING v3; // rdi
  unsigned int v4; // ebx
  struct _LIST_ENTRY *Flink; // r15
  char v8; // r12
  BOOLEAN v9; // r14
  bool v10; // bp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int Length; // ecx
  __int64 v13; // rdx
  char *v14; // r9
  int v15; // eax
  char *Buffer; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  char v20; // [rsp+30h] [rbp-58h] BYREF

  v3 = Name;
  v4 = 0;
  LOBYTE(Name) = 1;
  v19 = 0LL;
  Flink = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)RtlpIsUtf8Process(Name) )
  {
    _InterlockedOr(v18, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Flink = CurrentServerSiloGlobals[74].Flink;
    v10 = WORD2(CurrentServerSiloGlobals[69].Flink) != 0;
  }
  if ( v3->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    LODWORD(v19) = 786432;
    *((_QWORD *)&v19 + 1) = &v20;
    OemName = (POEM_STRING)&v19;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(OemName, v3, 0) < 0 )
    return 0;
  Length = OemName->Length;
  if ( Length == 1 )
  {
    if ( *OemName->Buffer == 46 )
    {
LABEL_42:
      if ( NameContainsSpaces )
        *NameContainsSpaces = 0;
      return 1;
    }
  }
  else if ( Length == 2 )
  {
    Buffer = OemName->Buffer;
    if ( *Buffer == 46 && Buffer[1] == 46 )
      goto LABEL_42;
  }
  LOBYTE(v13) = 0;
  while ( v4 < Length )
  {
    v14 = OemName->Buffer;
    v13 = (unsigned __int8)v14[v4];
    if ( v10 && *((_WORD *)&Flink->Flink + v13) )
    {
      if ( !v8 && v4 >= 7 || v4 == Length - 1 )
        return 0;
      v4 += 2;
    }
    else
    {
      if ( (unsigned __int8)v13 < 0x80u )
      {
        v15 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)(unsigned __int8)v14[v4] >> 5));
        if ( _bittest(&v15, v13 & 0x1F) )
          return 0;
      }
      if ( (_BYTE)v13 == 32 )
      {
        v9 = 1;
      }
      else if ( (_BYTE)v13 == 46 )
      {
        if ( v8 || !v4 || v14[v4 - 1] == 32 || Length - v4 - 1 > 3 )
          return 0;
        v8 = 1;
      }
      if ( v4 >= 8 && !v8 )
        return 0;
      ++v4;
    }
  }
  if ( (_BYTE)v13 == 32 || (_BYTE)v13 == 46 )
    return 0;
  if ( NameContainsSpaces )
    *NameContainsSpaces = v9;
  return 1;
}
