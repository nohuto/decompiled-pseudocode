/*
 * XREFs of KiBugCheckProgress @ 0x1405E7630
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     KiBugCheckConvertProgressValueToUnicodeString @ 0x1405E7484 (KiBugCheckConvertProgressValueToUnicodeString.c)
 *     KiHeadlessDisplayString @ 0x1405E857C (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  char *v10; // [rsp+40h] [rbp-20h]
  char v11; // [rsp+48h] [rbp-18h] BYREF

  v9 = 0x80000LL;
  v8 = 0LL;
  v2 = IopAutoReboot != 0;
  v10 = &v11;
  v7 = 0LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) != 0 )
  {
    LOBYTE(v3) = v2;
    BgpFwDisplayBugCheckProgressUpdate(a1, &v7, v3);
  }
  BgpFwReleaseLock();
  if ( a1 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v7 && *((_QWORD *)&v7 + 1) && v8 )
    {
      KiHeadlessDisplayString(*(_QWORD *)(v7 + 8), *(unsigned __int16 *)v7);
      KiHeadlessDisplayString(L" ", 4LL);
      KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v7 + 1));
      KiHeadlessDisplayString(v10, (unsigned __int16)v9);
      v4 = *v8;
      v5 = (const wchar_t *)*((_QWORD *)v8 + 1);
    }
    else
    {
      KiBugCheckConvertProgressValueToUnicodeString(a1, (__int64)&v9);
      KiHeadlessDisplayString(v10, (unsigned __int16)v9);
      v4 = 4LL;
      v5 = L"%";
    }
    KiHeadlessDisplayString(v5, v4);
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
