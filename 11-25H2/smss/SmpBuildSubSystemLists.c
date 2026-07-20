/*
 * XREFs of SmpBuildSubSystemLists @ 0x1400136A0
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpFindRegistryValueEx @ 0x1400095D4 (SmpFindRegistryValueEx.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000D068 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 __fastcall SmpBuildSubSystemLists(
        const wchar_t *a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // r12d
  const UNICODE_STRING *RegistryValue; // rax
  struct _UNICODE_STRING *v9; // rbx
  __int64 v10; // rax
  _QWORD *Buffer; // rcx
  __int64 Length; // rbp
  struct _UNICODE_STRING **v13; // rax
  struct _UNICODE_STRING **v14; // rax
  const WCHAR *v15; // rcx
  WCHAR v16; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  String2 = 0LL;
  v7 = _wcsicmp(a1, L"Required");
  if ( *a3 )
  {
    do
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, a3);
      RegistryValue = SmpFindRegistryValueEx((const UNICODE_STRING **)(a6 + 8), &DestinationString);
      v9 = (struct _UNICODE_STRING *)RegistryValue;
      if ( RegistryValue )
      {
        v10 = *(_QWORD *)&RegistryValue->Length;
        if ( *(struct _UNICODE_STRING **)(v10 + 8) != v9
          || (Buffer = v9->Buffer, (struct _UNICODE_STRING *)*Buffer != v9) )
        {
LABEL_18:
          __fastfail(3u);
        }
        *Buffer = v10;
        *(_QWORD *)(v10 + 8) = Buffer;
        Length = v9[1].Length;
        if ( !v9[2].Length || (RtlInitUnicodeString(&String2, L"Posix"), RtlEqualUnicodeString(v9 + 1, &String2, 0)) )
        {
          SmpDeallocSavedRegistryEntry(v9);
        }
        else if ( v7 )
        {
          v14 = (struct _UNICODE_STRING **)qword_140032AC8;
          if ( *(__int64 **)qword_140032AC8 != &SmpSubSystemsToDefer )
            goto LABEL_18;
          *(_QWORD *)&v9->Length = &SmpSubSystemsToDefer;
          v9->Buffer = (PWSTR)v14;
          *v14 = v9;
          qword_140032AC8 = (__int64)v9;
        }
        else
        {
          v13 = (struct _UNICODE_STRING **)qword_140032AB8;
          if ( *(__int64 **)qword_140032AB8 != &SmpSubSystemsRequired )
            goto LABEL_18;
          *(_QWORD *)&v9->Length = &SmpSubSystemsRequired;
          v9->Buffer = (PWSTR)v13;
          *v13 = v9;
          qword_140032AB8 = (__int64)v9;
          *(_DWORD *)a6 += 2;
          *(_DWORD *)(a6 + 4) += v9[2].Length + v9[1].Length + 4;
        }
        v15 = (const WCHAR *)((char *)a3 + Length);
      }
      else
      {
        SmpLogFailureString((__int64)"SmpBuildSubSystemLists", 0x22B2u, (__int64)a3, 0);
        do
        {
          v16 = *a3;
          v15 = a3++;
        }
        while ( v16 );
      }
      a3 = v15 + 1;
    }
    while ( v15[1] );
  }
  return 0LL;
}
