/*
 * XREFs of ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x1401F8BEC
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(__int64 a1, _BYTE *a2)
{
  return *(_BYTE *)(W32GetUserSessionState(a1, a2) + 20886) == *a2;
}
