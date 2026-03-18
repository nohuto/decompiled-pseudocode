/*
 * XREFs of BcpDisplayProgressModernized @ 0x14071774C
 * Callers:
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     BcpConvertProgressToString @ 0x140716630 (BcpConvertProgressToString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140716B84 (BcpDisplayCriticalStringCentered.c)
 *     BcpPrintSpaces @ 0x140717CB8 (BcpPrintSpaces.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayProgressModernized(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  NTSTATUS appended; // ebx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v6; // rdx
  _LIST_ENTRY *p_FirstArgument; // rdx
  unsigned int v8; // r8d
  int v10; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING Source; // [rsp+48h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-18h] BYREF

  v3 = 84LL * a2;
  v10 = 0;
  appended = BcpPrintSpaces(
               *(_DWORD *)&stru_140E3E928.Timer.Processor,
               *(_DWORD *)((char *)&unk_140E0F020 + v3 + 32) + *(_DWORD *)((char *)&unk_140E0F020 + v3 + 16),
               *(_DWORD *)((char *)&unk_140E0F020 + v3 + 16)
             + *(_DWORD *)((char *)&unk_140E0F020 + v3 + 32)
             + *(_DWORD *)((char *)&unk_140E0F020 + v3 + 24),
               *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20],
               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 24LL) + 40LL),
               (__int64)&v10);
  if ( appended >= 0 )
  {
    *(_QWORD *)&Source.Length = 0x80000LL;
    Source.Buffer = (wchar_t *)&v13;
    BcpConvertProgressToString(a1, (__int64)&Source);
    v6 = ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)((char *)&stru_140E3E928.116 + 4);
    *(_QWORD *)&Destination.Length = 0LL;
    Destination.MaximumLength = *(_WORD *)&stru_140E3E928.WaitBlockFill11[16];
    Destination.Buffer = (wchar_t *)stru_140E3E928.WaitBlock[0].WaitListEntry.Blink;
    if ( a1 != 1 )
      v6 = &stru_140E3E928.152;
    appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)v6);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L" ");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, &Source);
        if ( appended >= 0 )
        {
          p_FirstArgument = (_LIST_ENTRY *)&stru_140E3E928.FirstArgument;
          if ( a1 != 1 )
            p_FirstArgument = &stru_140E3E928.ApcState.ApcListHead[1];
          appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)p_FirstArgument);
          if ( appended >= 0 )
            BcpDisplayCriticalStringCentered(&Destination.Length, *(_DWORD *)((char *)&unk_140E0F020 + v3 + 8), v8, a2);
        }
      }
    }
  }
  return (unsigned int)appended;
}
