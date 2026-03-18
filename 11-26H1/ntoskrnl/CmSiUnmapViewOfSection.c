/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1404D6B90
 * Callers:
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x140723930 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
