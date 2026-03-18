/*
 * XREFs of ?xxxMKButtonClick@@YAHG@Z @ 0x140212C50
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x140212CA0 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 * Callees:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonClick(int a1, int a2, int a3)
{
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 66792) & 0x2000) == 0 )
  {
    xxxMKButtonSetState(1u);
    xxxMKButtonSetState(0);
    xxxMKButtonSetState(1u);
  }
  return 0LL;
}
