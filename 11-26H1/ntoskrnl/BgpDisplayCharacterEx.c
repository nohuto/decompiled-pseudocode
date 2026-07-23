/*
 * XREFs of BgpDisplayCharacterEx @ 0x14071A980
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14071B424 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x14071B874 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayProgress @ 0x14071C224 (BcpDisplayProgress.c)
 *     BcpPrintSpaces @ 0x14071C9A8 (BcpPrintSpaces.c)
 *     BgpConsoleDisplayCharacter @ 0x140C55E00 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140C55F18 (BgpConsoleDisplayCharacterEx.c)
 *     BgpConsoleDrawCursor @ 0x140C56278 (BgpConsoleDrawCursor.c)
 *     BgpConsoleScrollScreen @ 0x140C56694 (BgpConsoleScrollScreen.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpTxtAdjustStaticRegion @ 0x14071B1BC (BgpTxtAdjustStaticRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterEx(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]

  v17 = 0;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) == 0 )
    return 3221225473LL;
  v12 = a2[3];
  v14[0] = a5;
  v14[1] = a6;
  v16 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  a9 = __PAIR64__(a4, a3);
  v15 = v13;
  result = BgpTxtAdjustStaticRegion(v12, &a9, v14);
  if ( (int)result >= 0 )
    return BgpTxtDisplayCharacter(a2[3], a1, 0, a7, a8);
  return result;
}
