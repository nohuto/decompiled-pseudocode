/*
 * XREFs of EtwpGetUmLoggerInfoFromContext @ 0x180064CA4
 * Callers:
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180065274 (EtwpQueryUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetUmLoggerInfoFromContext(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 304);
  *(_DWORD *)(a1 + 68) = *(_QWORD *)(a2 + 328) / EtwpOneSecond;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 192) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 368);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 372);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 352);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 16);
  if ( a3 )
    *(_DWORD *)(a1 + 164) = *a3;
  result = *(unsigned __int16 *)(a2 + 20);
  *(_WORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 11) = 1;
  return result;
}
