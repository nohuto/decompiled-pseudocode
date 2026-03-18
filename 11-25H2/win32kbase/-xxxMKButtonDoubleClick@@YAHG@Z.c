/*
 * XREFs of ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F94A0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F9450 (-xxxMKButtonClick@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonDoubleClick(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  xxxMKButtonClick(0LL, a2);
  xxxMKButtonClick(0LL, v2);
  return 0LL;
}
