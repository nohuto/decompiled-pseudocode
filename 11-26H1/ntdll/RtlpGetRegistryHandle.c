/*
 * XREFs of RtlpGetRegistryHandle @ 0x18005A6B8
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180059934 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x180059AD0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800FC8F8 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlCheckPortableOperatingSystem @ 0x1801010E0 (RtlCheckPortableOperatingSystem.c)
 *     RtlWriteRegistryValue @ 0x1801069C0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18010FAF0 (RtlDeleteRegistryValue.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180123C1C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlCreateRegistryKey @ 0x180141CC0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18015F2E0 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const wchar_t *a2, char a3, const wchar_t **a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  int appended; // ebx
  int v10; // eax
  _DWORD v11[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 Atom; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  __int128 v14; // [rsp+68h] [rbp+17h] BYREF
  __int128 v15; // [rsp+78h] [rbp+27h]
  __int128 v16; // [rsp+88h] [rbp+37h]

  result = 0LL;
  *(_QWORD *)&v16 = 0LL;
  DWORD2(v16) = 0;
  v11[1] = 0;
  v14 = 0LL;
  v15 = 0LL;
  UnicodeString = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      Atom = RtlpAllocateAtom(524LL);
      if ( Atom )
      {
        v11[0] = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_7;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)v11, (const void **)&UnicodeString);
          if ( UnicodeString.Buffer )
            RtlpSysVolFree((__int64)UnicodeString.Buffer);
        }
        else
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, *((const wchar_t **)&RtlpRegistryPaths + v8));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_7:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, a2);
            if ( appended >= 0 )
            {
              LODWORD(v14) = 48;
              *(_QWORD *)&v15 = v11;
              *((_QWORD *)&v14 + 1) = 0LL;
              DWORD2(v15) = 576;
              v16 = 0LL;
              if ( a3 )
                v10 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v10 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v10;
            }
          }
        }
        RtlpSysVolFree(Atom);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
