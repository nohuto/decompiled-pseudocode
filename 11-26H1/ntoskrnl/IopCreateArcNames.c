/*
 * XREFs of IopCreateArcNames @ 0x140CC25A0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140509FCC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  const char *v1; // r9
  __int64 v3; // rax
  size_t v4; // rdi
  _KTHREAD_WPS_FEEDBACK *Pool2; // rax
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-B8h] BYREF
  STRING v8; // [rsp+30h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(const char **)(a1 + 192);
  DestinationString = 0LL;
  v8 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", v1);
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.UserWaitTime, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(
    (PUNICODE_STRING)((char *)&KiSystemServiceTraceCallbackLock.116 + 4),
    &DestinationString,
    1u);
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v3) );
  v4 = v3 + 1;
  Pool2 = (_KTHREAD_WPS_FEEDBACK *)ExAllocatePool2(256LL, v3 + 1, 0x344E6F49u);
  PspSiloMonitorLock.WpsFeedback = Pool2;
  if ( Pool2 )
    memmove(Pool2, *(const void **)(a1 + 184), v4);
  RtlInitAnsiString(&v8, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
