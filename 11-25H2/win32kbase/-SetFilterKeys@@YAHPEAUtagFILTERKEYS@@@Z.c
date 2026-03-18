/*
 * XREFs of ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401C13C0
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401C14FC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall SetFilterKeys(struct tagFILTERKEYS *a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  unsigned __int16 v7[40]; // [rsp+20h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 1));
  v2 = WriteRegStringValue(0xFu, L"Flags", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 2));
  v3 = WriteRegStringValue(0xFu, L"DelayBeforeAcceptance", v7) & v2;
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 3));
  v4 = WriteRegStringValue(0xFu, L"AutoRepeatDelay", v7) & v3;
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 4));
  v5 = WriteRegStringValue(0xFu, L"AutoRepeatRate", v7) & v4;
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 5));
  return v5 & (unsigned int)WriteRegStringValue(0xFu, L"BounceTime", v7);
}
