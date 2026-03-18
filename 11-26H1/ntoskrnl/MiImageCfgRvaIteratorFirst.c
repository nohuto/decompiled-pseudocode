/*
 * XREFs of MiImageCfgRvaIteratorFirst @ 0x140A236F0
 * Callers:
 *     <none>
 * Callees:
 *     MiImageCfgRvaIteratorNext @ 0x140A23720 (MiImageCfgRvaIteratorNext.c)
 */

__int64 __fastcall MiImageCfgRvaIteratorFirst(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 64);
  return MiImageCfgRvaIteratorNext();
}
