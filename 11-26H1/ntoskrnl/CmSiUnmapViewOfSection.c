/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1404D0360
 * Callers:
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
