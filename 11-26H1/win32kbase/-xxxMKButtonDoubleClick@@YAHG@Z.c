/*
 * XREFs of ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x140212CA0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x140212C50 (-xxxMKButtonClick@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonDoubleClick(__int64 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // r8d

  xxxMKButtonClick(0, a2, a3);
  xxxMKButtonClick(0, v3, v4);
  return 0LL;
}
