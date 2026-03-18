/*
 * XREFs of IopGetBootLayers @ 0x140CBD398
 * Callers:
 *     IoGetBootLayers @ 0x140793D20 (IoGetBootLayers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetBootLayers(_QWORD *a1)
{
  *a1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 4392LL);
  return 0LL;
}
