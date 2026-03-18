/*
 * XREFs of MmUnmapViewOfSection @ 0x1409C3890
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0LL, 0LL);
}
