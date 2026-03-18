/*
 * XREFs of ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004C50C
 * Callers:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall VisWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // eax
  int v3; // r9d
  unsigned int v4; // ecx

  v2 = IsTopLevelWindow(a1, a2);
  v4 = 0;
  if ( v2 )
    return (v3 & 0x30000000) == 0x10000000;
  return v4;
}
