/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930
 * Callers:
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125298 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  ULONG UTF8StringByteCount; // eax
  const CHAR *Buffer; // r9
  ULONG v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdx
  PVOID Atom; // rbp
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  UTF8StringByteCount = a2->Length;
  DestinationString = 0LL;
  if ( !(_WORD)UTF8StringByteCount )
    return 0LL;
  Buffer = a2->Buffer;
  UnicodeStringActualByteCount = 0;
  _InterlockedOr(v15, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    v6 = UnicodeStringActualByteCount;
  }
  else
  {
    _InterlockedOr(v15, 0);
    v6 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v12 = *(unsigned __int8 *)Buffer++;
        if ( *(_WORD *)(qword_1801C5020 + 2 * v12) )
        {
          if ( !UTF8StringByteCount )
          {
            v6 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * UTF8StringByteCount;
    }
  }
  v7 = *a1;
  v8 = a1[1];
  v9 = v6 + v7 + 2;
  if ( v9 > v8 )
  {
    if ( v9 > 0xFFFE )
      return 3221225734LL;
    v13 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v8 = (v9 + 63) & 0xFFFFFFC0;
    if ( v8 > 0xFFFE )
      v8 = 65534;
    if ( v13 == a1 + 8 )
    {
      Atom = RtlpAllocateAtom(v8);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (PVOID)NtdllpReallocateStringRoutine(v8, v13);
      if ( !Atom )
        return 3221225495LL;
    }
    LOWORD(v7) = *a1;
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v8;
  }
  DestinationString.Length = 0;
  DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v7);
  DestinationString.MaximumLength = v8 - v7;
  RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
  result = 0LL;
  *a1 += DestinationString.Length;
  return result;
}
