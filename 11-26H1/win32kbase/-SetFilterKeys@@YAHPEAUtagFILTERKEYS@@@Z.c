/*
 * XREFs of ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401E9F98
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall SetFilterKeys(struct tagFILTERKEYS *a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  unsigned __int16 v7[40]; // [rsp+20h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 1));
  v2 = WriteRegStringValue(0xFu, L"Flags", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 2));
  v3 = v2 & WriteRegStringValue(0xFu, L"DelayBeforeAcceptance", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 3));
  v4 = v3 & WriteRegStringValue(0xFu, L"AutoRepeatDelay", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 4));
  v5 = v4 & WriteRegStringValue(0xFu, L"AutoRepeatRate", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a1 + 5));
  return v5 & (unsigned int)WriteRegStringValue(0xFu, L"BounceTime", v7);
}
