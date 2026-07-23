/*
 * XREFs of MmUnmapViewOfSection @ 0x140994870
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0LL, 0LL);
}
