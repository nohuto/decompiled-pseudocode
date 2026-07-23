/*
 * XREFs of BcpDisplayErrorInformationModernized @ 0x14071BE90
 * Callers:
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     BcpConvertBugDataToString @ 0x14071B290 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x14071B874 (BcpDisplayCriticalStringCentered.c)
 *     BcpSanitizeDriverName @ 0x14071CA58 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  int Blink; // [rsp+40h] [rbp-C0h]
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
  Flink = WheapPfaLock.ThreadListEntry.Flink;
  *(_QWORD *)&v32[1] = 0LL;
  *(_QWORD *)&Destination.Length = 0x4000000LL;
  *(_DWORD *)(&v33.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  v11 = (int *)((char *)&unk_140E0F0A0 + 84 * a1);
  Blink = (int)WheapPfaLock.ThreadListEntry.Blink;
  v28 = (int)WheapPfaLock.ThreadListEntry.Blink;
  Source.MaximumLength = 18;
  Source.Buffer = v36;
  Destination.Buffer = (wchar_t *)stru_140E3EAA8.WaitBlock[0].WaitListEntry.Flink;
  if ( RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&stru_140E3EAA8.WaitStatus) >= 0
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
            v31.MaximumLength = *(_WORD *)&stru_140E3EAA8.WaitBlockFill11[32],
            v31.Buffer = (wchar_t *)stru_140E3EAA8.WaitBlock[0].Thread,
            RtlAppendUnicodeStringToString(&v31, (PCUNICODE_STRING)&stru_140E3EAA8.ApcStateFill[32]) >= 0)
        && RtlAppendUnicodeToString(&v31, L" ") >= 0
        && RtlAppendUnicodeStringToString(&v31, &v33) >= 0 )
      {
        v17 = v11[1];
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x1000000u;
        BcpDisplayCriticalStringCentered(&Destination.Length, v17, v12, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)Flink, LODWORD(WheapPfaLock.ThreadListEntry.Blink), 0LL);
          BcpDisplayCriticalStringCentered(&v31.Length, v11[1], v18, a1);
        }
        v19 = (unsigned int)(Blink + v11[5] + v11[7] - LODWORD(WheapPfaLock.ThreadListEntry.Blink));
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x1000000u;
        BcpSetCursorPosition((unsigned int)Flink, v19, 0LL);
        BcpDisplayCriticalStringCentered(&Destination.Length, v11[1], v20, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)Flink, LODWORD(WheapPfaLock.ThreadListEntry.Blink), 0LL);
          BcpDisplayCriticalStringCentered(&v31.Length, v11[1], v21, a1);
        }
        Flink = WheapPfaLock.ThreadListEntry.Flink;
        v28 = (int)WheapPfaLock.ThreadListEntry.Blink;
        memset(v32, 0, 12);
        BcpSetCursorPosition(0LL, 0LL, &v32[2]);
        v22 = 0LL;
        v24 = (unsigned int)(v23 + 4);
        do
        {
          BcpConvertBugDataToString(*a3, (__int64)&v6[v22 + 2]);
          if ( WheapPfaLock.AbWaitEntryCount || (a6 & 8) != 0 && a2 == 317 )
          {
            BcpDisplayCriticalString(&v6[v22 + 2].Length, *v11, v25, a1);
            BcpSetCursorPosition(0LL, LODWORD(WheapPfaLock.ThreadListEntry.Blink), 0LL);
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
