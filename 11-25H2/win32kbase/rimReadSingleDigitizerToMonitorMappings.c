/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x140156378
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E534C (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     wcsncpycch @ 0x14009ECB4 (wcsncpycch.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr @ 0x1401A2CB8 (wcsstr.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
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
  __int64 v10; // rdx
  __int64 v11; // rdx
  wchar_t *v12; // rax
  _UNKNOWN **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  bool v16; // di
  bool v17; // si
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int16 v22; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+60h] [rbp-A0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) < 0 )
  {
    v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v13 = &WPP_RECORDER_INITIALIZED;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v10) + 19336);
      v22 = 15;
      goto LABEL_41;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 12) < 0 )
    {
      v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v13 = &WPP_RECORDER_INITIALIZED;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 19336);
        v22 = 14;
        goto LABEL_41;
      }
    }
    else
    {
      v12 = wcsstr(DestinationString.Buffer, L"?");
      if ( v12 )
        wcsncpycch(v12, (__int64)L"\\", 1);
      LODWORD(v13) = ZwQueryValueKey(
                       a2,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       Length,
                       &Length);
      if ( (int)v13 >= 0 )
      {
        if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
        {
          LODWORD(v13) = RtlStringCchCopyW((char *)a7, 128LL, KeyValueInformation + 12);
          if ( (int)v13 < 0 )
          {
            v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v13 = &WPP_RECORDER_INITIALIZED;
            v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v15) + 19336);
              v22 = 12;
LABEL_41:
              LOBYTE(v19) = v17;
              LOBYTE(v18) = v16;
              LODWORD(v13) = WPP_RECORDER_AND_TRACE_SF_(
                               *((_QWORD *)WPP_GLOBAL_Control + 3),
                               v18,
                               v19,
                               v20,
                               3,
                               1,
                               v22,
                               (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
            }
          }
        }
        else
        {
          v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v13 = &WPP_RECORDER_INITIALIZED;
          v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v14) + 19336);
            v22 = 13;
            goto LABEL_41;
          }
        }
      }
    }
  }
  return (int)v13;
}
