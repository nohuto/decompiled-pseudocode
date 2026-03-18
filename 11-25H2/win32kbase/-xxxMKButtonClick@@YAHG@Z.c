/*
 * XREFs of ?xxxMKButtonClick@@YAHG@Z @ 0x1401F9450
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F94A0 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 * Callees:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F94C0 (-xxxMKButtonSetState@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonClick(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66800) & 0x2000) == 0 )
  {
    xxxMKButtonSetState(1u);
    xxxMKButtonSetState(0);
    xxxMKButtonSetState(1u);
  }
  return 0LL;
}
