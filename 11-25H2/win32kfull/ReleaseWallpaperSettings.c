/*
 * XREFs of ReleaseWallpaperSettings @ 0x140225860
 * Callers:
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14012F8D4 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWallpaperSettings(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*a1)-- == 1 )
  {
    Win32FreePool(a1);
    return 1LL;
  }
  return result;
}
