/*
 * XREFs of MiCloneTreeActive @ 0x140464760
 * Callers:
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCloneTreeActive(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) != 0LL;
}
