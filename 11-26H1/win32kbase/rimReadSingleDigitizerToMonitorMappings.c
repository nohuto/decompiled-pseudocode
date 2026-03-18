/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1400E47F0
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x140205D48 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     wcsstr @ 0x1401C7178 (wcsstr.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

int __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        char *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7)
{
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  wchar_t *v14; // rax
  int v15; // r9d
  const WCHAR *v16; // rdx
  wchar_t v17; // cx
  _UNKNOWN **v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  char v23; // di
  bool v24; // si
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  __int16 v29; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+60h] [rbp-A0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v23 = 0;
    }
    v18 = &WPP_RECORDER_INITIALIZED;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11) + 19368);
      v29 = 15;
      goto LABEL_39;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 12) < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v23 = 0;
      }
      v18 = &WPP_RECORDER_INITIALIZED;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13) + 19368);
        v29 = 14;
        goto LABEL_39;
      }
    }
    else
    {
      v14 = wcsstr(DestinationString.Buffer, L"?");
      if ( v14 )
      {
        v15 = 1;
        v16 = L"\\";
        do
        {
          v17 = *v16++;
          *v14++ = v17;
          if ( !v17 )
            break;
          --v15;
        }
        while ( v15 );
      }
      LODWORD(v18) = ZwQueryValueKey(
                       a2,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       Length,
                       &Length);
      if ( (int)v18 >= 0 )
      {
        if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
        {
          LODWORD(v18) = RtlStringCchCopyW((char *)a7, 128LL, KeyValueInformation + 12);
          if ( (int)v18 < 0 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v23 = 0;
            }
            v18 = &WPP_RECORDER_INITIALIZED;
            v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22) + 19368);
              v29 = 12;
LABEL_39:
              LOBYTE(v26) = v24;
              LOBYTE(v25) = v23;
              LODWORD(v18) = WPP_RECORDER_AND_TRACE_SF_(
                               *((_QWORD *)WPP_GLOBAL_Control + 3),
                               v25,
                               v26,
                               v27,
                               3,
                               1,
                               v29,
                               (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
            }
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v23 = 0;
          }
          v18 = &WPP_RECORDER_INITIALIZED;
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20) + 19368);
            v29 = 13;
            goto LABEL_39;
          }
        }
      }
    }
  }
  return (int)v18;
}
