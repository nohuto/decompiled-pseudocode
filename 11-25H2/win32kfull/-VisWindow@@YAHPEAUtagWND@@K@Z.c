/*
 * XREFs of ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004F6C8
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall VisWindow(struct tagWND *a1)
{
  BOOL v1; // eax
  int v2; // r9d
  unsigned int v3; // ecx

  v1 = IsTopLevelWindow((__int64)a1);
  v3 = 0;
  if ( v1 )
    return (v2 & 0x30000000) == 0x10000000;
  return v3;
}
