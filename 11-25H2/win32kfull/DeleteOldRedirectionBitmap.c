/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x14005DBBC
 * Callers:
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x14005DC14 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x14005DD28 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
