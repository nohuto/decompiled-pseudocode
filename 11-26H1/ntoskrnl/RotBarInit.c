/*
 * XREFs of RotBarInit @ 0x1405C7850
 * Callers:
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 RotBarInit()
{
  char *v0; // rax

  v0 = (char *)pbih;
  PltRotBarStatus = 1;
  PaletteNum = 0;
  AnimBarPos = 0;
  *((_DWORD *)pbih + 1) = 1;
  *((_DWORD *)v0 + 2) = 1;
  *((_DWORD *)v0 + 6) = 2834;
  *(_QWORD *)(v0 + 28) = 2834LL;
  *(_DWORD *)v0 = 40;
  *(_QWORD *)(v0 + 12) = 262145LL;
  *((_DWORD *)v0 + 5) = 4;
  *((_DWORD *)v0 + 9) = 0;
  VidScreenToBufferBlt(&Square1, 0LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&Square2, 8LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&Square3, 16LL, 0LL, 6LL, 9, 4);
  return VidSolidColorFill(0LL, 0LL, 22LL, 9LL, 0);
}
