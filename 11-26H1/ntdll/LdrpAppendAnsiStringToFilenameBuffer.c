/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0
 * Callers:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125528 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x18015DEAC (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, STRING *a2, __int64 a3)
{
  int Length; // eax
  char *Buffer; // r9
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdx
  void *Atom; // rbp
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  Length = a2->Length;
  DestinationString = 0LL;
  if ( !(_WORD)Length )
    return 0LL;
  Buffer = a2->Buffer;
  v18 = 0;
  _InterlockedOr(v16, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v18, (_DWORD)Buffer, Length);
    v7 = v18;
  }
  else
  {
    _InterlockedOr(v16, 0);
    v7 = 0;
    if ( word_1801C5F9C )
    {
      a3 = qword_1801C6020;
      while ( Length-- )
      {
        v13 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C6020 + 2 * v13) )
        {
          if ( !Length )
          {
            v7 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v7 += 2;
      }
    }
    else
    {
      v7 = 2 * Length;
    }
  }
  v8 = *a1;
  v9 = a1[1];
  v10 = v7 + v8 + 2;
  if ( v10 > v9 )
  {
    if ( v10 > 0xFFFE )
      return 3221225734LL;
    v14 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v9 = (v10 + 63) & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( v14 == a1 + 8 )
    {
      Atom = (void *)RtlpAllocateAtom(v9);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (void *)NtdllpReallocateStringRoutine(v9, v14, a3, Buffer);
      if ( !Atom )
        return 3221225495LL;
    }
    LOWORD(v8) = *a1;
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v9;
  }
  DestinationString.Length = 0;
  DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v8);
  DestinationString.MaximumLength = v9 - v8;
  RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
  result = 0LL;
  *a1 += DestinationString.Length;
  return result;
}
