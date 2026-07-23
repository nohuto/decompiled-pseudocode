/*
 * XREFs of RtlpHpQueryGCTimerInterval @ 0x1800CFCD4
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

__int64 __fastcall RtlpHpQueryGCTimerInterval(__int64 a1)
{
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a1 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0LL, &Handle) >= 0 )
      RtlQueryImageFileKeyOption(Handle, (wchar_t *)L"GCInterval", 4, 0LL);
    if ( Handle )
      NtClose(Handle);
  }
  return 1000LL;
}
