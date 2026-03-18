/*
 * XREFs of ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x14021240C
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 v3; // bl

  v3 = *a2;
  return *(_BYTE *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 20918) == v3;
}
