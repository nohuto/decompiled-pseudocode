/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18020A440
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180163570 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800795B8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     BreakOnUnexpectedErrors @ 0x18020A4E4 (BreakOnUnexpectedErrors.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  unsigned __int16 v2[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  StringCchPrintfW(v2, 256LL, L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1, L"batch processing error");
  DbgPrintEx(0x65u, 0, "%S\n", v2);
  if ( (unsigned __int8)BreakOnUnexpectedErrors() )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xAA,
      (int)"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
      (const char *)0x8007029CLL);
}
