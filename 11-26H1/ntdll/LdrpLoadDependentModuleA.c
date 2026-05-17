/*
 * XREFs of LdrpLoadDependentModuleA @ 0x18003ACC0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleA(
        PCANSI_STRING SourceString,
        __int64 a2,
        int a3,
        int a4,
        _QWORD *a5,
        __int64 a6)
{
  int Length; // eax
  char *Buffer; // r9
  int v12; // edx
  unsigned __int16 v13; // cx
  unsigned int v14; // ebx
  __int64 v15; // r8
  char *v16; // rdi
  int DependentModuleInternal; // ebx
  __int64 v20; // rcx
  char *Atom; // rax
  signed __int32 v22[6]; // [rsp+8h] [rbp-100h] BYREF
  int DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A8h]
  __int16 v28; // [rsp+68h] [rbp-A0h] BYREF
  char v29[254]; // [rsp+6Ah] [rbp-9Eh] BYREF

  v25 = a6;
  memset_thunk_772440563353939046(v29, 0, 0xFEuLL);
  v26 = 0x1000000LL;
  Src = &v28;
  Length = SourceString->Length;
  v28 = 0;
  DestinationString_8 = 0LL;
  if ( !(_WORD)Length )
  {
LABEL_9:
    DependentModuleInternal = LdrpLoadDependentModuleInternal((unsigned int)&v26, a2, a3, a4, (__int64)a5, v25);
    if ( DependentModuleInternal >= 0 )
      goto LABEL_10;
    goto LABEL_25;
  }
  Buffer = SourceString->Buffer;
  DestinationString = 0;
  _InterlockedOr(v22, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&DestinationString, (_DWORD)Buffer, Length);
    v12 = DestinationString;
  }
  else
  {
    _InterlockedOr(v22, 0);
    v12 = 0;
    if ( word_1801C5F9C )
    {
      while ( Length-- )
      {
        v20 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C6020 + 2 * v20) )
        {
          if ( !Length )
          {
            v12 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v12 += 2;
      }
    }
    else
    {
      v12 = 2 * Length;
    }
  }
  v13 = v26;
  LOWORD(v14) = WORD1(v26);
  v15 = v12 + (unsigned int)(unsigned __int16)v26 + 2;
  if ( (unsigned int)v15 <= WORD1(v26) )
  {
    v16 = (char *)Src;
LABEL_8:
    DestinationString_8.Length = 0;
    DestinationString_8.Buffer = (wchar_t *)&v16[v13];
    DestinationString_8.MaximumLength = v14 - v13;
    RtlAnsiStringToUnicodeString(&DestinationString_8, SourceString, 0);
    LOWORD(v26) = DestinationString_8.Length + v26;
    goto LABEL_9;
  }
  if ( (unsigned int)v15 <= 0xFFFE )
  {
    v14 = (v15 + 63) & 0xFFFFFFC0;
    if ( v14 > 0xFFFE )
      v14 = 65534;
    if ( Src == &v28 )
    {
      Atom = (char *)RtlpAllocateAtom(v14);
      v16 = Atom;
      if ( !Atom )
        goto LABEL_24;
      v13 = v26;
      if ( !(_WORD)v26 )
      {
LABEL_30:
        Src = v16;
        WORD1(v26) = v14;
        goto LABEL_8;
      }
      memmove(Atom, Src, (unsigned __int16)v26);
    }
    else
    {
      v16 = (char *)NtdllpReallocateStringRoutine(v14, Src, v15, Buffer);
      if ( !v16 )
      {
LABEL_24:
        DependentModuleInternal = -1073741801;
LABEL_25:
        *a5 = 0LL;
        **(_DWORD **)(a2 + 40) = DependentModuleInternal;
        goto LABEL_10;
      }
    }
    v13 = v26;
    goto LABEL_30;
  }
  *a5 = 0LL;
  DependentModuleInternal = -1073741562;
  **(_DWORD **)(a2 + 40) = -1073741562;
LABEL_10:
  if ( &v28 != Src )
    RtlpSysVolFree((__int64)Src);
  return (unsigned int)DependentModuleInternal;
}
