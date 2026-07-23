/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x14099B3C4
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     MiGetControlAreaImageStartBit @ 0x1404C7CD0 (MiGetControlAreaImageStartBit.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14099A680 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( MiGetControlAreaImageStartBit(a1) == 0xFFFFFFFFLL
    || (*(_DWORD *)(v2 + 56) & 0x8000) != 0 && (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    return 0LL;
  }
  else
  {
    return MiUpdateCfgSystemWideBitmap((__int64 *)v2, v1, v3);
  }
}
