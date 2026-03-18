/*
 * XREFs of ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1402AD2B4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetSoundSentry(struct _UNICODE_STRING *a1, struct tagSOUNDSENTRYW *a2)
{
  int v4; // ebx
  int v5; // edi
  unsigned __int16 v7[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 19LL, L"Flags", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 2));
  v5 = v4 & FastWriteProfileStringW(a1, 19LL, L"TextEffect", v7);
  RtlStringCchPrintfW(v7, 40LL, L"%d", *((unsigned int *)a2 + 8));
  return v5 & (unsigned int)FastWriteProfileStringW(a1, 19LL, L"WindowsEffect", v7);
}
