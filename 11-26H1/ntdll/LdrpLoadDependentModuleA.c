/*
 * XREFs of LdrpLoadDependentModuleA @ 0x180025230
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleA(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  ULONG UTF8StringByteCount; // eax
  char *Buffer; // r9
  int v12; // edx
  unsigned __int16 v13; // cx
  unsigned int v14; // ebx
  unsigned int v15; // r8d
  char *v16; // rdi
  int v17; // ebx
  __int64 v20; // rcx
  char *Atom; // rax
  signed __int32 v22[6]; // [rsp+8h] [rbp-100h] BYREF
  int DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A8h]
  __int16 v28; // [rsp+68h] [rbp-A0h] BYREF
  char v29[254]; // [rsp+6Ah] [rbp-9Eh] BYREF

  v25 = a6;
  memset_thunk_772440563353939046(v29, 0, 0xFEuLL);
  v26 = 0x1000000LL;
  Src = &v28;
  UTF8StringByteCount = SourceString->Length;
  v28 = 0;
  DestinationString_8 = 0LL;
  if ( !(_WORD)UTF8StringByteCount )
  {
LABEL_9:
    v17 = LdrpLoadDependentModuleInternal(&v26, a2, a3, a4, a5, v25);
    if ( v17 >= 0 )
      goto LABEL_10;
    goto LABEL_25;
  }
  Buffer = SourceString->Buffer;
  DestinationString = 0;
  _InterlockedOr(v22, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, (PULONG)&DestinationString, Buffer, UTF8StringByteCount);
    v12 = DestinationString;
  }
  else
  {
    _InterlockedOr(v22, 0);
    v12 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v20 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C5020 + 2 * v20) )
        {
          if ( !UTF8StringByteCount )
          {
            v12 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v12 += 2;
      }
    }
    else
    {
      v12 = 2 * UTF8StringByteCount;
    }
  }
  v13 = v26;
  LOWORD(v14) = WORD1(v26);
  v15 = v12 + (unsigned __int16)v26 + 2;
  if ( v15 <= WORD1(v26) )
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
  if ( v15 <= 0xFFFE )
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
      v16 = (char *)NtdllpReallocateStringRoutine(v14, Src);
      if ( !v16 )
      {
LABEL_24:
        v17 = -1073741801;
LABEL_25:
        *a5 = 0LL;
        **(_DWORD **)(a2 + 40) = v17;
        goto LABEL_10;
      }
    }
    v13 = v26;
    goto LABEL_30;
  }
  *a5 = 0LL;
  v17 = -1073741562;
  **(_DWORD **)(a2 + 40) = -1073741562;
LABEL_10:
  if ( &v28 != Src )
    RtlpSysVolFree(Src);
  return (unsigned int)v17;
}
