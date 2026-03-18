/*
 * XREFs of BcpDisplayErrorInformationModernized @ 0x1407171A0
 * Callers:
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     BcpConvertBugDataToString @ 0x1407165A0 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalString @ 0x14071681C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140716B84 (BcpDisplayCriticalStringCentered.c)
 *     BcpSanitizeDriverName @ 0x140717D68 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayErrorInformationModernized(
        int a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4,
        const UNICODE_STRING *a5,
        char a6)
{
  const UNICODE_STRING *v6; // r14
  int *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int v14; // eax
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // r8
  struct _LIST_ENTRY *Flink; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING v31; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v32[4]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v33; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  const UNICODE_STRING *v35; // [rsp+88h] [rbp-78h]
  _WORD v36[16]; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a5;
  v35 = a5;
  v31 = 0LL;
  Flink = WheapPfaLock.SchedulerApc.ApcListEntry.Flink;
  *(_QWORD *)&v32[1] = 0LL;
  *(_QWORD *)&Destination.Length = 0x4000000LL;
  *(_DWORD *)(&v33.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  v11 = (int *)((char *)&unk_140E0F020 + 84 * a1);
  v30 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v28 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  Source.MaximumLength = 18;
  Source.Buffer = v36;
  Destination.Buffer = (wchar_t *)stru_140E3E928.WaitBlock[0].WaitListEntry.Flink;
  if ( RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&stru_140E3E928.WaitStatus) >= 0
    && RtlAppendUnicodeToString(&Destination, L" ") >= 0
    && RtlAppendUnicodeStringToString(&Destination, a5 + 1) >= 0 )
  {
    v12 = a2;
    LODWORD(v13) = 0;
    v14 = a2;
    do
    {
      v14 >>= 4;
      v13 = (unsigned int)(v13 + 1);
    }
    while ( v14 );
    if ( 2 * (unsigned __int64)(unsigned int)(v13 + 1) > 0x12 )
      goto LABEL_15;
    v15 = &v36[v13];
    *v15 = 0;
    for ( Source.Length = 2 * v13; (_DWORD)v13; LODWORD(v13) = v13 - 1 )
    {
      v16 = v12 & 0xF;
      v12 >>= 4;
      *--v15 = a0123456789abcd[v16];
    }
    if ( RtlAppendUnicodeToString(&Destination, L" (0x") >= 0
      && RtlAppendUnicodeStringToString(&Destination, &Source) >= 0
      && RtlAppendUnicodeToString(&Destination, L")") >= 0 )
    {
LABEL_15:
      if ( !a4
        || (*(_DWORD *)&v33.Length = 0x800000,
            v33.Buffer = (wchar_t *)&v37,
            BcpSanitizeDriverName(a4, &v33),
            v31.MaximumLength = *(_WORD *)&stru_140E3E928.WaitBlockFill11[32],
            v31.Buffer = (wchar_t *)stru_140E3E928.WaitBlock[0].Thread,
            RtlAppendUnicodeStringToString(&v31, (PCUNICODE_STRING)&stru_140E3E928.ApcStateFill[32]) >= 0)
        && RtlAppendUnicodeToString(&v31, L" ") >= 0
        && RtlAppendUnicodeStringToString(&v31, &v33) >= 0 )
      {
        v17 = v11[1];
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x1000000u;
        BcpDisplayCriticalStringCentered(&Destination.Length, v17, v12, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)Flink, *(unsigned int *)&WheapPfaLock.SchedulerApcFill5[24], 0LL);
          BcpDisplayCriticalStringCentered(&v31.Length, v11[1], v18, a1);
        }
        v19 = (unsigned int)(v30 + v11[5] + v11[7] - *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24]);
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x1000000u;
        BcpSetCursorPosition((unsigned int)Flink, v19, 0LL);
        BcpDisplayCriticalStringCentered(&Destination.Length, v11[1], v20, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)Flink, *(unsigned int *)&WheapPfaLock.SchedulerApcFill5[24], 0LL);
          BcpDisplayCriticalStringCentered(&v31.Length, v11[1], v21, a1);
        }
        Flink = WheapPfaLock.SchedulerApc.ApcListEntry.Flink;
        v28 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
        memset(v32, 0, 12);
        BcpSetCursorPosition(0LL, 0LL, &v32[2]);
        v22 = 0LL;
        v24 = (unsigned int)(v23 + 4);
        do
        {
          BcpConvertBugDataToString(*a3, (__int64)&v6[v22 + 2]);
          if ( WheapPfaLock.SchedulerApcFill3[40] || (a6 & 8) != 0 && a2 == 317 )
          {
            BcpDisplayCriticalString(&v6[v22 + 2].Length, *v11, v25, a1);
            BcpSetCursorPosition(0LL, *(unsigned int *)&WheapPfaLock.SchedulerApcFill5[24], 0LL);
          }
          v6 = v35;
          ++v22;
          ++a3;
          --v24;
        }
        while ( v24 );
      }
    }
  }
  return BcpSetCursorPosition((unsigned int)Flink, HIDWORD(Flink), &v28);
}
